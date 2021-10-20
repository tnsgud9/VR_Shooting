

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "CameraRig.generated.h"

UCLASS()
class VR_PROJECT_API ACameraRig : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACameraRig();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	class USceneComponent* DefaultSceneRoot;
	UPROPERTY(EditAnywhere)
	class USceneComponent* VRCameraRoot;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;
	UPROPERTY(EditAnywhere)
	class UMotionControllerComponent* MotionControllerLeft;
	UPROPERTY(EditAnywhere)
	class UMotionControllerComponent* MotionControllerRight;

};
