#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C
class UBP_InteractionObject_Harvest_C : public UBP_InteractionObject_Resources_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_Harvest_C* GetDefaultObj();

	void GetInteractionTextForResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, class FText* InteractText, class UInstancedResourceNodeComponent* IIMComponent, class FText DefaultCollectText, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, class UInstancedResourceNodeComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FIIMInstance& K2Node_SetFieldsInStruct_StructOut, const struct FResourceSpawn& CallFunc_GetResourceForInstance_OutResource, const struct FItemRewardDef& CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, class UNWXItemPresentationDataAsset* K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ExecuteInteractionOnResourceNode(class ABP_ResourceNode_IIM_C* ResourceNode, const struct FInteractionData& InteractionData, class AController* Controller, bool* Success, bool CallFunc_OwnerHasAuthority_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_GetInstanceIdFromInteractionData_InstanceId);
	void CanInteractWithResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, bool* CanInteract, const struct FInteractionData& LInteraction, const struct FInteractionData& LInteractionData, class ABP_ResourceNode_IIM_C* LResourceNode, int32 LInstanceID, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ResourceNode_C> K2Node_DynamicCast_AsBPI_Resource_Node, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInstanceHarvestable_IsHarvestable, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesHaveResourceType_bHasResourceType, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesHaveResourceType_bHasResourceType_1);
};

}


