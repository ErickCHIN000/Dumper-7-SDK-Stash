#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x240 - 0x110)
// BlueprintGeneratedClass Ability_MagicSMG_Poison.Ability_MagicSMG_Poison_C
class UAbility_MagicSMG_Poison_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AActor*                                BeamTarget;                                        // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerAbilityOwner;                                // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_MagicSMG_Poison; // 0x128(0x28)(None)
	struct FEnvQueryParams                       PoisonSpreadSearch;                                // 0x150(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UStatusEffectManagerComponent*         BeamTarget_SE_mgr;                                 // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNextTickAppliesStatusEffect;                      // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PoisonStage;                                       // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          PoisonTimerRef;                                    // 0x218(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                CurrentCE_Owner;                                   // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponFireBeamComponent*              WeapFireBeamComponent;                             // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        SpreadTargets;                                     // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAbility_MagicSMG_Poison_C* GetDefaultObj();

	void OnActivated();
	void Event_CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void Timer_ApplyNewPoisonStack();
	void ReopenGate();
	void ResetPoisonApplication();
	void ExecuteUbergraph_Ability_MagicSMG_Poison(int32 EntryPoint, float CallFunc_GetValueOfAttribute_ReturnValue, float Temp_float_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable1, float Temp_float_Variable2, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable3, int32 Temp_int_Variable, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Clamp_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_Select_Default, float CallFunc_GetValueOfAttribute_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_Array_Get_Item, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_Less_IntInt_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


