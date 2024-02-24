#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_CraftingMenu.BPFL_CraftingMenu_C
// (None)

class UClass* UBPFL_CraftingMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_CraftingMenu_C");

	return Clss;
}


// BPFL_CraftingMenu_C BPFL_CraftingMenu.Default__BPFL_CraftingMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_CraftingMenu_C* UBPFL_CraftingMenu_C::GetDefaultObj()
{
	static class UBPFL_CraftingMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_CraftingMenu_C*>(UBPFL_CraftingMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_CraftingMenu.BPFL_CraftingMenu_C.GetItemsMatchingConstraint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingConstraintSlot     Constraint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsConstraintSatisfied                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ItemEntries                                                      (Parm, OutParm)
// TArray<struct FInventoryEntry>     LAllItems                                                        (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints(ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType(ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CraftingMenu_C::GetItemsMatchingConstraint(struct FCraftingConstraintSlot& Constraint, class UObject* __WorldContext, bool* IsConstraintSatisfied, TArray<struct FInventoryEntry>* ItemEntries, const TArray<struct FInventoryEntry>& LAllItems, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CraftingMenu_C", "GetItemsMatchingConstraint");

	Params::UBPFL_CraftingMenu_C_GetItemsMatchingConstraint_Params Parms{};

	Parms.Constraint = Constraint;
	Parms.__WorldContext = __WorldContext;
	Parms.LAllItems = LAllItems;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints = CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints;
	Parms.CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType = CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsConstraintSatisfied != nullptr)
		*IsConstraintSatisfied = Parms.IsConstraintSatisfied;

	if (ItemEntries != nullptr)
		*ItemEntries = std::move(Parms.ItemEntries);

}


// Function BPFL_CraftingMenu.BPFL_CraftingMenu_C.GetFilteredEntriesForContainer
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     EntriesToIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     OutEntries                                                       (Parm, OutParm)
// struct FInventoryEntry             CurrentFilterEntry                                               (Edit, BlueprintVisible)
// int32                              CurrentFilterIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CurrentIgnoredEntry                                              (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     EntriesToFilter                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CraftingMenu_C::GetFilteredEntriesForContainer(TScriptInterface<class IItemContainer> Container, TArray<struct FInventoryEntry>& EntriesToIgnore, class UObject* __WorldContext, TArray<struct FInventoryEntry>* OutEntries, const struct FInventoryEntry& CurrentFilterEntry, int32 CurrentFilterIndex, const struct FInventoryEntry& CurrentIgnoredEntry, const TArray<struct FInventoryEntry>& EntriesToFilter, int32 Temp_int_Array_Index_Variable, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CraftingMenu_C", "GetFilteredEntriesForContainer");

	Params::UBPFL_CraftingMenu_C_GetFilteredEntriesForContainer_Params Parms{};

	Parms.Container = Container;
	Parms.EntriesToIgnore = EntriesToIgnore;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentFilterEntry = CurrentFilterEntry;
	Parms.CurrentFilterIndex = CurrentFilterIndex;
	Parms.CurrentIgnoredEntry = CurrentIgnoredEntry;
	Parms.EntriesToFilter = EntriesToFilter;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEntries != nullptr)
		*OutEntries = std::move(Parms.OutEntries);

}


