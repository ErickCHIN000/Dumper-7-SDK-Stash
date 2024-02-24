#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C
// (None)

class UClass* UUMG_ToggleButton_DropPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ToggleButton_DropPoint_C");

	return Clss;
}


// UMG_ToggleButton_DropPoint_C UMG_ToggleButton_DropPoint.Default__UMG_ToggleButton_DropPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ToggleButton_DropPoint_C* UUMG_ToggleButton_DropPoint_C::GetDefaultObj()
{
	static class UUMG_ToggleButton_DropPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ToggleButton_DropPoint_C*>(UUMG_ToggleButton_DropPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.FocusUpdated
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FButtonStyle                K2Node_Select_Default                                            (ConstParm)

void UUMG_ToggleButton_DropPoint_C::FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "FocusUpdated");

	Params::UUMG_ToggleButton_DropPoint_C_FocusUpdated_Params Parms{};

	Parms.bNewFocus = bNewFocus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.GetFocusWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bThis                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_DropPoint_C::GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "GetFocusWidget");

	Params::UUMG_ToggleButton_DropPoint_C_GetFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	if (bThis != nullptr)
		*bThis = Parms.bThis;

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.GetImageButton
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     ImageButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButton_DropPoint_C::GetImageButton(class UButton** ImageButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "GetImageButton");

	Params::UUMG_ToggleButton_DropPoint_C_GetImageButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImageButton != nullptr)
		*ImageButton = Parms.ImageButton;

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ToggleButton_DropPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_DropPoint_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "PreConstruct");

	Params::UUMG_ToggleButton_DropPoint_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.VisuallyToggleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VisualToggledState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_DropPoint_C::VisuallyToggleButton(bool VisualToggledState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "VisuallyToggleButton");

	Params::UUMG_ToggleButton_DropPoint_C_VisuallyToggleButton_Params Parms{};

	Parms.VisualToggledState = VisualToggledState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.OnAnimationComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ToggleButton_DropPoint_C::OnAnimationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "OnAnimationComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.ExecuteUbergraph_UMG_ToggleButton_DropPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        Temp_text_Variable                                               (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDropGroupCosmeticData      CallFunc_GetDropGroupsStruct_DropGroups                          (None)
// enum class EValid                  CallFunc_GetDropGroupsStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_VisualToggledState                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_ToggleButton_DropPoint_C::ExecuteUbergraph_UMG_ToggleButton_DropPoint(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, const struct FDropGroupCosmeticData& CallFunc_GetDropGroupsStruct_DropGroups, enum class EValid CallFunc_GetDropGroupsStruct_Paths, bool K2Node_Event_VisualToggledState, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_DropPoint_C", "ExecuteUbergraph_UMG_ToggleButton_DropPoint");

	Params::UUMG_ToggleButton_DropPoint_C_ExecuteUbergraph_UMG_ToggleButton_DropPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDropGroupsStruct_DropGroups = CallFunc_GetDropGroupsStruct_DropGroups;
	Parms.CallFunc_GetDropGroupsStruct_Paths = CallFunc_GetDropGroupsStruct_Paths;
	Parms.K2Node_Event_VisualToggledState = K2Node_Event_VisualToggledState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


