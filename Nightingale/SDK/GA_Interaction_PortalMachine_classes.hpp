#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x678 - 0x668)
// BlueprintGeneratedClass GA_Interaction_PortalMachine.GA_Interaction_PortalMachine_C
class UGA_Interaction_PortalMachine_C : public UGA_Interaction_Base_C
{
public:
	class UObject*                               PortalController;                                  // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URealmCardMachineComponent*            RealmCardMachineComponent;                         // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_PortalMachine_C* GetDefaultObj();

	void PopulateVariables(bool* bSuccess, class AActor* Interactable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URealmCardMachineComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetInteractable_Interactable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PopulateVariables_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, class AController* Controller, class APawn* InteractionPawn, const struct FGameplayTagContainer& ParentTags, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OpenPortalUI_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_IsValid_ReturnValue_1);
};

}


