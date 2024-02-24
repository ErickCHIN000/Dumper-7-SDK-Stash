#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x3B0 - 0x2C8)
// BlueprintGeneratedClass Passive_Necromancer_09.Passive_Necromancer_09_C
class UPassive_Necromancer_09_C : public U_Passive_KillSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	float                                        DamageReductionAsScaleSimple;                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageReductionAsScaleSimpleHandle;                // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        AbilityCooldownDuration;                           // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 AbilityCooldownDurationHandle;                     // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DemiLichHealthPercentageOnRevived;                 // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DemiLichHealthPercentageOnRevivedHandle;           // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        PlayerHealthPercentageRestoredOnDeath;             // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 PlayerHealthPercentageRestoredOnDeathHandle;       // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        UnreducedDamage;                                   // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbility*                           NecromancerFeat;                                   // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DemiLichCompanion;                                 // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Necromancer_09; // 0x370(0x28)(None)
	struct FGameResourcePoolReference            PlayerHealth;                                      // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UPassive_Necromancer_09_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void LichSpawned();
	void LichDespawned();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void StartLichDemiGod();
	void OakPassiveOnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void EndLichDemigod();
	void ExecuteUbergraph_Passive_Necromancer_09(int32 EntryPoint, TScriptInterface<class IIFeat_Necromancer_C> K2Node_DynamicCast_AsIFeat_Necromancer, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetDemiLich_Ref, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class UGbxAbility* CallFunc_GetClassFeat_Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, TScriptInterface<class IIFeat_Necromancer_C> K2Node_DynamicCast_AsIFeat_Necromancer1, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetDemiLich_Ref1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsAlive_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsAlive_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, const struct FHitResult& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue2, TScriptInterface<class IIFeat_Necromancer_C> K2Node_DynamicCast_AsIFeat_Necromancer2, bool K2Node_DynamicCast_bSuccess4, class AActor* CallFunc_GetDemiLich_Ref2, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, TScriptInterface<class IIDrone_Necromancer_DemiLich_C> K2Node_DynamicCast_AsIDrone_Necromancer_Demi_Lich, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_Passive09_LichSacrifice_Res, bool CallFunc_IsAbilityTimerActive_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue1, class UDamageComponent* K2Node_Event_DamageReceiver, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AController* K2Node_Event_InstigatedBy, class UDamageCauserComponent* K2Node_Event_DamageCauser, const struct FReceivedDamageDetails& K2Node_Event_Details, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue4, class AActor* CallFunc_GetAbilityOwner_ReturnValue5, TScriptInterface<class IIDrone_Necromancer_DemiLich_C> K2Node_DynamicCast_AsIDrone_Necromancer_Demi_Lich1, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_GetDemiLichIsDying_Res, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue3, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue7, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


