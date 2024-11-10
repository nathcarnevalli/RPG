#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "KaoriAnimInstance.generated.h"

class UCharacterMovementComponent;
class AKaori;

UCLASS()
class RPG__API UKaoriAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(BlueprintReadOnly, Category="Movement")
	float GroudSpeed;

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	AKaori* Kaori;

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	UCharacterMovementComponent* CharacterMovementComponent;

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	bool IsFalling = false;
};
