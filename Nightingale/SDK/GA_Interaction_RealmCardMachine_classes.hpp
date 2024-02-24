#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x678 - 0x668)
// BlueprintGeneratedClass GA_Interaction_RealmCardMachine.GA_Interaction_RealmCardMachine_C
class UGA_Interaction_RealmCardMachine_C : public UGA_Interaction_Base_C
{
public:
	class AController*                           Controller;                                        // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_RealmCardMachine_ServerList_C*     RealmCardMachine;                                  // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_RealmCardMachine_C* GetDefaultObj();

	void PopulateVariables(bool* bSuccess, class UObject* CallFunc_GetInteractable_Interactable, class ABP_RealmCardMachine_ServerList_C* K2Node_DynamicCast_AsBP_Realm_Card_Machine_Server_List, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_PopulateVariables_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTag& MontageActionTag, bool IsSuccessful);
};

}


