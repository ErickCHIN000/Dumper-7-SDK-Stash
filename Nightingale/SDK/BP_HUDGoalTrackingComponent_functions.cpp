#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C
// (None)

class UClass* UBP_HUDGoalTrackingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUDGoalTrackingComponent_C");

	return Clss;
}


// BP_HUDGoalTrackingComponent_C BP_HUDGoalTrackingComponent.Default__BP_HUDGoalTrackingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUDGoalTrackingComponent_C* UBP_HUDGoalTrackingComponent_C::GetDefaultObj()
{
	static class UBP_HUDGoalTrackingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUDGoalTrackingComponent_C*>(UBP_HUDGoalTrackingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.IsCardNotificationQueueEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::IsCardNotificationQueueEmpty(bool* bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "IsCardNotificationQueueEmpty");

	Params::UBP_HUDGoalTrackingComponent_C_IsCardNotificationQueueEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.IsEntityPinned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPinned                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureTracked_bIsTracked                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsStructureTracked_TrackGroupIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRecipeTracked_bIsTracked                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsRecipeTracked_TrackGroupIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::IsEntityPinned(class FName ID, bool* IsPinned, bool CallFunc_IsStructureTracked_bIsTracked, int32 CallFunc_IsStructureTracked_TrackGroupIndex, bool CallFunc_IsRecipeTracked_bIsTracked, int32 CallFunc_IsRecipeTracked_TrackGroupIndex, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "IsEntityPinned");

	Params::UBP_HUDGoalTrackingComponent_C_IsEntityPinned_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_IsStructureTracked_bIsTracked = CallFunc_IsStructureTracked_bIsTracked;
	Parms.CallFunc_IsStructureTracked_TrackGroupIndex = CallFunc_IsStructureTracked_TrackGroupIndex;
	Parms.CallFunc_IsRecipeTracked_bIsTracked = CallFunc_IsRecipeTracked_bIsTracked;
	Parms.CallFunc_IsRecipeTracked_TrackGroupIndex = CallFunc_IsRecipeTracked_TrackGroupIndex;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPinned != nullptr)
		*IsPinned = Parms.IsPinned;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetTrackedStructureCounts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              CurrentTrackedQty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxTrackedQty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::GetTrackedStructureCounts(int32* CurrentTrackedQty, int32* MaxTrackedQty, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetTrackedStructureCounts");

	Params::UBP_HUDGoalTrackingComponent_C_GetTrackedStructureCounts_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTrackedQty != nullptr)
		*CurrentTrackedQty = Parms.CurrentTrackedQty;

	if (MaxTrackedQty != nullptr)
		*MaxTrackedQty = Parms.MaxTrackedQty;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetTrackedRecipeCounts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              CurrentTrackedQty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxTrackedQty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::GetTrackedRecipeCounts(int32* CurrentTrackedQty, int32* MaxTrackedQty, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetTrackedRecipeCounts");

	Params::UBP_HUDGoalTrackingComponent_C_GetTrackedRecipeCounts_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTrackedQty != nullptr)
		*CurrentTrackedQty = Parms.CurrentTrackedQty;

	if (MaxTrackedQty != nullptr)
		*MaxTrackedQty = Parms.MaxTrackedQty;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetStructureTracks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FS_UI_HUD_GoalTrackGroup>StructureTracks                                                  (Parm, OutParm, ContainsInstancedReference)

void UBP_HUDGoalTrackingComponent_C::GetStructureTracks(TArray<struct FS_UI_HUD_GoalTrackGroup>* StructureTracks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetStructureTracks");

	Params::UBP_HUDGoalTrackingComponent_C_GetStructureTracks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StructureTracks != nullptr)
		*StructureTracks = std::move(Parms.StructureTracks);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetRecipeTracks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FS_UI_HUD_GoalTrackGroup>RecipeTracks                                                     (Parm, OutParm, ContainsInstancedReference)

void UBP_HUDGoalTrackingComponent_C::GetRecipeTracks(TArray<struct FS_UI_HUD_GoalTrackGroup>* RecipeTracks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetRecipeTracks");

	Params::UBP_HUDGoalTrackingComponent_C_GetRecipeTracks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RecipeTracks != nullptr)
		*RecipeTracks = std::move(Parms.RecipeTracks);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetAllInventoryItemsRelevantToCrafting
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FInventoryEntry>     InventoryEntries                                                 (Parm, OutParm)
// TArray<struct FInventoryEntry>     AllItems                                                         (Edit, BlueprintVisible)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries_1                                   (ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::GetAllInventoryItemsRelevantToCrafting(TArray<struct FInventoryEntry>* InventoryEntries, const TArray<struct FInventoryEntry>& AllItems, class UInventoryComponentBase* InventoryComponent, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetAllInventoryItemsRelevantToCrafting");

	Params::UBP_HUDGoalTrackingComponent_C_GetAllInventoryItemsRelevantToCrafting_Params Parms{};

	Parms.AllItems = AllItems;
	Parms.InventoryComponent = InventoryComponent;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetAllItems_Entries_1 = CallFunc_GetAllItems_Entries_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryEntries != nullptr)
		*InventoryEntries = std::move(Parms.InventoryEntries);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetMaxItemCountFromFilteredEntries
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FInventoryEntry>     EntriesMeetConstraint                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     EntriesRelevant                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              MaxCount                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxQuantity                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::GetMaxItemCountFromFilteredEntries(TArray<struct FInventoryEntry>& EntriesMeetConstraint, TArray<struct FInventoryEntry>& EntriesRelevant, int32* MaxCount, int32 MaxQuantity, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetMaxItemCountFromFilteredEntries");

	Params::UBP_HUDGoalTrackingComponent_C_GetMaxItemCountFromFilteredEntries_Params Parms{};

	Parms.EntriesMeetConstraint = EntriesMeetConstraint;
	Parms.EntriesRelevant = EntriesRelevant;
	Parms.MaxQuantity = MaxQuantity;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxCount != nullptr)
		*MaxCount = Parms.MaxCount;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetTotalItemCountFromFilteredEntries
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FInventoryEntry>     EntriesMeetConstraint                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     EntriesRelevant                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              TotalCount                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalQuantity                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::GetTotalItemCountFromFilteredEntries(TArray<struct FInventoryEntry>& EntriesMeetConstraint, TArray<struct FInventoryEntry>& EntriesRelevant, int32* TotalCount, int32 TotalQuantity, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetTotalItemCountFromFilteredEntries");

	Params::UBP_HUDGoalTrackingComponent_C_GetTotalItemCountFromFilteredEntries_Params Parms{};

	Parms.EntriesMeetConstraint = EntriesMeetConstraint;
	Parms.EntriesRelevant = EntriesRelevant;
	Parms.TotalQuantity = TotalQuantity;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalCount != nullptr)
		*TotalCount = Parms.TotalCount;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.AddNewStructureTrack
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FStructureData              StructureData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FName                        StructureId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasAdded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCount                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraint             CurrentConstraint                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     AllItems                                                         (Edit, BlueprintVisible)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_HudTrackingTypes   StructureTrackType                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_UI_HUD_GoalTracking>NewTracks                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FStructureResourceRequirementsCurrentRequirement                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// class UStructureResourceRequirementsData*StructureRequirements                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    NewTrackGroup                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraint             CallFunc_GetConstraint_ReturnValue                               (ContainsInstancedReference)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant       (ReferenceParm)
// int32                              CallFunc_GetTotalItemCountFromFilteredEntries_TotalCount         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantityRequired_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintPresentationDataCallFunc_GetPresentationData_ReturnValue                         (None)
// struct FS_UI_HUD_GoalTracking      K2Node_MakeStruct_S_UI_HUD_GoalTracking                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::AddNewStructureTrack(struct FStructureData& StructureData, class FName StructureId, bool* bWasAdded, int32 ItemCount, const struct FItemConstraint& CurrentConstraint, const TArray<struct FInventoryEntry>& AllItems, class UInventoryComponentBase* InventoryComponent, enum class E_UI_HudTrackingTypes StructureTrackType, const TArray<struct FS_UI_HUD_GoalTracking>& NewTracks, const struct FStructureResourceRequirements& CurrentRequirement, class UStructureResourceRequirementsData* StructureRequirements, const struct FS_UI_HUD_GoalTrackGroup& NewTrackGroup, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemConstraint& CallFunc_GetConstraint_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant, int32 CallFunc_GetTotalItemCountFromFilteredEntries_TotalCount, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup, int32 CallFunc_GetQuantityRequired_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetPresentationData_ReturnValue, const struct FS_UI_HUD_GoalTracking& K2Node_MakeStruct_S_UI_HUD_GoalTracking, int32 CallFunc_Array_Add_ReturnValue_1, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "AddNewStructureTrack");

	Params::UBP_HUDGoalTrackingComponent_C_AddNewStructureTrack_Params Parms{};

	Parms.StructureData = StructureData;
	Parms.StructureId = StructureId;
	Parms.ItemCount = ItemCount;
	Parms.CurrentConstraint = CurrentConstraint;
	Parms.AllItems = AllItems;
	Parms.InventoryComponent = InventoryComponent;
	Parms.StructureTrackType = StructureTrackType;
	Parms.NewTracks = NewTracks;
	Parms.CurrentRequirement = CurrentRequirement;
	Parms.StructureRequirements = StructureRequirements;
	Parms.NewTrackGroup = NewTrackGroup;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetConstraint_ReturnValue = CallFunc_GetConstraint_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant;
	Parms.CallFunc_GetTotalItemCountFromFilteredEntries_TotalCount = CallFunc_GetTotalItemCountFromFilteredEntries_TotalCount;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup = K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup;
	Parms.CallFunc_GetQuantityRequired_ReturnValue = CallFunc_GetQuantityRequired_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPresentationData_ReturnValue = CallFunc_GetPresentationData_ReturnValue;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTracking = K2Node_MakeStruct_S_UI_HUD_GoalTracking;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasAdded != nullptr)
		*bWasAdded = Parms.bWasAdded;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.AddNewRecipeTrack
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipe             RecipeData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FName                        RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasAdded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSlot     CurrentSlot                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              ItemCount                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraint             CurrentConstraint                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     AllItems                                                         (Edit, BlueprintVisible)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_HudTrackingTypes   RecipeTrackType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_UI_HUD_GoalTracking>NewTracks                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_UI_HUD_GoalTrackGroup    NewTrackGroup                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries (ReferenceParm)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant       (ReferenceParm)
// int32                              CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      K2Node_MakeStruct_S_UI_HUD_GoalTracking                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::AddNewRecipeTrack(struct FCraftingRecipe& RecipeData, class FName RecipeId, bool* bWasAdded, const struct FCraftingConstraintSlot& CurrentSlot, int32 ItemCount, const struct FItemConstraint& CurrentConstraint, const TArray<struct FInventoryEntry>& AllItems, class UInventoryComponentBase* InventoryComponent, enum class E_UI_HudTrackingTypes RecipeTrackType, const TArray<struct FS_UI_HUD_GoalTracking>& NewTracks, const struct FS_UI_HUD_GoalTrackGroup& NewTrackGroup, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant, int32 CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount, const struct FS_UI_HUD_GoalTracking& K2Node_MakeStruct_S_UI_HUD_GoalTracking, const struct FS_UI_HUD_GoalTrackGroup& K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "AddNewRecipeTrack");

	Params::UBP_HUDGoalTrackingComponent_C_AddNewRecipeTrack_Params Parms{};

	Parms.RecipeData = RecipeData;
	Parms.RecipeId = RecipeId;
	Parms.CurrentSlot = CurrentSlot;
	Parms.ItemCount = ItemCount;
	Parms.CurrentConstraint = CurrentConstraint;
	Parms.AllItems = AllItems;
	Parms.InventoryComponent = InventoryComponent;
	Parms.RecipeTrackType = RecipeTrackType;
	Parms.NewTracks = NewTracks;
	Parms.NewTrackGroup = NewTrackGroup;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries = CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant;
	Parms.CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount = CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTracking = K2Node_MakeStruct_S_UI_HUD_GoalTracking;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup = K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasAdded != nullptr)
		*bWasAdded = Parms.bWasAdded;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.IsRecipeTracked
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsTracked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TrackGroupIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::IsRecipeTracked(class FName RecipeId, bool* bIsTracked, int32* TrackGroupIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "IsRecipeTracked");

	Params::UBP_HUDGoalTrackingComponent_C_IsRecipeTracked_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTracked != nullptr)
		*bIsTracked = Parms.bIsTracked;

	if (TrackGroupIndex != nullptr)
		*TrackGroupIndex = Parms.TrackGroupIndex;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.IsStructureTracked
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        StructureId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsTracked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TrackGroupIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::IsStructureTracked(class FName StructureId, bool* bIsTracked, int32* TrackGroupIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "IsStructureTracked");

	Params::UBP_HUDGoalTrackingComponent_C_IsStructureTracked_Params Parms{};

	Parms.StructureId = StructureId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTracked != nullptr)
		*bIsTracked = Parms.bIsTracked;

	if (TrackGroupIndex != nullptr)
		*TrackGroupIndex = Parms.TrackGroupIndex;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnRep_RecipeTracks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnRep_RecipeTracks(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnRep_RecipeTracks");

	Params::UBP_HUDGoalTrackingComponent_C_OnRep_RecipeTracks_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnRep_StructureTracks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnRep_StructureTracks(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnRep_StructureTracks");

	Params::UBP_HUDGoalTrackingComponent_C_OnRep_StructureTracks_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveStructureTrack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bWasRemoved                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentStackCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TrackGroupIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StructureId                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureTracked_bIsTracked                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsStructureTracked_TrackGroupIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::RemoveStructureTrack(const struct FStructureAssetReference& StructureReference, bool* bWasRemoved, int32 CurrentStackCount, int32 TrackGroupIndex, class FName StructureId, const struct FGuid& CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class APlayerState* CallFunc_GetPlayerState_PlayerState, bool CallFunc_IsStructureTracked_bIsTracked, int32 CallFunc_IsStructureTracked_TrackGroupIndex, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveStructureTrack");

	Params::UBP_HUDGoalTrackingComponent_C_RemoveStructureTrack_Params Parms{};

	Parms.StructureReference = StructureReference;
	Parms.CurrentStackCount = CurrentStackCount;
	Parms.TrackGroupIndex = TrackGroupIndex;
	Parms.StructureId = StructureId;
	Parms.CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue = CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_IsStructureTracked_bIsTracked = CallFunc_IsStructureTracked_bIsTracked;
	Parms.CallFunc_IsStructureTracked_TrackGroupIndex = CallFunc_IsStructureTracked_TrackGroupIndex;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasRemoved != nullptr)
		*bWasRemoved = Parms.bWasRemoved;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.AddStructureTrack
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        StructureId                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TrackGroupIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureTracked_bIsTracked                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsStructureTracked_TrackGroupIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)
// bool                               CallFunc_AddNewStructureTrack_bWasAdded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::AddStructureTrack(const struct FStructureAssetReference& StructureReference, class FName StructureId, int32 TrackGroupIndex, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsStructureTracked_bIsTracked, int32 CallFunc_IsStructureTracked_TrackGroupIndex, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, bool CallFunc_AddNewStructureTrack_bWasAdded, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_GetPlayerState_PlayerState, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "AddStructureTrack");

	Params::UBP_HUDGoalTrackingComponent_C_AddStructureTrack_Params Parms{};

	Parms.StructureReference = StructureReference;
	Parms.StructureId = StructureId;
	Parms.TrackGroupIndex = TrackGroupIndex;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsStructureTracked_bIsTracked = CallFunc_IsStructureTracked_bIsTracked;
	Parms.CallFunc_IsStructureTracked_TrackGroupIndex = CallFunc_IsStructureTracked_TrackGroupIndex;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;
	Parms.CallFunc_AddNewStructureTrack_bWasAdded = CallFunc_AddNewStructureTrack_bWasAdded;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue = CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveRecipeTrack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              QuantityToRemove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRemoved                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewStackCount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TrackGroupIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RecipeId                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRecipeTracked_bIsTracked                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsRecipeTracked_TrackGroupIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::RemoveRecipeTrack(const struct FCraftingRecipeReference& RecipeReference, int32 QuantityToRemove, bool* bWasRemoved, int32 NewStackCount, int32 TrackGroupIndex, class FName RecipeId, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsRecipeTracked_bIsTracked, int32 CallFunc_IsRecipeTracked_TrackGroupIndex, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerState* CallFunc_GetPlayerState_PlayerState, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveRecipeTrack");

	Params::UBP_HUDGoalTrackingComponent_C_RemoveRecipeTrack_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.QuantityToRemove = QuantityToRemove;
	Parms.NewStackCount = NewStackCount;
	Parms.TrackGroupIndex = TrackGroupIndex;
	Parms.RecipeId = RecipeId;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsRecipeTracked_bIsTracked = CallFunc_IsRecipeTracked_bIsTracked;
	Parms.CallFunc_IsRecipeTracked_TrackGroupIndex = CallFunc_IsRecipeTracked_TrackGroupIndex;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasRemoved != nullptr)
		*bWasRemoved = Parms.bWasRemoved;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.AddRecipeTrack
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              TrackGroupIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RecipeId                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRecipeTracked_bIsTracked                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsRecipeTracked_TrackGroupIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddNewRecipeTrack_bWasAdded                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::AddRecipeTrack(const struct FCraftingRecipeReference& RecipeReference, int32 TrackGroupIndex, class FName RecipeId, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, const class FString& CallFunc_Conv_GuidToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsRecipeTracked_bIsTracked, int32 CallFunc_IsRecipeTracked_TrackGroupIndex, bool CallFunc_AddNewRecipeTrack_bWasAdded, class APlayerState* CallFunc_GetPlayerState_PlayerState, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "AddRecipeTrack");

	Params::UBP_HUDGoalTrackingComponent_C_AddRecipeTrack_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.TrackGroupIndex = TrackGroupIndex;
	Parms.RecipeId = RecipeId;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsRecipeTracked_bIsTracked = CallFunc_IsRecipeTracked_bIsTracked;
	Parms.CallFunc_IsRecipeTracked_TrackGroupIndex = CallFunc_IsRecipeTracked_TrackGroupIndex;
	Parms.CallFunc_AddNewRecipeTrack_bWasAdded = CallFunc_AddNewRecipeTrack_bWasAdded;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveQuestTrack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestReference                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasRemoved                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Internal_RemoveQuestTrack_bWasRemoved                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::RemoveQuestTrack(const struct FQuestAssetReference& QuestReference, bool* bWasRemoved, bool CallFunc_Internal_RemoveQuestTrack_bWasRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveQuestTrack");

	Params::UBP_HUDGoalTrackingComponent_C_RemoveQuestTrack_Params Parms{};

	Parms.QuestReference = QuestReference;
	Parms.CallFunc_Internal_RemoveQuestTrack_bWasRemoved = CallFunc_Internal_RemoveQuestTrack_bWasRemoved;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasRemoved != nullptr)
		*bWasRemoved = Parms.bWasRemoved;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.AddQuestTrack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasAdded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Internal_AddQuestTrack_bWasAdded                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::AddQuestTrack(const struct FOngoingTaskProgress& TaskProgress, bool* bWasAdded, bool CallFunc_Internal_AddQuestTrack_bWasAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "AddQuestTrack");

	Params::UBP_HUDGoalTrackingComponent_C_AddQuestTrack_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.CallFunc_Internal_AddQuestTrack_bWasAdded = CallFunc_Internal_AddQuestTrack_bWasAdded;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasAdded != nullptr)
		*bWasAdded = Parms.bWasAdded;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetQuestTracks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, struct FS_UI_HUD_GoalTrackGroup>QuestTracks                                                      (Parm, OutParm, ContainsInstancedReference)

