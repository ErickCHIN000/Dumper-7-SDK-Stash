#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ButtonIcon.UMG_ButtonIcon_C
// (None)

class UClass* UUMG_ButtonIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ButtonIcon_C");

	return Clss;
}


// UMG_ButtonIcon_C UMG_ButtonIcon.Default__UMG_ButtonIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ButtonIcon_C* UUMG_ButtonIcon_C::GetDefaultObj()
{
	static class UUMG_ButtonIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ButtonIcon_C*>(UUMG_ButtonIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonIcon_C::SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "SetDisabled");

	Params::UUMG_ButtonIcon_C_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.Get_ButtonText_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UUMG_ButtonIcon_C::Get_ButtonText_ColorAndOpacity_0(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "Get_ButtonText_ColorAndOpacity_0");

	Params::UUMG_ButtonIcon_C_Get_ButtonText_ColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Italic                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Font                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonIcon_C::SetTextStyle(bool Bold, bool Italic, class UObject* Font)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "SetTextStyle");

	Params::UUMG_ButtonIcon_C_SetTextStyle_Params Parms{};

	Parms.Bold = Bold;
	Parms.Italic = Italic;
	Parms.Font = Font;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetButtonImages
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
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UUMG_ButtonIcon_C::SetButtonImages(class UMaterialInstance* Normal, class UMaterialInstance* Hovered, class UMaterialInstance* Pressed, class UMaterialInstance* Disabled, const struct FSlateBrush& DisabledBrush, const struct FSlateBrush& PressedBrush, const struct FSlateBrush& NormalBrush, const struct FSlateBrush& HoveredBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "SetButtonImages");

	Params::UUMG_ButtonIcon_C_SetButtonImages_Params Parms{};

	Parms.Normal = Normal;
	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Disabled = Disabled;
	Parms.DisabledBrush = DisabledBrush;
	Parms.PressedBrush = PressedBrush;
	Parms.NormalBrush = NormalBrush;
	Parms.HoveredBrush = HoveredBrush;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.UpdateTextColour
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonIcon_C::UpdateTextColour(const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "UpdateTextColour");

	Params::UUMG_ButtonIcon_C_UpdateTextColour_Params Parms{};

	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetTextSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonIcon_C::SetTextSize(int32 TextSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "SetTextSize");

	Params::UUMG_ButtonIcon_C_SetTextSize_Params Parms{};

	Parms.TextSize = TextSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ButtonIcon_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "SetText");

	Params::UUMG_ButtonIcon_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ButtonIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ButtonIcon_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ButtonIcon_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "PreConstruct");

	Params::UUMG_ButtonIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.Reinitialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonIcon_C::Reinitialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "Reinitialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.ExecuteUbergraph_UMG_ButtonIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonIcon_C::ExecuteUbergraph_UMG_ButtonIcon(int32 EntryPoint, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "ExecuteUbergraph_UMG_ButtonIcon");

	Params::UUMG_ButtonIcon_C_ExecuteUbergraph_UMG_ButtonIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonIcon.UMG_ButtonIcon_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonIcon_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonIcon_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


