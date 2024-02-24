#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass ForceCharacterForward.ForceCharacterForward_C
class UForceCharacterForward_C : public UAnimNotifyState
{
public:
	float                                        Speed;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UForceCharacterForward_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class UCurveFloat* Curve, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


