#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C
// (None)

class UClass* UBP_InteractionObject_Harvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionObject_Harvest_C");

	return Clss;
}


// BP_InteractionObject_Harvest_C BP_InteractionObject_Harvest.Default__BP_InteractionObject_Harvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionObject_Harvest_C* UBP_InteractionObject_Harvest_C::GetDefaultObj()
{
	static class UBP_InteractionObject_Harvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionObject_Harvest_C*>(UBP_InteractionObject_Harvest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C.GetInteractionTextForResourceNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractText                                                     (Parm, OutParm)
// class UInstancedResourceNodeComponent*IIMComponent                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        DefaultCollectText                                               (Edit, BlueprintVisible)
// struct FIIMInstance                CallFunc_GetInstance_OutInstance                                 (None)
// bool                               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInstancedResourceNodeComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FIIMInstance                K2Node_SetFieldsInStruct_StructOut                               (None)
// struct FResourceSpawn              CallFunc_GetResourceForInstance_OutResource                      (NoDestructor)
// struct FItemRewardDef              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXItemPresentationDataAsset*K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_InteractionObject_Harvest_C::GetInteractionTextForResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, class FText* InteractText, class UInstancedResourceNodeComponent* IIMComponent, class FText DefaultCollectText, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, class UInstancedResourceNodeComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FIIMInstance& K2Node_SetFieldsInStruct_StructOut, const struct FResourceSpawn& CallFunc_GetResourceForInstance_OutResource, const struct FItemRewardDef& CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, class UNWXItemPresentationDataAsset* K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_Harvest_C", "GetInteractionTextForResourceNode");

	Params::UBP_InteractionObject_Harvest_C_GetInteractionTextForResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InstanceID = InstanceID;
	Parms.IIMComponent = IIMComponent;
	Parms.DefaultCollectText = DefaultCollectText;
	Parms.CallFunc_GetInstance_OutInstance = CallFunc_GetInstance_OutInstance;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetResourceForInstance_OutResource = CallFunc_GetResourceForInstance_OutResource;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset = K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = Parms.InteractText;

}


// Function BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C.ExecuteInteractionOnResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceNode_IIM_C*      ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInstanceIdFromInteractionData_InstanceId             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_Harvest_C::ExecuteInteractionOnResourceNode(class ABP_ResourceNode_IIM_C* ResourceNode, const struct FInteractionData& InteractionData, class AController* Controller, bool* Success, bool CallFunc_OwnerHasAuthority_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_GetInstanceIdFromInteractionData_InstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_Harvest_C", "ExecuteInteractionOnResourceNode");

	Params::UBP_InteractionObject_Harvest_C_ExecuteInteractionOnResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InteractionData = InteractionData;
	Parms.Controller = Controller;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetInstanceIdFromInteractionData_InstanceId = CallFunc_GetInstanceIdFromInteractionData_InstanceId;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_InteractionObject_Harvest.BP_InteractionObject_Harvest_C.CanInteractWithResourceNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            LInteraction                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FInteractionData            LInteractionData                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// class ABP_ResourceNode_IIM_C*      LResourceNode                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              LInstanceID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ResourceNode_C>K2Node_DynamicCast_AsBPI_Resource_Node                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInstanceHarvestable_IsHarvestable                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesHaveResourceType_bHasResourceType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesHaveResourceType_bHasResourceType_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_Harvest_C::CanInteractWithResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, bool* CanInteract, const struct FInteractionData& LInteraction, const struct FInteractionData& LInteractionData, class ABP_ResourceNode_IIM_C* LResourceNode, int32 LInstanceID, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ResourceNode_C> K2Node_DynamicCast_AsBPI_Resource_Node, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInstanceHarvestable_IsHarvestable, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesHaveResourceType_bHasResourceType, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesHaveResourceType_bHasResourceType_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_Harvest_C", "CanInteractWithResourceNode");

	Params::UBP_InteractionObject_Harvest_C_CanInteractWithResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InstanceID = InstanceID;
	Parms.LInteraction = LInteraction;
	Parms.LInteractionData = LInteractionData;
	Parms.LResourceNode = LResourceNode;
	Parms.LInstanceID = LInstanceID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Resource_Node = K2Node_DynamicCast_AsBPI_Resource_Node;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInstanceHarvestable_IsHarvestable = CallFunc_IsInstanceHarvestable_IsHarvestable;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesHaveResourceType_bHasResourceType = CallFunc_DoesHaveResourceType_bHasResourceType;
	Parms.K2Node_DynamicCast_AsBPI_Interactable_1 = K2Node_DynamicCast_AsBPI_Interactable_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_DoesHaveResourceType_bHasResourceType_1 = CallFunc_DoesHaveResourceType_bHasResourceType_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}

}


