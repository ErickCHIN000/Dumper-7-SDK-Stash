#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingTooltip_TextBlock.UMG_SettingTooltip_TextBlock_C
// (None)

class UClass* UUMG_SettingTooltip_TextBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingTooltip_TextBlock_C");

	return Clss;
}


// UMG_SettingTooltip_TextBlock_C UMG_SettingTooltip_TextBlock.Default__UMG_SettingTooltip_TextBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingTooltip_TextBlock_C* UUMG_SettingTooltip_TextBlock_C::GetDefaultObj()
{
	static class UUMG_SettingTooltip_TextBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingTooltip_TextBlock_C*>(UUMG_SettingTooltip_TextBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SettingTooltip_TextBlock.UMG_SettingTooltip_TextBlock_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SettingTooltip_TextBlock_C::Set_Text(class FText InText, bool State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltip_TextBlock_C", "Set Text");

	Params::UUMG_SettingTooltip_TextBlock_C_Set_Text_Params Parms{};

	Parms.InText = InText;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingTooltip_TextBlock.UMG_SettingTooltip_TextBlock_C.ExecuteUbergraph_UMG_SettingTooltip_TextBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText                                        (None)
// bool                               K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (None)

void UUMG_SettingTooltip_TextBlock_C::ExecuteUbergraph_UMG_SettingTooltip_TextBlock(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool Temp_bool_Variable_2, class FText K2Node_CustomEvent_InText, bool K2Node_CustomEvent_State, class UObject* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltip_TextBlock_C", "ExecuteUbergraph_UMG_SettingTooltip_TextBlock");

	Params::UUMG_SettingTooltip_TextBlock_C_ExecuteUbergraph_UMG_SettingTooltip_TextBlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


