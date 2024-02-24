#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C
// (None)

class UClass* UBP_ActionableBehaviour_Deployable_BeaconTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Deployable_BeaconTool_C");

	return Clss;
}


// BP_ActionableBehaviour_Deployable_BeaconTool_C BP_ActionableBehaviour_Deployable_BeaconTool.Default__BP_ActionableBehaviour_Deployable_BeaconTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Deployable_BeaconTool_C* UBP_ActionableBehaviour_Deployable_BeaconTool_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Deployable_BeaconTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Deployable_BeaconTool_C*>(UBP_ActionableBehaviour_Deployable_BeaconTool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C.BlueprintDeploy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  DeployTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                      FoundationActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              VarientIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFindItemSlotInfo>   CallFunc_FindItems_ReturnValue                                   (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFindItemSlotInfo           CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)

void UBP_ActionableBehaviour_Deployable_BeaconTool_C::BlueprintDeploy(const struct FTransform& DeployTransform, class AActor* FoundationActor, const struct FItemData& ItemData, int32 VarientIndex, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_GetItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Deployable_BeaconTool_C", "BlueprintDeploy");

	Params::UBP_ActionableBehaviour_Deployable_BeaconTool_C_BlueprintDeploy_Params Parms{};

	Parms.DeployTransform = DeployTransform;
	Parms.FoundationActor = FoundationActor;
	Parms.ItemData = ItemData;
	Parms.VarientIndex = VarientIndex;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.CallFunc_FindItems_ReturnValue = CallFunc_FindItems_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C.CustomDeploymentCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValidPlacement                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Reason                                                           (Parm, OutParm)
// bool                               CallFunc_CustomDeploymentCheck_ValidPlacement                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CustomDeploymentCheck_Reason                            (None)
// class AIcarusItem*                 CallFunc_GetFocusedItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalItem_Beacon_Tool_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 CallFunc_GetOwnerIcarusItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFindItemSlotInfo>   CallFunc_FindItems_ReturnValue                                   (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Deployable_BeaconTool_C::CustomDeploymentCheck(class AActor* HitActor, bool* ValidPlacement, class FText* Reason, bool CallFunc_CustomDeploymentCheck_ValidPlacement, class FText CallFunc_CustomDeploymentCheck_Reason, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Deployable_BeaconTool_C", "CustomDeploymentCheck");

	Params::UBP_ActionableBehaviour_Deployable_BeaconTool_C_CustomDeploymentCheck_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.CallFunc_CustomDeploymentCheck_ValidPlacement = CallFunc_CustomDeploymentCheck_ValidPlacement;
	Parms.CallFunc_CustomDeploymentCheck_Reason = CallFunc_CustomDeploymentCheck_Reason;
	Parms.CallFunc_GetFocusedItem_ReturnValue = CallFunc_GetFocusedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool = K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetOwnerIcarusItem_ReturnValue = CallFunc_GetOwnerIcarusItem_ReturnValue;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.CallFunc_FindItems_ReturnValue = CallFunc_FindItems_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidPlacement != nullptr)
		*ValidPlacement = Parms.ValidPlacement;

	if (Reason != nullptr)
		*Reason = Parms.Reason;

}


// Function BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C.OnDeploy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADeployable*                 SpawnedDeployable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Trail_Beacon_C*          K2Node_DynamicCast_AsBP_Trail_Beacon                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SkeletalItem_Beacon_Tool_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent*         CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFindItemSlotInfo>   CallFunc_FindItems_ReturnValue                                   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsUnlimitedResourcesEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFindItemSlotInfo           CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)

void UBP_ActionableBehaviour_Deployable_BeaconTool_C::OnDeploy(class ADeployable* SpawnedDeployable, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Trail_Beacon_C* K2Node_DynamicCast_AsBP_Trail_Beacon, bool K2Node_DynamicCast_bSuccess, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, bool CallFunc_IsUnlimitedResourcesEnabled_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Deployable_BeaconTool_C", "OnDeploy");

	Params::UBP_ActionableBehaviour_Deployable_BeaconTool_C_OnDeploy_Params Parms{};

	Parms.SpawnedDeployable = SpawnedDeployable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Trail_Beacon = K2Node_DynamicCast_AsBP_Trail_Beacon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool = K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.CallFunc_FindItems_ReturnValue = CallFunc_FindItems_ReturnValue;
	Parms.CallFunc_IsUnlimitedResourcesEnabled_ReturnValue = CallFunc_IsUnlimitedResourcesEnabled_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Deployable_BeaconTool_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Deployable_BeaconTool_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Deployable_BeaconTool_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C.ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalItem_Beacon_Tool_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Deployable_BeaconTool_C::ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Deployable_BeaconTool_C", "ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool");

	Params::UBP_ActionableBehaviour_Deployable_BeaconTool_C_ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool = K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


