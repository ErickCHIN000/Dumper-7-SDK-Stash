#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C
// (None)

class UClass* UWBP_Options_InputKeySelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_InputKeySelector_C");

	return Clss;
}


// WBP_Options_InputKeySelector_C WBP_Options_InputKeySelector.Default__WBP_Options_InputKeySelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_InputKeySelector_C* UWBP_Options_InputKeySelector_C::GetDefaultObj()
{
	static class UWBP_Options_InputKeySelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_InputKeySelector_C*>(UWBP_Options_InputKeySelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_UnlockMouse_ReturnValue                                 (None)
// bool                               CallFunc_GetIsSelectingKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_LockMouse_ReturnValue                                   (None)
// struct FEventReply                 K2Node_Select_Default                                            (None)

struct FEventReply UWBP_Options_InputKeySelector_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_UnlockMouse_ReturnValue, bool CallFunc_GetIsSelectingKey_ReturnValue, const struct FEventReply& CallFunc_LockMouse_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "OnMouseMove");

	Params::UWBP_Options_InputKeySelector_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_UnlockMouse_ReturnValue = CallFunc_UnlockMouse_ReturnValue;
	Parms.CallFunc_GetIsSelectingKey_ReturnValue = CallFunc_GetIsSelectingKey_ReturnValue;
	Parms.CallFunc_LockMouse_ReturnValue = CallFunc_LockMouse_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Options_InputKeySelector_C::BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	Params::UWBP_Options_InputKeySelector_C_BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Options_InputKeySelector_C::BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Options_InputKeySelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.Internal_OnResetValue
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_InputKeySelector_C::Internal_OnResetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "Internal_OnResetValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputKeySelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "PreConstruct");

	Params::UWBP_Options_InputKeySelector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C.ExecuteUbergraph_WBP_Options_InputKeySelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<struct FKey>                  Temp_struct_Variable                                             (None)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey                           (HasGetValueTypeHash)
// bool                               CallFunc_GetIsSelectingKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputKeySelector_C::ExecuteUbergraph_WBP_Options_InputKeySelector(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, TSet<struct FKey> Temp_struct_Variable, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, bool CallFunc_GetIsSelectingKey_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TArray<struct FKey>& CallFunc_Set_ToArray_Result, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputKeySelector_C", "ExecuteUbergraph_WBP_Options_InputKeySelector");

	Params::UWBP_Options_InputKeySelector_C_ExecuteUbergraph_WBP_Options_InputKeySelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = K2Node_ComponentBoundEvent_SelectedKey;
	Parms.CallFunc_GetIsSelectingKey_ReturnValue = CallFunc_GetIsSelectingKey_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


