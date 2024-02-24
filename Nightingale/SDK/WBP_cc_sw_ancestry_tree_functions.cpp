#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C
// (None)

class UClass* UWBP_cc_sw_ancestry_tree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_cc_sw_ancestry_tree_C");

	return Clss;
}


// WBP_cc_sw_ancestry_tree_C WBP_cc_sw_ancestry_tree.Default__WBP_cc_sw_ancestry_tree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_cc_sw_ancestry_tree_C* UWBP_cc_sw_ancestry_tree_C::GetDefaultObj()
{
	static class UWBP_cc_sw_ancestry_tree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_cc_sw_ancestry_tree_C*>(UWBP_cc_sw_ancestry_tree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.BP_GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_cc_sw_ancestry_tree_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_cc_sw_ancestry_tree_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.RefreshArchetypeIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetSelectedArchetype_SelectedArchetype                  (NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_ancestry_tree_C::RefreshArchetypeIcon(bool CallFunc_IsValid_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "RefreshArchetypeIcon");

	Params::UWBP_cc_sw_ancestry_tree_C_RefreshArchetypeIcon_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSelectedArchetype_SelectedArchetype = CallFunc_GetSelectedArchetype_SelectedArchetype;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_AncestryTree_Entry_C*CurrentEntry                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> FamilyTree                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetFamilyTree_FullFamilyTree                            (ReferenceParm)
// bool                               CallFunc_IsValidRowHandle_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_AncestryTree_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_AncestryTree_Entry_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_ancestry_tree_C::Refresh(int32 CurrentIndex, class UWBP_cc_sw_AncestryTree_Entry_C* CurrentEntry, const TArray<struct FDataTableRowHandle>& FamilyTree, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetFamilyTree_FullFamilyTree, bool CallFunc_IsValidRowHandle_IsValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_cc_sw_AncestryTree_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_cc_sw_AncestryTree_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "Refresh");

	Params::UWBP_cc_sw_ancestry_tree_C_Refresh_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentEntry = CurrentEntry;
	Parms.FamilyTree = FamilyTree;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFamilyTree_FullFamilyTree = CallFunc_GetFamilyTree_FullFamilyTree;
	Parms.CallFunc_IsValidRowHandle_IsValid = CallFunc_IsValidRowHandle_IsValid;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.TreeSlotSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AppearanceRow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              FamilyTreeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_ancestry_tree_C::TreeSlotSelected(const struct FDataTableRowHandle& AppearanceRow, int32 FamilyTreeIndex, bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "TreeSlotSelected");

	Params::UWBP_cc_sw_ancestry_tree_C_TreeSlotSelected_Params Parms{};

	Parms.AppearanceRow = AppearanceRow;
	Parms.FamilyTreeIndex = FamilyTreeIndex;
	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_ancestry_tree_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.UpdateAncestorSlotFromPicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AppearanceRow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_ancestry_tree_C::UpdateAncestorSlotFromPicker(const struct FDataTableRowHandle& AppearanceRow, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "UpdateAncestorSlotFromPicker");

	Params::UWBP_cc_sw_ancestry_tree_C_UpdateAncestorSlotFromPicker_Params Parms{};

	Parms.AppearanceRow = AppearanceRow;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.ExecuteUbergraph_WBP_cc_sw_ancestry_tree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_AncestryTree_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_AppearanceRow                                 (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_AncestryTree_Entry_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_cc_sw_AncestryTree_Entry_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_cc_sw_ancestry_tree_C::ExecuteUbergraph_WBP_cc_sw_ancestry_tree(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_cc_sw_AncestryTree_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_CustomEvent_AppearanceRow, int32 K2Node_CustomEvent_SlotIndex, class UWBP_cc_sw_AncestryTree_Entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UWBP_cc_sw_AncestryTree_Entry_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "ExecuteUbergraph_WBP_cc_sw_ancestry_tree");

	Params::UWBP_cc_sw_ancestry_tree_C_ExecuteUbergraph_WBP_cc_sw_ancestry_tree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_AppearanceRow = K2Node_CustomEvent_AppearanceRow;
	Parms.K2Node_CustomEvent_SlotIndex = K2Node_CustomEvent_SlotIndex;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_ancestry_tree.WBP_cc_sw_ancestry_tree_C.ED_TreeSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AppearanceRow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              FamilyTreeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_ancestry_tree_C::ED_TreeSlotSelected__DelegateSignature(const struct FDataTableRowHandle& AppearanceRow, int32 FamilyTreeIndex, bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_ancestry_tree_C", "ED_TreeSlotSelected__DelegateSignature");

	Params::UWBP_cc_sw_ancestry_tree_C_ED_TreeSlotSelected__DelegateSignature_Params Parms{};

	Parms.AppearanceRow = AppearanceRow;
	Parms.FamilyTreeIndex = FamilyTreeIndex;
	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}

}


