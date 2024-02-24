#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_OnRoll.Rune_OnRoll_C
class URune_OnRoll_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_16B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_OnRoll_C* GetDefaultObj();

	struct FTransform GetTransform_Bottom(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	struct FTransform GetTransform_Center(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	float GetDamage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void OnRoll();
	void ExecuteUbergraph_Rune_OnRoll(int32 EntryPoint, float CallFunc_GetDamage_ReturnValue, float CallFunc_GetChance_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetDamage_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_Center_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_RollSpecialEffect_Daggers_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_Center_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_Center_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_RollSpecialEffect_Lava_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ABP_RollSpecialEffect_StoneStun_C* CallFunc_FinishSpawningActor_ReturnValue_2);
};

}


