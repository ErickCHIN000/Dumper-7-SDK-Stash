#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SaveRestoreWindow.UI_SaveRestoreWindow_C
// (None)

class UClass* UUI_SaveRestoreWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SaveRestoreWindow_C");

	return Clss;
}


// UI_SaveRestoreWindow_C UI_SaveRestoreWindow.Default__UI_SaveRestoreWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SaveRestoreWindow_C* UUI_SaveRestoreWindow_C::GetDefaultObj()
{
	static class UUI_SaveRestoreWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SaveRestoreWindow_C*>(UUI_SaveRestoreWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SetHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUI_SaveRestoreWindow_C::SetHeaderText(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SetHeaderText");

	Params::UUI_SaveRestoreWindow_C_SetHeaderText_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveRestoreWindow_C::NavRight(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavRight");

	Params::UUI_SaveRestoreWindow_C_NavRight_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveRestoreWindow_C::NavLeft(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavLeft");

	Params::UUI_SaveRestoreWindow_C_NavLeft_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.ConfirmRestore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveRestoreWindow_C::ConfirmRestore(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "ConfirmRestore");

	Params::UUI_SaveRestoreWindow_C_ConfirmRestore_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SaveRestoreRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::SaveRestoreRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SaveRestoreRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.CloseRestore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SaveMenu_Restore_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::CloseRestore(class UUI_SaveMenu_Restore_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "CloseRestore");

	Params::UUI_SaveRestoreWindow_C_CloseRestore_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.RestoreButtonSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      SelectedRestoreWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::RestoreButtonSelected(int32 Selection, int32 Slot, class UUI_SaveMenu_Restore_C* SelectedRestoreWidget, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "RestoreButtonSelected");

	Params::UUI_SaveRestoreWindow_C_RestoreButtonSelected_Params Parms{};

	Parms.Selection = Selection;
	Parms.Slot = Slot;
	Parms.SelectedRestoreWidget = SelectedRestoreWidget;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavBackListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_SaveRestoreWindow_C::NavBackListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavBackListen");

	Params::UUI_SaveRestoreWindow_C_NavBackListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavConfirmListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_SaveRestoreWindow_C::NavConfirmListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavConfirmListen");

	Params::UUI_SaveRestoreWindow_C_NavConfirmListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavRightListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_SaveRestoreWindow_C::NavRightListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavRightListen");

	Params::UUI_SaveRestoreWindow_C_NavRightListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavLeftListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_SaveRestoreWindow_C::NavLeftListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavLeftListen");

	Params::UUI_SaveRestoreWindow_C_NavLeftListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.OpenRestore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SaveMenu_Restore_C*      InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::OpenRestore(class UUI_SaveMenu_Restore_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "OpenRestore");

	Params::UUI_SaveRestoreWindow_C_OpenRestore_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SelectSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::SelectSlot(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SelectSlot");

	Params::UUI_SaveRestoreWindow_C_SelectSlot_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SetSlotAvailability_3
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDateTimeText_ReturnValue                             (None)

void UUI_SaveRestoreWindow_C::SetSlotAvailability_3(class FText CallFunc_GetDateTimeText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SetSlotAvailability_3");

	Params::UUI_SaveRestoreWindow_C_SetSlotAvailability_3_Params Parms{};

	Parms.CallFunc_GetDateTimeText_ReturnValue = CallFunc_GetDateTimeText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SetSlotAvailability_2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDateTimeText_ReturnValue                             (None)

void UUI_SaveRestoreWindow_C::SetSlotAvailability_2(class FText CallFunc_GetDateTimeText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SetSlotAvailability_2");

	Params::UUI_SaveRestoreWindow_C_SetSlotAvailability_2_Params Parms{};

	Parms.CallFunc_GetDateTimeText_ReturnValue = CallFunc_GetDateTimeText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SetSlotAvailability_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDateTimeText_ReturnValue                             (None)

void UUI_SaveRestoreWindow_C::SetSlotAvailability_1(class FText CallFunc_GetDateTimeText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SetSlotAvailability_1");

	Params::UUI_SaveRestoreWindow_C_SetSlotAvailability_1_Params Parms{};

	Parms.CallFunc_GetDateTimeText_ReturnValue = CallFunc_GetDateTimeText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavUpListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_SaveRestoreWindow_C::NavUpListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavUpListen");

	Params::UUI_SaveRestoreWindow_C_NavUpListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.NavDownListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_SaveRestoreWindow_C::NavDownListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "NavDownListen");

	Params::UUI_SaveRestoreWindow_C_NavDownListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Navigation_GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_SaveRestoreWindow_C::Navigation_GetIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Navigation_GetIndex");

	Params::UUI_SaveRestoreWindow_C_Navigation_GetIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.MaxIndex = MaxIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UButton*>             Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::GetButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "GetButtons");

	Params::UUI_SaveRestoreWindow_C_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Navigation_UpDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FButtonStyle                ButtonStyle_Normal                                               (Edit, BlueprintVisible)
// struct FButtonStyle                ButtonStyle_Hovered                                              (Edit, BlueprintVisible)
// class UButton*                     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetButtons_Array_1                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetButtons_Array_2                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Navigation_GetIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetButtons_Array_3                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveRestoreWindow_C::Navigation_UpDown(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UButton* Button, int32 Index, const struct FButtonStyle& ButtonStyle_Normal, const struct FButtonStyle& ButtonStyle_Hovered, class UButton* Local_Button, int32 Local_IndexSelected, class UButton* Local_SelectedButton, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array_1, TArray<class UButton*>& CallFunc_GetButtons_Array_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UButton* CallFunc_Array_Get_Item, TArray<class UButton*>& CallFunc_GetButtons_Array_3, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable, class UButton* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Navigation_UpDown");

	Params::UUI_SaveRestoreWindow_C_Navigation_UpDown_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Index = Index;
	Parms.ButtonStyle_Normal = ButtonStyle_Normal;
	Parms.ButtonStyle_Hovered = ButtonStyle_Hovered;
	Parms.Local_Button = Local_Button;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array_1 = CallFunc_GetButtons_Array_1;
	Parms.CallFunc_GetButtons_Array_2 = CallFunc_GetButtons_Array_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Navigation_GetIndex_ReturnValue = CallFunc_Navigation_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetButtons_Array_3 = CallFunc_GetButtons_Array_3;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.ListenForInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::ListenForInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "ListenForInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.CheckBackupAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSaveBackup_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSaveBackup_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSaveBackup_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveRestoreWindow_C::CheckBackupAvailable(const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_HasSaveBackup_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_HasSaveBackup_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, bool CallFunc_HasSaveBackup_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "CheckBackupAvailable");

	Params::UUI_SaveRestoreWindow_C_CheckBackupAvailable_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_HasSaveBackup_ReturnValue = CallFunc_HasSaveBackup_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_HasSaveBackup_ReturnValue_1 = CallFunc_HasSaveBackup_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue_2 = CallFunc_GetInstance_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_HasSaveBackup_ReturnValue_2 = CallFunc_HasSaveBackup_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.PopulateSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::PopulateSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "PopulateSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.GetDateTimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   InDateTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_3                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_4                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_SaveRestoreWindow_C::GetDateTimeText(const struct FDateTime& InDateTime, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_FixTime_ReturnValue_3, const class FString& CallFunc_FixTime_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "GetDateTimeText");

	Params::UUI_SaveRestoreWindow_C_GetDateTimeText_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_FixTime_ReturnValue = CallFunc_FixTime_ReturnValue;
	Parms.CallFunc_FixTime_ReturnValue_1 = CallFunc_FixTime_ReturnValue_1;
	Parms.CallFunc_FixTime_ReturnValue_2 = CallFunc_FixTime_ReturnValue_2;
	Parms.CallFunc_FixTime_ReturnValue_3 = CallFunc_FixTime_ReturnValue_3;
	Parms.CallFunc_FixTime_ReturnValue_4 = CallFunc_FixTime_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.FixTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_SaveRestoreWindow_C::FixTime(int32 Input, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "FixTime");

	Params::UUI_SaveRestoreWindow_C_FixTime_Params Parms{};

	Parms.Input = Input;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.GetPlaytimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   InDateTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_SaveRestoreWindow_C::GetPlaytimeText(const struct FDateTime& InDateTime, int32 NG, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& Temp_string_Variable, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "GetPlaytimeText");

	Params::UUI_SaveRestoreWindow_C_GetPlaytimeText_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.NG = NG;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_FixTime_ReturnValue = CallFunc_FixTime_ReturnValue;
	Parms.CallFunc_FixTime_ReturnValue_1 = CallFunc_FixTime_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FixTime_ReturnValue_2 = CallFunc_FixTime_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.SetSaveSlotTexts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SaveExist                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  Playtime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Tar                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Glimpse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Date                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSaveSlotInfo               SaveSlotInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Local_SaveExist                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_GetDateTimeText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_GetPlaytimeText_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        Temp_text_Variable_4                                             (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default_3                                          (None)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)

void UUI_SaveRestoreWindow_C::SetSaveSlotTexts(bool SaveExist, class UTextBlock* Playtime, class UTextBlock* Tar, class UTextBlock* Glimpse, class UTextBlock* Location, class UTextBlock* Date, struct FSaveSlotInfo& SaveSlotInfo, bool Local_SaveExist, class FText Temp_text_Variable, class FText CallFunc_GetDateTimeText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_GetPlaytimeText_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText Temp_text_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_3, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_4, bool Temp_bool_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default_3, bool Temp_bool_Variable_5, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "SetSaveSlotTexts");

	Params::UUI_SaveRestoreWindow_C_SetSaveSlotTexts_Params Parms{};

	Parms.SaveExist = SaveExist;
	Parms.Playtime = Playtime;
	Parms.Tar = Tar;
	Parms.Glimpse = Glimpse;
	Parms.Location = Location;
	Parms.Date = Date;
	Parms.SaveSlotInfo = SaveSlotInfo;
	Parms.Local_SaveExist = Local_SaveExist;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetDateTimeText_ReturnValue = CallFunc_GetDateTimeText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetPlaytimeText_ReturnValue = CallFunc_GetPlaytimeText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.LoadSaveSlotData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_SaveExist                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLocationNameFromMapName_Location                     (None)
// class FName                        CallFunc_Get_Shell_Bonding_Points_Name_Name                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaveSlotInfo               K2Node_MakeStruct_SaveSlotInfo                                   (HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::LoadSaveSlotData(bool Local_SaveExist, int32 Local_Index, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName Temp_name_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLocationNameFromMapName_Location, class FName CallFunc_Get_Shell_Bonding_Points_Name_Name, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FSaveSlotInfo& K2Node_MakeStruct_SaveSlotInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "LoadSaveSlotData");

	Params::UUI_SaveRestoreWindow_C_LoadSaveSlotData_Params Parms{};

	Parms.Local_SaveExist = Local_SaveExist;
	Parms.Local_Index = Local_Index;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocationNameFromMapName_Location = CallFunc_GetLocationNameFromMapName_Location;
	Parms.CallFunc_Get_Shell_Bonding_Points_Name_Name = CallFunc_Get_Shell_Bonding_Points_Name_Name;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_MakeStruct_SaveSlotInfo = K2Node_MakeStruct_SaveSlotInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.FadeInDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::FadeInDismiss(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "FadeInDismiss");

	Params::UUI_SaveRestoreWindow_C_FadeInDismiss_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Down_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Down_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Down_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Down_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Down_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Down_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Up_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Up_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Up_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Up_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Up_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Up_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Right_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Right_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Right_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Left_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Left_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Left_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Left_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Left_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Left_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Right_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Right_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Right_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Confirm_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Confirm_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Confirm_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Back_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Back_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Back_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.Nav_Back_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::Nav_Back_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "Nav_Back_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.OnCloseAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::OnCloseAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "OnCloseAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.OnOpenAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::OnOpenAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "OnOpenAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.RestoreInProgress_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::RestoreInProgress_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "RestoreInProgress_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.RestoreInProgress_Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::RestoreInProgress_Check()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "RestoreInProgress_Check");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__UI_SaveMenu_Restore_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::BndEvt__UI_SaveMenu_Restore_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__UI_SaveMenu_Restore_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UUI_SaveRestoreWindow_C_BndEvt__UI_SaveMenu_Restore_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Slot = Slot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__UI_SaveMenu_Restore_2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::BndEvt__UI_SaveMenu_Restore_2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__UI_SaveMenu_Restore_2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UUI_SaveRestoreWindow_C_BndEvt__UI_SaveMenu_Restore_2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Slot = Slot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__UI_SaveMenu_Restore_3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::BndEvt__UI_SaveMenu_Restore_3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__UI_SaveMenu_Restore_3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::UUI_SaveRestoreWindow_C_BndEvt__UI_SaveMenu_Restore_3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Slot = Slot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveRestoreWindow_C::BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature");

	Params::UUI_SaveRestoreWindow_C_BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveRestoreWindow.UI_SaveRestoreWindow_C.ExecuteUbergraph_UI_SaveRestoreWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsRestoreOperationInProgress_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Slot_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAllSaves_SaveExist                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveRestoreWindow_C::ExecuteUbergraph_UI_SaveRestoreWindow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsRestoreOperationInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 K2Node_ComponentBoundEvent_Index_2, int32 K2Node_ComponentBoundEvent_Slot_2, class UUI_SaveMenu_Restore_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Slot_1, class UUI_SaveMenu_Restore_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, int32 K2Node_ComponentBoundEvent_Slot, class UUI_SaveMenu_Restore_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_CheckAllSaves_SaveExist, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveRestoreWindow_C", "ExecuteUbergraph_UI_SaveRestoreWindow");

	Params::UUI_SaveRestoreWindow_C_ExecuteUbergraph_UI_SaveRestoreWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsRestoreOperationInProgress_ReturnValue = CallFunc_IsRestoreOperationInProgress_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Slot_2 = K2Node_ComponentBoundEvent_Slot_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_CheckAllSaves_SaveExist = CallFunc_CheckAllSaves_SaveExist;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