void UBP_HUDGoalTrackingComponent_C::GetQuestTracks(TMap<class FName, struct FS_UI_HUD_GoalTrackGroup>* QuestTracks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetQuestTracks");

	Params::UBP_HUDGoalTrackingComponent_C_GetQuestTracks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QuestTracks != nullptr)
		*QuestTracks = Parms.QuestTracks;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Internal_RemoveQuestTrack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FQuestAssetReference        QuestReference                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasRemoved                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        QuestID                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Internal_RemoveQuestTrack(const struct FQuestAssetReference& QuestReference, bool* bWasRemoved, class FName QuestID, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Internal_RemoveQuestTrack");

	Params::UBP_HUDGoalTrackingComponent_C_Internal_RemoveQuestTrack_Params Parms{};

	Parms.QuestReference = QuestReference;
	Parms.QuestID = QuestID;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasRemoved != nullptr)
		*bWasRemoved = Parms.bWasRemoved;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Internal_AddQuestTrack
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasAdded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    NewTaskGroup                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EQuestTaskCompletionRequirementsTaskCompletionRequirement                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_UI_HUD_GoalTracking>QuestTaskTracks                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FQuestTaskPresentationData  QuestTaskPresentation                                            (Edit, BlueprintVisible)
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        QuestID                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      K2Node_MakeStruct_S_UI_HUD_GoalTracking                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData(None)
// bool                               CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      K2Node_MakeStruct_S_UI_HUD_GoalTracking_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Internal_AddQuestTrack(const struct FOngoingTaskProgress& TaskProgress, bool* bWasAdded, const struct FS_UI_HUD_GoalTrackGroup& NewTaskGroup, enum class EQuestTaskCompletionRequirements TaskCompletionRequirement, const TArray<struct FS_UI_HUD_GoalTracking>& QuestTaskTracks, const struct FQuestTaskPresentationData& QuestTaskPresentation, class UQuestTrackerComponent* QuestTracker, class FName QuestID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_UI_HUD_GoalTracking& K2Node_MakeStruct_S_UI_HUD_GoalTracking, int32 CallFunc_Array_Add_ReturnValue, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, const struct FS_UI_HUD_GoalTracking& K2Node_MakeStruct_S_UI_HUD_GoalTracking_1, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Internal_AddQuestTrack");

	Params::UBP_HUDGoalTrackingComponent_C_Internal_AddQuestTrack_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.NewTaskGroup = NewTaskGroup;
	Parms.TaskCompletionRequirement = TaskCompletionRequirement;
	Parms.QuestTaskTracks = QuestTaskTracks;
	Parms.QuestTaskPresentation = QuestTaskPresentation;
	Parms.QuestTracker = QuestTracker;
	Parms.QuestID = QuestID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup = K2Node_MakeStruct_S_UI_HUD_GoalTrackGroup;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTracking = K2Node_MakeStruct_S_UI_HUD_GoalTracking;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue;
	Parms.K2Node_MakeStruct_S_UI_HUD_GoalTracking_1 = K2Node_MakeStruct_S_UI_HUD_GoalTracking_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasAdded != nullptr)
		*bWasAdded = Parms.bWasAdded;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UpdateRecipeTracks
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             UpdatedEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              QuantityChange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     AllItems                                                         (Edit, BlueprintVisible)
// bool                               bWasUpdated                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTrackIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentGroupIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      CurrentTrackCopy                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_UI_HUD_GoalTracking>TracksCopy                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant       (ReferenceParm)
// int32                              CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_IsItemRelevantForConstraint_OutBranch                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::UpdateRecipeTracks(struct FInventoryEntry& UpdatedEntry, int32 QuantityChange, const TArray<struct FInventoryEntry>& AllItems, bool bWasUpdated, int32 CurrentTrackIndex, int32 CurrentGroupIndex, const struct FS_UI_HUD_GoalTracking& CurrentTrackCopy, const TArray<struct FS_UI_HUD_GoalTracking>& TracksCopy, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_UI_HUD_GoalTracking& CallFunc_Array_Get_Item, TArray<struct FInventoryEntry>& CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant, int32 CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UpdateRecipeTracks");

	Params::UBP_HUDGoalTrackingComponent_C_UpdateRecipeTracks_Params Parms{};

	Parms.UpdatedEntry = UpdatedEntry;
	Parms.QuantityChange = QuantityChange;
	Parms.AllItems = AllItems;
	Parms.bWasUpdated = bWasUpdated;
	Parms.CurrentTrackIndex = CurrentTrackIndex;
	Parms.CurrentGroupIndex = CurrentGroupIndex;
	Parms.CurrentTrackCopy = CurrentTrackCopy;
	Parms.TracksCopy = TracksCopy;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries = CallFunc_GetAllInventoryItemsRelevantToCrafting_InventoryEntries;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant;
	Parms.CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount = CallFunc_GetMaxItemCountFromFilteredEntries_MaxCount;
	Parms.CallFunc_IsItemRelevantForConstraint_OutBranch = CallFunc_IsItemRelevantForConstraint_OutBranch;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UpdateStructureTracks
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             UpdatedEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              QuantityChange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasUpdated                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTrackIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      CurrentTrackCopy                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_UI_HUD_GoalTracking>TracksCopy                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CurrentGroupIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTracking      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_HUD_GoalTrackGroup    CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_IsItemRelevantForConstraint_OutBranch                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::UpdateStructureTracks(struct FInventoryEntry& UpdatedEntry, int32 QuantityChange, bool bWasUpdated, int32 CurrentTrackIndex, const struct FS_UI_HUD_GoalTracking& CurrentTrackCopy, const TArray<struct FS_UI_HUD_GoalTracking>& TracksCopy, int32 CurrentGroupIndex, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FS_UI_HUD_GoalTracking& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UpdateStructureTracks");

	Params::UBP_HUDGoalTrackingComponent_C_UpdateStructureTracks_Params Parms{};

	Parms.UpdatedEntry = UpdatedEntry;
	Parms.QuantityChange = QuantityChange;
	Parms.bWasUpdated = bWasUpdated;
	Parms.CurrentTrackIndex = CurrentTrackIndex;
	Parms.CurrentTrackCopy = CurrentTrackCopy;
	Parms.TracksCopy = TracksCopy;
	Parms.CurrentGroupIndex = CurrentGroupIndex;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsItemRelevantForConstraint_OutBranch = CallFunc_IsItemRelevantForConstraint_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnEssencePouchItemRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuantityRemoved                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnEssencePouchItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 QuantityRemoved, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnEssencePouchItemRemoved");

	Params::UBP_HUDGoalTrackingComponent_C_OnEssencePouchItemRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.QuantityRemoved = QuantityRemoved;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnEssencePouchItemAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnEssencePouchItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnEssencePouchItemAdded");

	Params::UBP_HUDGoalTrackingComponent_C_OnEssencePouchItemAdded_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnBackpackItemRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuantityRemoved                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnBackpackItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 QuantityRemoved, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnBackpackItemRemoved");

	Params::UBP_HUDGoalTrackingComponent_C_OnBackpackItemRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.QuantityRemoved = QuantityRemoved;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnBackpackItemAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnBackpackItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnBackpackItemAdded");

	Params::UBP_HUDGoalTrackingComponent_C_OnBackpackItemAdded_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnCraftedItemReceived
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ReceivedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ReceivedRecipeQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveRecipeTrack_bWasRemoved                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnCraftedItemReceived(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity, bool CallFunc_RemoveRecipeTrack_bWasRemoved, const struct FGuid& CallFunc_GetID_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class APlayerState* CallFunc_GetPlayerState_PlayerState, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnCraftedItemReceived");

	Params::UBP_HUDGoalTrackingComponent_C_OnCraftedItemReceived_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.ReceivedItem = ReceivedItem;
	Parms.ReceivedRecipeQuantity = ReceivedRecipeQuantity;
	Parms.CallFunc_RemoveRecipeTrack_bWasRemoved = CallFunc_RemoveRecipeTrack_bWasRemoved;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.AddQuestTrackIfTracked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestTrackerComponent*      QuestTracker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Internal_AddQuestTrack_bWasAdded                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::AddQuestTrackIfTracked(class UQuestTrackerComponent* QuestTracker, const struct FOngoingTaskProgress& TaskProgress, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Internal_AddQuestTrack_bWasAdded, bool CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "AddQuestTrackIfTracked");

	Params::UBP_HUDGoalTrackingComponent_C_AddQuestTrackIfTracked_Params Parms{};

	Parms.QuestTracker = QuestTracker;
	Parms.TaskProgress = TaskProgress;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Internal_AddQuestTrack_bWasAdded = CallFunc_Internal_AddQuestTrack_bWasAdded;
	Parms.CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue = CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RefreshAllQuestTasks
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetAllTaskProgress_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOngoingTaskProgress>CallFunc_GetAllTaskProgress_OngoingTasks                         (ReferenceParm)
// TArray<struct FOngoingTaskProgress>CallFunc_GetAllTaskProgress_ReadyToCompleteTasks                 (ReferenceParm)
// class UQuestTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::RefreshAllQuestTasks(class UQuestTrackerComponent* QuestTracker, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerState* CallFunc_GetPlayerState_PlayerState, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetAllTaskProgress_self_CastInput, TArray<struct FOngoingTaskProgress>& CallFunc_GetAllTaskProgress_OngoingTasks, TArray<struct FOngoingTaskProgress>& CallFunc_GetAllTaskProgress_ReadyToCompleteTasks, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RefreshAllQuestTasks");

	Params::UBP_HUDGoalTrackingComponent_C_RefreshAllQuestTasks_Params Parms{};

	Parms.QuestTracker = QuestTracker;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_GetAllTaskProgress_self_CastInput = CallFunc_GetAllTaskProgress_self_CastInput;
	Parms.CallFunc_GetAllTaskProgress_OngoingTasks = CallFunc_GetAllTaskProgress_OngoingTasks;
	Parms.CallFunc_GetAllTaskProgress_ReadyToCompleteTasks = CallFunc_GetAllTaskProgress_ReadyToCompleteTasks;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnStructureCompleted
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              PieceId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    StructureReference                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        StructureId                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*CallFunc_GetCompositeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureAssetReference_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_OutStructureReference        (HasGetValueTypeHash)
// bool                               CallFunc_RemoveStructureTrack_bWasRemoved                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CallFunc_GetCompositePieceById_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>CallFunc_GetStructureAssetReference_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureAssetReference_IsValid_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_OutStructureReference_1      (HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnStructureCompleted(class AActor* OwningActor, int32 PieceId, const struct FStructureAssetReference& StructureReference, class FName StructureId, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, bool CallFunc_RemoveStructureTrack_bWasRemoved, class APlayerState* CallFunc_GetPlayerState_PlayerState, class UStructureCompositePiece* CallFunc_GetCompositePieceById_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> CallFunc_GetStructureAssetReference_self_CastInput, bool CallFunc_GetStructureAssetReference_IsValid_1, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnStructureCompleted");

	Params::UBP_HUDGoalTrackingComponent_C_OnStructureCompleted_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.PieceId = PieceId;
	Parms.StructureReference = StructureReference;
	Parms.StructureId = StructureId;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCompositeComponent_ReturnValue = CallFunc_GetCompositeComponent_ReturnValue;
	Parms.CallFunc_GetStructureAssetReference_IsValid = CallFunc_GetStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureAssetReference_OutStructureReference = CallFunc_GetStructureAssetReference_OutStructureReference;
	Parms.CallFunc_RemoveStructureTrack_bWasRemoved = CallFunc_RemoveStructureTrack_bWasRemoved;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_GetCompositePieceById_ReturnValue = CallFunc_GetCompositePieceById_ReturnValue;
	Parms.CallFunc_GetStructureAssetReference_self_CastInput = CallFunc_GetStructureAssetReference_self_CastInput;
	Parms.CallFunc_GetStructureAssetReference_IsValid_1 = CallFunc_GetStructureAssetReference_IsValid_1;
	Parms.CallFunc_GetStructureAssetReference_OutStructureReference_1 = CallFunc_GetStructureAssetReference_OutStructureReference_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.BindInventoryEvents
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TScriptInterface<class IItemContainer>EssencePouch                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInitialInventoryReceived_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_3                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::BindInventoryEvents(TScriptInterface<class IItemContainer> EssencePouch, TScriptInterface<class IItemContainer> Backpack, class UInventoryComponentBase* InventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetInitialInventoryReceived_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_GetFunctionName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "BindInventoryEvents");

	Params::UBP_HUDGoalTrackingComponent_C_BindInventoryEvents_Params Parms{};

	Parms.EssencePouch = EssencePouch;
	Parms.Backpack = Backpack;
	Parms.InventoryComponent = InventoryComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetInitialInventoryReceived_ReturnValue = CallFunc_GetInitialInventoryReceived_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_2 = CallFunc_GetFunctionName_ReturnValue_2;
	Parms.CallFunc_GetFunctionName_ReturnValue_3 = CallFunc_GetFunctionName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GetPlayerState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::GetPlayerState(class APlayerState** PlayerState, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GetPlayerState");

	Params::UBP_HUDGoalTrackingComponent_C_GetPlayerState_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerState != nullptr)
		*PlayerState = Parms.PlayerState;

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Update Quest Goal Tracking
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Update_Quest_Goal_Tracking(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Update Quest Goal Tracking");

	Params::UBP_HUDGoalTrackingComponent_C_Update_Quest_Goal_Tracking_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowingHUD                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayHUD(bool ShowingHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayHUD");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayHUD_Params Parms{};

	Parms.ShowingHUD = ShowingHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            PlayerCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IconDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "CreateMarker");

	Params::UBP_HUDGoalTrackingComponent_C_CreateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.PlayerCamera = PlayerCamera;
	Parms.Colour = Colour;
	Parms.IconDistance = IconDistance;
	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::RemoveMarker(class AActor* ActorToMark)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveMarker");

	Params::UBP_HUDGoalTrackingComponent_C_RemoveMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UpdateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             MarkerPrecision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ParticlesVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UpdateMarker");

	Params::UBP_HUDGoalTrackingComponent_C_UpdateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.MarkerPrecision = MarkerPrecision;
	Parms.ParticlesVisible = ParticlesVisible;
	Parms.ParticlesColor = ParticlesColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayFX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayCompass(bool bVisible, bool PlayFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayCompass");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayCompass_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.PlayFX = PlayFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     Quest_Notificator_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               DisplayToolTip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ToolTipIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ToolTipOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayQuestNotification");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayQuestNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Quest_Notificator_Info = Quest_Notificator_Info;
	Parms.DisplayToolTip = DisplayToolTip;
	Parms.ToolTipIcon = ToolTipIcon;
	Parms.ToolTipText = ToolTipText;
	Parms.ToolTipOnly = ToolTipOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                BackgroundColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayIngameTutorial");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayIngameTutorial_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;
	Parms.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairTypes        Crosshair_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CrosshairVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Crosshair_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     HitIndicator_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitIndicatorVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayCrosshair");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayCrosshair_Params Parms{};

	Parms.Crosshair_Type = Crosshair_Type;
	Parms.CrosshairVisibility = CrosshairVisibility;
	Parms.Crosshair_Color = Crosshair_Color;
	Parms.HitIndicator_Type = HitIndicator_Type;
	Parms.HitIndicatorVisibility = HitIndicatorVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IndicatorTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IndicatorColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               Hit_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayHitIndicator");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayHitIndicator_Params Parms{};

	Parms.IndicatorTime = IndicatorTime;
	Parms.IndicatorColor = IndicatorColor;
	Parms.Hit_Type = Hit_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::RemoveQuestNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveQuestNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRecoil                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayRecoil(bool IsRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayRecoil");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayRecoil_Params Parms{};

	Parms.IsRecoil = IsRecoil;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::DisplaySingleRecoil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplaySingleRecoil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo  Big_Loot_Notify_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayBigLootNotification");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayBigLootNotification_Params Parms{};

	Parms.Big_Loot_Notify_Info = Big_Loot_Notify_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::RemoveBigLootNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveBigLootNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayToolTip");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayToolTip_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::RemoveToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HUDGoalTrackingComponent_C::DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayGlobalNotification");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayGlobalNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::RemoveGlobalNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RemoveGlobalNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::CrosshairVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "CrosshairVisibility");

	Params::UBP_HUDGoalTrackingComponent_C_CrosshairVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_FocusChatInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::HUD_FocusChatInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_FocusChatInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_InputChatCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::HUD_InputChatCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_InputChatCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_Message_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_Message_SendToServer(const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_Message_SendToServer");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_Message_SendToServer_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_Message_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatMessage              ChatMessageS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_Message_ReceiveFromServer");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_Message_ReceiveFromServer_Params Parms{};

	Parms.ChatMessageS = ChatMessageS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_LeaveChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_LeaveChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_LeaveChannel");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_LeaveChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_JoinChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_JoinChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_JoinChannel");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_JoinChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_PM_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_PM_SendToServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_PM_SendToServer");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_PM_SendToServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_PM_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_PM_ReceiveFromServer");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_PM_ReceiveFromServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Away                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_SetStatus(bool Away)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_SetStatus");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_SetStatus_Params Parms{};

	Parms.Away = Away;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_ServerCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_ServerCommand(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_ServerCommand");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_ServerCommand_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_Yell_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_Yell_SendToServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_Yell_SendToServer");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_Yell_SendToServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Chat_Yell_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Chat_Yell_ReceiveFromServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Chat_Yell_ReceiveFromServer");

	Params::UBP_HUDGoalTrackingComponent_C_Chat_Yell_ReceiveFromServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Crosshair_ShowReloadText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Crosshair_ShowReloadText(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Crosshair_ShowReloadText");

	Params::UBP_HUDGoalTrackingComponent_C_Crosshair_ShowReloadText_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Crosshair_UpdateReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Crosshair_UpdateReload(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Crosshair_UpdateReload");

	Params::UBP_HUDGoalTrackingComponent_C_Crosshair_UpdateReload_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.ShowSpyglass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::ShowSpyglass(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "ShowSpyglass");

	Params::UBP_HUDGoalTrackingComponent_C_ShowSpyglass_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_UpdateInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionContext                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HUDGoalTrackingComponent_C::HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_UpdateInteractText");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_UpdateInteractText_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_DisplayApexCreature_BossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_DisplayApexCreature_BossBar(bool Display_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_DisplayApexCreature_BossBar");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_DisplayApexCreature_BossBar_Params Parms{};

	Parms.Display_ = Display_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_UpdateBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Whatever_                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HUDGoalTrackingComponent_C::HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_UpdateBossBar");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_UpdateBossBar_Params Parms{};

	Parms.Bar_Label = Bar_Label;
	Parms.Whatever_ = Whatever_;
	Parms.Health = Health;
	Parms.Bar_Header = Bar_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_AddNewBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Progress_Bar_Tint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Progress_Bar_Direction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Bar_Sub_Header                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HUDGoalTrackingComponent_C::HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_AddNewBossBar");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_AddNewBossBar_Params Parms{};

	Parms.Progress_Bar_Tint = Progress_Bar_Tint;
	Parms.Progress_Bar_Direction = Progress_Bar_Direction;
	Parms.Bar_Label = Bar_Label;
	Parms.Bar_Header = Bar_Header;
	Parms.Bar_Sub_Header = Bar_Sub_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_RemoveBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_RemoveBossBar(const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_RemoveBossBar");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_RemoveBossBar_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_Damage_CreateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Intensity__Amount_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_Damage_CreateIndicator");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_Damage_CreateIndicator_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.Time_to_Display = Time_to_Display;
	Parms.Damage_Intensity__Amount_ = Damage_Intensity__Amount_;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_UpdateActionProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_UpdateActionProgressBar");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_UpdateActionProgressBar_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.Label = Label;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_ChangeHudMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UI_HUD_Modes          HUD_Mode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_ChangeHudMode");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_ChangeHudMode_Params Parms{};

	Parms.HUD_Mode = HUD_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayEncounterUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      EncounterMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HUDGoalTrackingComponent_C::DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayEncounterUpdate");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayEncounterUpdate_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.EncounterMessage = EncounterMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_SetRealmStartTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RealmStartTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_SetRealmStartTime(double RealmStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_SetRealmStartTime");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_SetRealmStartTime_Params Parms{};

	Parms.RealmStartTime = RealmStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Crosshair_UpdateWeaponSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Crosshair_UpdateWeaponSpread(double Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Crosshair_UpdateWeaponSpread");

	Params::UBP_HUDGoalTrackingComponent_C_Crosshair_UpdateWeaponSpread_Params Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.ShowContextualControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   ContextualControlsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "ShowContextualControls");

	Params::UBP_HUDGoalTrackingComponent_C_ShowContextualControls_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.ContextualControlsData = ContextualControlsData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_Encounter_MiniMessage_Timed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      Message_Content                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_Encounter_MiniMessage_Timed");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_Encounter_MiniMessage_Timed_Params Parms{};

	Parms.Message_Content = Message_Content;
	Parms.TimeToDisplay = TimeToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_Encounter_MiniMessage_Pinned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      MessageContent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Pin_or_Unpin__Pin_true_will_add_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_Encounter_MiniMessage_Pinned");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_Encounter_MiniMessage_Pinned_Params Parms{};

	Parms.MessageContent = MessageContent;
	Parms.Pin_or_Unpin__Pin_true_will_add_ = Pin_or_Unpin__Pin_true_will_add_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_GeneralNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Remove_Manually                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_GeneralNotification");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_GeneralNotification_Params Parms{};

	Parms.Content = Content;
	Parms.Remove_Manually = Remove_Manually;
	Parms.Time_to_Display = Time_to_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_StatusEffect_TextNotificationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManuallyRemove_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_StatusEffect_TextNotificationUpdate");

	Params::UBP_HUDGoalTrackingComponent_C_HUD_StatusEffect_TextNotificationUpdate_Params Parms{};

	Parms.ManuallyRemove_ = ManuallyRemove_;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.HUD_StatusEffect_TextNotification_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::HUD_StatusEffect_TextNotification_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "HUD_StatusEffect_TextNotification_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UI_Spyglass_AdjustZoomLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::UI_Spyglass_AdjustZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UI_Spyglass_AdjustZoomLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UI_VFX_CraftingSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UI_VFX_CraftingSuccess");

	Params::UBP_HUDGoalTrackingComponent_C_UI_VFX_CraftingSuccess_Params Parms{};

	Parms.Location = Location;
	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UI_VFX_CC_ChangeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::UI_VFX_CC_ChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UI_VFX_CC_ChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.DisplayErrorNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HUDGoalTrackingComponent_C::DisplayErrorNotification(class FText MainText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "DisplayErrorNotification");

	Params::UBP_HUDGoalTrackingComponent_C_DisplayErrorNotification_Params Parms{};

	Parms.MainText = MainText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.FadeToBlack_andBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToStayBlack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::FadeToBlack_andBack(double TimeToStayBlack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "FadeToBlack_andBack");

	Params::UBP_HUDGoalTrackingComponent_C_FadeToBlack_andBack_Params Parms{};

	Parms.TimeToStayBlack = TimeToStayBlack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.FadeToBlack_Manual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Black_true__From_Black__False                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::FadeToBlack_Manual(bool To_Black_true__From_Black__False)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "FadeToBlack_Manual");

	Params::UBP_HUDGoalTrackingComponent_C_FadeToBlack_Manual_Params Parms{};

	Parms.To_Black_true__From_Black__False = To_Black_true__From_Black__False;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.BuildUX_Feedback_Invalid_Intersecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_CollisionFeedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_HUDGoalTrackingComponent_C::BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "BuildUX_Feedback_Invalid_Intersecting");

	Params::UBP_HUDGoalTrackingComponent_C_BuildUX_Feedback_Invalid_Intersecting_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.BuildUX_Feedback_Invalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_HUDGoalTrackingComponent_C::BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "BuildUX_Feedback_Invalid");

	Params::UBP_HUDGoalTrackingComponent_C_BuildUX_Feedback_Invalid_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.BuildUX_Feedback_RotationControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRotate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "BuildUX_Feedback_RotationControls");

	Params::UBP_HUDGoalTrackingComponent_C_BuildUX_Feedback_RotationControls_Params Parms{};

	Parms.CanRotate = CanRotate;
	Parms.CurrentRotation = CurrentRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.BuildUX_Feedback_HeightControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdjustHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Max                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Min                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "BuildUX_Feedback_HeightControls");

	Params::UBP_HUDGoalTrackingComponent_C_BuildUX_Feedback_HeightControls_Params Parms{};

	Parms.CanAdjustHeight = CanAdjustHeight;
	Parms.Height_Current = Height_Current;
	Parms.Height_Max = Height_Max;
	Parms.Height_Min = Height_Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.ClearNotificationCardQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::ClearNotificationCardQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "ClearNotificationCardQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.UpdateNextNotificationCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::UpdateNextNotificationCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "UpdateNextNotificationCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RefreshHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::RefreshHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RefreshHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.GameStateReady_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::GameStateReady_Begin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "GameStateReady_Begin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.OnGameStateReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::OnGameStateReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "OnGameStateReady");

	Params::UBP_HUDGoalTrackingComponent_C_OnGameStateReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.TrackCraftingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "TrackCraftingEntity");

	Params::UBP_HUDGoalTrackingComponent_C_TrackCraftingEntity_Params Parms{};

	Parms.CraftingRecipeRef = CraftingRecipeRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.TrackBuildingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureAssetRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "TrackBuildingEntity");

	Params::UBP_HUDGoalTrackingComponent_C_TrackBuildingEntity_Params Parms{};

	Parms.StructureAssetRef = StructureAssetRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Server_TrackCraft
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bIsAdding                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Server_TrackCraft(const struct FCraftingRecipeReference& RecipeReference, bool bIsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Server_TrackCraft");

	Params::UBP_HUDGoalTrackingComponent_C_Server_TrackCraft_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.bIsAdding = bIsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.Server_TrackStructure
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bIsAdding                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::Server_TrackStructure(const struct FStructureAssetReference& StructureReference, bool bIsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "Server_TrackStructure");

	Params::UBP_HUDGoalTrackingComponent_C_Server_TrackStructure_Params Parms{};

	Parms.StructureReference = StructureReference;
	Parms.bIsAdding = bIsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.ExecuteUbergraph_BP_HUDGoalTrackingComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShowingHUD                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_PlayerCharacter                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            K2Node_Event_PlayerCamera                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IconDistance                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Row                                                 (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_MarkerPrecision                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ParticlesVisible                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ParticlesColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayFX                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_Event_Quest_Notificator_Info                              (HasGetValueTypeHash)
// bool                               K2Node_Event_DisplayToolTip                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ToolTipIcon                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ToolTipText                                         (None)
// bool                               K2Node_Event_ToolTipOnly                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1_1                                              (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2_1                                              (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_BackgroundColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CrosshairTypes        K2Node_Event_Crosshair_Type                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CrosshairVisibility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Crosshair_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     K2Node_Event_HitIndicator_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HitIndicatorVisibility                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IndicatorTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_IndicatorColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               K2Node_Event_Hit_Type                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsRecoil                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BigLootNotificationInfo  K2Node_Event_Big_Loot_Notify_Info                                (HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1                                                (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2                                                (HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_TypeText                                            (None)
// class FText                        K2Node_Event_HeadlineText                                        (None)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_ChatMessage                                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_ChatMessage              K2Node_Event_ChatMessageS                                        (HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_4                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_3                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Away                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show_                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionUIContext       K2Node_Event_InteractionContext                                  (ConstParm)
// bool                               K2Node_Event_Display_                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label_1                                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_            (None)
// double                             K2Node_Event_Health                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header_1                                        (None)
// struct FLinearColor                K2Node_Event_Progress_Bar_Tint                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Event_Progress_Bar_Direction                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header                                          (None)
// class FText                        K2Node_Event_Bar_Sub_Header                                      (None)
// class FString                      K2Node_Event_Label_1                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FDamageEffectContextData    K2Node_Event_DamageContextData                                   (None)
// double                             K2Node_Event_Time_to_Display_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Damage_Intensity__Amount_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentProgress                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Label                                               (None)
// bool                               K2Node_Event_ShowImage                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Image                                               (HasGetValueTypeHash)
// enum class E_UI_HUD_Modes          K2Node_Event_HUD_Mode                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterUIDataInterface>K2Node_Event_EncounterData                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_EncounterMessage                                    (None)
// double                             K2Node_Event_RealmStartTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Spread                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   K2Node_Event_ContextualControlsData                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_Message_Content                                     (None)
// double                             K2Node_Event_TimeToDisplay_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_MessageContent                                      (None)
// bool                               K2Node_Event_Pin_or_Unpin__Pin_true_will_add_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content_1                                           (HasGetValueTypeHash)
// bool                               K2Node_Event_Remove_Manually                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time_to_Display                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ManuallyRemove_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TimeToDisplay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content                                             (HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            K2Node_Event_Quality                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MainText                                            (None)
// class FText                        K2Node_Event_BodyText                                            (None)
// double                             K2Node_Event_TimeToStayBlack                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_To_Black_true__From_Black__False                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback_CollisionK2Node_Event_Feedback_1                                          (ContainsInstancedReference)
// struct FStructurePlacementFeedback K2Node_Event_Feedback                                            (ContainsInstancedReference)
// bool                               K2Node_Event_CanRotate                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentRotation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CanAdjustHeight                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Current                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Max                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Min                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCraftingRecipeReference    K2Node_Event_CraftingRecipeRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureAssetRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_PlayerState_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FCraftingRecipeReference    K2Node_CustomEvent_RecipeReference                               (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsAdding_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_CustomEvent_StructureReference                            (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsAdding                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStructureTrack_bWasRemoved                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveRecipeTrack_bWasRemoved                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDGoalTrackingComponent_C::ExecuteUbergraph_BP_HUDGoalTrackingComponent(int32 EntryPoint, bool K2Node_Event_ShowingHUD, class AActor* K2Node_Event_ActorToMark_2, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, bool K2Node_Event_bVisible_1, bool K2Node_Event_PlayFX, double K2Node_Event_DisplayTime_3, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_2, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, bool K2Node_Event_IsRecoil, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, bool K2Node_Event_bVisible, const class FString& K2Node_Event_ChatMessage, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, int32 K2Node_Event_ChannelID_1, int32 K2Node_Event_ChannelID, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, bool K2Node_Event_Away, const class FString& K2Node_Event_message_2, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message, bool K2Node_Event_Show, double K2Node_Event_Time, bool K2Node_Event_Show_, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool K2Node_Event_Display_, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Label_1, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display_1, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay_1, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool K2Node_CustomEvent_Success, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, const struct FCraftingRecipeReference& K2Node_Event_CraftingRecipeRef, bool K2Node_Event_IsAdding_1, const struct FStructureAssetReference& K2Node_Event_StructureAssetRef, bool K2Node_Event_IsAdding, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerState* CallFunc_GetPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APlayerState* CallFunc_GetPlayerState_PlayerState_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FCraftingRecipeReference& K2Node_CustomEvent_RecipeReference, bool K2Node_CustomEvent_bIsAdding_1, const struct FStructureAssetReference& K2Node_CustomEvent_StructureReference, bool K2Node_CustomEvent_bIsAdding, bool CallFunc_RemoveStructureTrack_bWasRemoved, bool CallFunc_RemoveRecipeTrack_bWasRemoved, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "ExecuteUbergraph_BP_HUDGoalTrackingComponent");

	Params::UBP_HUDGoalTrackingComponent_C_ExecuteUbergraph_BP_HUDGoalTrackingComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ShowingHUD = K2Node_Event_ShowingHUD;
	Parms.K2Node_Event_ActorToMark_2 = K2Node_Event_ActorToMark_2;
	Parms.K2Node_Event_PlayerCharacter = K2Node_Event_PlayerCharacter;
	Parms.K2Node_Event_PlayerCamera = K2Node_Event_PlayerCamera;
	Parms.K2Node_Event_Colour_1 = K2Node_Event_Colour_1;
	Parms.K2Node_Event_IconDistance = K2Node_Event_IconDistance;
	Parms.K2Node_Event_Row = K2Node_Event_Row;
	Parms.K2Node_Event_ActorToMark_1 = K2Node_Event_ActorToMark_1;
	Parms.K2Node_Event_ActorToMark = K2Node_Event_ActorToMark;
	Parms.K2Node_Event_MarkerPrecision = K2Node_Event_MarkerPrecision;
	Parms.K2Node_Event_ParticlesVisible = K2Node_Event_ParticlesVisible;
	Parms.K2Node_Event_ParticlesColor = K2Node_Event_ParticlesColor;
	Parms.K2Node_Event_bVisible_1 = K2Node_Event_bVisible_1;
	Parms.K2Node_Event_PlayFX = K2Node_Event_PlayFX;
	Parms.K2Node_Event_DisplayTime_3 = K2Node_Event_DisplayTime_3;
	Parms.K2Node_Event_Quest_Notificator_Info = K2Node_Event_Quest_Notificator_Info;
	Parms.K2Node_Event_DisplayToolTip = K2Node_Event_DisplayToolTip;
	Parms.K2Node_Event_ToolTipIcon = K2Node_Event_ToolTipIcon;
	Parms.K2Node_Event_ToolTipText = K2Node_Event_ToolTipText;
	Parms.K2Node_Event_ToolTipOnly = K2Node_Event_ToolTipOnly;
	Parms.K2Node_Event_DisplayTime_2 = K2Node_Event_DisplayTime_2;
	Parms.K2Node_Event_Row1_1 = K2Node_Event_Row1_1;
	Parms.K2Node_Event_Row2_1 = K2Node_Event_Row2_1;
	Parms.K2Node_Event_BackgroundColor = K2Node_Event_BackgroundColor;
	Parms.K2Node_Event_Crosshair_Type = K2Node_Event_Crosshair_Type;
	Parms.K2Node_Event_CrosshairVisibility = K2Node_Event_CrosshairVisibility;
	Parms.K2Node_Event_Crosshair_Color = K2Node_Event_Crosshair_Color;
	Parms.K2Node_Event_HitIndicator_Type = K2Node_Event_HitIndicator_Type;
	Parms.K2Node_Event_HitIndicatorVisibility = K2Node_Event_HitIndicatorVisibility;
	Parms.K2Node_Event_IndicatorTime = K2Node_Event_IndicatorTime;
	Parms.K2Node_Event_IndicatorColor = K2Node_Event_IndicatorColor;
	Parms.K2Node_Event_Hit_Type = K2Node_Event_Hit_Type;
	Parms.K2Node_Event_IsRecoil = K2Node_Event_IsRecoil;
	Parms.K2Node_Event_Big_Loot_Notify_Info = K2Node_Event_Big_Loot_Notify_Info;
	Parms.K2Node_Event_DisplayTime_1 = K2Node_Event_DisplayTime_1;
	Parms.K2Node_Event_Row1 = K2Node_Event_Row1;
	Parms.K2Node_Event_Row2 = K2Node_Event_Row2;
	Parms.K2Node_Event_DisplayTime = K2Node_Event_DisplayTime;
	Parms.K2Node_Event_TypeText = K2Node_Event_TypeText;
	Parms.K2Node_Event_HeadlineText = K2Node_Event_HeadlineText;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_ChatMessage = K2Node_Event_ChatMessage;
	Parms.K2Node_Event_ChatMessageS = K2Node_Event_ChatMessageS;
	Parms.K2Node_Event_ChannelID_1 = K2Node_Event_ChannelID_1;
	Parms.K2Node_Event_ChannelID = K2Node_Event_ChannelID;
	Parms.K2Node_Event_PlayerID_1 = K2Node_Event_PlayerID_1;
	Parms.K2Node_Event_message_4 = K2Node_Event_message_4;
	Parms.K2Node_Event_PlayerID = K2Node_Event_PlayerID;
	Parms.K2Node_Event_message_3 = K2Node_Event_message_3;
	Parms.K2Node_Event_Away = K2Node_Event_Away;
	Parms.K2Node_Event_message_2 = K2Node_Event_message_2;
	Parms.K2Node_Event_message_1 = K2Node_Event_message_1;
	Parms.K2Node_Event_message = K2Node_Event_message;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_Event_Time = K2Node_Event_Time;
	Parms.K2Node_Event_Show_ = K2Node_Event_Show_;
	Parms.K2Node_Event_InteractionContext = K2Node_Event_InteractionContext;
	Parms.K2Node_Event_Display_ = K2Node_Event_Display_;
	Parms.K2Node_Event_Bar_Label_1 = K2Node_Event_Bar_Label_1;
	Parms.K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_ = K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_;
	Parms.K2Node_Event_Health = K2Node_Event_Health;
	Parms.K2Node_Event_Bar_Header_1 = K2Node_Event_Bar_Header_1;
	Parms.K2Node_Event_Progress_Bar_Tint = K2Node_Event_Progress_Bar_Tint;
	Parms.K2Node_Event_Progress_Bar_Direction = K2Node_Event_Progress_Bar_Direction;
	Parms.K2Node_Event_Bar_Label = K2Node_Event_Bar_Label;
	Parms.K2Node_Event_Bar_Header = K2Node_Event_Bar_Header;
	Parms.K2Node_Event_Bar_Sub_Header = K2Node_Event_Bar_Sub_Header;
	Parms.K2Node_Event_Label_1 = K2Node_Event_Label_1;
	Parms.K2Node_Event_DamageContextData = K2Node_Event_DamageContextData;
	Parms.K2Node_Event_Time_to_Display_1 = K2Node_Event_Time_to_Display_1;
	Parms.K2Node_Event_Damage_Intensity__Amount_ = K2Node_Event_Damage_Intensity__Amount_;
	Parms.K2Node_Event_Colour = K2Node_Event_Colour;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_CurrentProgress = K2Node_Event_CurrentProgress;
	Parms.K2Node_Event_Label = K2Node_Event_Label;
	Parms.K2Node_Event_ShowImage = K2Node_Event_ShowImage;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.K2Node_Event_HUD_Mode = K2Node_Event_HUD_Mode;
	Parms.K2Node_Event_EncounterData = K2Node_Event_EncounterData;
	Parms.K2Node_Event_EncounterMessage = K2Node_Event_EncounterMessage;
	Parms.K2Node_Event_RealmStartTime = K2Node_Event_RealmStartTime;
	Parms.K2Node_Event_Spread = K2Node_Event_Spread;
	Parms.K2Node_Event_IsVisible = K2Node_Event_IsVisible;
	Parms.K2Node_Event_ContextualControlsData = K2Node_Event_ContextualControlsData;
	Parms.K2Node_Event_Message_Content = K2Node_Event_Message_Content;
	Parms.K2Node_Event_TimeToDisplay_1 = K2Node_Event_TimeToDisplay_1;
	Parms.K2Node_Event_MessageContent = K2Node_Event_MessageContent;
	Parms.K2Node_Event_Pin_or_Unpin__Pin_true_will_add_ = K2Node_Event_Pin_or_Unpin__Pin_true_will_add_;
	Parms.K2Node_Event_Content_1 = K2Node_Event_Content_1;
	Parms.K2Node_Event_Remove_Manually = K2Node_Event_Remove_Manually;
	Parms.K2Node_Event_Time_to_Display = K2Node_Event_Time_to_Display;
	Parms.K2Node_Event_ManuallyRemove_ = K2Node_Event_ManuallyRemove_;
	Parms.K2Node_Event_TimeToDisplay = K2Node_Event_TimeToDisplay;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_Quality = K2Node_Event_Quality;
	Parms.K2Node_Event_MainText = K2Node_Event_MainText;
	Parms.K2Node_Event_BodyText = K2Node_Event_BodyText;
	Parms.K2Node_Event_TimeToStayBlack = K2Node_Event_TimeToStayBlack;
	Parms.K2Node_Event_To_Black_true__From_Black__False = K2Node_Event_To_Black_true__From_Black__False;
	Parms.K2Node_Event_Feedback_1 = K2Node_Event_Feedback_1;
	Parms.K2Node_Event_Feedback = K2Node_Event_Feedback;
	Parms.K2Node_Event_CanRotate = K2Node_Event_CanRotate;
	Parms.K2Node_Event_CurrentRotation = K2Node_Event_CurrentRotation;
	Parms.K2Node_Event_CanAdjustHeight = K2Node_Event_CanAdjustHeight;
	Parms.K2Node_Event_Height_Current = K2Node_Event_Height_Current;
	Parms.K2Node_Event_Height_Max = K2Node_Event_Height_Max;
	Parms.K2Node_Event_Height_Min = K2Node_Event_Height_Min;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base_1 = K2Node_DynamicCast_AsNWXGame_State_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.K2Node_Event_CraftingRecipeRef = K2Node_Event_CraftingRecipeRef;
	Parms.K2Node_Event_IsAdding_1 = K2Node_Event_IsAdding_1;
	Parms.K2Node_Event_StructureAssetRef = K2Node_Event_StructureAssetRef;
	Parms.K2Node_Event_IsAdding = K2Node_Event_IsAdding;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState_1 = CallFunc_GetPlayerState_PlayerState_1;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.K2Node_CustomEvent_RecipeReference = K2Node_CustomEvent_RecipeReference;
	Parms.K2Node_CustomEvent_bIsAdding_1 = K2Node_CustomEvent_bIsAdding_1;
	Parms.K2Node_CustomEvent_StructureReference = K2Node_CustomEvent_StructureReference;
	Parms.K2Node_CustomEvent_bIsAdding = K2Node_CustomEvent_bIsAdding;
	Parms.CallFunc_RemoveStructureTrack_bWasRemoved = CallFunc_RemoveStructureTrack_bWasRemoved;
	Parms.CallFunc_RemoveRecipeTrack_bWasRemoved = CallFunc_RemoveRecipeTrack_bWasRemoved;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.RecipeTracksUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::RecipeTracksUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "RecipeTracksUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.StructureTracksUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::StructureTracksUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "StructureTracksUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUDGoalTrackingComponent.BP_HUDGoalTrackingComponent_C.QuestTracksUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUDGoalTrackingComponent_C::QuestTracksUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDGoalTrackingComponent_C", "QuestTracksUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


