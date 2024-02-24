#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Items_Containers.BPFL_Items_Containers_C
// (None)

class UClass* UBPFL_Items_Containers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Items_Containers_C");

	return Clss;
}


// BPFL_Items_Containers_C BPFL_Items_Containers.Default__BPFL_Items_Containers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Items_Containers_C* UBPFL_Items_Containers_C::GetDefaultObj()
{
	static class UBPFL_Items_Containers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Items_Containers_C*>(UBPFL_Items_Containers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Items_Containers.BPFL_Items_Containers_C.ClaimItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ClaimingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ItemSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemToClaim                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIgnoreCapacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               ClaimedInstances                                                 (Parm, OutParm)
// TArray<struct FInventoryEntry>     UnclaimedItems                                                   (Parm, OutParm)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_ClaimItems_bSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItems_ClaimedInstances                             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItems_UnclaimedItems                               (ReferenceParm)

void UBPFL_Items_Containers_C::ClaimItem(class AActor* ClaimingActor, class UObject* ItemSource, const struct FInventoryEntry& ItemToClaim, bool bIgnoreCapacity, class UObject* __WorldContext, bool* bSuccess, TArray<struct FGuid>* ClaimedInstances, TArray<struct FInventoryEntry>* UnclaimedItems, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Containers_C", "ClaimItem");

	Params::UBPFL_Items_Containers_C_ClaimItem_Params Parms{};

	Parms.ClaimingActor = ClaimingActor;
	Parms.ItemSource = ItemSource;
	Parms.ItemToClaim = ItemToClaim;
	Parms.bIgnoreCapacity = bIgnoreCapacity;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ClaimItems_bSuccess = CallFunc_ClaimItems_bSuccess;
	Parms.CallFunc_ClaimItems_ClaimedInstances = CallFunc_ClaimItems_ClaimedInstances;
	Parms.CallFunc_ClaimItems_UnclaimedItems = CallFunc_ClaimItems_UnclaimedItems;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ClaimedInstances != nullptr)
		*ClaimedInstances = std::move(Parms.ClaimedInstances);

	if (UnclaimedItems != nullptr)
		*UnclaimedItems = std::move(Parms.UnclaimedItems);

}


// Function BPFL_Items_Containers.BPFL_Items_Containers_C.ClaimItems
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ClaimingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ItemSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ItemsToClaim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIgnoreCapacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               ClaimedInstances                                                 (Parm, OutParm)
// TArray<struct FInventoryEntry>     UnclaimedItems                                                   (Parm, OutParm)
// TArray<struct FGuid>               K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ItemClaim_C*             CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItem_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItem_ClaimedInstances                              (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItem_UnclaimedItems                                (ReferenceParm)

void UBPFL_Items_Containers_C::ClaimItems(class AActor* ClaimingActor, class UObject* ItemSource, TArray<struct FInventoryEntry>& ItemsToClaim, bool bIgnoreCapacity, class UObject* __WorldContext, bool* bSuccess, TArray<struct FGuid>* ClaimedInstances, TArray<struct FInventoryEntry>* UnclaimedItems, TArray<struct FGuid>& K2Node_MakeArray_Array, bool CallFunc_OwnerHasAuthority_ReturnValue, class UBP_ItemClaim_C* CallFunc_GetDefaultObject_ReturnValue, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Containers_C", "ClaimItems");

	Params::UBPFL_Items_Containers_C_ClaimItems_Params Parms{};

	Parms.ClaimingActor = ClaimingActor;
	Parms.ItemSource = ItemSource;
	Parms.ItemsToClaim = ItemsToClaim;
	Parms.bIgnoreCapacity = bIgnoreCapacity;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_ClaimItem_bSuccess = CallFunc_ClaimItem_bSuccess;
	Parms.CallFunc_ClaimItem_ClaimedInstances = CallFunc_ClaimItem_ClaimedInstances;
	Parms.CallFunc_ClaimItem_UnclaimedItems = CallFunc_ClaimItem_UnclaimedItems;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ClaimedInstances != nullptr)
		*ClaimedInstances = std::move(Parms.ClaimedInstances);

	if (UnclaimedItems != nullptr)
		*UnclaimedItems = std::move(Parms.UnclaimedItems);

}


// Function BPFL_Items_Containers.BPFL_Items_Containers_C.GetAllPlayerContainerItemIds
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemDataReference>  ContainerIReferences                                             (Parm, OutParm)
// TArray<struct FItemDataReference>  ContainerItemReferences                                          (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
// TArray<struct FItemDataReference>  K2Node_MakeArray_Array                                           (ReferenceParm)

void UBPFL_Items_Containers_C::GetAllPlayerContainerItemIds(class UObject* __WorldContext, TArray<struct FItemDataReference>* ContainerIReferences, const TArray<struct FItemDataReference>& ContainerItemReferences, TArray<struct FItemDataReference>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Containers_C", "GetAllPlayerContainerItemIds");

	Params::UBPFL_Items_Containers_C_GetAllPlayerContainerItemIds_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.ContainerItemReferences = ContainerItemReferences;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerIReferences != nullptr)
		*ContainerIReferences = std::move(Parms.ContainerIReferences);

}


// Function BPFL_Items_Containers.BPFL_Items_Containers_C.GetInventoryItemFromBackpack
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       TargetPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_Containers_C::GetInventoryItemFromBackpack(class APawn* TargetPawn, const struct FGuid& InstanceID, class UObject* __WorldContext, bool* bSuccess, struct FInventoryEntry* InventoryEntry, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Containers_C", "GetInventoryItemFromBackpack");

	Params::UBPFL_Items_Containers_C_GetInventoryItemFromBackpack_Params Parms{};

	Parms.TargetPawn = TargetPawn;
	Parms.InstanceID = InstanceID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (InventoryEntry != nullptr)
		*InventoryEntry = std::move(Parms.InventoryEntry);

}


// Function BPFL_Items_Containers.BPFL_Items_Containers_C.ContainerHasEquivalentItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       MatchingGuid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CurrentEntry                                                     (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreItemsEquivalent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Items_Containers_C::ContainerHasEquivalentItem(TScriptInterface<class IItemContainer> Container, const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, struct FGuid* MatchingGuid, const struct FInventoryEntry& CurrentEntry, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AreItemsEquivalent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Containers_C", "ContainerHasEquivalentItem");

	Params::UBPFL_Items_Containers_C_ContainerHasEquivalentItem_Params Parms{};

	Parms.Container = Container;
	Parms.ItemEntry = ItemEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AreItemsEquivalent_ReturnValue = CallFunc_AreItemsEquivalent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MatchingGuid != nullptr)
		*MatchingGuid = std::move(Parms.MatchingGuid);

	return Parms.ReturnValue;

}

}


