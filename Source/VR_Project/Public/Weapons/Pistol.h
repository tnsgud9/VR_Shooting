

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Pistol.generated.h"

UCLASS()
class VR_PROJECT_API APistol : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APistol();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Components
	UPROPERTY(EditAnywhere,Category=Gun)
	class USkeletalMeshComponent* Gun;
	UPROPERTY(VisibleAnywhere, Category=Gun)
	class USceneComponent* FirePos;
	UPROPERTY(EditAnywhere,Category=Gun)
	class UAnimationAsset* FireAnim;
	UPROPERTY(EditAnywhere, Category=Gun)
	class UActorComponent* Bullet;

	//Callback Functions
	void Fire();
};
