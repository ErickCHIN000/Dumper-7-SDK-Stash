#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_OnDodge.Rune_OnDodge_C
class URune_OnDodge_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_248D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_OnDodge_C* GetDefaultObj();

	struct FTransform GetTransform(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	float GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void OnDodge();
	void ExecuteUbergraph_Rune_OnDodge(int32 EntryPoint, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetChance_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DodgeSpecialEffect_Fire_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_DodgeSpecialEffect_Blast_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ABP_DodgeSpecialEffect_Ice_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_DodgeSpecialEffect_Acid_C* CallFunc_FinishSpawningActor_ReturnValue_3);
};

}


