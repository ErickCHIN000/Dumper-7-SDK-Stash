#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ControllerButton.UI_ControllerButton_C
// (None)

class UClass* UUI_ControllerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ControllerButton_C");

	return Clss;
}


// UI_ControllerButton_C UI_ControllerButton.Default__UI_ControllerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ControllerButton_C* UUI_ControllerButton_C::GetDefaultObj()
{
	static class UUI_ControllerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ControllerButton_C*>(UUI_ControllerButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ControllerButton.UI_ControllerButton_C.SetTextCustomPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControllerButton_C::SetTextCustomPadding(class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "SetTextCustomPadding");

	Params::UUI_ControllerButton_C_SetTextCustomPadding_Params Parms{};

	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.SetGamepadPrompt_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  CallFunc_GetKeyAsIcon_Icon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetKeyAsIcon_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::SetGamepadPrompt_2(class UTexture2D* CallFunc_GetKeyAsIcon_Icon, bool CallFunc_GetKeyAsIcon_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "SetGamepadPrompt_2");

	Params::UUI_ControllerButton_C_SetGamepadPrompt_2_Params Parms{};

	Parms.CallFunc_GetKeyAsIcon_Icon = CallFunc_GetKeyAsIcon_Icon;
	Parms.CallFunc_GetKeyAsIcon_Found = CallFunc_GetKeyAsIcon_Found;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.SetDynamicPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Local_KeyAsString                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FKey                        Local_Key                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      Local_ActionName                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputAction>        CallFunc_GetAllRebindableInputActions_Actions                    (ReferenceParm, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::SetDynamicPrompt(const class FString& Local_KeyAsString, const struct FKey& Local_Key, const class FString& Local_ActionName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, TArray<struct FInputAction>& CallFunc_GetAllRebindableInputActions_Actions, const struct FInputAction& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "SetDynamicPrompt");

	Params::UUI_ControllerButton_C_SetDynamicPrompt_Params Parms{};

	Parms.Local_KeyAsString = Local_KeyAsString;
	Parms.Local_Key = Local_Key;
	Parms.Local_ActionName = Local_ActionName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue_1 = CallFunc_Key_IsGamepadKey_ReturnValue_1;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue_2 = CallFunc_Key_IsGamepadKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_GetAllRebindableInputActions_Actions = CallFunc_GetAllRebindableInputActions_Actions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.SetGamepadPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  CallFunc_GetKeyAsIcon_Icon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetKeyAsIcon_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::SetGamepadPrompt(class UTexture2D* CallFunc_GetKeyAsIcon_Icon, bool CallFunc_GetKeyAsIcon_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "SetGamepadPrompt");

	Params::UUI_ControllerButton_C_SetGamepadPrompt_Params Parms{};

	Parms.CallFunc_GetKeyAsIcon_Icon = CallFunc_GetKeyAsIcon_Icon;
	Parms.CallFunc_GetKeyAsIcon_Found = CallFunc_GetKeyAsIcon_Found;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.SetKBMPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsIcon_Icon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetKeyAsIcon_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UTexture2D*                  CallFunc_GetKeyAsIcon_Icon_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetKeyAsIcon_Found_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::SetKBMPrompt(bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* CallFunc_GetKeyAsIcon_Icon, bool CallFunc_GetKeyAsIcon_Found, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UTexture2D* CallFunc_GetKeyAsIcon_Icon_1, bool CallFunc_GetKeyAsIcon_Found_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "SetKBMPrompt");

	Params::UUI_ControllerButton_C_SetKBMPrompt_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetKeyAsIcon_Icon = CallFunc_GetKeyAsIcon_Icon;
	Parms.CallFunc_GetKeyAsIcon_Found = CallFunc_GetKeyAsIcon_Found;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetKeyAsIcon_Icon_1 = CallFunc_GetKeyAsIcon_Icon_1;
	Parms.CallFunc_GetKeyAsIcon_Found_1 = CallFunc_GetKeyAsIcon_Found_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InBool                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InBool2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_ControllerButton_C::Debug(class UObject* Object, bool InBool, bool InBool2, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "Debug");

	Params::UUI_ControllerButton_C_Debug_Params Parms{};

	Parms.Object = Object;
	Parms.InBool = InBool;
	Parms.InBool2 = InBool2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.SetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URichTextBlock*              RichText                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControllerButton_C::SetText(class URichTextBlock* RichText, class FText& InText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "SetText");

	Params::UUI_ControllerButton_C_SetText_Params Parms{};

	Parms.RichText = RichText;
	Parms.InText = InText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUI_ControllerButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnMouseButtonDown");

	Params::UUI_ControllerButton_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ControllerButton.UI_ControllerButton_C.GetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetButtonIcon_Texture                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControllerButton_C::GetIcon(class UTexture2D** Texture, class UTexture2D* CallFunc_GetButtonIcon_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "GetIcon");

	Params::UUI_ControllerButton_C_GetIcon_Params Parms{};

	Parms.CallFunc_GetButtonIcon_Texture = CallFunc_GetButtonIcon_Texture;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ControllerButton.UI_ControllerButton_C.UpdateImg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bKeyboardVersion                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::UpdateImg(bool bKeyboardVersion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "UpdateImg");

	Params::UUI_ControllerButton_C_UpdateImg_Params Parms{};

	Parms.bKeyboardVersion = bKeyboardVersion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.RefreshInputType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::RefreshInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "RefreshInputType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnKeyboardModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::OnKeyboardModeChanged_Set(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnKeyboardModeChanged_Set");

	Params::UUI_ControllerButton_C_OnKeyboardModeChanged_Set_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.ManualPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::ManualPreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "ManualPreConstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ControllerButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnMouseEnter");

	Params::UUI_ControllerButton_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ControllerButton_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnMouseLeave");

	Params::UUI_ControllerButton_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.UpdateHintText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayTextRight                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        DisplayTextLeft                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ControllerButton_C::UpdateHintText(class FText DisplayTextRight, class FText DisplayTextLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "UpdateHintText");

	Params::UUI_ControllerButton_C_UpdateHintText_Params Parms{};

	Parms.DisplayTextRight = DisplayTextRight;
	Parms.DisplayTextLeft = DisplayTextLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnKeyboardModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::OnKeyboardModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnKeyboardModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnChangeForcePS4Icons_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::OnChangeForcePS4Icons_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnChangeForcePS4Icons_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnChangeForcePS4Icons_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::OnChangeForcePS4Icons_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnChangeForcePS4Icons_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ControllerButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "PreConstruct");

	Params::UUI_ControllerButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.DynamicPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::DynamicPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "DynamicPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.DynamicManualPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControllerButton_C::DynamicManualPreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "DynamicManualPreConstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ControllerButton.UI_ControllerButton_C.ExecuteUbergraph_UI_ControllerButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bKeyboardVersion                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FText                        K2Node_CustomEvent_DisplayTextRight                              (None)
