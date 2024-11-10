#include "Characters/KaoriAnimInstance.h"
#include "Characters/Kaori.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UKaoriAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Kaori = Cast<AKaori>(TryGetPawnOwner());
	if(Kaori != nullptr)
	{
		CharacterMovementComponent = Kaori->GetCharacterMovement();
	}
}

void UKaoriAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if(CharacterMovementComponent != nullptr)
	{
		GroudSpeed = UKismetMathLibrary::VSizeXY(CharacterMovementComponent->Velocity);
		IsFalling = CharacterMovementComponent->IsFalling();
	}
}