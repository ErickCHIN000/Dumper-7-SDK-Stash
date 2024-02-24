#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x640 - 0x620)
// BlueprintGeneratedClass BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C
class ABP_ShieldMod_CursedWit_C : public ABP_ShieldMod_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x620(0x8)(Transient, DuplicateTransient)
	class UOakDialogComponent*                   OakDialog;                                         // 0x628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         MyOakCharacter;                                    // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Stream_OnKill;                                     // 0x638(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ShieldMod_CursedWit_C* GetDefaultObj();

	void UserConstructionScript();
	void CursedWit_ShieldDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void CursedWit_TakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void CursedWit_Unequip(class AOakCharacter* UnequippedBy);
	void CursedWit_OnEquip(class AOakCharacter* EquippedBy);
	void CursedWit_OnKilledEnemy(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_BP_ShieldMod_CursedWit(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_CustomEvent_Details1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AOakCharacter* K2Node_Event_UnequippedBy, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AOakCharacter* K2Node_Event_EquippedBy, float CallFunc_RandomFloatInRangeFromStream_ReturnValue2, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation2, int32 CallFunc_FinishTriggerDialog_SequenceID2, bool CallFunc_FinishTriggerDialog_ReturnValue2, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details);
};

}


