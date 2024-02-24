#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C
// (None)

class UClass* UUI_StormMode_Menu_ApplyButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_ApplyButton_C");

	return Clss;
}


// UI_StormMode_Menu_ApplyButton_C UI_StormMode_Menu_ApplyButton.Default__UI_StormMode_Menu_ApplyButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_ApplyButton_C* UUI_StormMode_Menu_ApplyButton_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_ApplyButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_ApplyButton_C*>(UUI_StormMode_Menu_ApplyButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.IsButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::IsButtonEnabled(bool* Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "IsButtonEnabled");

	Params::UUI_StormMode_Menu_ApplyButton_C_IsButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::SetHighlighted(bool Highlighted, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "SetHighlighted");

	Params::UUI_StormMode_Menu_ApplyButton_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.SetParentRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::SetParentRef(class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "SetParentRef");

	Params::UUI_StormMode_Menu_ApplyButton_C_SetParentRef_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.UpdateSettingValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Values                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::UpdateSettingValues(TArray<class FText>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "UpdateSettingValues");

	Params::UUI_StormMode_Menu_ApplyButton_C_UpdateSettingValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.Value_Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::Value_Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "Value_Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.Value_Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::Value_Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "Value_Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.Value_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::Value_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "Value_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.UpdateSettingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_StormMode_Menu_ApplyButton_C::UpdateSettingName(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "UpdateSettingName");

	Params::UUI_StormMode_Menu_ApplyButton_C_UpdateSettingName_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.ForceSelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::ForceSelectButton(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "ForceSelectButton");

	Params::UUI_StormMode_Menu_ApplyButton_C_ForceSelectButton_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.EnableOrDisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::EnableOrDisableButton(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "EnableOrDisableButton");

	Params::UUI_StormMode_Menu_ApplyButton_C_EnableOrDisableButton_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.NavVertical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::NavVertical(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "NavVertical");

	Params::UUI_StormMode_Menu_ApplyButton_C_NavVertical_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.NavHorizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::NavHorizontal(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "NavHorizontal");

	Params::UUI_StormMode_Menu_ApplyButton_C_NavHorizontal_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.OverrideCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::OverrideCurrentValue(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "OverrideCurrentValue");

	Params::UUI_StormMode_Menu_ApplyButton_C_OverrideCurrentValue_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.UpdateIndexes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Indexes                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_Menu_ApplyButton_C::UpdateIndexes(TArray<int32>& Indexes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "UpdateIndexes");

	Params::UUI_StormMode_Menu_ApplyButton_C_UpdateIndexes_Params Parms{};

	Parms.Indexes = Indexes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "PreConstruct");

	Params::UUI_StormMode_Menu_ApplyButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::SelectButton(bool Select_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "SelectButton");

	Params::UUI_StormMode_Menu_ApplyButton_C_SelectButton_Params Parms{};

	Parms.Select_ = Select_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.HighlightButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::HighlightButton(bool Highlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "HighlightButton");

	Params::UUI_StormMode_Menu_ApplyButton_C_HighlightButton_Params Parms{};

	Parms.Highlight_ = Highlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.DeactivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::DeactivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "DeactivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::ActivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "ActivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.ExecuteUbergraph_UI_StormMode_Menu_ApplyButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Parent                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_Event_Values                                              (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (None)
// bool                               K2Node_Event_Select                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Delta_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Event_Indexes                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Select_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Highlight_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_ApplyButton_C::ExecuteUbergraph_UI_StormMode_Menu_ApplyButton(int32 EntryPoint, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_Select_, bool K2Node_Event_Highlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "ExecuteUbergraph_UI_StormMode_Menu_ApplyButton");

	Params::UUI_StormMode_Menu_ApplyButton_C_ExecuteUbergraph_UI_StormMode_Menu_ApplyButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Parent = K2Node_Event_Parent;
	Parms.K2Node_Event_Values = K2Node_Event_Values;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Select = K2Node_Event_Select;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.K2Node_Event_Delta_1 = K2Node_Event_Delta_1;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Indexes = K2Node_Event_Indexes;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_Event_Select_ = K2Node_Event_Select_;
	Parms.K2Node_Event_Highlight_ = K2Node_Event_Highlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_ApplyButton.UI_StormMode_Menu_ApplyButton_C.OnConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_ApplyButton_C::OnConfirmed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_ApplyButton_C", "OnConfirmed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


