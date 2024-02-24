#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0xF4 - 0xD9)
// BlueprintGeneratedClass Rune_OnParry.Rune_OnParry_C
class URune_OnParry_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_784[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter_C*                      BaseChar;                                          // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health;                                            // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_OnParry_C* GetDefaultObj();

	void Parry_Special_5(float CallFunc_GetChance_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
	void Parry_Special_4(float CallFunc_GetChance_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
	void Parry_Special_3(float CallFunc_GetChance_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
	void Parry_Special_2(float CallFunc_GetChance_ReturnValue, float CallFunc_GetXValue_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Parry_SpecialEffect_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Parry_Special_1(float CallFunc_GetChance_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetXValue_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth);
	float GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void OnSuccessfulParry(class ABaseCharacter_C* ParriedEnemy);
	void Rune_Enable();
	void Rune_Disable();
	void OnSuccesfulParry_Unbind();
	void OnSuccesfulParry_Bind();
	void ExecuteUbergraph_Rune_OnParry(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, bool Temp_bool_Variable, bool K2Node_SwitchName_CmpSuccess_2, float CallFunc_GetChance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Select_Default);
};

}


