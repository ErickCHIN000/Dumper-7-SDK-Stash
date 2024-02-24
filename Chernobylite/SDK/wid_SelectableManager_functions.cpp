#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_SelectableManager.wid_SelectableManager_C
// (None)

class UClass* UWid_SelectableManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_SelectableManager_C");

	return Clss;
}


// wid_SelectableManager_C wid_SelectableManager.Default__wid_SelectableManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_SelectableManager_C* UWid_SelectableManager_C::GetDefaultObj()
{
	static class UWid_SelectableManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_SelectableManager_C*>(UWid_SelectableManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_SelectableManager.wid_SelectableManager_C.IncrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnythingSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectPreviouslySelected_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::IncrementValueReleased(bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "IncrementValueReleased");

	Params::UWid_SelectableManager_C_IncrementValueReleased_Params Parms{};

	Parms.CallFunc_IsAnythingSelected_ReturnValue = CallFunc_IsAnythingSelected_ReturnValue;
	Parms.CallFunc_SelectPreviouslySelected_Result = CallFunc_SelectPreviouslySelected_Result;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.DecrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnythingSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectPreviouslySelected_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::DecrementValueReleased(bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "DecrementValueReleased");

	Params::UWid_SelectableManager_C_DecrementValueReleased_Params Parms{};

	Parms.CallFunc_IsAnythingSelected_ReturnValue = CallFunc_IsAnythingSelected_ReturnValue;
	Parms.CallFunc_SelectPreviouslySelected_Result = CallFunc_SelectPreviouslySelected_Result;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.PlaySoundEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SelectableManager_C::PlaySoundEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "PlaySoundEffect");

	Params::UWid_SelectableManager_C_PlaySoundEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.SelectPreviouslySelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnythingSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::SelectPreviouslySelected(bool* Result, bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "SelectPreviouslySelected");

	Params::UWid_SelectableManager_C_SelectPreviouslySelected_Params Parms{};

	Parms.CallFunc_IsAnythingSelected_ReturnValue = CallFunc_IsAnythingSelected_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_SelectableManager.wid_SelectableManager_C.Is Entry Enabled
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Enabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntry_Entry                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::Is_Entry_Enabled(int32 Index, bool* Is_Enabled, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "Is Entry Enabled");

	Params::UWid_SelectableManager_C_Is_Entry_Enabled_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetEntry_Entry = CallFunc_GetEntry_Entry;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Enabled != nullptr)
		*Is_Enabled = Parms.Is_Enabled;

}


// Function wid_SelectableManager.wid_SelectableManager_C.Set Selectable Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Enabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntry_Entry                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::Set_Selectable_Enabled(int32 Index, bool Is_Enabled, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "Set Selectable Enabled");

	Params::UWid_SelectableManager_C_Set_Selectable_Enabled_Params Parms{};

	Parms.Index = Index;
	Parms.Is_Enabled = Is_Enabled;
	Parms.CallFunc_GetEntry_Entry = CallFunc_GetEntry_Entry;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.Set Selectables Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Enabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_DynamicCast_AsWidget                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::Set_Selectables_Enabled(bool Is_Enabled, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Array_Get_Item, bool K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UWidget* K2Node_DynamicCast_AsWidget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "Set Selectables Enabled");

	Params::UWid_SelectableManager_C_Set_Selectables_Enabled_Params Parms{};

	Parms.Is_Enabled = Is_Enabled;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWidget = K2Node_DynamicCast_AsWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.IsAnythingSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_SelectableManager_C::IsAnythingSelected(bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "IsAnythingSelected");

	Params::UWid_SelectableManager_C_IsAnythingSelected_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_SelectableManager.wid_SelectableManager_C.DecrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SelectPreviouslySelected_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnythingSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::DecrementValue(bool CallFunc_SelectPreviouslySelected_Result, bool CallFunc_IsAnythingSelected_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "DecrementValue");

	Params::UWid_SelectableManager_C_DecrementValue_Params Parms{};

	Parms.CallFunc_SelectPreviouslySelected_Result = CallFunc_SelectPreviouslySelected_Result;
	Parms.CallFunc_IsAnythingSelected_ReturnValue = CallFunc_IsAnythingSelected_ReturnValue;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.IncrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnythingSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectPreviouslySelected_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::IncrementValue(bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "IncrementValue");

	Params::UWid_SelectableManager_C_IncrementValue_Params Parms{};

	Parms.CallFunc_IsAnythingSelected_ReturnValue = CallFunc_IsAnythingSelected_ReturnValue;
	Parms.CallFunc_SelectPreviouslySelected_Result = CallFunc_SelectPreviouslySelected_Result;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.GetSelectedEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentlySelected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SelectableManager_C::GetSelectedEntryIndex(int32* CurrentlySelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "GetSelectedEntryIndex");

	Params::UWid_SelectableManager_C_GetSelectedEntryIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentlySelected != nullptr)
		*CurrentlySelected = Parms.CurrentlySelected;

}


