
#include "VR/CameraRig.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Weapons/Pistol.h"

// Sets default values
ACameraRig::ACameraRig()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Component Init
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	VRCameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRCameraRoot"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	MotionControllerLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionControllerLeft"));
	MotionControllerRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionControllerRight"));

	//Component dependency Setup
	RootComponent = DefaultSceneRoot;
	VRCameraRoot->SetupAttachment(DefaultSceneRoot);
	MotionControllerLeft->SetupAttachment(DefaultSceneRoot);
	MotionControllerRight->SetupAttachment(DefaultSceneRoot);
	Camera->SetupAttachment(VRCameraRoot);

	//Component Property Setup
	MotionControllerLeft->SetTrackingMotionSource(FName(TEXT("Left")));
	MotionControllerRight->SetTrackingMotionSource(FName(TEXT("Right")));
	
}

// Called when the game starts or when spawned
void ACameraRig::BeginPlay()
{
	Super::BeginPlay();
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
}

// Called every frame
void ACameraRig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACameraRig::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

