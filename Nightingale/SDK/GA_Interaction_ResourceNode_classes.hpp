#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x670 - 0x668)
// BlueprintGeneratedClass GA_Interaction_ResourceNode.GA_Interaction_ResourceNode_C
class UGA_Interaction_ResourceNode_C : public UGA_Interaction_Base_C
{
public:
	class ABP_ResourceNode_IIM_C*                ResourceNodeIIM;                                   // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_ResourceNode_C* GetDefaultObj();

	void PopulateVariables(bool* bSuccess, class APawn* CallFunc_GetPawn_Pawn, bool CallFunc_PopulateVariables_bSuccess, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FIIMInstance& Instance, const struct FGameplayTagContainer& ParentTags, const struct FGameplayTag& MontageActionTag, bool IsSuccessful, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FGameplayTag& CallFunc_TryGetAnimTag_OutAnimTag, enum class EGetResult CallFunc_TryGetAnimTag_Branches, class AEquippableItem* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayTag& CallFunc_GetItemTypeTag_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetOffhandEquippedItem_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_CanInteract_Success, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IInteractionAnimationInterface> K2Node_DynamicCast_AsInteraction_Animation_Interface, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetPawn_Pawn_1, class AController* CallFunc_GetController_ReturnValue, const struct FIIMInstance& CallFunc_GetInstanceFromInteractionData_IIMInstance, TScriptInterface<class IBPI_ResourceNodeIIMInterfaces_C> K2Node_DynamicCast_AsBPI_Resource_Node_IIMInterfaces, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_ResourceInteraction_C> CallFunc_GetResourceNodeInteractionInterface_ResourceInteraction, bool CallFunc_ExecuteInteractionOnResourceNode_Success);
	void CanInteract(bool* Success, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanInteractWithActor_InteractAvailable);
};

}