// Function BPFL_CraftingMenu.BPFL_CraftingMenu_C.CraftingMenu_AllSlotsSatisfied
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCraftingConstraintSlot>CraftingSlots                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bAllMet                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      OutUnmetSlots                                                    (Parm, OutParm)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     Inventory                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemConstraint>     Constraints                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     CacheItems                                                       (Edit, BlueprintVisible)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries_1                                   (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAllConstraintsMet_bAllMet                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_AreAllConstraintsMet_OutUnmetSlots                      (ReferenceParm)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CraftingMenu_C::CraftingMenu_AllSlotsSatisfied(TArray<struct FCraftingConstraintSlot>& CraftingSlots, class UObject* __WorldContext, bool* bAllMet, TArray<int32>* OutUnmetSlots, class ANWXPlayerController* PlayerController, class UInventoryComponentBase* Inventory, const TArray<struct FItemConstraint>& Constraints, const TArray<struct FInventoryEntry>& CacheItems, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Array_Index_Variable, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AreAllConstraintsMet_bAllMet, TArray<int32>& CallFunc_AreAllConstraintsMet_OutUnmetSlots, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CraftingMenu_C", "CraftingMenu_AllSlotsSatisfied");

	Params::UBPFL_CraftingMenu_C_CraftingMenu_AllSlotsSatisfied_Params Parms{};

	Parms.CraftingSlots = CraftingSlots;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayerController = PlayerController;
	Parms.Inventory = Inventory;
	Parms.Constraints = Constraints;
	Parms.CacheItems = CacheItems;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries_1 = CallFunc_GetAllItems_Entries_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AreAllConstraintsMet_bAllMet = CallFunc_AreAllConstraintsMet_bAllMet;
	Parms.CallFunc_AreAllConstraintsMet_OutUnmetSlots = CallFunc_AreAllConstraintsMet_OutUnmetSlots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllMet != nullptr)
		*bAllMet = Parms.bAllMet;

	if (OutUnmetSlots != nullptr)
		*OutUnmetSlots = std::move(Parms.OutUnmetSlots);

}


// Function BPFL_CraftingMenu.BPFL_CraftingMenu_C.CraftingMenu_FilterInventoryBySlotAndConstraints
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingConstraintSlot     SlotConstraints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     ItemsToIgnore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     EntriesMatchingConstraints                                       (Parm, OutParm)
// TArray<struct FInventoryEntry>     EntriesMatchingSlotType                                          (Parm, OutParm)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       SlotFilter                                                       (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     InventoryToFilter                                                (Edit, BlueprintVisible)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetFilteredEntriesForContainer_OutEntries               (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_GetFilteredEntriesForContainer_OutEntries_1             (ReferenceParm)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant       (ReferenceParm)

void UBPFL_CraftingMenu_C::CraftingMenu_FilterInventoryBySlotAndConstraints(const struct FCraftingConstraintSlot& SlotConstraints, TArray<struct FInventoryEntry>& ItemsToIgnore, class UObject* __WorldContext, TArray<struct FInventoryEntry>* EntriesMatchingConstraints, TArray<struct FInventoryEntry>* EntriesMatchingSlotType, class ANWXPlayerController* PlayerController, class UInventoryComponentBase* InventoryComponent, const struct FGameplayTagContainer& SlotFilter, const TArray<struct FInventoryEntry>& InventoryToFilter, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetFilteredEntriesForContainer_OutEntries, TArray<struct FInventoryEntry>& CallFunc_GetFilteredEntriesForContainer_OutEntries_1, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CraftingMenu_C", "CraftingMenu_FilterInventoryBySlotAndConstraints");

	Params::UBPFL_CraftingMenu_C_CraftingMenu_FilterInventoryBySlotAndConstraints_Params Parms{};

	Parms.SlotConstraints = SlotConstraints;
	Parms.ItemsToIgnore = ItemsToIgnore;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayerController = PlayerController;
	Parms.InventoryComponent = InventoryComponent;
	Parms.SlotFilter = SlotFilter;
	Parms.InventoryToFilter = InventoryToFilter;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_GetFilteredEntriesForContainer_OutEntries = CallFunc_GetFilteredEntriesForContainer_OutEntries;
	Parms.CallFunc_GetFilteredEntriesForContainer_OutEntries_1 = CallFunc_GetFilteredEntriesForContainer_OutEntries_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant;

	UObject::ProcessEvent(Func, &Parms);

	if (EntriesMatchingConstraints != nullptr)
		*EntriesMatchingConstraints = std::move(Parms.EntriesMatchingConstraints);

	if (EntriesMatchingSlotType != nullptr)
		*EntriesMatchingSlotType = std::move(Parms.EntriesMatchingSlotType);

}

}


