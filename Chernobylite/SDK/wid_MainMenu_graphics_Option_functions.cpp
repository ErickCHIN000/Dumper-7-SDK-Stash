#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C
// (None)

class UClass* UWid_MainMenu_graphics_Option_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_graphics_Option_C");

	return Clss;
}


// wid_MainMenu_graphics_Option_C wid_MainMenu_graphics_Option.Default__wid_MainMenu_graphics_Option_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_graphics_Option_C* UWid_MainMenu_graphics_Option_C::GetDefaultObj()
{
	static class UWid_MainMenu_graphics_Option_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_graphics_Option_C*>(UWid_MainMenu_graphics_Option_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::GetEntryIndex(int32* EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "GetEntryIndex");

	Params::UWid_MainMenu_graphics_Option_C_GetEntryIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.GetClampedValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Roll                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::GetClampedValue(int32 Value, bool Roll, int32* Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "GetClampedValue");

	Params::UWid_MainMenu_graphics_Option_C_GetClampedValue_Params Parms{};

	Parms.Value = Value;
	Parms.Roll = Roll;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_2 = CallFunc_SelectInt_ReturnValue_2;
	Parms.CallFunc_SelectInt_ReturnValue_3 = CallFunc_SelectInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetArrowsState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHighlighted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::SetArrowsState(class UImage* Normal, class UImage* Highlighted, bool IsHighlighted, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetArrowsState");

	Params::UWid_MainMenu_graphics_Option_C_SetArrowsState_Params Parms{};

	Parms.Normal = Normal;
	Parms.Highlighted = Highlighted;
	Parms.IsHighlighted = IsHighlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetImageState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDown                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void UWid_MainMenu_graphics_Option_C::SetImageState(class UImage* Image, bool IsDown, bool Temp_bool_Variable, float Temp_float_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetImageState");

	Params::UWid_MainMenu_graphics_Option_C_SetImageState_Params Parms{};

	Parms.Image = Image;
	Parms.IsDown = IsDown;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.InitStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_MainMenu_graphics_Option_C::InitStyle(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_TrimTrailing_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "InitStyle");

	Params::UWid_MainMenu_graphics_Option_C_InitStyle_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue_1 = CallFunc_TrimTrailing_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetValueEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SelectNextIfSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::SetValueEnabled(int32 Index, bool IsEnabled, bool SelectNextIfSelected, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetValueEnabled");

	Params::UWid_MainMenu_graphics_Option_C_SetValueEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnabled = IsEnabled;
	Parms.SelectNextIfSelected = SelectNextIfSelected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.GetCurrentlySelectedIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentlySelected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::GetCurrentlySelectedIndex(int32* CurrentlySelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "GetCurrentlySelectedIndex");

	Params::UWid_MainMenu_graphics_Option_C_GetCurrentlySelectedIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentlySelected != nullptr)
		*CurrentlySelected = Parms.CurrentlySelected;

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.GetCurrentlySelectedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::GetCurrentlySelectedValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "GetCurrentlySelectedValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SelectValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ValueIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetClampedValue_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_graphics_Option_C::SelectValue(int32 ValueIndex, int32 CallFunc_GetClampedValue_Result, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SelectValue");

	Params::UWid_MainMenu_graphics_Option_C_SelectValue_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.CallFunc_GetClampedValue_Result = CallFunc_GetClampedValue_Result;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SelectPrevious
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetClampedValue_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::SelectPrevious(int32 NewIndex, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_GetClampedValue_Result, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SelectPrevious");

	Params::UWid_MainMenu_graphics_Option_C_SelectPrevious_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetClampedValue_Result = CallFunc_GetClampedValue_Result;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SelectNext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetClampedValue_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::SelectNext(int32 NewIndex, bool Temp_bool_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_Array_Get_Item_1, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetClampedValue_Result, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SelectNext");

	Params::UWid_MainMenu_graphics_Option_C_SelectNext_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetClampedValue_Result = CallFunc_GetClampedValue_Result;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Values                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::SetValues(TArray<class FText>& Values, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetValues");

	Params::UWid_MainMenu_graphics_Option_C_SetValues_Params Parms{};

	Parms.Values = Values;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetBoldFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFontBold                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (UObjectWrapper, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (UObjectWrapper, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::SetBoldFont(bool IsFontBold, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetBoldFont");

	Params::UWid_MainMenu_graphics_Option_C_SetBoldFont_Params Parms{};

	Parms.IsFontBold = IsFontBold;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::Update_Size(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "Update Size");

	Params::UWid_MainMenu_graphics_Option_C_Update_Size_Params Parms{};

	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.Set Selected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlaySoundEffect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::Set_Selected(bool NewSelected, bool PlaySoundEffect, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "Set Selected");

	Params::UWid_MainMenu_graphics_Option_C_Set_Selected_Params Parms{};

	Parms.NewSelected = NewSelected;
	Parms.PlaySoundEffect = PlaySoundEffect;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetSelectableEntryOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryOwnerInterface_C>Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetSelectableEntryOwner");

	Params::UWid_MainMenu_graphics_Option_C_SetSelectableEntryOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::Select(bool IsSelected, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "Select");

	Params::UWid_MainMenu_graphics_Option_C_Select_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.SetEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_graphics_Option_C::SetEntryIndex(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "SetEntryIndex");

	Params::UWid_MainMenu_graphics_Option_C_SetEntryIndex_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "PreConstruct");

	Params::UWid_MainMenu_graphics_Option_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.IncrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::IncrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "IncrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.DecrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::DecrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "DecrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.DecrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::DecrementValueReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "DecrementValueReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.IncrementValueRelesed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::IncrementValueRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "IncrementValueRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.BndEvt__PreviousButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::BndEvt__PreviousButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "BndEvt__PreviousButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.ExecuteUbergraph_wid_MainMenu_graphics_Option
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>K2Node_Event_Owner                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsSelected                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PostSoundEvent                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_EntryIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::ExecuteUbergraph_wid_MainMenu_graphics_Option(int32 EntryPoint, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "ExecuteUbergraph_wid_MainMenu_graphics_Option");

	Params::UWid_MainMenu_graphics_Option_C_ExecuteUbergraph_wid_MainMenu_graphics_Option_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Owner = K2Node_Event_Owner;
	Parms.K2Node_Event_IsSelected = K2Node_Event_IsSelected;
	Parms.K2Node_Event_PostSoundEvent = K2Node_Event_PostSoundEvent;
	Parms.K2Node_Event_EntryIndex = K2Node_Event_EntryIndex;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::OnValueChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "OnValueChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.ValChangedMinus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::ValChangedMinus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "ValChangedMinus__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.ValChangedPlus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_graphics_Option_C::ValChangedPlus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "ValChangedPlus__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C.Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_graphics_Option_C::Changed__DelegateSignature(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_graphics_Option_C", "Changed__DelegateSignature");

	Params::UWid_MainMenu_graphics_Option_C_Changed__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


