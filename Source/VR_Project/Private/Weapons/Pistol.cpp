


#include "Weapons/Pistol.h"

// Sets default values
APistol::APistol()
{
	UWorld* world = GetWorld();

 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	FirePos = CreateDefaultSubobject<USceneComponent>(TEXT("FirePos"));
	RootComponent = Gun;
	FirePos->SetRelativeLocation(FVector(0,25.5f,10.7f));

	
}

// Called when the game starts or when spawned
void APistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APistol::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"),IE_Pressed,this, &APistol::Fire);

}

void APistol::Fire()
{
	Gun->PlayAnimation(FireAnim,false);
}

