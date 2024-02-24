#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C
// (None)

class UClass* UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C");

	return Clss;
}


// WBP_sw_ItemTooltip_CraftingPreviewAttribute_C WBP_sw_ItemTooltip_CraftingPreviewAttribute.Default__WBP_sw_ItemTooltip_CraftingPreviewAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C* UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::GetDefaultObj()
{
	static class UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C*>(UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.ShowNegativeArrowPip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::ShowNegativeArrowPip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "ShowNegativeArrowPip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.ShowPositiveArrowPip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::ShowPositiveArrowPip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "ShowPositiveArrowPip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.PlayCompareAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBetter                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::PlayCompareAnimation(bool IsBetter, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, float CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast, float CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "PlayCompareAnimation");

	Params::UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_PlayCompareAnimation_Params Parms{};

	Parms.IsBetter = IsBetter;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast;
	Parms.CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast_1 = CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.SetValueAndImgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 ColorOverride                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::SetValueAndImgColor(const struct FSlateColor& ColorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "SetValueAndImgColor");

	Params::UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_SetValueAndImgColor_Params Parms{};

	Parms.ColorOverride = ColorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatTextFromType_ResultText                           (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::Initialize(bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_FormatTextFromType_ResultText, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "Initialize");

	Params::UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_Initialize_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FormatTextFromType_ResultText = CallFunc_FormatTextFromType_ResultText;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.ExecuteUbergraph_WBP_sw_ItemTooltip_CraftingPreviewAttribute
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C::ExecuteUbergraph_WBP_sw_ItemTooltip_CraftingPreviewAttribute(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_CraftingPreviewAttribute_C", "ExecuteUbergraph_WBP_sw_ItemTooltip_CraftingPreviewAttribute");

	Params::UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_ExecuteUbergraph_WBP_sw_ItemTooltip_CraftingPreviewAttribute_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


