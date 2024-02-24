#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ExternalTitleButton.UMG_ExternalTitleButton_C
// (None)

class UClass* UUMG_ExternalTitleButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ExternalTitleButton_C");

	return Clss;
}


// UMG_ExternalTitleButton_C UMG_ExternalTitleButton.Default__UMG_ExternalTitleButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ExternalTitleButton_C* UUMG_ExternalTitleButton_C::GetDefaultObj()
{
	static class UUMG_ExternalTitleButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ExternalTitleButton_C*>(UUMG_ExternalTitleButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExternalTitleButton_C::SetDisabled(bool NewParam, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "SetDisabled");

	Params::UUMG_ExternalTitleButton_C_SetDisabled_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.Get_ButtonText_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UUMG_ExternalTitleButton_C::Get_ButtonText_ColorAndOpacity_0(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "Get_ButtonText_ColorAndOpacity_0");

	Params::UUMG_ExternalTitleButton_C_Get_ButtonText_ColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetTextStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Italic                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Font                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UUMG_ExternalTitleButton_C::SetTextStyle(bool Bold, bool Italic, class UObject* Font, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "SetTextStyle");

	Params::UUMG_ExternalTitleButton_C_SetTextStyle_Params Parms{};

	Parms.Bold = Bold;
	Parms.Italic = Italic;
	Parms.Font = Font;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetButtonImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 DisabledBrush                                                    (Edit, BlueprintVisible)
// struct FSlateBrush                 PressedBrush                                                     (Edit, BlueprintVisible)
// struct FSlateBrush                 NormalBrush                                                      (Edit, BlueprintVisible)
// struct FSlateBrush                 HoveredBrush                                                     (Edit, BlueprintVisible)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UUMG_ExternalTitleButton_C::SetButtonImages(class UTexture* Normal, class UTexture* Hovered, class UTexture* Pressed, class UTexture* Disabled, const struct FSlateBrush& DisabledBrush, const struct FSlateBrush& PressedBrush, const struct FSlateBrush& NormalBrush, const struct FSlateBrush& HoveredBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "SetButtonImages");

	Params::UUMG_ExternalTitleButton_C_SetButtonImages_Params Parms{};

	Parms.Normal = Normal;
	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Disabled = Disabled;
	Parms.DisabledBrush = DisabledBrush;
	Parms.PressedBrush = PressedBrush;
	Parms.NormalBrush = NormalBrush;
	Parms.HoveredBrush = HoveredBrush;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.UpdateTextColour
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_ExternalTitleButton_C::UpdateTextColour(const struct FLinearColor& Colour, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "UpdateTextColour");

	Params::UUMG_ExternalTitleButton_C_UpdateTextColour_Params Parms{};

	Parms.Colour = Colour;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetTextSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UUMG_ExternalTitleButton_C::SetTextSize(int32 TextSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "SetTextSize");

	Params::UUMG_ExternalTitleButton_C_SetTextSize_Params Parms{};

	Parms.TextSize = TextSize;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_ExternalTitleButton_C::SetText(class FText Text, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "SetText");

	Params::UUMG_ExternalTitleButton_C_SetText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ExternalTitleButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ExternalTitleButton_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ExternalTitleButton_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExternalTitleButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "PreConstruct");

	Params::UUMG_ExternalTitleButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.UpdateSpacer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ExternalTitleButton_C::UpdateSpacer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "UpdateSpacer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.ExecuteUbergraph_UMG_ExternalTitleButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExternalTitleButton_C::ExecuteUbergraph_UMG_ExternalTitleButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "ExecuteUbergraph_UMG_ExternalTitleButton");

	Params::UUMG_ExternalTitleButton_C_ExecuteUbergraph_UMG_ExternalTitleButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ExternalTitleButton_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExternalTitleButton_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