// Function wid_SelectableManager.wid_SelectableManager_C.GetSelectedEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>Entry                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntry_Entry                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::GetSelectedEntry(TScriptInterface<class ISelectableEntryInterace_C>* Entry, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "GetSelectedEntry");

	Params::UWid_SelectableManager_C_GetSelectedEntry_Params Parms{};

	Parms.CallFunc_GetEntry_Entry = CallFunc_GetEntry_Entry;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;

}


// Function wid_SelectableManager.wid_SelectableManager_C.GetEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>Entry                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::GetEntry(int32 EntryIndex, TScriptInterface<class ISelectableEntryInterace_C>* Entry, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "GetEntry");

	Params::UWid_SelectableManager_C_GetEntry_Params Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;

}


// Function wid_SelectableManager.wid_SelectableManager_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnythingSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntry_Entry                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::Select(int32 EntryIndex, bool PostSoundEvent, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry, bool CallFunc_InRange_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "Select");

	Params::UWid_SelectableManager_C_Select_Params Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.PostSoundEvent = PostSoundEvent;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.CallFunc_IsAnythingSelected_ReturnValue = CallFunc_IsAnythingSelected_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEntry_Entry = CallFunc_GetEntry_Entry;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.SelectPrevious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectPreviouslySelected_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Entry_Enabled_Is_Enabled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SelectableManager_C::SelectPrevious(int32 NewIndex, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Is_Entry_Enabled_Is_Enabled, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "SelectPrevious");

	Params::UWid_SelectableManager_C_SelectPrevious_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectPreviouslySelected_Result = CallFunc_SelectPreviouslySelected_Result;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Is_Entry_Enabled_Is_Enabled = CallFunc_Is_Entry_Enabled_Is_Enabled;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.SelectNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectPreviouslySelected_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Entry_Enabled_Is_Enabled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SelectableManager_C::SelectNext(int32 NewIndex, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Is_Entry_Enabled_Is_Enabled, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "SelectNext");

	Params::UWid_SelectableManager_C_SelectNext_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectPreviouslySelected_Result = CallFunc_SelectPreviouslySelected_Result;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Is_Entry_Enabled_Is_Enabled = CallFunc_Is_Entry_Enabled_Is_Enabled;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.InitSelectableEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>SelectableEntries                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SetSelectableEntryOwner_Owner_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::InitSelectableEntries(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& SelectableEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SetSelectableEntryOwner_Owner_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "InitSelectableEntries");

	Params::UWid_SelectableManager_C_InitSelectableEntries_Params Parms{};

	Parms.SelectableEntries = SelectableEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_SetSelectableEntryOwner_Owner_CastInput = CallFunc_SetSelectableEntryOwner_Owner_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.SelectNewEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::SelectNewEntry(int32 EntryIndex, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "SelectNewEntry");

	Params::UWid_SelectableManager_C_SelectNewEntry_Params Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.ExecuteUbergraph_wid_SelectableManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_EntryIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PostSoundEvent                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SelectableManager_C::ExecuteUbergraph_wid_SelectableManager(int32 EntryPoint, int32 K2Node_Event_EntryIndex, bool K2Node_Event_PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "ExecuteUbergraph_wid_SelectableManager");

	Params::UWid_SelectableManager_C_ExecuteUbergraph_wid_SelectableManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EntryIndex = K2Node_Event_EntryIndex;
	Parms.K2Node_Event_PostSoundEvent = K2Node_Event_PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SelectableManager.wid_SelectableManager_C.OnSelectedEntryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SelectableManager_C::OnSelectedEntryChanged__DelegateSignature(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SelectableManager_C", "OnSelectedEntryChanged__DelegateSignature");

	Params::UWid_SelectableManager_C_OnSelectedEntryChanged__DelegateSignature_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


