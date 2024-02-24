#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x240 - 0x198)
// BlueprintGeneratedClass Ability_Melee_Hilt_Tidesorrow_Base.Ability_Melee_Hilt_Tidesorrow_Base_C
class UAbility_Melee_Hilt_Tidesorrow_Base_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FTimerHandle                          LightningStrikeTimer;                              // 0x1A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class AActor*>                        LightningActors;                                   // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Melee_Hilt_Tidesorrow; // 0x1B8(0x28)(None)
	float                                        StatusEffectPerc;                                  // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4611[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 StatusEffectPercHandle;                            // 0x1E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        LightningBoltChance;                               // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4622[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 LightningBoltChanceHandle;                         // 0x208(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        LightningBoltDamageMult;                           // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_462B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 LightningBoltDamageMultHandle;                     // 0x228(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Melee_Hilt_Tidesorrow_Base_C* GetDefaultObj();

	void OnActivated();
	void CheckForLightningStrike();
	void OnDeactivated();
	void LightningHit();
	void DealtMeleeDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Melee_Hilt_Tidesorrow_Base(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FHitResult& Temp_struct_Variable, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, bool CallFunc_K2_EvaluateConditionType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, bool CallFunc_RandomBoolWithWeight_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue4, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


