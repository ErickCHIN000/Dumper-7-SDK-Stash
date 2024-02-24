#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C
// (None)

class UClass* UWBP_Guidebook_FlatList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Guidebook_FlatList_C");

	return Clss;
}


// WBP_Guidebook_FlatList_C WBP_Guidebook_FlatList.Default__WBP_Guidebook_FlatList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Guidebook_FlatList_C* UWBP_Guidebook_FlatList_C::GetDefaultObj()
{
	static class UWBP_Guidebook_FlatList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Guidebook_FlatList_C*>(UWBP_Guidebook_FlatList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.BP_GetDesiredFocusTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Guidebook_FlatList_C::BP_GetDesiredFocusTarget(int32 CallFunc_GetNumItems_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Guidebook_FlatList_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.UnbindFromEntryEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_GuideBook_HorizontalThumb_C*LThumb                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         LDisplayedEntryWidgets                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)

void UWBP_Guidebook_FlatList_C::UnbindFromEntryEvents(class UWBP_GuideBook_HorizontalThumb_C* LThumb, const TArray<class UUserWidget*>& LDisplayedEntryWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "UnbindFromEntryEvents");

	Params::UWBP_Guidebook_FlatList_C_UnbindFromEntryEvents_Params Parms{};

	Parms.LThumb = LThumb;
	Parms.LDisplayedEntryWidgets = LDisplayedEntryWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.OnEntryReleased
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*LThumb                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::OnEntryReleased(class UUserWidget* Widget, class UWBP_GuideBook_HorizontalThumb_C* LThumb, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "OnEntryReleased");

	Params::UWBP_Guidebook_FlatList_C_OnEntryReleased_Params Parms{};

	Parms.Widget = Widget;
	Parms.LThumb = LThumb;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.OnEntryGenerated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*LThumb                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::OnEntryGenerated(class UUserWidget* Widget, class UWBP_GuideBook_HorizontalThumb_C* LThumb, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "OnEntryGenerated");

	Params::UWBP_Guidebook_FlatList_C_OnEntryGenerated_Params Parms{};

	Parms.Widget = Widget;
	Parms.LThumb = LThumb;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.OnEntriesFiltered
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              TotalFilteredResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::OnEntriesFiltered(struct FGameplayTag& CategoryTag, int32 TotalFilteredResults, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "OnEntriesFiltered");

	Params::UWBP_Guidebook_FlatList_C_OnEntriesFiltered_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.TotalFilteredResults = TotalFilteredResults;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   CallFunc_GetFilteredEntriesByCategory_OutEntries                 (ReferenceParm)

void UWBP_Guidebook_FlatList_C::Refresh(const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, TArray<class UNWXMenuDataEntry*>& CallFunc_GetFilteredEntriesByCategory_OutEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "Refresh");

	Params::UWBP_Guidebook_FlatList_C_Refresh_Params Parms{};

	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_GetFilteredEntriesByCategory_OutEntries = CallFunc_GetFilteredEntriesByCategory_OutEntries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.OnThumbHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::OnThumbHovered(bool Hovered, class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "OnThumbHovered");

	Params::UWBP_Guidebook_FlatList_C_OnThumbHovered_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.OnThumbDoubleClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::OnThumbDoubleClick(class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "OnThumbDoubleClick");

	Params::UWBP_Guidebook_FlatList_C_OnThumbDoubleClick_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.OnThumbSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::OnThumbSelected(class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "OnThumbSelected");

	Params::UWBP_Guidebook_FlatList_C_OnThumbSelected_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_FlatList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_FlatList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.DelayedAutoFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_FlatList_C::DelayedAutoFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "DelayedAutoFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.ExecuteUbergraph_WBP_Guidebook_FlatList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetLastSelectedEntryForCategory_ReturnValue             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue_1                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_HorizontalThumb_C*K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetMenuDataEntry_Entry                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::ExecuteUbergraph_WBP_Guidebook_FlatList(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetMenuDataEntry_Entry, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "ExecuteUbergraph_WBP_Guidebook_FlatList");

	Params::UWBP_Guidebook_FlatList_C_ExecuteUbergraph_WBP_Guidebook_FlatList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_GetLastSelectedEntryForCategory_ReturnValue = CallFunc_GetLastSelectedEntryForCategory_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue_1 = CallFunc_GetDisplayedEntryWidgets_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMenuDataEntry_Entry = CallFunc_GetMenuDataEntry_Entry;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.FlatList_ThumbHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hover                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::FlatList_ThumbHover__DelegateSignature(bool Hover, class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "FlatList_ThumbHover__DelegateSignature");

	Params::UWBP_Guidebook_FlatList_C_FlatList_ThumbHover__DelegateSignature_Params Parms{};

	Parms.Hover = Hover;
	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.FlatList_ThumbDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::FlatList_ThumbDoubleClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "FlatList_ThumbDoubleClicked__DelegateSignature");

	Params::UWBP_Guidebook_FlatList_C_FlatList_ThumbDoubleClicked__DelegateSignature_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C.FlatList_ThumbSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_FlatList_C::FlatList_ThumbSelected__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_FlatList_C", "FlatList_ThumbSelected__DelegateSignature");

	Params::UWBP_Guidebook_FlatList_C_FlatList_ThumbSelected__DelegateSignature_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


