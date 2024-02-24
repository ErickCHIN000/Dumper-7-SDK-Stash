#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E (0x180 - 0x132)
// BlueprintGeneratedClass Ability_HexRevenge.Ability_HexRevenge_C
class UAbility_HexRevenge_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_1342[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  AbilityPlayerOwner;                                // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SharkBane; // 0x148(0x28)(None)
	TArray<class UClass*>                        StatusDamageTypes;                                 // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAbility_HexRevenge_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void OnTakeDamage(class UDamageComponent* Damage_Receiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* Instigator, class UDamageCauserComponent* Damage_Causer, const struct FReceivedDamageDetails& DamageDetails);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void ExecuteUbergraph_Ability_HexRevenge(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UDamageComponent* K2Node_CustomEvent_Damage_Receiver, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_Instigator, class UDamageCauserComponent* K2Node_CustomEvent_Damage_Causer, const struct FReceivedDamageDetails& K2Node_CustomEvent_DamageDetails, class UClass* CallFunc_GetObjectClass_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, bool CallFunc_IsAbilityTimerActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


