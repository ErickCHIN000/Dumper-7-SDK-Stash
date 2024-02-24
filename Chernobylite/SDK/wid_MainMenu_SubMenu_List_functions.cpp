#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C
// (None)

class UClass* UWid_MainMenu_SubMenu_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_SubMenu_List_C");

	return Clss;
}


// wid_MainMenu_SubMenu_List_C wid_MainMenu_SubMenu_List.Default__wid_MainMenu_SubMenu_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_SubMenu_List_C* UWid_MainMenu_SubMenu_List_C::GetDefaultObj()
{
	static class UWid_MainMenu_SubMenu_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_SubMenu_List_C*>(UWid_MainMenu_SubMenu_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.PlayClickEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_C::PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "PlayClickEffect");

	Params::UWid_MainMenu_SubMenu_List_C_PlayClickEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.GetSelectedEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_MainMenu_SubMenu_List_Entry_C*SelectedEntry                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_SubMenu_List_Entry_C*K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_C::GetSelectedEntry(class UWid_MainMenu_SubMenu_List_Entry_C** SelectedEntry, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "GetSelectedEntry");

	Params::UWid_MainMenu_SubMenu_List_C_GetSelectedEntry_Params Parms{};

	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedEntry != nullptr)
		*SelectedEntry = Parms.SelectedEntry;

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.InitEntry
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_SubMenu_List_Entry_C*Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     EntryPadding                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>SelectableEntries                                                (Edit, BlueprintVisible)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetSelectedEntryIndex_CurrentlySelected                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_SubMenu_List_Entry_C*K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Add_NewItem_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SelectNewEntry_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_C::InitEntry(class UWid_MainMenu_SubMenu_List_Entry_C* Entry, bool IsVisible, const struct FMargin& EntryPadding, int32 NewLocalVar_0, const TArray<TScriptInterface<class ISelectableEntryInterace_C>>& SelectableEntries, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "InitEntry");

	Params::UWid_MainMenu_SubMenu_List_C_InitEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.IsVisible = IsVisible;
	Parms.EntryPadding = EntryPadding;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.SelectableEntries = SelectableEntries;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSelectedEntryIndex_CurrentlySelected = CallFunc_GetSelectedEntryIndex_CurrentlySelected;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_NewItem_CastInput = CallFunc_Array_Add_NewItem_CastInput;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SelectNewEntry_self_CastInput = CallFunc_SelectNewEntry_self_CastInput;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.AddBackEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Padding                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_SubMenu_List_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)

void UWid_MainMenu_SubMenu_List_C::AddBackEntry(bool IsVisible, const struct FMargin& Padding, class UWid_MainMenu_SubMenu_List_Entry_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "AddBackEntry");

	Params::UWid_MainMenu_SubMenu_List_C_AddBackEntry_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.Padding = Padding;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.ShowList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_SubMenu_List_Entry_C*K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_C::ShowList(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "ShowList");

	Params::UWid_MainMenu_SubMenu_List_C_ShowList_Params Parms{};

	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.PlayHideAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasMouseClick                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_SubMenu_List_Entry_C*K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_C::PlayHideAnimation(bool WasMouseClick, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "PlayHideAnimation");

	Params::UWid_MainMenu_SubMenu_List_C_PlayHideAnimation_Params Parms{};

	Parms.WasMouseClick = WasMouseClick;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.OnEntryClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_C::OnEntryClicked(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "OnEntryClicked");

	Params::UWid_MainMenu_SubMenu_List_C_OnEntryClicked_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.ClearEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_SubMenu_List_C::ClearEntries(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "ClearEntries");

	Params::UWid_MainMenu_SubMenu_List_C_ClearEntries_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.AddEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Padding                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>SelectableEntries                                                (Edit, BlueprintVisible)
// class UWid_MainMenu_SubMenu_List_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_C::AddEntry(class FText Text, bool IsVisible, const struct FMargin& Padding, int32 NewLocalVar_0, const TArray<TScriptInterface<class ISelectableEntryInterace_C>>& SelectableEntries, class UWid_MainMenu_SubMenu_List_Entry_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "AddEntry");

	Params::UWid_MainMenu_SubMenu_List_C_AddEntry_Params Parms{};

	Parms.Text = Text;
	Parms.IsVisible = IsVisible;
	Parms.Padding = Padding;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.SelectableEntries = SelectableEntries;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.EntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_C::EntryClicked__DelegateSignature(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_C", "EntryClicked__DelegateSignature");

	Params::UWid_MainMenu_SubMenu_List_C_EntryClicked__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


