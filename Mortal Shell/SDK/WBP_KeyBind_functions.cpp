#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_KeyBind.WBP_KeyBind_C
// (None)

class UClass* UWBP_KeyBind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_KeyBind_C");

	return Clss;
}


// WBP_KeyBind_C WBP_KeyBind.Default__WBP_KeyBind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_KeyBind_C* UWBP_KeyBind_C::GetDefaultObj()
{
	static class UWBP_KeyBind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_KeyBind_C*>(UWBP_KeyBind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_KeyBind.WBP_KeyBind_C.ForcedNotHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::ForcedNotHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "ForcedNotHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.ForcedHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::ForcedHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "ForcedHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.UI_Sound_Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::UI_Sound_Navigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "UI_Sound_Navigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.ChangeKBMKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 NewInput                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (None)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_KeyBind_C::ChangeKBMKey(const struct FInputChord& NewInput, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "ChangeKBMKey");

	Params::UWBP_KeyBind_C_ChangeKBMKey_Params Parms{};

	Parms.NewInput = NewInput;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_GetInputSettings_ReturnValue_4 = CallFunc_GetInputSettings_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_5 = CallFunc_GetInputSettings_ReturnValue_5;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_GetInputSettings_ReturnValue_6 = CallFunc_GetInputSettings_ReturnValue_6;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_7 = CallFunc_GetInputSettings_ReturnValue_7;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind.WBP_KeyBind_C.ChangeGamepadKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 NewInput                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_InputChordInputChord_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (None)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_KeyBind_C::ChangeGamepadKey(const struct FInputChord& NewInput, bool CallFunc_Key_IsGamepadKey_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord, bool CallFunc_EqualEqual_InputChordInputChord_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "ChangeGamepadKey");

	Params::UWBP_KeyBind_C_ChangeGamepadKey_Params Parms{};

	Parms.NewInput = NewInput;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_EqualEqual_InputChordInputChord_ReturnValue = CallFunc_EqualEqual_InputChordInputChord_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_GetInputSettings_ReturnValue_4 = CallFunc_GetInputSettings_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_5 = CallFunc_GetInputSettings_ReturnValue_5;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_GetInputSettings_ReturnValue_6 = CallFunc_GetInputSettings_ReturnValue_6;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_7 = CallFunc_GetInputSettings_ReturnValue_7;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind.WBP_KeyBind_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_KeyBind_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "PreConstruct");

	Params::UWBP_KeyBind_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind.WBP_KeyBind_C.BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_KeyBind_C::BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");

	Params::UWBP_KeyBind_C_BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind.WBP_KeyBind_C.BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_KeyBind_C::BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");

	Params::UWBP_KeyBind_C_BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind.WBP_KeyBind_C.SetForcedHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::SetForcedHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "SetForcedHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.SetForcedNotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::SetForcedNotHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "SetForcedNotHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.ClearHoverStyleOverride
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::ClearHoverStyleOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "ClearHoverStyleOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.SelectGamepadKeyIfNot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_C::SelectGamepadKeyIfNot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "SelectGamepadKeyIfNot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind.WBP_KeyBind_C.ExecuteUbergraph_WBP_KeyBind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_1                         (HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_1                    (ReferenceParm, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings_1                      (ReferenceParm, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord_2                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_3                                   (HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_GetIsSelectingKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBind_C::ExecuteUbergraph_WBP_KeyBind(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputChord& K2Node_MakeStruct_InputChord_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputChord& K2Node_MakeStruct_InputChord_3, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, bool Temp_bool_Variable, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class FText K2Node_Select_Default, bool CallFunc_GetIsSelectingKey_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_C", "ExecuteUbergraph_WBP_KeyBind");

	Params::UWBP_KeyBind_C_ExecuteUbergraph_WBP_KeyBind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_1 = K2Node_ComponentBoundEvent_SelectedKey_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetActionMappingByName_OutMappings_1 = CallFunc_GetActionMappingByName_OutMappings_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings_1 = CallFunc_GetAxisMappingByName_OutMappings_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord_2 = K2Node_MakeStruct_InputChord_2;
	Parms.K2Node_MakeStruct_InputChord_3 = K2Node_MakeStruct_InputChord_3;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue_1 = CallFunc_Key_IsGamepadKey_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = K2Node_ComponentBoundEvent_SelectedKey;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetIsSelectingKey_ReturnValue = CallFunc_GetIsSelectingKey_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


