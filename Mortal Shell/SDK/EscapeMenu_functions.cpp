#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EscapeMenu.EscapeMenu_C
// (None)

class UClass* UEscapeMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EscapeMenu_C");

	return Clss;
}


// EscapeMenu_C EscapeMenu.Default__EscapeMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEscapeMenu_C* UEscapeMenu_C::GetDefaultObj()
{
	static class UEscapeMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEscapeMenu_C*>(UEscapeMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EscapeMenu.EscapeMenu_C.HandleTextColorAndOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheckBox*                   InputCheckBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  InputText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  LocalText                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheckBox*                   LocalCheckBox                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UEscapeMenu_C::HandleTextColorAndOpacity(class UCheckBox* InputCheckBox, class UTextBlock* InputText, class UTextBlock* LocalText, class UCheckBox* LocalCheckBox, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "HandleTextColorAndOpacity");

	Params::UEscapeMenu_C_HandleTextColorAndOpacity_Params Parms{};

	Parms.InputCheckBox = InputCheckBox;
	Parms.InputText = InputText;
	Parms.LocalText = LocalText;
	Parms.LocalCheckBox = LocalCheckBox;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.PopulateNavArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCheckBox*>           K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UEscapeMenu_C::PopulateNavArray(TArray<class UCheckBox*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "PopulateNavArray");

	Params::UEscapeMenu_C_PopulateNavArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.HandleToggleGroups
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCheckBox*>           InputArray                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UCheckBox*                   InputOption                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheckBox*                   Local_Selected_Option                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCheckBox*>           Local_Array                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheckBox*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::HandleToggleGroups(TArray<class UCheckBox*>& InputArray, class UCheckBox* InputOption, class UCheckBox* Local_Selected_Option, const TArray<class UCheckBox*>& Local_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCheckBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "HandleToggleGroups");

	Params::UEscapeMenu_C_HandleToggleGroups_Params Parms{};

	Parms.InputArray = InputArray;
	Parms.InputOption = InputOption;
	Parms.Local_Selected_Option = Local_Selected_Option;
	Parms.Local_Array = Local_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.GetVisibility_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UEscapeMenu_C::GetVisibility_2(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "GetVisibility_2");

	Params::UEscapeMenu_C_GetVisibility_2_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EscapeMenu.EscapeMenu_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UEscapeMenu_C::GetVisibility_1(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "GetVisibility_1");

	Params::UEscapeMenu_C_GetVisibility_1_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EscapeMenu.EscapeMenu_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UEscapeMenu_C::GetVisibility_0(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "GetVisibility_0");

	Params::UEscapeMenu_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EscapeMenu.EscapeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscapeMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "Tick");

	Params::UEscapeMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.EventGetAnalogStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::EventGetAnalogStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "EventGetAnalogStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.ClickedButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::ClickedButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "ClickedButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.MenuButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::MenuButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "MenuButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.PrevInvRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::PrevInvRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "PrevInvRow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.NextInvRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::NextInvRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "NextInvRow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Continue_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Continue_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Quit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Quit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__CheckBox_Options_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::BndEvt__CheckBox_Options_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__CheckBox_Options_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UEscapeMenu_C_BndEvt__CheckBox_Options_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__CheckBox_Nav_Gameplay_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::BndEvt__CheckBox_Nav_Gameplay_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__CheckBox_Nav_Gameplay_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UEscapeMenu_C_BndEvt__CheckBox_Nav_Gameplay_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__CheckBox_Nav_Video_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::BndEvt__CheckBox_Nav_Video_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__CheckBox_Nav_Video_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UEscapeMenu_C_BndEvt__CheckBox_Nav_Video_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__CheckBox_Nav_Audio_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::BndEvt__CheckBox_Nav_Audio_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__CheckBox_Nav_Audio_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UEscapeMenu_C_BndEvt__CheckBox_Nav_Audio_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__CheckBox_Nav_Controls_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::BndEvt__CheckBox_Nav_Controls_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__CheckBox_Nav_Controls_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UEscapeMenu_C_BndEvt__CheckBox_Nav_Controls_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Controls_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Controls_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Controls_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Audio_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Audio_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Audio_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Video_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Video_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Video_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Gameplay_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Gameplay_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Gameplay_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Options_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Gameplay_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Gameplay_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Gameplay_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Video_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Video_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Video_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Audio_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Audio_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Audio_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__Button_Nav_Controls_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscapeMenu_C::BndEvt__Button_Nav_Controls_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__Button_Nav_Controls_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscapeMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "PreConstruct");

	Params::UEscapeMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.UnhoverAllMainMenuButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::UnhoverAllMainMenuButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "UnhoverAllMainMenuButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.SetHoveredMenuButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscapeMenu_C::SetHoveredMenuButton(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "SetHoveredMenuButton");

	Params::UEscapeMenu_C_SetHoveredMenuButton_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.NavigateMenuButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscapeMenu_C::NavigateMenuButtons(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "NavigateMenuButtons");

	Params::UEscapeMenu_C_NavigateMenuButtons_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.MenuPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::MenuPrev()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "MenuPrev");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.MenuNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::MenuNext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "MenuNext");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.UpdateMenuNav
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::UpdateMenuNav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "UpdateMenuNav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.NavigateActivePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscapeMenu_C::NavigateActivePanel(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "NavigateActivePanel");

	Params::UEscapeMenu_C_NavigateActivePanel_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.ActivePanelLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::ActivePanelLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "ActivePanelLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.ActivePanelRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::ActivePanelRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "ActivePanelRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.CloseBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscapeMenu_C::CloseBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "CloseBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeMenu.EscapeMenu_C.BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscapeMenu_C::BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature");

	Params::UEscapeMenu_C_BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeMenu.EscapeMenu_C.ExecuteUbergraph_EscapeMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickX                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickY                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckBox*                   K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_ButtonIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Delta_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_KeyBind_C*              K2Node_DynamicCast_AsWBP_Key_Bind                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_KeyBind_C*              K2Node_DynamicCast_AsWBP_Key_Bind_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscapeMenu_C::ExecuteUbergraph_EscapeMenu(int32 EntryPoint, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class UWBP_KeyBind_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Variable_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_ComponentBoundEvent_bIsChecked_4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_ComponentBoundEvent_bIsChecked_3, bool K2Node_ComponentBoundEvent_bIsChecked_2, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, class UCheckBox* K2Node_Select_Default, bool K2Node_Event_IsDesignTime, TArray<class FName>& CallFunc_Map_Keys_Keys, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 K2Node_CustomEvent_ButtonIndex, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 K2Node_CustomEvent_Delta_1, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Clamp_ReturnValue_1, class UTextBlock* K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Clamp_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue_3, TArray<class UTextBlock*>& K2Node_MakeArray_Array, class UTextBlock* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_2, int32 K2Node_CustomEvent_Delta, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWBP_KeyBind_C* K2Node_DynamicCast_AsWBP_Key_Bind, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Clamp_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UWBP_KeyBind_C* K2Node_DynamicCast_AsWBP_Key_Bind_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeMenu_C", "ExecuteUbergraph_EscapeMenu");

	Params::UEscapeMenu_C_ExecuteUbergraph_EscapeMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetInputAnalogStickState_StickX = CallFunc_GetInputAnalogStickState_StickX;
	Parms.CallFunc_GetInputAnalogStickState_StickY = CallFunc_GetInputAnalogStickState_StickY;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_4 = K2Node_ComponentBoundEvent_bIsChecked_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_3 = K2Node_ComponentBoundEvent_bIsChecked_3;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_ButtonIndex = K2Node_CustomEvent_ButtonIndex;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CustomEvent_Delta_1 = K2Node_CustomEvent_Delta_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Clamp_ReturnValue_2 = CallFunc_Clamp_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue_3 = CallFunc_Clamp_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Key_Bind = K2Node_DynamicCast_AsWBP_Key_Bind;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Clamp_ReturnValue_4 = CallFunc_Clamp_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Key_Bind_1 = K2Node_DynamicCast_AsWBP_Key_Bind_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


