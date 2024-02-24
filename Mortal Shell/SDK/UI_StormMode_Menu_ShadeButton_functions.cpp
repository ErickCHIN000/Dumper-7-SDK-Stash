#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C
// (None)

class UClass* UUI_StormMode_Menu_ShadeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_ShadeButton_C");

	return Clss;
}


// UI_StormMode_Menu_ShadeButton_C UI_StormMode_Menu_ShadeButton.Default__UI_StormMode_Menu_ShadeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_ShadeButton_C* UUI_StormMode_Menu_ShadeButton_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_ShadeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_ShadeButton_C*>(UUI_StormMode_Menu_ShadeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.IsButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::IsButtonEnabled(bool* Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "IsButtonEnabled");

	Params::UUI_StormMode_Menu_ShadeButton_C_IsButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateShadeAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShadeAbilityText_ReturnValue                         (None)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_GetSelectedCharacter_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShadeAbility        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::UpdateShadeAbility(enum class EArmorTypes Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, class FText CallFunc_GetShadeAbilityText_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_GetSelectedCharacter_Character, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_ShadeAbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "UpdateShadeAbility");

	Params::UUI_StormMode_Menu_ShadeButton_C_UpdateShadeAbility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.CallFunc_GetShadeAbilityText_ReturnValue = CallFunc_GetShadeAbilityText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSelectedCharacter_Character = CallFunc_GetSelectedCharacter_Character;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.GetShadeAbilityText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_StormMode_Menu_ShadeButton_C::GetShadeAbilityText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "GetShadeAbilityText");

	Params::UUI_StormMode_Menu_ShadeButton_C_GetShadeAbilityText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ArrowVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        ArrowsVisibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::ArrowVisibility(bool Custom, enum class ESlateVisibility ArrowsVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "ArrowVisibility");

	Params::UUI_StormMode_Menu_ShadeButton_C_ArrowVisibility_Params Parms{};

	Parms.Custom = Custom;
	Parms.ArrowsVisibility = ArrowsVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetSettingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::SetSettingName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "SetSettingName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Sound_OnValueChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::Sound_OnValueChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Sound_OnValueChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetCurrentSettingValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Array_Get_Item                                          (None)

void UUI_StormMode_Menu_ShadeButton_C::SetCurrentSettingValue(class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "SetCurrentSettingValue");

	Params::UUI_StormMode_Menu_ShadeButton_C_SetCurrentSettingValue_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Array_Get_Item                                          (None)

void UUI_StormMode_Menu_ShadeButton_C::UpdateValue(class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "UpdateValue");

	Params::UUI_StormMode_Menu_ShadeButton_C_UpdateValue_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::SetHighlighted(bool Highlighted, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "SetHighlighted");

	Params::UUI_StormMode_Menu_ShadeButton_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ForceSelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::ForceSelectButton(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "ForceSelectButton");

	Params::UUI_StormMode_Menu_ShadeButton_C_ForceSelectButton_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.EnableOrDisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::EnableOrDisableButton(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "EnableOrDisableButton");

	Params::UUI_StormMode_Menu_ShadeButton_C_EnableOrDisableButton_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.NavVertical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::NavVertical(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "NavVertical");

	Params::UUI_StormMode_Menu_ShadeButton_C_NavVertical_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.NavHorizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::NavHorizontal(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "NavHorizontal");

	Params::UUI_StormMode_Menu_ShadeButton_C_NavHorizontal_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.OverrideCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::OverrideCurrentValue(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "OverrideCurrentValue");

	Params::UUI_StormMode_Menu_ShadeButton_C_OverrideCurrentValue_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "PreConstruct");

	Params::UUI_StormMode_Menu_ShadeButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::SelectButton(bool Select_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "SelectButton");

	Params::UUI_StormMode_Menu_ShadeButton_C_SelectButton_Params Parms{};

	Parms.Select_ = Select_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.HighlightButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ShadeButton_C::HighlightButton(bool Highlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "HighlightButton");

	Params::UUI_StormMode_Menu_ShadeButton_C_HighlightButton_Params Parms{};

	Parms.Highlight_ = Highlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetParentRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::SetParentRef(class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "SetParentRef");

	Params::UUI_StormMode_Menu_ShadeButton_C_SetParentRef_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateSettingValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Values                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::UpdateSettingValues(TArray<class FText>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "UpdateSettingValues");

	Params::UUI_StormMode_Menu_ShadeButton_C_UpdateSettingValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Value_Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::Value_Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Value_Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Value_Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::Value_Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Value_Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Value_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::Value_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Value_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateSettingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_StormMode_Menu_ShadeButton_C::UpdateSettingName(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "UpdateSettingName");

	Params::UUI_StormMode_Menu_ShadeButton_C_UpdateSettingName_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.DeactivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::DeactivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "DeactivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Left_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Right_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::ActivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "ActivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Tick");

	Params::UUI_StormMode_Menu_ShadeButton_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ScrollBox_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::ScrollBox_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "ScrollBox_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ScrollBox_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::ScrollBox_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "ScrollBox_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Reset_Offset_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::Reset_Offset_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Reset_Offset_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Reset_Offset_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ShadeButton_C::Reset_Offset_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "Reset_Offset_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateIndexes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Indexes                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::UpdateIndexes(TArray<int32>& Indexes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "UpdateIndexes");

	Params::UUI_StormMode_Menu_ShadeButton_C_UpdateIndexes_Params Parms{};

	Parms.Indexes = Indexes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ExecuteUbergraph_UI_StormMode_Menu_ShadeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Event_Indexes                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Select                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Delta_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Select_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Highlight_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Event_Parent                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_Event_Values                                              (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::ExecuteUbergraph_UI_StormMode_Menu_ShadeButton(int32 EntryPoint, TArray<int32>& K2Node_Event_Indexes, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_Select_, bool K2Node_Event_Highlight_, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue_2, class FText K2Node_Event_Text, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "ExecuteUbergraph_UI_StormMode_Menu_ShadeButton");

	Params::UUI_StormMode_Menu_ShadeButton_C_ExecuteUbergraph_UI_StormMode_Menu_ShadeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Indexes = K2Node_Event_Indexes;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_Select = K2Node_Event_Select;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.K2Node_Event_Delta_1 = K2Node_Event_Delta_1;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_Event_Select_ = K2Node_Event_Select_;
	Parms.K2Node_Event_Highlight_ = K2Node_Event_Highlight_;
	Parms.K2Node_Event_Parent = K2Node_Event_Parent;
	Parms.K2Node_Event_Values = K2Node_Event_Values;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_LastIndex_ReturnValue_2 = CallFunc_Array_LastIndex_ReturnValue_2;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.OnSettingConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ShadeButton_C::OnSettingConfirmed__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ShadeButton_C", "OnSettingConfirmed__DelegateSignature");

	Params::UUI_StormMode_Menu_ShadeButton_C_OnSettingConfirmed__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


