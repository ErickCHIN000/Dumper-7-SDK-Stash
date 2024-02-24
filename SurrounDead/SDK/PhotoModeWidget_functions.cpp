#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PhotoModeWidget.PhotoModeWidget_C
// (None)

class UClass* UPhotoModeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotoModeWidget_C");

	return Clss;
}


// PhotoModeWidget_C PhotoModeWidget.Default__PhotoModeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhotoModeWidget_C* UPhotoModeWidget_C::GetDefaultObj()
{
	static class UPhotoModeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhotoModeWidget_C*>(UPhotoModeWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PhotoModeWidget.PhotoModeWidget_C.ShowHideCharacterRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::ShowHideCharacterRotation(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ShowHideCharacterRotation");

	Params::UPhotoModeWidget_C_ShowHideCharacterRotation_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.getScreenshotTitle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UPhotoModeWidget_C::GetScreenshotTitle(class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "getScreenshotTitle");

	Params::UPhotoModeWidget_C_GetScreenshotTitle_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.getAdjustedWorldDeltaSeconds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UPhotoModeWidget_C::GetAdjustedWorldDeltaSeconds(double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "getAdjustedWorldDeltaSeconds");

	Params::UPhotoModeWidget_C_GetAdjustedWorldDeltaSeconds_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 K2Node_Select_Default                                            (None)

struct FEventReply UPhotoModeWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool Temp_bool_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnKeyDown");

	Params::UPhotoModeWidget_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.HideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::HideMenu(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "HideMenu");

	Params::UPhotoModeWidget_C_HideMenu_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.UpDownCameraGamepadVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::UpDownCameraGamepadVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "UpDownCameraGamepadVisibility");

	Params::UPhotoModeWidget_C_UpDownCameraGamepadVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.LeftRightCameraGamepadVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::LeftRightCameraGamepadVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "LeftRightCameraGamepadVisibility");

	Params::UPhotoModeWidget_C_LeftRightCameraGamepadVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.SwapOptionGamepadVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::SwapOptionGamepadVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "SwapOptionGamepadVisibility");

	Params::UPhotoModeWidget_C_SwapOptionGamepadVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)

struct FEventReply UPhotoModeWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnMouseButtonDown");

	Params::UPhotoModeWidget_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.FocusDistanceVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::FocusDistanceVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "FocusDistanceVisibility");

	Params::UPhotoModeWidget_C_FocusDistanceVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)
