#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuNavigationFaceButton.MenuNavigationFaceButton_C
// (None)

class UClass* UMenuNavigationFaceButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuNavigationFaceButton_C");

	return Clss;
}


// MenuNavigationFaceButton_C MenuNavigationFaceButton.Default__MenuNavigationFaceButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuNavigationFaceButton_C* UMenuNavigationFaceButton_C::GetDefaultObj()
{
	static class UMenuNavigationFaceButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuNavigationFaceButton_C*>(UMenuNavigationFaceButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.GetActionHint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionHintStruct           ActionHint                                                       (Parm, OutParm)

void UMenuNavigationFaceButton_C::GetActionHint(struct FActionHintStruct* ActionHint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "GetActionHint");

	Params::UMenuNavigationFaceButton_C_GetActionHint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionHint != nullptr)
		*ActionHint = std::move(Parms.ActionHint);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateButtonEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuNavigationFaceButton_C::UpdateButtonEffect(bool Enable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "UpdateButtonEffect");

	Params::UMenuNavigationFaceButton_C_UpdateButtonEffect_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateButtonDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenuNavigationFaceButton_C::UpdateButtonDescription(class FText NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "UpdateButtonDescription");

	Params::UMenuNavigationFaceButton_C_UpdateButtonDescription_Params Parms{};

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UMenuNavigationFaceButton_C::UpdateButtonText(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "UpdateButtonText");

	Params::UMenuNavigationFaceButton_C_UpdateButtonText_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuNavigationFaceButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "PreConstruct");

	Params::UMenuNavigationFaceButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuNavigationFaceButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuNavigationFaceButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuNavigationFaceButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuNavigationFaceButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateHint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionHintStruct           Hint                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenuNavigationFaceButton_C::UpdateHint(const struct FActionHintStruct& Hint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "UpdateHint");

	Params::UMenuNavigationFaceButton_C_UpdateHint_Params Parms{};

	Parms.Hint = Hint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.OnSetIsEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuNavigationFaceButton_C::OnSetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "OnSetIsEnabled");

	Params::UMenuNavigationFaceButton_C_OnSetIsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.ShowInteractable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuNavigationFaceButton_C::ShowInteractable(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "ShowInteractable");

	Params::UMenuNavigationFaceButton_C_ShowInteractable_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.ExecuteUbergraph_MenuNavigationFaceButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActionHintStruct           K2Node_CustomEvent_Hint                                          (None)
// bool                               K2Node_Event_bInIsEnabled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuNavigationFaceButton_C::ExecuteUbergraph_MenuNavigationFaceButton(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Event_IsDesignTime, const struct FActionHintStruct& K2Node_CustomEvent_Hint, bool K2Node_Event_bInIsEnabled, const struct FLinearColor& K2Node_Select_Default_1, const struct FMargin& K2Node_MakeStruct_Margin, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FMargin& K2Node_Select_Default_2, bool K2Node_CustomEvent_Enabled, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuNavigationFaceButton_C", "ExecuteUbergraph_MenuNavigationFaceButton");

	Params::UMenuNavigationFaceButton_C_ExecuteUbergraph_MenuNavigationFaceButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Hint = K2Node_CustomEvent_Hint;
	Parms.K2Node_Event_bInIsEnabled = K2Node_Event_bInIsEnabled;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


