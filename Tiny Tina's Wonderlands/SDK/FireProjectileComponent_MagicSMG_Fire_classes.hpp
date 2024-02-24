#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x994 - 0x988)
// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Fire.FireProjectileComponent_MagicSMG_Fire_C
class UFireProjectileComponent_MagicSMG_Fire_C : public UFireProjectileComponent_MagicSMG_Base_PerShot_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x988(0x8)(Transient, DuplicateTransient)
	int32                                        FireboltBurstCount;                                // 0x990(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFireProjectileComponent_MagicSMG_Fire_C* GetDefaultObj();

	void DoSpecialBarrelBehavior();
	void ExecuteUbergraph_FireProjectileComponent_MagicSMG_Fire(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value1, float CallFunc_BreakGbxAttributeFloat_BaseValue1, int32 CallFunc_BreakGbxAttributeInteger_Value, int32 CallFunc_BreakGbxAttributeInteger_BaseValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


