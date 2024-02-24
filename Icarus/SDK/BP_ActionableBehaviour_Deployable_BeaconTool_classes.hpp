#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FE (0xE50 - 0xC52)
// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C
class UBP_ActionableBehaviour_Deployable_BeaconTool_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:
	uint8                                        Pad_2F3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FItemData                             BeaconItemData;                                    // 0xC60(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Deployable_BeaconTool_C* GetDefaultObj();

	void BlueprintDeploy(const struct FTransform& DeployTransform, class AActor* FoundationActor, const struct FItemData& ItemData, int32 VarientIndex, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_GetItem_ReturnValue);
	void CustomDeploymentCheck(class AActor* HitActor, bool* ValidPlacement, class FText* Reason, bool CallFunc_CustomDeploymentCheck_ValidPlacement, class FText CallFunc_CustomDeploymentCheck_Reason, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void OnDeploy(class ADeployable* SpawnedDeployable, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Trail_Beacon_C* K2Node_DynamicCast_AsBP_Trail_Beacon, bool K2Node_DynamicCast_bSuccess, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, bool CallFunc_IsUnlimitedResourcesEnabled_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


