#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x108 - 0x108)
// BlueprintGeneratedClass ShieldAug_CursedWit.ShieldAug_CursedWit_C
class UShieldAug_CursedWit_C : public UShieldAugment
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_CursedWit_C* GetDefaultObj();

	void K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData, TScriptInterface<class IBPI_CursedWit_C> K2Node_DynamicCast_AsBPI_Cursed_Wit, bool K2Node_DynamicCast_bSuccess);
	void K2_OnShieldNotDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
	void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData, TScriptInterface<class IBPI_CursedWit_C> K2Node_DynamicCast_AsBPI_Cursed_Wit, bool K2Node_DynamicCast_bSuccess, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
	void K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class UOakDialogComponent* CallFunc_GetComponentByClass_ReturnValue);
	void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class UOakDialogComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue);
};

}


