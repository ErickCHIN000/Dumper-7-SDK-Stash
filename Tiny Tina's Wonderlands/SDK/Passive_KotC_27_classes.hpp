#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x2E8 - 0x2BA)
// BlueprintGeneratedClass Passive_KotC_27.Passive_KotC_27_C
class UPassive_KotC_27_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_1E90[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	struct FDataTableValueHandle                 ActiveDuration;                                    // 0x2C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UGbxDamageType*                        InDamageType;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_KotC_27_C* GetDefaultObj();

	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable1, float Temp_float_Variable, bool Temp_bool_Variable2, float Temp_float_Variable1, bool CallFunc_IsAbilityTimerActive_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue1, float CallFunc_GetAbilityTimerValue_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue2, int32 K2Node_Select_Default, bool Temp_bool_Variable3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 K2Node_Select1_Default, float CallFunc_GetAbilityTimerValue_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select2_Default, float K2Node_Select3_Default);
	void OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OakPassiveOnCausedBonusDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Passive_KotC_27(int32 EntryPoint, class AActor* K2Node_Event_DamageInstigator1, float K2Node_Event_Damage1, class UGbxDamageType* K2Node_Event_DamageType1, class UDamageSource* K2Node_Event_DamageSource1, class AActor* K2Node_Event_DamagedActor1, const struct FCausedDamageDetails& K2Node_Event_Details1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1);
};

}


