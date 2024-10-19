// Fill out your copyright notice in the Description page of Project Settings.

#include "Ghost\Ghost.h"
#include "Entity/EntityCharacter.h"
#include "Corner/CornerActor.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PacMan.h"


// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ceci est un message!"));


// Sets default values
AGhost::AGhost()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGhost::BeginPlay()
{
	Super::BeginPlay();
    /*

I.e: ExecuteTask(UBehaviorTreeComponent& OwnerComp,…)
UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();
MyBlackboard->ClearValue(Key.SelectedKeyName);
MyBlackboard->GetValueAsBool(Key.SelectedKeyName);
​​​​​​​MyBlackboard->SetValueAsBool(Key.SelectedKeyName, false);*/

    // Initialisation
    targetLocation = FVector::ZeroVector;

   
    if (ABaseAIController* aiController = Cast<ABaseAIController>(Controller))
    {
        GhostAI = aiController;
    }

    /*
    if (UseBlackboard(GhostBlackboard, BlackboardComponent))
    {
        RunBehaviorTree(GhostBehaviorTree);
    }*/
}

// Called every frame
void AGhost::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}



// Called to bind functionality to input
void AGhost::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AGhost::OnScatterMode()
{
    SetOnScatterMode(false);

    //targetLocation
    targetLocation = PacManReference->GetActorLocation();
    GhostAI->MoveToLocation(targetLocation,0, false);



}

void AGhost::OnFleeMode()
{
    
}

void AGhost::OnChaseMode()
{
}

void AGhost::SetOnScatterMode(bool isOnScatterMode)
{
    this->onScatterMode = isOnScatterMode;
}
void AGhost::SetOnFleeMode(bool isInFleeMode)
{
    this->inFleeMode = isInFleeMode;
}
void AGhost::SetOnChaseMode(bool isInChaseMode)
{
    this->inChaseMode = isInChaseMode;
}
void AGhost::SetIsDead(bool isDeadBln)
{
    this->isDeadMode = isDeadBln;
}

void AGhost::setModes(bool isOnScatterMode, bool isInFleeMode, bool isInChaseMode, bool isDeadBln) {

    SetOnScatterMode(isOnScatterMode);
    SetOnFleeMode(isInFleeMode);
    SetOnChaseMode(isInChaseMode);
    SetIsDead(isDeadBln);
}
void AGhost::setFleeMode(bool value)
{
    inFleeMode = value;
    //GhostAI->GetBlackboardComponent()->SetValueAsBool("inFleeMode",value);
    //set la valeur dans le blackboard
}

bool AGhost::getFleeMode()
{
    return inFleeMode;
}

void AGhost::setDeath(bool value)
{
    isDead = value;
    //GhostAI->setIsDead(value);
    //set la valeur dans le blackboard
}

bool AGhost::getIsDead()
{
    return isDead;
}




/*
* FLEE = RANDOM 6secondes -> 8secondes
* 
Ghosts Behaviour

Blinky (ROUGE)
Pour simplifier le comportement de Blinky, tu peux diviser son comportement en deux phases principales : Chase et Scatter.

1. Chase Mode (Mode poursuite)
Comportement : Blinky suit directement Pac-Man en ciblant sa position actuelle.
Cible : Le carreau o� se trouve Pac-Man.
Vitesse : Sa vitesse peut �tre normale ou augment�e apr�s un certain nombre de points collect�s par Pac-Man (� d�finir selon ton niveau).
Conditions de transition : Ce mode est activ� presque tout le temps, sauf en d�but de niveau ou lorsque le mode Scatter est forc�.

2. Scatter Mode (Mode dispersion)
Comportement standard : Normalement, Blinky se dirige vers un coin fixe du labyrinthe, mais dans son cas particulier, il continue de poursuivre Pac-Man, m�me en mode Scatter (comme en mode Chase).
Cible : Pac-Man, comme en mode Chase.
Conditions de transition : Blinky change de direction � intervalles r�guliers quand il passe du mode Chase au mode Scatter, mais il continue de suivre Pac-Man.

3. Cruise Elroy Mode (Mode acc�l�r�)
D�clenchement : Lorsque Pac-Man a mang� un certain nombre de points (� d�finir en fonction du niveau), Blinky acc�l�re de 5 % et reste en mode Chase, m�me lorsqu�il devrait �tre en mode Scatter.
Comportement : M�me comportement que dans Chase mode, mais avec une vitesse augment�e.

*****************************************************************************************************************************************************************************************************************************************************************************

Pinky (ROSE)
Pour simplifier le comportement de Pinky, voici une version plus concise de sa logique de mouvement en mode "Chase" :

Sortie de la maison des fantòmes : Des que le jeu commence, Pinky quitte immediatement la maison des fantomes et commence a chasser Pac-Man.
Cible principale : En mode "Chase", Pinky essaie de predire ou Pac-Man se dirigera. Il vise toujours une case situee quatre cases devant Pac-Man dans la direction actuelle de ce dernier

*****************************************************************************************************************************************************************************************************************************************************************************

Inky (BLEU)
Pour simplifier le comportement d'Inky, conservant son caract�re impr�visible.

1. Comportement de base :
Inky commence dans la maison des fant�mes et ne sort qu'apr�s que Pac-Man a mang� 30 points.
Ensuite, Inky alterne entre deux comportements simples :
Chase (Poursuite) : Inky poursuit Pac-Man lorsque Blinky est proche de Pac-Man (par exemple, � moins de 5 tuiles).
Random (Al�atoire) : Si Blinky est loin, Inky se d�place de mani�re al�atoire dans le labyrinthe.

2. D�termination de la cible d'Inky :
Lorsque Inky est en mode "Poursuite" :
S�lectionne une tuile 2 cases devant Pac-Man, selon sa direction (haut, bas, gauche, droite).
Si Blinky est � moins de 5 tuiles de Pac-Man, Inky se dirige vers cette tuile.
Lorsque Inky est en mode "Al�atoire" :
Inky choisit une direction al�atoire parmi les directions possibles � chaque intersection.

*****************************************************************************************************************************************************************************************************************************************************************************

Clyde (ORANGE)
Le comportement de Clyde peut �tre simplifi� en deux modes bas�s sur sa distance par rapport � Pac-Man :

Mode Chasse (plus de 8 cases de Pac-Man) :
Si Clyde est � plus de 8 cases de Pac-Man, il se comporte comme Blinky (le fant�me rouge) et cible directement la position actuelle de Pac-Man.

Mode Fuite (moins de 8 cases de Pac-Man) :
Si Clyde est � moins de 8 cases de Pac-Man, il change de direction et se dirige vers une position fixe dans le coin inf�rieur gauche du labyrinthe.

R�sum� du comportement :
Clyde poursuit Pac-Man lorsqu'il est �loign� (plus de 8 cases). Lorsqu'il s'approche trop pr�s (moins de 8 cases), il "change d'avis" et retourne vers son coin.
Il alterne continuellement entre ces deux modes en fonction de la distance, ce qui donne l'impression qu'il h�site.
En codant cela, tu peux utiliser une fonction qui calcule la distance entre Clyde et Pac-Man � chaque frame, et en fonction de cette distance, changer sa cible de Pac-Man � la position du coin inf�rieur gauche.
*/
