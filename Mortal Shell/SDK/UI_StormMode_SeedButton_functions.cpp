#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_SeedButton.UI_StormMode_SeedButton_C
// (None)

class UClass* UUI_StormMode_SeedButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_SeedButton_C");

	return Clss;
}


// UI_StormMode_SeedButton_C UI_StormMode_SeedButton.Default__UI_StormMode_SeedButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_SeedButton_C* UUI_StormMode_SeedButton_C::GetDefaultObj()
{
	static class UUI_StormMode_SeedButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_SeedButton_C*>(UUI_StormMode_SeedButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.IsButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SeedButton_C::IsButtonEnabled(bool* Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "IsButtonEnabled");

	Params::UUI_StormMode_SeedButton_C_IsButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.HandleNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_StormMode_SeedButton_C::HandleNumber(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "HandleNumber");

	Params::UUI_StormMode_SeedButton_C_HandleNumber_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.GetTextAsIntString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Number                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::GetTextAsIntString(class FString* Number, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "GetTextAsIntString");

	Params::UUI_StormMode_SeedButton_C_GetTextAsIntString_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Number != nullptr)
		*Number = std::move(Parms.Number);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::SetHighlighted(bool Highlighted, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "SetHighlighted");

	Params::UUI_StormMode_SeedButton_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.HighlightButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SeedButton_C::HighlightButton(bool Highlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "HighlightButton");

	Params::UUI_StormMode_SeedButton_C_HighlightButton_Params Parms{};

	Parms.Highlight_ = Highlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SeedButton_C::SelectButton(bool Select_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "SelectButton");

	Params::UUI_StormMode_SeedButton_C_SelectButton_Params Parms{};

	Parms.Select_ = Select_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.SetParentRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::SetParentRef(class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "SetParentRef");

	Params::UUI_StormMode_SeedButton_C_SetParentRef_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.UpdateSettingValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Values                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::UpdateSettingValues(TArray<class FText>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "UpdateSettingValues");

	Params::UUI_StormMode_SeedButton_C_UpdateSettingValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.Value_Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::Value_Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "Value_Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.Value_Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::Value_Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "Value_Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.Value_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::Value_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "Value_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.UpdateSettingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_StormMode_SeedButton_C::UpdateSettingName(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "UpdateSettingName");

	Params::UUI_StormMode_SeedButton_C_UpdateSettingName_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.ForceSelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SeedButton_C::ForceSelectButton(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "ForceSelectButton");

	Params::UUI_StormMode_SeedButton_C_ForceSelectButton_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.EnableOrDisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SeedButton_C::EnableOrDisableButton(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "EnableOrDisableButton");

	Params::UUI_StormMode_SeedButton_C_EnableOrDisableButton_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.NavVertical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::NavVertical(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "NavVertical");

	Params::UUI_StormMode_SeedButton_C_NavVertical_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.NavHorizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::NavHorizontal(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "NavHorizontal");

	Params::UUI_StormMode_SeedButton_C_NavHorizontal_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.OverrideCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::OverrideCurrentValue(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "OverrideCurrentValue");

	Params::UUI_StormMode_SeedButton_C_OverrideCurrentValue_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.UpdateIndexes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Indexes                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_SeedButton_C::UpdateIndexes(TArray<int32>& Indexes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "UpdateIndexes");

	Params::UUI_StormMode_SeedButton_C_UpdateIndexes_Params Parms{};

	Parms.Indexes = Indexes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SeedButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "PreConstruct");

	Params::UUI_StormMode_SeedButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::BndEvt__Button_Up_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "BndEvt__Button_Up_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::BndEvt__Button_Down_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "BndEvt__Button_Down_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::BndEvt__Button_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "BndEvt__Button_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::BndEvt__Button_Down_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "BndEvt__Button_Down_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.BndEvt__Button_SeedButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::BndEvt__Button_SeedButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "BndEvt__Button_SeedButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.DeactivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::DeactivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "DeactivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SeedButton_C::ActivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "ActivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.ExecuteUbergraph_UI_StormMode_SeedButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Highlight_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Select_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_StormMode_SeedButton_C::ExecuteUbergraph_UI_StormMode_SeedButton(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_Highlight_, bool K2Node_Event_Select_, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SeedButton_C", "ExecuteUbergraph_UI_StormMode_SeedButton");

	Params::UUI_StormMode_SeedButton_C_ExecuteUbergraph_UI_StormMode_SeedButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_Highlight_ = K2Node_Event_Highlight_;
	Parms.K2Node_Event_Select_ = K2Node_Event_Select_;
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
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


