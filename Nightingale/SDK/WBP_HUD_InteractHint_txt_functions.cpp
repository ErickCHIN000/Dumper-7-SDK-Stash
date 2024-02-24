#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C
// (None)

class UClass* UWBP_HUD_InteractHint_txt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_InteractHint_txt_C");

	return Clss;
}


// WBP_HUD_InteractHint_txt_C WBP_HUD_InteractHint_txt.Default__WBP_HUD_InteractHint_txt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_InteractHint_txt_C* UWBP_HUD_InteractHint_txt_C::GetDefaultObj()
{
	static class UWBP_HUD_InteractHint_txt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_InteractHint_txt_C*>(UWBP_HUD_InteractHint_txt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.InputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_InteractHint_txt_C::InputMethodChanged(enum class ECommonInputType NewInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "InputMethodChanged");

	Params::UWBP_HUD_InteractHint_txt_C_InputMethodChanged_Params Parms{};

	Parms.NewInputType = NewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_InteractHint_txt_C::UnbindEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "UnbindEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_InteractHint_txt_C::BindEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "BindEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.UpdateTextFromContext
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionUIContext                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)

void UWBP_HUD_InteractHint_txt_C::UpdateTextFromContext(const struct FInteractionUIContext& InteractionUIContext, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "UpdateTextFromContext");

	Params::UWBP_HUD_InteractHint_txt_C_UpdateTextFromContext_Params Parms{};

	Parms.InteractionUIContext = InteractionUIContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_2 = CallFunc_TextIsEmpty_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.SetDisabledState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_InteractHint_txt_C::SetDisabledState(bool IsDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "SetDisabledState");

	Params::UWBP_HUD_InteractHint_txt_C_SetDisabledState_Params Parms{};

	Parms.IsDisabled = IsDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_InteractHint_txt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionContext                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HUD_InteractHint_txt_C::UpdateText(const struct FInteractionUIContext& InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "UpdateText");

	Params::UWBP_HUD_InteractHint_txt_C_UpdateText_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_InteractHint_txt_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_InteractHint_txt_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "OnInputMethodChanged");

	Params::UWBP_HUD_InteractHint_txt_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C.ExecuteUbergraph_WBP_HUD_InteractHint_txt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionUIContext       K2Node_CustomEvent_InteractionContext                            (None)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_InteractHint_txt_C::ExecuteUbergraph_WBP_HUD_InteractHint_txt(int32 EntryPoint, enum class ECommonInputType K2Node_Event_CurrentInputType, const struct FInteractionUIContext& K2Node_CustomEvent_InteractionContext, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractHint_txt_C", "ExecuteUbergraph_WBP_HUD_InteractHint_txt");

	Params::UWBP_HUD_InteractHint_txt_C_ExecuteUbergraph_WBP_HUD_InteractHint_txt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.K2Node_CustomEvent_InteractionContext = K2Node_CustomEvent_InteractionContext;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


