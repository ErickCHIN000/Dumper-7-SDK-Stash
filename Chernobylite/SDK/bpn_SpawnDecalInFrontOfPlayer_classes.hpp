#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass bpn_SpawnDecalInFrontOfPlayer.bpn_SpawnDecalInFrontOfPlayer_C
class Ubpn_SpawnDecalInFrontOfPlayer_C : public UAnimNotify
{
public:
	bool                                         IsPuke;                                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubpn_SpawnDecalInFrontOfPlayer_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float NewLocalVar_0, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class UMaterialInterface* K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADecalActor* CallFunc_FinishSpawningActor_ReturnValue);
};

}


