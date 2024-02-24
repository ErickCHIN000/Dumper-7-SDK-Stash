#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C
// (None)

class UClass* UWBP_PlayerProfileCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerProfileCustomization_C");

	return Clss;
}


// WBP_PlayerProfileCustomization_C WBP_PlayerProfileCustomization.Default__WBP_PlayerProfileCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerProfileCustomization_C* UWBP_PlayerProfileCustomization_C::GetDefaultObj()
{
	static class UWBP_PlayerProfileCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerProfileCustomization_C*>(UWBP_PlayerProfileCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.Get_Border_Brush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRankIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetRankIconForRankIndex_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (None)

struct FSlateBrush UWBP_PlayerProfileCustomization_C::Get_Border_Brush_0(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetRankIndex_ReturnValue, class UTexture2D* CallFunc_GetRankIconForRankIndex_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "Get_Border_Brush_0");

	Params::UWBP_PlayerProfileCustomization_C_Get_Border_Brush_0_Params Parms{};

	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetRankIndex_ReturnValue = CallFunc_GetRankIndex_ReturnValue;
	Parms.CallFunc_GetRankIconForRankIndex_ReturnValue = CallFunc_GetRankIconForRankIndex_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_2 = CallFunc_MakeBrushFromTexture_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWBP_PlayerProfileCustomization_C::GetText_0(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "GetText_0");

	Params::UWBP_PlayerProfileCustomization_C_GetText_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.BndEvt__WBP_PlayerProfileCustomization_BorderButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerProfileCustomization_C::BndEvt__WBP_PlayerProfileCustomization_BorderButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "BndEvt__WBP_PlayerProfileCustomization_BorderButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.OnBorderClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Tex                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerProfileCustomization_C::OnBorderClicked(class UTexture2D* Tex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "OnBorderClicked");

	Params::UWBP_PlayerProfileCustomization_C_OnBorderClicked_Params Parms{};

	Parms.Tex = Tex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.BndEvt__WBP_PlayerProfileCustomization_TitleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerProfileCustomization_C::BndEvt__WBP_PlayerProfileCustomization_TitleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "BndEvt__WBP_PlayerProfileCustomization_TitleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerProfileCustomization_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.BndEvt__WBP_PlayerProfileCustomization_WBP_PlayerTitleCustomization_K2Node_ComponentBoundEvent_2_Close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerProfileCustomization_C::BndEvt__WBP_PlayerProfileCustomization_WBP_PlayerTitleCustomization_K2Node_ComponentBoundEvent_2_Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "BndEvt__WBP_PlayerProfileCustomization_WBP_PlayerTitleCustomization_K2Node_ComponentBoundEvent_2_Close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.OnSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerProfileCustomization_C::OnSwitched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "OnSwitched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.ExecuteUbergraph_WBP_PlayerProfileCustomization
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Tex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerProfileCustomization_C::ExecuteUbergraph_WBP_PlayerProfileCustomization(int32 EntryPoint, class UTexture2D* K2Node_CustomEvent_Tex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "ExecuteUbergraph_WBP_PlayerProfileCustomization");

	Params::UWBP_PlayerProfileCustomization_C_ExecuteUbergraph_WBP_PlayerProfileCustomization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Tex = K2Node_CustomEvent_Tex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerProfileCustomization.WBP_PlayerProfileCustomization_C.CloseTitle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerProfileCustomization_C::CloseTitle__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProfileCustomization_C", "CloseTitle__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