// class FText                        K2Node_CustomEvent_DisplayTextLeft                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIcon_Texture                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInKeyboardMode_InKeyboardMode                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIcon_Texture_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControllerButton_C::ExecuteUbergraph_UI_ControllerButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_CustomEvent_bKeyboardVersion, bool K2Node_CustomEvent_KeyboardMode, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText K2Node_CustomEvent_DisplayTextRight, class FText K2Node_CustomEvent_DisplayTextLeft, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class UTexture2D* CallFunc_GetIcon_Texture, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool K2Node_Event_IsDesignTime, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInKeyboardMode_InKeyboardMode, class UTexture2D* CallFunc_GetIcon_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "ExecuteUbergraph_UI_ControllerButton");

	Params::UUI_ControllerButton_C_ExecuteUbergraph_UI_ControllerButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_bKeyboardVersion = K2Node_CustomEvent_bKeyboardVersion;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_CustomEvent_DisplayTextRight = K2Node_CustomEvent_DisplayTextRight;
	Parms.K2Node_CustomEvent_DisplayTextLeft = K2Node_CustomEvent_DisplayTextLeft;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_GetIcon_Texture = CallFunc_GetIcon_Texture;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface = K2Node_DynamicCast_AsGame_Play_Game_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInKeyboardMode_InKeyboardMode = CallFunc_IsInKeyboardMode_InKeyboardMode;
	Parms.CallFunc_GetIcon_Texture_1 = CallFunc_GetIcon_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControllerButton.UI_ControllerButton_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControllerButton_C::OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ControllerButton_C", "OnButtonClicked__DelegateSignature");

	Params::UUI_ControllerButton_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


