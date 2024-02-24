#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x180 - 0x110)
// BlueprintGeneratedClass Ability_LiquidCooling.Ability_LiquidCooling_C
class UAbility_LiquidCooling_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_LiquidCooling; // 0x118(0x28)(None)
	class AOakWeapon*                            WeaponOwner;                                       // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 EffectDuration;                                    // 0x148(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        CritCount;                                         // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3176[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 EffectNumToProc;                                   // 0x168(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_LiquidCooling_C* GetDefaultObj();

	void OnActivated();
	void LiquidCooling_OnCuasedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void CloseGates();
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnDeactivated();
	void OnPaused();
	void ExecuteUbergraph_Ability_LiquidCooling(int32 EntryPoint, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_FFloor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class AActor* CallFunc_GetOwner_ReturnValue, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


