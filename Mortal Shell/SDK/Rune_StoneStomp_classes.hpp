#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x100 - 0xD9)
// BlueprintGeneratedClass Rune_StoneStomp.Rune_StoneStomp_C
class URune_StoneStomp_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_2543[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               ImpactLocation;                                    // 0xE8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ImpactRotation;                                    // 0xF4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URune_StoneStomp_C* GetDefaultObj();

	void GetImpactRotation(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void SpawnStoneStompSpecialEffect(float CallFunc_GetX_Value_ReturnValue, float CallFunc_GetX_Value_ReturnValue_1, float CallFunc_GetX_Value_ReturnValue_2, float CallFunc_GetX_Value_ReturnValue_3, bool K2Node_SwitchName_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_StoneStomp_SpecialEffect_Poison_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_StoneStomp_SpecialEffect_Knotted_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_StoneStomp_SpecialEffect_Fire_C* CallFunc_FinishSpawningActor_ReturnValue_2, class ABP_StoneStomp_SpecialEffect_Ice_C* CallFunc_FinishSpawningActor_ReturnValue_3);
	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Percentage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Disable();
	void Rune_Enable();
	void OnStoneStomp_Landed(const struct FVector& ImpactLocation);
	void OnStoneStomp_Unbind();
	void ExecuteUbergraph_Rune_StoneStomp(int32 EntryPoint, float CallFunc_GetX__Percentage_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetX__Percentage_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetX__Percentage_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& K2Node_CustomEvent_ImpactLocation);
};

}


