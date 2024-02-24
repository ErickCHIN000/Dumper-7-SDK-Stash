#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ButtonBase.UMG_ButtonBase_C
// (None)

class UClass* UUMG_ButtonBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ButtonBase_C");

	return Clss;
}


// UMG_ButtonBase_C UMG_ButtonBase.Default__UMG_ButtonBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ButtonBase_C* UUMG_ButtonBase_C::GetDefaultObj()
{
	static class UUMG_ButtonBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ButtonBase_C*>(UUMG_ButtonBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ButtonBase.UMG_ButtonBase_C.Update Visuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonBase_C::Update_Visuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "Update Visuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.GetImageButton
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     ImageButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonBase_C::GetImageButton(class UButton** ImageButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "GetImageButton");

	Params::UUMG_ButtonBase_C_GetImageButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImageButton != nullptr)
		*ImageButton = Parms.ImageButton;

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.GetButtonText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  ButtonText                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonBase_C::GetButtonText(class UTextBlock** ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "GetButtonText");

	Params::UUMG_ButtonBase_C_GetButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonBase_C::OnClicked(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "OnClicked");

	Params::UUMG_ButtonBase_C_OnClicked_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.OnReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonBase_C::OnReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "OnReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.GetDisabledTextColour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)

void UUMG_ButtonBase_C::GetDisabledTextColour(struct FSlateColor* Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "GetDisabledTextColour");

	Params::UUMG_ButtonBase_C_GetDisabledTextColour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.GetPressedTextColour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)

void UUMG_ButtonBase_C::GetPressedTextColour(struct FSlateColor* Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "GetPressedTextColour");

	Params::UUMG_ButtonBase_C_GetPressedTextColour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.GetHoveredTextColour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)

void UUMG_ButtonBase_C::GetHoveredTextColour(struct FSlateColor* Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "GetHoveredTextColour");

	Params::UUMG_ButtonBase_C_GetHoveredTextColour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.GetNormalTextColour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)

void UUMG_ButtonBase_C::GetNormalTextColour(struct FSlateColor* Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "GetNormalTextColour");

	Params::UUMG_ButtonBase_C_GetNormalTextColour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.OnPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonBase_C::OnPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "OnPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.OnUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonBase_C::OnUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "OnUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.OnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonBase_C::OnHover(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "OnHover");

	Params::UUMG_ButtonBase_C_OnHover_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.UpdateTextColour
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TextColour                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetHoveredTextColour_Colour                             (None)
// struct FSlateColor                 CallFunc_GetPressedTextColour_Colour                             (None)
// struct FSlateColor                 CallFunc_GetDisabledTextColour_Colour                            (None)
// struct FSlateColor                 CallFunc_GetNormalTextColour_Colour                              (None)

void UUMG_ButtonBase_C::UpdateTextColour(const struct FSlateColor& TextColour, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateColor& CallFunc_GetHoveredTextColour_Colour, const struct FSlateColor& CallFunc_GetPressedTextColour_Colour, const struct FSlateColor& CallFunc_GetDisabledTextColour_Colour, const struct FSlateColor& CallFunc_GetNormalTextColour_Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "UpdateTextColour");

	Params::UUMG_ButtonBase_C_UpdateTextColour_Params Parms{};

	Parms.TextColour = TextColour;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetHoveredTextColour_Colour = CallFunc_GetHoveredTextColour_Colour;
	Parms.CallFunc_GetPressedTextColour_Colour = CallFunc_GetPressedTextColour_Colour;
	Parms.CallFunc_GetDisabledTextColour_Colour = CallFunc_GetDisabledTextColour_Colour;
	Parms.CallFunc_GetNormalTextColour_Colour = CallFunc_GetNormalTextColour_Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextColours
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 Hover                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ButtonBase_C::SetTextColours(const struct FSlateColor& Normal, const struct FSlateColor& Hover, const struct FSlateColor& Pressed, const struct FSlateColor& Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "SetTextColours");

	Params::UUMG_ButtonBase_C_SetTextColours_Params Parms{};

	Parms.Normal = Normal;
	Parms.Hover = Hover;
	Parms.Pressed = Pressed;
	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.IsDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Disabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonBase_C::IsDisabled(bool* Disabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "IsDisabled");

	Params::UUMG_ButtonBase_C_IsDisabled_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Disabled != nullptr)
		*Disabled = Parms.Disabled;

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonBase_C::SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "SetDisabled");

	Params::UUMG_ButtonBase_C_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Italic                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Font                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UUMG_ButtonBase_C::SetTextStyle(bool Bold, bool Italic, class UObject* Font, bool CallFunc_IsValid_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "SetTextStyle");

	Params::UUMG_ButtonBase_C_SetTextStyle_Params Parms{};

	Parms.Bold = Bold;
	Parms.Italic = Italic;
	Parms.Font = Font;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.SetButtonImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 DisabledBrush                                                    (Edit, BlueprintVisible)
// struct FSlateBrush                 PressedBrush                                                     (Edit, BlueprintVisible)
// struct FSlateBrush                 NormalBrush                                                      (Edit, BlueprintVisible)
// struct FSlateBrush                 HoveredBrush                                                     (Edit, BlueprintVisible)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UUMG_ButtonBase_C::SetButtonImages(class UMaterialInstance* Normal, class UMaterialInstance* Hovered, class UMaterialInstance* Pressed, class UMaterialInstance* Disabled, const struct FSlateBrush& DisabledBrush, const struct FSlateBrush& PressedBrush, const struct FSlateBrush& NormalBrush, const struct FSlateBrush& HoveredBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, bool CallFunc_IsValid_ReturnValue_4, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "SetButtonImages");

	Params::UUMG_ButtonBase_C_SetButtonImages_Params Parms{};

	Parms.Normal = Normal;
	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Disabled = Disabled;
	Parms.DisabledBrush = DisabledBrush;
	Parms.PressedBrush = PressedBrush;
	Parms.NormalBrush = NormalBrush;
	Parms.HoveredBrush = HoveredBrush;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UUMG_ButtonBase_C::SetTextSize(int32 TextSize, bool CallFunc_IsValid_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "SetTextSize");

	Params::UUMG_ButtonBase_C_SetTextSize_Params Parms{};

	Parms.TextSize = TextSize;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonBase_C::SetText(class FText Text, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "SetText");

	Params::UUMG_ButtonBase_C_SetText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "PreConstruct");

	Params::UUMG_ButtonBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ButtonBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.ExecuteUbergraph_UMG_ButtonBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetImageButton_ImageButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UTextBlock*                  CallFunc_GetButtonText_ButtonText                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonBase_C::ExecuteUbergraph_UMG_ButtonBase(int32 EntryPoint, class UButton* CallFunc_GetImageButton_ImageButton, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTextBlock* CallFunc_GetButtonText_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "ExecuteUbergraph_UMG_ButtonBase");

	Params::UUMG_ButtonBase_C_ExecuteUbergraph_UMG_ButtonBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetImageButton_ImageButton = CallFunc_GetImageButton_ImageButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetButtonText_ButtonText = CallFunc_GetButtonText_ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonBase.UMG_ButtonBase_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonBase_C::Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonBase_C", "Clicked__DelegateSignature");

	Params::UUMG_ButtonBase_C_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


