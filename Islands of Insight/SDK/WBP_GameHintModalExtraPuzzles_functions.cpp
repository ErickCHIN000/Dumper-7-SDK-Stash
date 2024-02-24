#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C
// (None)

class UClass* UWBP_GameHintModalExtraPuzzles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameHintModalExtraPuzzles_C");

	return Clss;
}


// WBP_GameHintModalExtraPuzzles_C WBP_GameHintModalExtraPuzzles.Default__WBP_GameHintModalExtraPuzzles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameHintModalExtraPuzzles_C* UWBP_GameHintModalExtraPuzzles_C::GetDefaultObj()
{
	static class UWBP_GameHintModalExtraPuzzles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameHintModalExtraPuzzles_C*>(UWBP_GameHintModalExtraPuzzles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameHintModalExtraPuzzles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalExtraPuzzles_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_GameHintModalExtraPuzzles_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalExtraPuzzles_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameHintModalExtraPuzzles_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalExtraPuzzles_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     In_Brush_Image                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GameHintModalExtraPuzzles_C::Setup(class UObject* In_Brush_Image, class FText TitleText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalExtraPuzzles_C", "Setup");

	Params::UWBP_GameHintModalExtraPuzzles_C_Setup_Params Parms{};

	Parms.In_Brush_Image = In_Brush_Image;
	Parms.TitleText = TitleText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.ExecuteUbergraph_WBP_GameHintModalExtraPuzzles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_In_Brush_Image                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TitleText                                     (None)
// class FText                        K2Node_CustomEvent_BodyText                                      (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWBP_GameHintModalExtraPuzzles_C::ExecuteUbergraph_WBP_GameHintModalExtraPuzzles(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UObject* K2Node_CustomEvent_In_Brush_Image, class FText K2Node_CustomEvent_TitleText, class FText K2Node_CustomEvent_BodyText, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalExtraPuzzles_C", "ExecuteUbergraph_WBP_GameHintModalExtraPuzzles");

	Params::UWBP_GameHintModalExtraPuzzles_C_ExecuteUbergraph_WBP_GameHintModalExtraPuzzles_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_In_Brush_Image = K2Node_CustomEvent_In_Brush_Image;
	Parms.K2Node_CustomEvent_TitleText = K2Node_CustomEvent_TitleText;
	Parms.K2Node_CustomEvent_BodyText = K2Node_CustomEvent_BodyText;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}

}


