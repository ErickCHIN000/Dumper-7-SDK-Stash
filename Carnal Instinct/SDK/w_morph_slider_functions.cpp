#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_morph_slider.w_morph_slider_C
// (None)

class UClass* UW_morph_slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_morph_slider_C");

	return Clss;
}


// w_morph_slider_C w_morph_slider.Default__w_morph_slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_morph_slider_C* UW_morph_slider_C::GetDefaultObj()
{
	static class UW_morph_slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_morph_slider_C*>(UW_morph_slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_morph_slider.w_morph_slider_C.BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_morph_slider_C::BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_morph_slider_C", "BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_morph_slider_C_BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_morph_slider.w_morph_slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_morph_slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_morph_slider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_morph_slider.w_morph_slider_C.BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_morph_slider_C::BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_morph_slider_C", "BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_morph_slider.w_morph_slider_C.ExecuteUbergraph_w_morph_slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets                                 (HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets_1                               (HasGetValueTypeHash)

void UW_morph_slider_C::ExecuteUbergraph_w_morph_slider(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, float K2Node_ComponentBoundEvent_Value, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_morph_slider_C", "ExecuteUbergraph_w_morph_slider");

	Params::UW_morph_slider_C_ExecuteUbergraph_w_morph_slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_s_MorphTargets = K2Node_MakeStruct_s_MorphTargets;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeStruct_s_MorphTargets_1 = K2Node_MakeStruct_s_MorphTargets_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


