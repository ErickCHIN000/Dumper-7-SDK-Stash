#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IGripTargetInterface.IGripTargetInterface_C
class IIGripTargetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIGripTargetInterface_C* GetDefaultObj();

	void FindBestCharacterUpAxisDirection(class AIcarusPlayerCharacter* Character, bool ForLeftHand, const struct FVector& TargetLocation, bool* Success, struct FVector* UpAxisDirection);
	void FindBestCharacterDirection(class AIcarusPlayerCharacter* Character, bool ForLeftHand, const struct FVector& TargetLocation, bool* Success, struct FVector* BestDirection);
	void FindBestCharacterLocation(class AIcarusPlayerCharacter* Character, bool ForLeftHand, const struct FVector& TargetLocation, bool* Success, struct FVector* BestLocation);
	void FindBestAnimation(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool* Success, class UAnimMontage** GripMontage);
	void FindBestGripTransform(bool ForLeftHand, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, struct FTransform* BestTransform);
};

}


