// Fill out your copyright notice in the Description page of Project Settings.

#include "..\..\Public\Ghost\Ghost.h"
#include "GameFramework/Actor.h"
#include "Entity/EntityCharacter.h"
#include "Corner/CornerActor.h"
#include "AIController.h"



// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ceci est un message!"));


// Sets default values
AGhostCharacter::AGhostCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGhostCharacter::BeginPlay()
{
	Super::BeginPlay();

    // Initialisation
    targetLocation = FVector::ZeroVector;

    this->OnActorBeginOverlap.AddDynamic(this, &AGhostCharacter::OnCatchOverlapBegin);

    if (AAIController* aiController = Cast<AAIController>(Controller))
    {
        GhostAI = aiController;
    }

    //GhostAI->MoveToLocation(PacManReference->GetActorLocation());
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AGhostCharacter::OnCatchOverlapBegin(AActor* MyActor, AActor* OtherActor)
{
    // Si je collisione avec un coin
    if (OtherActor && OtherActor->IsA(ACornerActor::StaticClass()))
    {
        // TODO : trouve ou est pacman et va vers lui
        //GhostAI->MoveToLocation(PacManReference->GetActorLocation());

        // Trouve ou est pacman et va vers lui

        // Autres comportements

        //

        //
    }
}

// Called to bind functionality to input
void AGhostCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}


/*
Ghosts Behaviour

Blinky (ROUGE)
Pour simplifier le comportement de Blinky, tu peux diviser son comportement en deux phases principales : Chase et Scatter.

1. Chase Mode (Mode poursuite)
Comportement : Blinky suit directement Pac-Man en ciblant sa position actuelle.
Cible : Le carreau où se trouve Pac-Man.
Vitesse : Sa vitesse peut être normale ou augmentée après un certain nombre de points collectés par Pac-Man (à définir selon ton niveau).
Conditions de transition : Ce mode est activé presque tout le temps, sauf en début de niveau ou lorsque le mode Scatter est forcé.

2. Scatter Mode (Mode dispersion)
Comportement standard : Normalement, Blinky se dirige vers un coin fixe du labyrinthe, mais dans son cas particulier, il continue de poursuivre Pac-Man, même en mode Scatter (comme en mode Chase).
Cible : Pac-Man, comme en mode Chase.
Conditions de transition : Blinky change de direction à intervalles réguliers quand il passe du mode Chase au mode Scatter, mais il continue de suivre Pac-Man.

3. Cruise Elroy Mode (Mode accéléré)
Déclenchement : Lorsque Pac-Man a mangé un certain nombre de points (à définir en fonction du niveau), Blinky accélère de 5 % et reste en mode Chase, même lorsqu’il devrait être en mode Scatter.
Comportement : Même comportement que dans Chase mode, mais avec une vitesse augmentée.

*****************************************************************************************************************************************************************************************************************************************************************************

Pinky (ROSE)
Pour simplifier le comportement de Pinky, voici une version plus concise de sa logique de mouvement en mode "Chase" :

Sortie de la maison des fantômes : Dès que le jeu commence, Pinky quitte immédiatement la maison des fantômes et commence à chasser Pac-Man.
Cible principale : En mode "Chase", Pinky essaie de prédire où Pac-Man se dirigera. Il vise toujours une case située quatre cases devant Pac-Man dans la direction actuelle de ce dernier :

*****************************************************************************************************************************************************************************************************************************************************************************

Inky (BLEU)
Pour simplifier le comportement d'Inky, conservant son caractère imprévisible.

1. Comportement de base :
Inky commence dans la maison des fantômes et ne sort qu'après que Pac-Man a mangé 30 points.
Ensuite, Inky alterne entre deux comportements simples :
Chase (Poursuite) : Inky poursuit Pac-Man lorsque Blinky est proche de Pac-Man (par exemple, à moins de 5 tuiles).
Random (Aléatoire) : Si Blinky est loin, Inky se déplace de manière aléatoire dans le labyrinthe.

2. Détermination de la cible d'Inky :
Lorsque Inky est en mode "Poursuite" :
Sélectionne une tuile 2 cases devant Pac-Man, selon sa direction (haut, bas, gauche, droite).
Si Blinky est à moins de 5 tuiles de Pac-Man, Inky se dirige vers cette tuile.
Lorsque Inky est en mode "Aléatoire" :
Inky choisit une direction aléatoire parmi les directions possibles à chaque intersection.

*****************************************************************************************************************************************************************************************************************************************************************************

Clyde (ORANGE)
Le comportement de Clyde peut être simplifié en deux modes basés sur sa distance par rapport à Pac-Man :

Mode Chasse (plus de 8 cases de Pac-Man) :
Si Clyde est à plus de 8 cases de Pac-Man, il se comporte comme Blinky (le fantôme rouge) et cible directement la position actuelle de Pac-Man.

Mode Fuite (moins de 8 cases de Pac-Man) :
Si Clyde est à moins de 8 cases de Pac-Man, il change de direction et se dirige vers une position fixe dans le coin inférieur gauche du labyrinthe.

Résumé du comportement :
Clyde poursuit Pac-Man lorsqu'il est éloigné (plus de 8 cases). Lorsqu'il s'approche trop près (moins de 8 cases), il "change d'avis" et retourne vers son coin.
Il alterne continuellement entre ces deux modes en fonction de la distance, ce qui donne l'impression qu'il hésite.
En codant cela, tu peux utiliser une fonction qui calcule la distance entre Clyde et Pac-Man à chaque frame, et en fonction de cette distance, changer sa cible de Pac-Man à la position du coin inférieur gauche.
*/