// float                              CallFunc_PointerEvent_GetWheelDelta_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 K2Node_MakeStruct_EventReply_1                                   (None)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UPhotoModeWidget_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& K2Node_MakeStruct_EventReply, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply_1, double CallFunc_Multiply_IntFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnMouseWheel");

	Params::UPhotoModeWidget_C_OnMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;
	Parms.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply_1 = K2Node_MakeStruct_EventReply_1;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast = CallFunc_Multiply_IntFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.RemoveMaterialFromCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeightedBlendable>  TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWeightedBlendable          Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::RemoveMaterialFromCamera(TArray<struct FWeightedBlendable>& TargetArray, struct FWeightedBlendable& Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "RemoveMaterialFromCamera");

	Params::UPhotoModeWidget_C_RemoveMaterialFromCamera_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.Item = Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.GridVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::GridVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "GridVisibility");

	Params::UPhotoModeWidget_C_GridVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.GetFocusDistance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UPhotoModeWidget_C::GetFocusDistance(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetValue_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "GetFocusDistance");

	Params::UPhotoModeWidget_C_GetFocusDistance_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.ShowHidePhotoModeIsOnWarning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::ShowHidePhotoModeIsOnWarning(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ShowHidePhotoModeIsOnWarning");

	Params::UPhotoModeWidget_C_ShowHidePhotoModeIsOnWarning_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.OpenGalleryButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::OpenGalleryButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OpenGalleryButtonVisibility");

	Params::UPhotoModeWidget_C_OpenGalleryButtonVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.TakePictureButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::TakePictureButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "TakePictureButtonVisibility");

	Params::UPhotoModeWidget_C_TakePictureButtonVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.Up Down Left Right Buttons Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::Up_Down_Left_Right_Buttons_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Up Down Left Right Buttons Visibility");

	Params::UPhotoModeWidget_C_Up_Down_Left_Right_Buttons_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.MoveButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::MoveButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "MoveButtonVisibility");

	Params::UPhotoModeWidget_C_MoveButtonVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.ShowHideMouseButtonVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_ShowHideMouseTxtButton_ReturnValue                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::ShowHideMouseButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_ShowHideMouseTxtButton_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ShowHideMouseButtonVisibility");

	Params::UPhotoModeWidget_C_ShowHideMouseButtonVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_ShowHideMouseTxtButton_ReturnValue = CallFunc_ShowHideMouseTxtButton_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.FreeCameraButtonVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CameraModeTxt_ReturnValue                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeWidget_C::FreeCameraButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_CameraModeTxt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "FreeCameraButtonVisibility");

	Params::UPhotoModeWidget_C_FreeCameraButtonVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_CameraModeTxt_ReturnValue = CallFunc_CameraModeTxt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.ShowHideMouseTxtButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UPhotoModeWidget_C::ShowHideMouseTxtButton(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ShowHideMouseTxtButton");

	Params::UPhotoModeWidget_C_ShowHideMouseTxtButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.CameraModeTxt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UPhotoModeWidget_C::CameraModeTxt(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "CameraModeTxt");

	Params::UPhotoModeWidget_C_CameraModeTxt_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeWidget.PhotoModeWidget_C.ActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          ButtonToNotModify                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FButtonStyle                NormalTabStyle                                                   (Edit, BlueprintVisible)
// struct FButtonStyle                ActiveTabStyle                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::ActiveTab(int32 TabIndex, class UCommonButtonTab_C* ButtonToNotModify, const struct FButtonStyle& NormalTabStyle, const struct FButtonStyle& ActiveTabStyle, int32 Temp_int_Array_Index_Variable, class UCommonButtonTab_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ActiveTab");

	Params::UPhotoModeWidget_C_ActiveTab_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.ButtonToNotModify = ButtonToNotModify;
	Parms.NormalTabStyle = NormalTabStyle;
	Parms.ActiveTabStyle = ActiveTabStyle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.SetMenuIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotoModeComponentMenuIconsIcons                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::SetMenuIcons(const struct FPhotoModeComponentMenuIcons& Icons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "SetMenuIcons");

	Params::UPhotoModeWidget_C_SetMenuIcons_Params Parms{};

	Parms.Icons = Icons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.SendPhotoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotosData                 PhotoData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::SendPhotoData(const struct FPhotosData& PhotoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "SendPhotoData");

	Params::UPhotoModeWidget_C_SendPhotoData_Params Parms{};

	Parms.PhotoData = PhotoData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "PreConstruct");

	Params::UPhotoModeWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Initialization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::Initialization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Initialization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.GetAnyKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UPhotoModeWidget_C::GetAnyKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "GetAnyKey");

	Params::UPhotoModeWidget_C_GetAnyKey_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ChangeTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::ChangeTab(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ChangeTab");

	Params::UPhotoModeWidget_C_ChangeTab_Params Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Focus
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::Focus(class UWidget*& WidgetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Focus");

	Params::UPhotoModeWidget_C_Focus_Params Parms{};

	Parms.WidgetItem = WidgetItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPhotoModeWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnRemovedFromFocusPath");

	Params::UPhotoModeWidget_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPhotoModeWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnMouseEnter");

	Params::UPhotoModeWidget_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPhotoModeWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnMouseLeave");

	Params::UPhotoModeWidget_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Dispatchers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::Dispatchers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Dispatchers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.OnDestruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "OnDestruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.InterpolationUpdater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::InterpolationUpdater(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "InterpolationUpdater");

	Params::UPhotoModeWidget_C_InterpolationUpdater_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ChangeFreeCameraRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    RotationValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeWidget_C::ChangeFreeCameraRotation(const struct FRotator& RotationValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ChangeFreeCameraRotation");

	Params::UPhotoModeWidget_C_ChangeFreeCameraRotation_Params Parms{};

	Parms.RotationValue = RotationValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ChangeFreeCameraFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FOVValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::ChangeFreeCameraFOV(double FOVValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ChangeFreeCameraFOV");

	Params::UPhotoModeWidget_C_ChangeFreeCameraFOV_Params Parms{};

	Parms.FOVValue = FOVValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ChangeFreeCameraPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessValues                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhotoModeWidget_C::ChangeFreeCameraPP(const struct FPostProcessSettings& PostProcessValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ChangeFreeCameraPP");

	Params::UPhotoModeWidget_C_ChangeFreeCameraPP_Params Parms{};

	Parms.PostProcessValues = PostProcessValues;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_ChangeTab_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_ChangeTab_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_ChangeTab_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.SetFocusBasedOnTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::SetFocusBasedOnTab(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "SetFocusBasedOnTab");

	Params::UPhotoModeWidget_C_SetFocusBasedOnTab_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.TabToOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          CommonButtonPressed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::TabToOpen(int32 TabIndex, class UCommonButtonTab_C* CommonButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "TabToOpen");

	Params::UPhotoModeWidget_C_TabToOpen_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CommonButtonPressed = CommonButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_Mouse_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_Mouse_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_Mouse_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ShowMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::ShowMouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ShowMouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ResetShowMouseCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::ResetShowMouseCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ResetShowMouseCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_HideUI_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_HideUI_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_HideUI_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_FreeCamera_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_FreeCamera_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_FreeCamera_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.CloseFreeCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::CloseFreeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "CloseFreeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.UnblockInputMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::UnblockInputMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "UnblockInputMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BlockInputMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BlockInputMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BlockInputMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_Close_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_Close_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_Close_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_Reset_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_Reset_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_Reset_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_0_ResetDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_0_ResetDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_0_ResetDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__btnDown_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__btnDown_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__btnDown_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__btnUp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__btnUp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__btnUp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__btnUp_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__btnUp_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__btnUp_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__btnDown_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__btnDown_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__btnDown_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.MakeScreenshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::MakeScreenshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "MakeScreenshot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Register Photo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Save_New_Photo_Title                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Save_New_Photo_Photo_Full_Path                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Save_New_Photo_Thumbnail_Full_Path                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::Register_Photo(const class FString& Save_New_Photo_Title, const class FString& Save_New_Photo_Photo_Full_Path, const class FString& Save_New_Photo_Thumbnail_Full_Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Register Photo");

	Params::UPhotoModeWidget_C_Register_Photo_Params Parms{};

	Parms.Save_New_Photo_Title = Save_New_Photo_Title;
	Parms.Save_New_Photo_Photo_Full_Path = Save_New_Photo_Photo_Full_Path;
	Parms.Save_New_Photo_Thumbnail_Full_Path = Save_New_Photo_Thumbnail_Full_Path;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__CommandButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__CommandButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__CommandButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BlockScreenshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BlockScreenshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BlockScreenshot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Screenshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::Screenshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Screenshot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Command_Album_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::BndEvt__Command_Album_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Command_Album_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ResetKeyboardIcons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeWidget_C::ResetKeyboardIcons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ResetKeyboardIcons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FieldOfView_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FieldOfView_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FieldOfView_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FieldOfView_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__CameraRoll_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__CameraRoll_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__CameraRoll_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__CameraRoll_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "Tick");

	Params::UPhotoModeWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.CameraDistanceMouseWheel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::CameraDistanceMouseWheel(double Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "CameraDistanceMouseWheel");

	Params::UPhotoModeWidget_C_CameraDistanceMouseWheel_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__CameraDistance_K2Node_ComponentBoundEvent_16_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__CameraDistance_K2Node_ComponentBoundEvent_16_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__CameraDistance_K2Node_ComponentBoundEvent_16_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__CameraDistance_K2Node_ComponentBoundEvent_16_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.CameraLeftRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::CameraLeftRight(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "CameraLeftRight");

	Params::UPhotoModeWidget_C_CameraLeftRight_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.CameraUpDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::CameraUpDown(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "CameraUpDown");

	Params::UPhotoModeWidget_C_CameraUpDown_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__PhotoResolution_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__PhotoResolution_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__PhotoResolution_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__PhotoResolution_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.BndEvt__PhotoModeWidget_TimeDilation_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::BndEvt__PhotoModeWidget_TimeDilation_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "BndEvt__PhotoModeWidget_TimeDilation_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature");

	Params::UPhotoModeWidget_C_BndEvt__PhotoModeWidget_TimeDilation_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ExecuteUbergraph_PhotoModeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_1                            (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonButtonTab_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UCommonCheckbox_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// TArray<class USelectorSlider_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UCommonSlider_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_RotationValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             K2Node_CustomEvent_FOVValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_CustomEvent_PostProcessValues                             (None)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// TArray<class FText>                K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TabIndex                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          K2Node_Event_CommonButtonPressed                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APhotoModeFreeCamera_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Save_New_Photo_Title                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Save_New_Photo_Photo_Full_Path                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Save_New_Photo_Thumbnail_Full_Path            (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPhotosData                 K2Node_MakeStruct_PhotosData                                     (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Screenshot_File_IsValid_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Get_Screenshot_File_2D_Image                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Screenshot_File_Base_Filename                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Screenshot_File_Full_File_Path                      (ZeroConstructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessPressets        CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FileExists_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Screenshot__with_UI__Full_Screenshot_File_Path          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Screenshot__with_UI__PhotoName                          (ZeroConstructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FileExists_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FileExists_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_HighResScreenshot__without_UI__Full_Photo_Path          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_HighResScreenshot__without_UI__Photo_Name               (ZeroConstructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_27                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeThumbnail_Full_Thumbnail_Path                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeThumbnail_BaseThumbnailName                         (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_26                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessRendering       CallFunc_Array_Get_Item_3                                        (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_25                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_24                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DeltaTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionResponse      CallFunc_GetCollisionResponseToChannel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotoModeComponentGameLogo CallFunc_Array_Get_Item_4                                        (HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry_1                                        (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// bool                               CallFunc_IsUnderLocation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// double                             K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_WidgetItem                                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TabIndex                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotosData                 K2Node_Event_PhotoData                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonCheckbox_C*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_5                                         (ReferenceParm)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_6                                        (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_6                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_7                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_8                                         (ReferenceParm)
// double                             K2Node_ComponentBoundEvent_SliderValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USelectorSlider_C*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_2                            (NoDestructor)
// double                             K2Node_ComponentBoundEvent_Value_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_24                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_25                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_26                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_27                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_28                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_29                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_30                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_31                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_32                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_8                                        (NoDestructor)
// class UWidget*                     K2Node_Select_Default_11                                         (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_3                            (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_9                                        (NoDestructor)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_10                                       (NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonSlider_C*             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_38                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_39                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_40                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_41                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_CustomTimeDilation_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxValue_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Target_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_14           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_15           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_16           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_TargetArmLength_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::ExecuteUbergraph_PhotoModeWidget(int32 EntryPoint, double K2Node_ComponentBoundEvent_SliderValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable, const struct FIntPoint& CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UCommonButtonTab_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class UCommonCheckbox_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, TArray<class USelectorSlider_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, TArray<class UCommonSlider_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, int32 Temp_int_Variable, const struct FRotator& K2Node_CustomEvent_RotationValue, double K2Node_CustomEvent_FOVValue, const struct FPostProcessSettings& K2Node_CustomEvent_PostProcessValues, bool Temp_bool_Has_Been_Initd_Variable_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, TArray<class FText>& K2Node_MakeArray_Array_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, int32 K2Node_CustomEvent_Index, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Event_TabIndex, class UCommonButtonTab_C* K2Node_Event_CommonButtonPressed, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Array_Index_Variable, class UCommonButtonTab_C* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APhotoModeFreeCamera_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Variable_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable_6, bool Temp_bool_IsClosed_Variable_2, class FText Temp_text_Variable, bool CallFunc_Not_PreBool_ReturnValue_5, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, int32 Temp_int_Variable_7, int32 Temp_int_Array_Index_Variable_1, class UCommonButtonTab_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Variable_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, class AActor* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_6, bool Temp_bool_IsClosed_Variable_3, int32 CallFunc_Array_Length_ReturnValue_7, double Temp_real_Variable, int32 CallFunc_Array_Length_ReturnValue_8, double Temp_real_Variable_1, double CallFunc_Multiply_IntFloat_ReturnValue, double Temp_real_Variable_2, double CallFunc_Multiply_IntFloat_ReturnValue_1, double Temp_real_Variable_3, double Temp_real_Variable_4, double CallFunc_Multiply_IntFloat_ReturnValue_2, double Temp_real_Variable_5, double Temp_real_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_4, const class FString& K2Node_CustomEvent_Save_New_Photo_Title, const class FString& K2Node_CustomEvent_Save_New_Photo_Photo_Full_Path, const class FString& K2Node_CustomEvent_Save_New_Photo_Thumbnail_Full_Path, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FPhotosData& K2Node_MakeStruct_PhotosData, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_Get_Screenshot_File_IsValid_, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image, const class FString& CallFunc_Get_Screenshot_File_Base_Filename, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path, double Temp_real_Variable_7, double Temp_real_Variable_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FPostProcessPressets& CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, double Temp_real_Variable_9, bool CallFunc_FileExists_ReturnValue, const class FString& CallFunc_Screenshot__with_UI__Full_Screenshot_File_Path, const class FString& CallFunc_Screenshot__with_UI__PhotoName, double Temp_real_Variable_10, bool CallFunc_FileExists_ReturnValue_1, bool CallFunc_FileExists_ReturnValue_2, const class FString& CallFunc_HighResScreenshot__without_UI__Full_Photo_Path, const class FString& CallFunc_HighResScreenshot__without_UI__Photo_Name, double Temp_real_Variable_11, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool Temp_bool_IsClosed_Variable_4, int32 Temp_int_Variable_9, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, double K2Node_ComponentBoundEvent_SliderValue_27, const struct FIntPoint& K2Node_MakeStruct_IntPoint, const class FString& CallFunc_MakeThumbnail_Full_Thumbnail_Path, const class FString& CallFunc_MakeThumbnail_BaseThumbnailName, double K2Node_ComponentBoundEvent_SliderValue_26, bool Temp_bool_Has_Been_Initd_Variable_5, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_6, bool Temp_bool_IsClosed_Variable_5, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_Variable_2, const struct FPostProcessRendering& CallFunc_Array_Get_Item_3, bool CallFunc_Not_PreBool_ReturnValue_7, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool K2Node_ComponentBoundEvent_Value_10, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, double K2Node_ComponentBoundEvent_SliderValue_25, bool CallFunc_IsValid_ReturnValue_5, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double K2Node_ComponentBoundEvent_SliderValue_24, bool CallFunc_IsValid_ReturnValue_6, double K2Node_ComponentBoundEvent_SliderValue_23, double K2Node_ComponentBoundEvent_SliderValue_22, double K2Node_CustomEvent_DeltaTime, bool CallFunc_IsValid_ReturnValue_7, double K2Node_ComponentBoundEvent_SliderValue_21, bool CallFunc_IsValid_ReturnValue_8, double K2Node_ComponentBoundEvent_SliderValue_20, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_5, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double CallFunc_BreakVector4_X_3, double CallFunc_BreakVector4_Y_3, double CallFunc_BreakVector4_Z_3, double CallFunc_BreakVector4_W_3, double CallFunc_BreakVector4_X_4, double CallFunc_BreakVector4_Y_4, double CallFunc_BreakVector4_Z_4, double CallFunc_BreakVector4_W_4, double CallFunc_BreakVector4_X_5, double CallFunc_BreakVector4_Y_5, double CallFunc_BreakVector4_Z_5, double CallFunc_BreakVector4_W_5, double CallFunc_BreakVector4_X_6, double CallFunc_BreakVector4_Y_6, double CallFunc_BreakVector4_Z_6, double CallFunc_BreakVector4_W_6, double CallFunc_BreakVector4_X_7, double CallFunc_BreakVector4_Y_7, double CallFunc_BreakVector4_Z_7, double CallFunc_BreakVector4_W_7, double CallFunc_BreakVector4_X_8, double CallFunc_BreakVector4_Y_8, double CallFunc_BreakVector4_Z_8, double CallFunc_BreakVector4_W_8, double CallFunc_BreakVector4_X_9, double CallFunc_BreakVector4_Y_9, double CallFunc_BreakVector4_Z_9, double CallFunc_BreakVector4_W_9, double CallFunc_BreakVector4_X_10, double CallFunc_BreakVector4_Y_10, double CallFunc_BreakVector4_Z_10, double CallFunc_BreakVector4_W_10, double CallFunc_BreakVector4_X_11, double CallFunc_BreakVector4_Y_11, double CallFunc_BreakVector4_Z_11, double CallFunc_BreakVector4_W_11, double CallFunc_BreakVector4_X_12, double CallFunc_BreakVector4_Y_12, double CallFunc_BreakVector4_Z_12, double CallFunc_BreakVector4_W_12, double CallFunc_BreakVector4_X_13, double CallFunc_BreakVector4_Y_13, double CallFunc_BreakVector4_Z_13, double CallFunc_BreakVector4_W_13, double CallFunc_BreakVector4_X_14, double CallFunc_BreakVector4_Y_14, double CallFunc_BreakVector4_Z_14, double CallFunc_BreakVector4_W_14, double CallFunc_BreakVector4_X_15, double CallFunc_BreakVector4_Y_15, double CallFunc_BreakVector4_Z_15, double CallFunc_BreakVector4_W_15, double CallFunc_BreakVector4_X_16, double CallFunc_BreakVector4_Y_16, double CallFunc_BreakVector4_Z_16, double CallFunc_BreakVector4_W_16, double CallFunc_BreakVector4_X_17, double CallFunc_BreakVector4_Y_17, double CallFunc_BreakVector4_Z_17, double CallFunc_BreakVector4_W_17, double CallFunc_BreakVector4_X_18, double CallFunc_BreakVector4_Y_18, double CallFunc_BreakVector4_Z_18, double CallFunc_BreakVector4_W_18, double CallFunc_BreakVector4_X_19, double CallFunc_BreakVector4_Y_19, double CallFunc_BreakVector4_Z_19, double CallFunc_BreakVector4_W_19, double CallFunc_BreakVector4_X_20, double CallFunc_BreakVector4_Y_20, double CallFunc_BreakVector4_Z_20, double CallFunc_BreakVector4_W_20, double CallFunc_BreakVector4_X_21, double CallFunc_BreakVector4_Y_21, double CallFunc_BreakVector4_Z_21, double CallFunc_BreakVector4_W_21, double CallFunc_BreakVector4_X_22, double CallFunc_BreakVector4_Y_22, double CallFunc_BreakVector4_Z_22, double CallFunc_BreakVector4_W_22, double CallFunc_BreakVector4_X_23, double CallFunc_BreakVector4_Y_23, double CallFunc_BreakVector4_Z_23, double CallFunc_BreakVector4_W_23, double K2Node_ComponentBoundEvent_SliderValue_19, bool CallFunc_IsValid_ReturnValue_9, double K2Node_ComponentBoundEvent_SliderValue_18, double K2Node_ComponentBoundEvent_SliderValue_17, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_6, double CallFunc_BreakVector4_X_24, double CallFunc_BreakVector4_Y_24, double CallFunc_BreakVector4_Z_24, double CallFunc_BreakVector4_W_24, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, double K2Node_ComponentBoundEvent_SliderValue_16, double K2Node_ComponentBoundEvent_Value_9, int32 CallFunc_FTrunc_ReturnValue, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_10, double K2Node_ComponentBoundEvent_SliderValue_15, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool K2Node_ComponentBoundEvent_Value_8, class AActor* K2Node_Select_Default_1, TArray<class AActor*>& K2Node_MakeArray_Array_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, enum class ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, int32 Temp_int_Array_Index_Variable_5, const struct FPhotoModeComponentGameLogo& CallFunc_Array_Get_Item_4, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, bool CallFunc_IsUnderLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, double K2Node_ComponentBoundEvent_Value_7, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_7, double K2Node_Select_Default_2, class FText K2Node_Select_Default_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, double K2Node_Select_Default_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, double K2Node_Select_Default_5, double K2Node_Select_Default_6, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, double CallFunc_BreakVector4_X_25, double CallFunc_BreakVector4_Y_25, double CallFunc_BreakVector4_Z_25, double CallFunc_BreakVector4_W_25, double CallFunc_BreakVector4_X_26, double CallFunc_BreakVector4_Y_26, double CallFunc_BreakVector4_Z_26, double CallFunc_BreakVector4_W_26, double CallFunc_BreakVector4_X_27, double CallFunc_BreakVector4_Y_27, double CallFunc_BreakVector4_Z_27, double CallFunc_BreakVector4_W_27, double CallFunc_BreakVector4_X_28, double CallFunc_BreakVector4_Y_28, double CallFunc_BreakVector4_Z_28, double CallFunc_BreakVector4_W_28, double K2Node_Select_Default_7, double CallFunc_BreakVector4_X_29, double CallFunc_BreakVector4_Y_29, double CallFunc_BreakVector4_Z_29, double CallFunc_BreakVector4_W_29, double CallFunc_BreakVector4_X_30, double CallFunc_BreakVector4_Y_30, double CallFunc_BreakVector4_Z_30, double CallFunc_BreakVector4_W_30, double K2Node_Select_Default_8, double CallFunc_BreakVector4_X_31, double CallFunc_BreakVector4_Y_31, double CallFunc_BreakVector4_Z_31, double CallFunc_BreakVector4_W_31, double CallFunc_BreakVector4_X_32, double CallFunc_BreakVector4_Y_32, double CallFunc_BreakVector4_Z_32, double CallFunc_BreakVector4_W_32, double CallFunc_BreakVector4_X_33, double CallFunc_BreakVector4_Y_33, double CallFunc_BreakVector4_Z_33, double CallFunc_BreakVector4_W_33, double K2Node_Select_Default_9, double CallFunc_BreakVector4_X_34, double CallFunc_BreakVector4_Y_34, double CallFunc_BreakVector4_Z_34, double CallFunc_BreakVector4_W_34, double CallFunc_BreakVector4_X_35, double CallFunc_BreakVector4_Y_35, double CallFunc_BreakVector4_Z_35, double CallFunc_BreakVector4_W_35, double CallFunc_BreakVector4_X_36, double CallFunc_BreakVector4_Y_36, double CallFunc_BreakVector4_Z_36, double CallFunc_BreakVector4_W_36, class UWidget* K2Node_CustomEvent_WidgetItem, double K2Node_Select_Default_10, bool CallFunc_IsValid_ReturnValue_12, int32 K2Node_CustomEvent_TabIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FKey& K2Node_CustomEvent_Key, bool K2Node_Event_IsDesignTime, const struct FPhotosData& K2Node_Event_PhotoData, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Array_Index_Variable_6, class UCommonCheckbox_C* CallFunc_Array_Get_Item_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_13, double K2Node_ComponentBoundEvent_SliderValue_14, bool CallFunc_IsValid_ReturnValue_14, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_2, const struct FVector4& CallFunc_MakeVector4_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_15, float CallFunc_GetValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_1, double K2Node_ComponentBoundEvent_SliderValue_13, const struct FVector4& CallFunc_MakeVector4_ReturnValue_4, const struct FVector4& CallFunc_MakeVector4_ReturnValue_5, const struct FVector4& CallFunc_MakeVector4_ReturnValue_6, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_GetValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_16, int32 CallFunc_FTrunc_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_2, double K2Node_ComponentBoundEvent_SliderValue_12, const struct FVector4& CallFunc_MakeVector4_ReturnValue_7, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_8, const struct FVector4& CallFunc_MakeVector4_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, float CallFunc_GetValue_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_17, int32 CallFunc_FTrunc_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess_3, double K2Node_ComponentBoundEvent_SliderValue_11, const struct FVector4& CallFunc_MakeVector4_ReturnValue_10, const struct FVector4& CallFunc_MakeVector4_ReturnValue_11, const struct FVector4& CallFunc_MakeVector4_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_IsClosed_Variable_6, int32 Temp_int_Loop_Counter_Variable_7, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_9, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, float CallFunc_GetValue_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_4, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, bool Temp_bool_IsClosed_Variable_7, bool CallFunc_IsValid_ReturnValue_20, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_8, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_21, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, bool CallFunc_IsValid_ReturnValue_22, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_5, const struct FWeightedBlendable& CallFunc_Array_Get_Item_6, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_6, int32 CallFunc_Array_Length_ReturnValue_9, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_7, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue_8, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_7, int32 CallFunc_Array_Length_ReturnValue_11, double K2Node_ComponentBoundEvent_SliderValue_10, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_8, double K2Node_ComponentBoundEvent_SliderValue_9, int32 CallFunc_Array_Length_ReturnValue_12, double K2Node_ComponentBoundEvent_SliderValue_8, double K2Node_ComponentBoundEvent_SliderValue_7, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Array_Add_ReturnValue, double K2Node_ComponentBoundEvent_Value_6, int32 CallFunc_FTrunc_ReturnValue_6, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool K2Node_SwitchInteger_CmpSuccess_5, float CallFunc_GetValue_ReturnValue_4, float CallFunc_GetValue_ReturnValue_5, int32 Temp_int_Array_Index_Variable_7, class USelectorSlider_C* CallFunc_Array_Get_Item_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, double K2Node_ComponentBoundEvent_SliderValue_6, bool CallFunc_IsValid_ReturnValue_23, double CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_7, bool CallFunc_Not_PreBool_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_24, double K2Node_ComponentBoundEvent_SliderValue_5, double K2Node_ComponentBoundEvent_SliderValue_4, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_26, double K2Node_ComponentBoundEvent_SliderValue_3, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_2, double K2Node_ComponentBoundEvent_Value_5, int32 CallFunc_FTrunc_ReturnValue_7, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_2, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, bool K2Node_SwitchInteger_CmpSuccess_6, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, bool CallFunc_EqualEqual_KeyKey_ReturnValue_24, bool CallFunc_EqualEqual_KeyKey_ReturnValue_25, bool CallFunc_EqualEqual_KeyKey_ReturnValue_26, bool CallFunc_EqualEqual_KeyKey_ReturnValue_27, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_28, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_29, bool CallFunc_EqualEqual_KeyKey_ReturnValue_30, bool CallFunc_EqualEqual_KeyKey_ReturnValue_31, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_EqualEqual_KeyKey_ReturnValue_32, bool CallFunc_BooleanOR_ReturnValue_17, float CallFunc_K2_GetScalarParameterValue_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_6, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_7, double CallFunc_BreakVector2D_Y_7, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_28, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_GetIsEnabled_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, class UWidget* Temp_object_Variable_1, double K2Node_ComponentBoundEvent_Value_4, int32 CallFunc_FTrunc_ReturnValue_8, int32 CallFunc_FTrunc_ReturnValue_9, int32 CallFunc_FTrunc_ReturnValue_10, int32 Temp_int_Variable_10, int32 Temp_int_Array_Index_Variable_8, const struct FWeightedBlendable& CallFunc_Array_Get_Item_8, class UWidget* K2Node_Select_Default_11, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_30, int32 Temp_int_Loop_Counter_Variable_9, double K2Node_ComponentBoundEvent_SliderValue_2, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_12, bool CallFunc_Array_RemoveItem_ReturnValue, double K2Node_ComponentBoundEvent_Value_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_11, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_31, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_GetIsEnabled_ReturnValue_1, double K2Node_CustomEvent_Delta, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_7, double K2Node_ComponentBoundEvent_SliderValue_1, bool CallFunc_BooleanAND_ReturnValue_8, double K2Node_CustomEvent_Value_1, double K2Node_CustomEvent_Value, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, int32 Temp_int_Array_Index_Variable_9, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FWeightedBlendable& CallFunc_Array_Get_Item_9, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_2, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_9, int32 Temp_int_Array_Index_Variable_10, bool Temp_bool_Has_Been_Initd_Variable_8, const struct FWeightedBlendable& CallFunc_Array_Get_Item_10, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3, bool K2Node_DynamicCast_bSuccess_3, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_BreakVector_X_4, double CallFunc_BreakVector_Y_4, double CallFunc_BreakVector_Z_4, double CallFunc_BreakVector_X_5, double CallFunc_BreakVector_Y_5, double CallFunc_BreakVector_Z_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_10, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character_1, bool Temp_bool_IsClosed_Variable_8, bool K2Node_ComponentBoundEvent_Value_2, bool CallFunc_IsValid_ReturnValue_32, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_33, bool CallFunc_IsValid_ReturnValue_34, bool K2Node_ComponentBoundEvent_Value_1, bool CallFunc_IsValid_ReturnValue_35, int32 Temp_int_Loop_Counter_Variable_11, bool CallFunc_Less_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_13, double K2Node_ComponentBoundEvent_Value, int32 Temp_int_Array_Index_Variable_11, int32 CallFunc_FTrunc_ReturnValue_12, class UCommonSlider_C* CallFunc_Array_Get_Item_11, bool K2Node_SwitchInteger_CmpSuccess_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_36, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character_2, bool CallFunc_IsValid_ReturnValue_37, bool CallFunc_K2_SetActorRotation_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_38, bool CallFunc_IsValid_ReturnValue_39, const struct FIntPoint& K2Node_MakeStruct_IntPoint_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint_2, const struct FIntPoint& K2Node_MakeStruct_IntPoint_3, double CallFunc_FInterpTo_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_9, const struct FIntPoint& K2Node_MakeStruct_IntPoint_4, const struct FRotator& CallFunc_RInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, int32 CallFunc_Array_Add_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool Temp_bool_IsClosed_Variable_9, bool CallFunc_IsValid_ReturnValue_40, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, bool CallFunc_IsValid_ReturnValue_41, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_2, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast, float K2Node_VariableSet_CustomTimeDilation_ImplicitCast, float CallFunc_SetMaxValue_InValue_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast, float K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast, float K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast, float CallFunc_VInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast_1, float K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast, float K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_2, float K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast, float K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast, float K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast, double CallFunc_Initialize_DefaultValue_ImplicitCast, double CallFunc_Initialize_DefaultValue_ImplicitCast_1, double CallFunc_Initialize_DefaultValue_ImplicitCast_2, double CallFunc_Initialize_DefaultValue_ImplicitCast_3, double CallFunc_Initialize_DefaultValue_ImplicitCast_4, double CallFunc_Initialize_DefaultValue_ImplicitCast_5, double CallFunc_Initialize_DefaultValue_ImplicitCast_6, double CallFunc_Initialize_DefaultValue_ImplicitCast_7, double CallFunc_Initialize_DefaultValue_ImplicitCast_8, double CallFunc_Initialize_DefaultValue_ImplicitCast_9, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_2, double CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast_2, float CallFunc_SetValue_InValue_ImplicitCast_3, double CallFunc_FTrunc_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, double CallFunc_FTrunc_A_ImplicitCast_1, double CallFunc_FTrunc_A_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, double CallFunc_FTrunc_A_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_10, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, double CallFunc_ChangeValue_Value_ImplicitCast, double CallFunc_ChangeValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_11, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_12, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_13, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_14, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_15, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_16, double CallFunc_ChangeValue_Value_ImplicitCast_2, double CallFunc_ChangeValue_Value_ImplicitCast_3, float K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast, double CallFunc_Initialize_DefaultValue_ImplicitCast_10, float K2Node_VariableSet_TargetArmLength_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ExecuteUbergraph_PhotoModeWidget");

	Params::UPhotoModeWidget_C_ExecuteUbergraph_PhotoModeWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SliderValue = K2Node_ComponentBoundEvent_SliderValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_ = CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.K2Node_MakeStruct_WeightedBlendable_1 = K2Node_MakeStruct_WeightedBlendable_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_RotationValue = K2Node_CustomEvent_RotationValue;
	Parms.K2Node_CustomEvent_FOVValue = K2Node_CustomEvent_FOVValue;
	Parms.K2Node_CustomEvent_PostProcessValues = K2Node_CustomEvent_PostProcessValues;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_TabIndex = K2Node_Event_TabIndex;
	Parms.K2Node_Event_CommonButtonPressed = K2Node_Event_CommonButtonPressed;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.K2Node_CustomEvent_Save_New_Photo_Title = K2Node_CustomEvent_Save_New_Photo_Title;
	Parms.K2Node_CustomEvent_Save_New_Photo_Photo_Full_Path = K2Node_CustomEvent_Save_New_Photo_Photo_Full_Path;
	Parms.K2Node_CustomEvent_Save_New_Photo_Thumbnail_Full_Path = K2Node_CustomEvent_Save_New_Photo_Thumbnail_Full_Path;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_MakeStruct_PhotosData = K2Node_MakeStruct_PhotosData;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_Get_Screenshot_File_IsValid_ = CallFunc_Get_Screenshot_File_IsValid_;
	Parms.CallFunc_Get_Screenshot_File_2D_Image = CallFunc_Get_Screenshot_File_2D_Image;
	Parms.CallFunc_Get_Screenshot_File_Base_Filename = CallFunc_Get_Screenshot_File_Base_Filename;
	Parms.CallFunc_Get_Screenshot_File_Full_File_Path = CallFunc_Get_Screenshot_File_Full_File_Path;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.CallFunc_FileExists_ReturnValue = CallFunc_FileExists_ReturnValue;
	Parms.CallFunc_Screenshot__with_UI__Full_Screenshot_File_Path = CallFunc_Screenshot__with_UI__Full_Screenshot_File_Path;
	Parms.CallFunc_Screenshot__with_UI__PhotoName = CallFunc_Screenshot__with_UI__PhotoName;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.CallFunc_FileExists_ReturnValue_1 = CallFunc_FileExists_ReturnValue_1;
	Parms.CallFunc_FileExists_ReturnValue_2 = CallFunc_FileExists_ReturnValue_2;
	Parms.CallFunc_HighResScreenshot__without_UI__Full_Photo_Path = CallFunc_HighResScreenshot__without_UI__Full_Photo_Path;
	Parms.CallFunc_HighResScreenshot__without_UI__Photo_Name = CallFunc_HighResScreenshot__without_UI__Photo_Name;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_SliderValue_27 = K2Node_ComponentBoundEvent_SliderValue_27;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_MakeThumbnail_Full_Thumbnail_Path = CallFunc_MakeThumbnail_Full_Thumbnail_Path;
	Parms.CallFunc_MakeThumbnail_BaseThumbnailName = CallFunc_MakeThumbnail_BaseThumbnailName;
	Parms.K2Node_ComponentBoundEvent_SliderValue_26 = K2Node_ComponentBoundEvent_SliderValue_26;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Value_10 = K2Node_ComponentBoundEvent_Value_10;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_SliderValue_25 = K2Node_ComponentBoundEvent_SliderValue_25;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SliderValue_24 = K2Node_ComponentBoundEvent_SliderValue_24;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_SliderValue_23 = K2Node_ComponentBoundEvent_SliderValue_23;
	Parms.K2Node_ComponentBoundEvent_SliderValue_22 = K2Node_ComponentBoundEvent_SliderValue_22;
	Parms.K2Node_CustomEvent_DeltaTime = K2Node_CustomEvent_DeltaTime;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_SliderValue_21 = K2Node_ComponentBoundEvent_SliderValue_21;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_SliderValue_20 = K2Node_ComponentBoundEvent_SliderValue_20;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.CallFunc_BreakVector4_X_3 = CallFunc_BreakVector4_X_3;
	Parms.CallFunc_BreakVector4_Y_3 = CallFunc_BreakVector4_Y_3;
	Parms.CallFunc_BreakVector4_Z_3 = CallFunc_BreakVector4_Z_3;
	Parms.CallFunc_BreakVector4_W_3 = CallFunc_BreakVector4_W_3;
	Parms.CallFunc_BreakVector4_X_4 = CallFunc_BreakVector4_X_4;
	Parms.CallFunc_BreakVector4_Y_4 = CallFunc_BreakVector4_Y_4;
	Parms.CallFunc_BreakVector4_Z_4 = CallFunc_BreakVector4_Z_4;
	Parms.CallFunc_BreakVector4_W_4 = CallFunc_BreakVector4_W_4;
	Parms.CallFunc_BreakVector4_X_5 = CallFunc_BreakVector4_X_5;
	Parms.CallFunc_BreakVector4_Y_5 = CallFunc_BreakVector4_Y_5;
	Parms.CallFunc_BreakVector4_Z_5 = CallFunc_BreakVector4_Z_5;
	Parms.CallFunc_BreakVector4_W_5 = CallFunc_BreakVector4_W_5;
	Parms.CallFunc_BreakVector4_X_6 = CallFunc_BreakVector4_X_6;
	Parms.CallFunc_BreakVector4_Y_6 = CallFunc_BreakVector4_Y_6;
	Parms.CallFunc_BreakVector4_Z_6 = CallFunc_BreakVector4_Z_6;
	Parms.CallFunc_BreakVector4_W_6 = CallFunc_BreakVector4_W_6;
	Parms.CallFunc_BreakVector4_X_7 = CallFunc_BreakVector4_X_7;
	Parms.CallFunc_BreakVector4_Y_7 = CallFunc_BreakVector4_Y_7;
	Parms.CallFunc_BreakVector4_Z_7 = CallFunc_BreakVector4_Z_7;
	Parms.CallFunc_BreakVector4_W_7 = CallFunc_BreakVector4_W_7;
	Parms.CallFunc_BreakVector4_X_8 = CallFunc_BreakVector4_X_8;
	Parms.CallFunc_BreakVector4_Y_8 = CallFunc_BreakVector4_Y_8;
	Parms.CallFunc_BreakVector4_Z_8 = CallFunc_BreakVector4_Z_8;
	Parms.CallFunc_BreakVector4_W_8 = CallFunc_BreakVector4_W_8;
	Parms.CallFunc_BreakVector4_X_9 = CallFunc_BreakVector4_X_9;
	Parms.CallFunc_BreakVector4_Y_9 = CallFunc_BreakVector4_Y_9;
	Parms.CallFunc_BreakVector4_Z_9 = CallFunc_BreakVector4_Z_9;
	Parms.CallFunc_BreakVector4_W_9 = CallFunc_BreakVector4_W_9;
	Parms.CallFunc_BreakVector4_X_10 = CallFunc_BreakVector4_X_10;
	Parms.CallFunc_BreakVector4_Y_10 = CallFunc_BreakVector4_Y_10;
	Parms.CallFunc_BreakVector4_Z_10 = CallFunc_BreakVector4_Z_10;
	Parms.CallFunc_BreakVector4_W_10 = CallFunc_BreakVector4_W_10;
	Parms.CallFunc_BreakVector4_X_11 = CallFunc_BreakVector4_X_11;
	Parms.CallFunc_BreakVector4_Y_11 = CallFunc_BreakVector4_Y_11;
	Parms.CallFunc_BreakVector4_Z_11 = CallFunc_BreakVector4_Z_11;
	Parms.CallFunc_BreakVector4_W_11 = CallFunc_BreakVector4_W_11;
	Parms.CallFunc_BreakVector4_X_12 = CallFunc_BreakVector4_X_12;
	Parms.CallFunc_BreakVector4_Y_12 = CallFunc_BreakVector4_Y_12;
	Parms.CallFunc_BreakVector4_Z_12 = CallFunc_BreakVector4_Z_12;
	Parms.CallFunc_BreakVector4_W_12 = CallFunc_BreakVector4_W_12;
	Parms.CallFunc_BreakVector4_X_13 = CallFunc_BreakVector4_X_13;
	Parms.CallFunc_BreakVector4_Y_13 = CallFunc_BreakVector4_Y_13;
	Parms.CallFunc_BreakVector4_Z_13 = CallFunc_BreakVector4_Z_13;
	Parms.CallFunc_BreakVector4_W_13 = CallFunc_BreakVector4_W_13;
	Parms.CallFunc_BreakVector4_X_14 = CallFunc_BreakVector4_X_14;
	Parms.CallFunc_BreakVector4_Y_14 = CallFunc_BreakVector4_Y_14;
	Parms.CallFunc_BreakVector4_Z_14 = CallFunc_BreakVector4_Z_14;
	Parms.CallFunc_BreakVector4_W_14 = CallFunc_BreakVector4_W_14;
	Parms.CallFunc_BreakVector4_X_15 = CallFunc_BreakVector4_X_15;
	Parms.CallFunc_BreakVector4_Y_15 = CallFunc_BreakVector4_Y_15;
	Parms.CallFunc_BreakVector4_Z_15 = CallFunc_BreakVector4_Z_15;
	Parms.CallFunc_BreakVector4_W_15 = CallFunc_BreakVector4_W_15;
	Parms.CallFunc_BreakVector4_X_16 = CallFunc_BreakVector4_X_16;
	Parms.CallFunc_BreakVector4_Y_16 = CallFunc_BreakVector4_Y_16;
	Parms.CallFunc_BreakVector4_Z_16 = CallFunc_BreakVector4_Z_16;
	Parms.CallFunc_BreakVector4_W_16 = CallFunc_BreakVector4_W_16;
	Parms.CallFunc_BreakVector4_X_17 = CallFunc_BreakVector4_X_17;
	Parms.CallFunc_BreakVector4_Y_17 = CallFunc_BreakVector4_Y_17;
	Parms.CallFunc_BreakVector4_Z_17 = CallFunc_BreakVector4_Z_17;
	Parms.CallFunc_BreakVector4_W_17 = CallFunc_BreakVector4_W_17;
	Parms.CallFunc_BreakVector4_X_18 = CallFunc_BreakVector4_X_18;
	Parms.CallFunc_BreakVector4_Y_18 = CallFunc_BreakVector4_Y_18;
	Parms.CallFunc_BreakVector4_Z_18 = CallFunc_BreakVector4_Z_18;
	Parms.CallFunc_BreakVector4_W_18 = CallFunc_BreakVector4_W_18;
	Parms.CallFunc_BreakVector4_X_19 = CallFunc_BreakVector4_X_19;
	Parms.CallFunc_BreakVector4_Y_19 = CallFunc_BreakVector4_Y_19;
	Parms.CallFunc_BreakVector4_Z_19 = CallFunc_BreakVector4_Z_19;
	Parms.CallFunc_BreakVector4_W_19 = CallFunc_BreakVector4_W_19;
	Parms.CallFunc_BreakVector4_X_20 = CallFunc_BreakVector4_X_20;
	Parms.CallFunc_BreakVector4_Y_20 = CallFunc_BreakVector4_Y_20;
	Parms.CallFunc_BreakVector4_Z_20 = CallFunc_BreakVector4_Z_20;
	Parms.CallFunc_BreakVector4_W_20 = CallFunc_BreakVector4_W_20;
	Parms.CallFunc_BreakVector4_X_21 = CallFunc_BreakVector4_X_21;
	Parms.CallFunc_BreakVector4_Y_21 = CallFunc_BreakVector4_Y_21;
	Parms.CallFunc_BreakVector4_Z_21 = CallFunc_BreakVector4_Z_21;
	Parms.CallFunc_BreakVector4_W_21 = CallFunc_BreakVector4_W_21;
	Parms.CallFunc_BreakVector4_X_22 = CallFunc_BreakVector4_X_22;
	Parms.CallFunc_BreakVector4_Y_22 = CallFunc_BreakVector4_Y_22;
	Parms.CallFunc_BreakVector4_Z_22 = CallFunc_BreakVector4_Z_22;
	Parms.CallFunc_BreakVector4_W_22 = CallFunc_BreakVector4_W_22;
	Parms.CallFunc_BreakVector4_X_23 = CallFunc_BreakVector4_X_23;
	Parms.CallFunc_BreakVector4_Y_23 = CallFunc_BreakVector4_Y_23;
	Parms.CallFunc_BreakVector4_Z_23 = CallFunc_BreakVector4_Z_23;
	Parms.CallFunc_BreakVector4_W_23 = CallFunc_BreakVector4_W_23;
	Parms.K2Node_ComponentBoundEvent_SliderValue_19 = K2Node_ComponentBoundEvent_SliderValue_19;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_ComponentBoundEvent_SliderValue_18 = K2Node_ComponentBoundEvent_SliderValue_18;
	Parms.K2Node_ComponentBoundEvent_SliderValue_17 = K2Node_ComponentBoundEvent_SliderValue_17;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_BreakVector4_X_24 = CallFunc_BreakVector4_X_24;
	Parms.CallFunc_BreakVector4_Y_24 = CallFunc_BreakVector4_Y_24;
	Parms.CallFunc_BreakVector4_Z_24 = CallFunc_BreakVector4_Z_24;
	Parms.CallFunc_BreakVector4_W_24 = CallFunc_BreakVector4_W_24;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_ComponentBoundEvent_SliderValue_16 = K2Node_ComponentBoundEvent_SliderValue_16;
	Parms.K2Node_ComponentBoundEvent_Value_9 = K2Node_ComponentBoundEvent_Value_9;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_ComponentBoundEvent_SliderValue_15 = K2Node_ComponentBoundEvent_SliderValue_15;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Value_8 = K2Node_ComponentBoundEvent_Value_8;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetCollisionResponseToChannel_ReturnValue = CallFunc_GetCollisionResponseToChannel_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.K2Node_Event_MyGeometry_1 = K2Node_Event_MyGeometry_1;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_IsUnderLocation_ReturnValue = CallFunc_IsUnderLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_ComponentBoundEvent_Value_7 = K2Node_ComponentBoundEvent_Value_7;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakVector4_X_25 = CallFunc_BreakVector4_X_25;
	Parms.CallFunc_BreakVector4_Y_25 = CallFunc_BreakVector4_Y_25;
	Parms.CallFunc_BreakVector4_Z_25 = CallFunc_BreakVector4_Z_25;
	Parms.CallFunc_BreakVector4_W_25 = CallFunc_BreakVector4_W_25;
	Parms.CallFunc_BreakVector4_X_26 = CallFunc_BreakVector4_X_26;
	Parms.CallFunc_BreakVector4_Y_26 = CallFunc_BreakVector4_Y_26;
	Parms.CallFunc_BreakVector4_Z_26 = CallFunc_BreakVector4_Z_26;
	Parms.CallFunc_BreakVector4_W_26 = CallFunc_BreakVector4_W_26;
	Parms.CallFunc_BreakVector4_X_27 = CallFunc_BreakVector4_X_27;
	Parms.CallFunc_BreakVector4_Y_27 = CallFunc_BreakVector4_Y_27;
	Parms.CallFunc_BreakVector4_Z_27 = CallFunc_BreakVector4_Z_27;
	Parms.CallFunc_BreakVector4_W_27 = CallFunc_BreakVector4_W_27;
	Parms.CallFunc_BreakVector4_X_28 = CallFunc_BreakVector4_X_28;
	Parms.CallFunc_BreakVector4_Y_28 = CallFunc_BreakVector4_Y_28;
	Parms.CallFunc_BreakVector4_Z_28 = CallFunc_BreakVector4_Z_28;
	Parms.CallFunc_BreakVector4_W_28 = CallFunc_BreakVector4_W_28;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_BreakVector4_X_29 = CallFunc_BreakVector4_X_29;
	Parms.CallFunc_BreakVector4_Y_29 = CallFunc_BreakVector4_Y_29;
	Parms.CallFunc_BreakVector4_Z_29 = CallFunc_BreakVector4_Z_29;
	Parms.CallFunc_BreakVector4_W_29 = CallFunc_BreakVector4_W_29;
	Parms.CallFunc_BreakVector4_X_30 = CallFunc_BreakVector4_X_30;
	Parms.CallFunc_BreakVector4_Y_30 = CallFunc_BreakVector4_Y_30;
	Parms.CallFunc_BreakVector4_Z_30 = CallFunc_BreakVector4_Z_30;
	Parms.CallFunc_BreakVector4_W_30 = CallFunc_BreakVector4_W_30;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_BreakVector4_X_31 = CallFunc_BreakVector4_X_31;
	Parms.CallFunc_BreakVector4_Y_31 = CallFunc_BreakVector4_Y_31;
	Parms.CallFunc_BreakVector4_Z_31 = CallFunc_BreakVector4_Z_31;
	Parms.CallFunc_BreakVector4_W_31 = CallFunc_BreakVector4_W_31;
	Parms.CallFunc_BreakVector4_X_32 = CallFunc_BreakVector4_X_32;
	Parms.CallFunc_BreakVector4_Y_32 = CallFunc_BreakVector4_Y_32;
	Parms.CallFunc_BreakVector4_Z_32 = CallFunc_BreakVector4_Z_32;
	Parms.CallFunc_BreakVector4_W_32 = CallFunc_BreakVector4_W_32;
	Parms.CallFunc_BreakVector4_X_33 = CallFunc_BreakVector4_X_33;
	Parms.CallFunc_BreakVector4_Y_33 = CallFunc_BreakVector4_Y_33;
	Parms.CallFunc_BreakVector4_Z_33 = CallFunc_BreakVector4_Z_33;
	Parms.CallFunc_BreakVector4_W_33 = CallFunc_BreakVector4_W_33;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_BreakVector4_X_34 = CallFunc_BreakVector4_X_34;
	Parms.CallFunc_BreakVector4_Y_34 = CallFunc_BreakVector4_Y_34;
	Parms.CallFunc_BreakVector4_Z_34 = CallFunc_BreakVector4_Z_34;
	Parms.CallFunc_BreakVector4_W_34 = CallFunc_BreakVector4_W_34;
	Parms.CallFunc_BreakVector4_X_35 = CallFunc_BreakVector4_X_35;
	Parms.CallFunc_BreakVector4_Y_35 = CallFunc_BreakVector4_Y_35;
	Parms.CallFunc_BreakVector4_Z_35 = CallFunc_BreakVector4_Z_35;
	Parms.CallFunc_BreakVector4_W_35 = CallFunc_BreakVector4_W_35;
	Parms.CallFunc_BreakVector4_X_36 = CallFunc_BreakVector4_X_36;
	Parms.CallFunc_BreakVector4_Y_36 = CallFunc_BreakVector4_Y_36;
	Parms.CallFunc_BreakVector4_Z_36 = CallFunc_BreakVector4_Z_36;
	Parms.CallFunc_BreakVector4_W_36 = CallFunc_BreakVector4_W_36;
	Parms.K2Node_CustomEvent_WidgetItem = K2Node_CustomEvent_WidgetItem;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_CustomEvent_TabIndex = K2Node_CustomEvent_TabIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_PhotoData = K2Node_Event_PhotoData;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_ComponentBoundEvent_SliderValue_14 = K2Node_ComponentBoundEvent_SliderValue_14;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.CallFunc_MakeVector4_ReturnValue_2 = CallFunc_MakeVector4_ReturnValue_2;
	Parms.CallFunc_MakeVector4_ReturnValue_3 = CallFunc_MakeVector4_ReturnValue_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue_13 = K2Node_ComponentBoundEvent_SliderValue_13;
	Parms.CallFunc_MakeVector4_ReturnValue_4 = CallFunc_MakeVector4_ReturnValue_4;
	Parms.CallFunc_MakeVector4_ReturnValue_5 = CallFunc_MakeVector4_ReturnValue_5;
	Parms.CallFunc_MakeVector4_ReturnValue_6 = CallFunc_MakeVector4_ReturnValue_6;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_ComponentBoundEvent_SliderValue_12 = K2Node_ComponentBoundEvent_SliderValue_12;
	Parms.CallFunc_MakeVector4_ReturnValue_7 = CallFunc_MakeVector4_ReturnValue_7;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeVector4_ReturnValue_8 = CallFunc_MakeVector4_ReturnValue_8;
	Parms.CallFunc_MakeVector4_ReturnValue_9 = CallFunc_MakeVector4_ReturnValue_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_ComponentBoundEvent_SliderValue_11 = K2Node_ComponentBoundEvent_SliderValue_11;
	Parms.CallFunc_MakeVector4_ReturnValue_10 = CallFunc_MakeVector4_ReturnValue_10;
	Parms.CallFunc_MakeVector4_ReturnValue_11 = CallFunc_MakeVector4_ReturnValue_11;
	Parms.CallFunc_MakeVector4_ReturnValue_12 = CallFunc_MakeVector4_ReturnValue_12;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_5 = CallFunc_FTrunc_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_GetViewportSize_ReturnValue_2 = CallFunc_GetViewportSize_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_GetViewportSize_ReturnValue_3 = CallFunc_GetViewportSize_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetViewportSize_ReturnValue_4 = CallFunc_GetViewportSize_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.K2Node_ComponentBoundEvent_SliderValue_10 = K2Node_ComponentBoundEvent_SliderValue_10;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_ComponentBoundEvent_SliderValue_9 = K2Node_ComponentBoundEvent_SliderValue_9;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.K2Node_ComponentBoundEvent_SliderValue_8 = K2Node_ComponentBoundEvent_SliderValue_8;
	Parms.K2Node_ComponentBoundEvent_SliderValue_7 = K2Node_ComponentBoundEvent_SliderValue_7;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_6 = K2Node_ComponentBoundEvent_Value_6;
	Parms.CallFunc_FTrunc_ReturnValue_6 = CallFunc_FTrunc_ReturnValue_6;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_GetValue_ReturnValue_4 = CallFunc_GetValue_ReturnValue_4;
	Parms.CallFunc_GetValue_ReturnValue_5 = CallFunc_GetValue_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_SliderValue_6 = K2Node_ComponentBoundEvent_SliderValue_6;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.K2Node_ComponentBoundEvent_SliderValue_5 = K2Node_ComponentBoundEvent_SliderValue_5;
	Parms.K2Node_ComponentBoundEvent_SliderValue_4 = K2Node_ComponentBoundEvent_SliderValue_4;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.K2Node_ComponentBoundEvent_SliderValue_3 = K2Node_ComponentBoundEvent_SliderValue_3;
	Parms.K2Node_MakeStruct_WeightedBlendable_2 = K2Node_MakeStruct_WeightedBlendable_2;
	Parms.K2Node_ComponentBoundEvent_Value_5 = K2Node_ComponentBoundEvent_Value_5;
	Parms.CallFunc_FTrunc_ReturnValue_7 = CallFunc_FTrunc_ReturnValue_7;
	Parms.CallFunc_GetViewportSize_ReturnValue_5 = CallFunc_GetViewportSize_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_8 = CallFunc_EqualEqual_KeyKey_ReturnValue_8;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_9 = CallFunc_EqualEqual_KeyKey_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_10 = CallFunc_EqualEqual_KeyKey_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_11 = CallFunc_EqualEqual_KeyKey_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_12 = CallFunc_EqualEqual_KeyKey_ReturnValue_12;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_13 = CallFunc_EqualEqual_KeyKey_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_14 = CallFunc_EqualEqual_KeyKey_ReturnValue_14;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_15 = CallFunc_EqualEqual_KeyKey_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_16 = CallFunc_EqualEqual_KeyKey_ReturnValue_16;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_17 = CallFunc_EqualEqual_KeyKey_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_18 = CallFunc_EqualEqual_KeyKey_ReturnValue_18;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_19 = CallFunc_EqualEqual_KeyKey_ReturnValue_19;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_20 = CallFunc_EqualEqual_KeyKey_ReturnValue_20;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_21 = CallFunc_EqualEqual_KeyKey_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_22 = CallFunc_EqualEqual_KeyKey_ReturnValue_22;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_23 = CallFunc_EqualEqual_KeyKey_ReturnValue_23;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_24 = CallFunc_EqualEqual_KeyKey_ReturnValue_24;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_25 = CallFunc_EqualEqual_KeyKey_ReturnValue_25;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_26 = CallFunc_EqualEqual_KeyKey_ReturnValue_26;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_27 = CallFunc_EqualEqual_KeyKey_ReturnValue_27;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_28 = CallFunc_EqualEqual_KeyKey_ReturnValue_28;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_29 = CallFunc_EqualEqual_KeyKey_ReturnValue_29;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_30 = CallFunc_EqualEqual_KeyKey_ReturnValue_30;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_31 = CallFunc_EqualEqual_KeyKey_ReturnValue_31;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_32 = CallFunc_EqualEqual_KeyKey_ReturnValue_32;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetViewportSize_ReturnValue_6 = CallFunc_GetViewportSize_ReturnValue_6;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_7 = CallFunc_BreakVector2D_X_7;
	Parms.CallFunc_BreakVector2D_Y_7 = CallFunc_BreakVector2D_Y_7;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue_1 = CallFunc_K2_GetScalarParameterValue_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.CallFunc_FTrunc_ReturnValue_8 = CallFunc_FTrunc_ReturnValue_8;
	Parms.CallFunc_FTrunc_ReturnValue_9 = CallFunc_FTrunc_ReturnValue_9;
	Parms.CallFunc_FTrunc_ReturnValue_10 = CallFunc_FTrunc_ReturnValue_10;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.K2Node_ComponentBoundEvent_SliderValue_2 = K2Node_ComponentBoundEvent_SliderValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_11 = CallFunc_FTrunc_ReturnValue_11;
	Parms.K2Node_MakeStruct_WeightedBlendable_3 = K2Node_MakeStruct_WeightedBlendable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_SliderValue_1 = K2Node_ComponentBoundEvent_SliderValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_1 = CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_2 = CallFunc_K2_GetVectorParameterValue_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_CastToCharacter_Character_1 = CallFunc_CastToCharacter_Character_1;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_FTrunc_ReturnValue_12 = CallFunc_FTrunc_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_CastToCharacter_Character_2 = CallFunc_CastToCharacter_Character_2;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_1 = CallFunc_K2_SetActorRotation_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_38 = CallFunc_IsValid_ReturnValue_38;
	Parms.CallFunc_IsValid_ReturnValue_39 = CallFunc_IsValid_ReturnValue_39;
	Parms.K2Node_MakeStruct_IntPoint_1 = K2Node_MakeStruct_IntPoint_1;
	Parms.K2Node_MakeStruct_IntPoint_2 = K2Node_MakeStruct_IntPoint_2;
	Parms.K2Node_MakeStruct_IntPoint_3 = K2Node_MakeStruct_IntPoint_3;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.K2Node_MakeStruct_IntPoint_4 = K2Node_MakeStruct_IntPoint_4;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_2 = CallFunc_GetPlayerCameraManager_ReturnValue_2;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.CallFunc_IsValid_ReturnValue_40 = CallFunc_IsValid_ReturnValue_40;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_IsValid_ReturnValue_41 = CallFunc_IsValid_ReturnValue_41;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_2 = CallFunc_K2_SetActorRotation_ReturnValue_2;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;
	Parms.K2Node_VariableSet_CustomTimeDilation_ImplicitCast = K2Node_VariableSet_CustomTimeDilation_ImplicitCast;
	Parms.CallFunc_SetMaxValue_InValue_ImplicitCast = CallFunc_SetMaxValue_InValue_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast = K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast = K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast;
	Parms.CallFunc_VInterpTo_DeltaTime_ImplicitCast = CallFunc_VInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast = CallFunc_RInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast_1 = CallFunc_RInterpTo_DeltaTime_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast = K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast = K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_2 = CallFunc_FInterpTo_Current_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast = K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast = K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast = K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast = CallFunc_Initialize_DefaultValue_ImplicitCast;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_1 = CallFunc_Initialize_DefaultValue_ImplicitCast_1;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_2 = CallFunc_Initialize_DefaultValue_ImplicitCast_2;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_3 = CallFunc_Initialize_DefaultValue_ImplicitCast_3;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_4 = CallFunc_Initialize_DefaultValue_ImplicitCast_4;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_5 = CallFunc_Initialize_DefaultValue_ImplicitCast_5;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_6 = CallFunc_Initialize_DefaultValue_ImplicitCast_6;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_7 = CallFunc_Initialize_DefaultValue_ImplicitCast_7;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_8 = CallFunc_Initialize_DefaultValue_ImplicitCast_8;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_9 = CallFunc_Initialize_DefaultValue_ImplicitCast_9;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;
	Parms.CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast = CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast = CallFunc_FInterpTo_Target_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_2 = CallFunc_SetValue_InValue_ImplicitCast_2;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_3 = CallFunc_SetValue_InValue_ImplicitCast_3;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast_2 = CallFunc_FTrunc_A_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_FTrunc_A_ImplicitCast_3 = CallFunc_FTrunc_A_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_9 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_10 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_10;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast = CallFunc_ChangeValue_Value_ImplicitCast;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_1 = CallFunc_ChangeValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_11 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_12 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_12;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_13 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_13;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_14 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_14;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_15 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_15;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_16 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_16;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_2 = CallFunc_ChangeValue_Value_ImplicitCast_2;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_3 = CallFunc_ChangeValue_Value_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast = K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_10 = CallFunc_Initialize_DefaultValue_ImplicitCast_10;
	Parms.K2Node_VariableSet_TargetArmLength_ImplicitCast = K2Node_VariableSet_TargetArmLength_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1 = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ED_FreeCameraRotation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    RotationValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeWidget_C::ED_FreeCameraRotation__DelegateSignature(const struct FRotator& RotationValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ED_FreeCameraRotation__DelegateSignature");

	Params::UPhotoModeWidget_C_ED_FreeCameraRotation__DelegateSignature_Params Parms{};

	Parms.RotationValue = RotationValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ED_FreeCameraFOV__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FOVValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeWidget_C::ED_FreeCameraFOV__DelegateSignature(double FOVValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ED_FreeCameraFOV__DelegateSignature");

	Params::UPhotoModeWidget_C_ED_FreeCameraFOV__DelegateSignature_Params Parms{};

	Parms.FOVValue = FOVValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeWidget.PhotoModeWidget_C.ED_FreeCameraReference__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessValues                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhotoModeWidget_C::ED_FreeCameraReference__DelegateSignature(const struct FPostProcessSettings& PostProcessValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeWidget_C", "ED_FreeCameraReference__DelegateSignature");

	Params::UPhotoModeWidget_C_ED_FreeCameraReference__DelegateSignature_Params Parms{};

	Parms.PostProcessValues = PostProcessValues;

	UObject::ProcessEvent(Func, &Parms);

}

}


