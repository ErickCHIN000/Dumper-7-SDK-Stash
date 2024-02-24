#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C
// (None)

class UClass* UBP_RewardBehaviour_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Item_C");

	return Clss;
}


// BP_RewardBehaviour_Item_C BP_RewardBehaviour_Item.Default__BP_RewardBehaviour_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Item_C* UBP_RewardBehaviour_Item_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Item_C*>(UBP_RewardBehaviour_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.GetRewardItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemDataAsset*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue                (UObjectWrapper, HasGetValueTypeHash)
// struct FPrimaryAssetId             CallFunc_GetPrimaryAssetIdFromSoftObjectReference_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetObjectFromPrimaryAssetId_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UItemDataAsset*              K2Node_DynamicCast_AsItem_Data_Asset                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UItemDataAsset* UBP_RewardBehaviour_Item_C::GetRewardItem(TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, const struct FPrimaryAssetId& CallFunc_GetPrimaryAssetIdFromSoftObjectReference_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, class UItemDataAsset* K2Node_DynamicCast_AsItem_Data_Asset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "GetRewardItem");

	Params::UBP_RewardBehaviour_Item_C_GetRewardItem_Params Parms{};

	Parms.CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue = CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue;
	Parms.CallFunc_GetPrimaryAssetIdFromSoftObjectReference_ReturnValue = CallFunc_GetPrimaryAssetIdFromSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Data_Asset = K2Node_DynamicCast_AsItem_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.GenerateItemToReward
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (Parm, OutParm)
// TArray<class UItemInstanceData*>   LInstanceData                                                    (Edit, BlueprintVisible)
// struct FItemDataReference          LItemReference                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LQuantity                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Item_C::GenerateItemToReward(struct FInventoryEntry* InventoryEntry, const TArray<class UItemInstanceData*>& LInstanceData, const struct FItemDataReference& LItemReference, int32 LQuantity, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "GenerateItemToReward");

	Params::UBP_RewardBehaviour_Item_C_GenerateItemToReward_Params Parms{};

	Parms.LInstanceData = LInstanceData;
	Parms.LItemReference = LItemReference;
	Parms.LQuantity = LQuantity;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryEntry != nullptr)
		*InventoryEntry = std::move(Parms.InventoryEntry);

}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.IsRewardValid
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsValid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutInvalidReason                                                 (Parm, OutParm)
// struct FInventoryEntry             ItemToReward                                                     (Edit, BlueprintVisible)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRewardValid_bIsValid                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsRewardValid_OutInvalidReason                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetCorrectContainerForItem_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAddItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GenerateItemToReward_InventoryEntry                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Item_C::IsRewardValid(class APlayerState* PlayerState, bool* bIsValid, class FText* OutInvalidReason, const struct FInventoryEntry& ItemToReward, class UInventoryComponentBase* InventoryComponent, class APlayerController* PlayerController, bool CallFunc_IsRewardValid_bIsValid, class FText CallFunc_IsRewardValid_OutInvalidReason, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetCorrectContainerForItem_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanAddItem_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FInventoryEntry& CallFunc_GenerateItemToReward_InventoryEntry, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "IsRewardValid");

	Params::UBP_RewardBehaviour_Item_C_IsRewardValid_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ItemToReward = ItemToReward;
	Parms.InventoryComponent = InventoryComponent;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_IsRewardValid_bIsValid = CallFunc_IsRewardValid_bIsValid;
	Parms.CallFunc_IsRewardValid_OutInvalidReason = CallFunc_IsRewardValid_OutInvalidReason;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCorrectContainerForItem_ReturnValue = CallFunc_GetCorrectContainerForItem_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CanAddItem_ReturnValue = CallFunc_CanAddItem_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GenerateItemToReward_InventoryEntry = CallFunc_GenerateItemToReward_InventoryEntry;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutInvalidReason != nullptr)
		*OutInvalidReason = Parms.OutInvalidReason;

}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.GrantItemReward
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ItemSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemInstanceData*>   InstanceData                                                     (Edit, BlueprintVisible)
// int32                              LQuantity                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItemReference                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXItemProxySpawnerSubsystem*CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GenerateItemToReward_InventoryEntry                     (None)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItem_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItem_ClaimedInstances                              (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItem_UnclaimedItems                                (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Item_C::GrantItemReward(class APlayerState* PlayerState, class UObject* ItemSource, const TArray<class UItemInstanceData*>& InstanceData, int32 LQuantity, const struct FItemDataReference& LItemReference, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& Temp_struct_Variable, class APawn* CallFunc_GetPawn_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FInventoryEntry& CallFunc_GenerateItemToReward_InventoryEntry, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_GetBaseFilename_ReturnValue, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "GrantItemReward");

	Params::UBP_RewardBehaviour_Item_C_GrantItemReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ItemSource = ItemSource;
	Parms.InstanceData = InstanceData;
	Parms.LQuantity = LQuantity;
	Parms.LItemReference = LItemReference;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue_1 = CallFunc_GetPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GenerateItemToReward_InventoryEntry = CallFunc_GenerateItemToReward_InventoryEntry;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_ClaimItem_bSuccess = CallFunc_ClaimItem_bSuccess;
	Parms.CallFunc_ClaimItem_ClaimedInstances = CallFunc_ClaimItem_ClaimedInstances;
	Parms.CallFunc_ClaimItem_UnclaimedItems = CallFunc_ClaimItem_UnclaimedItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        DebugText                                                        (Parm, OutParm)
// int32                              LQuantity                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItemReference                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FText                        InstancedDataText                                                (Edit, BlueprintVisible)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_RewardBehaviour_Item_C::GetDebugText(class FText* DebugText, int32 LQuantity, const struct FItemDataReference& LItemReference, class FText InstancedDataText, int64 CallFunc_Conv_IntToInt64_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "GetDebugText");

	Params::UBP_RewardBehaviour_Item_C_GetDebugText_Params Parms{};

	Parms.LQuantity = LQuantity;
	Parms.LItemReference = LItemReference;
	Parms.InstancedDataText = InstancedDataText;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugText != nullptr)
		*DebugText = Parms.DebugText;

}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.ApplyReward
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Item_C::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "ApplyReward");

	Params::UBP_RewardBehaviour_Item_C_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C.ExecuteUbergraph_BP_RewardBehaviour_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_PlayerState                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SenderContextObject                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Item_C::ExecuteUbergraph_BP_RewardBehaviour_Item(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Item_C", "ExecuteUbergraph_BP_RewardBehaviour_Item");

	Params::UBP_RewardBehaviour_Item_C_ExecuteUbergraph_BP_RewardBehaviour_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerState = K2Node_Event_PlayerState;
	Parms.K2Node_Event_SenderContextObject = K2Node_Event_SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


