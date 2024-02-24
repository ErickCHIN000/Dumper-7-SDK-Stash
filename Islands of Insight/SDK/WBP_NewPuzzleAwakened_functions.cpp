#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C
// (None)

class UClass* UWBP_NewPuzzleAwakened_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NewPuzzleAwakened_C");

	return Clss;
}


// WBP_NewPuzzleAwakened_C WBP_NewPuzzleAwakened.Default__WBP_NewPuzzleAwakened_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NewPuzzleAwakened_C* UWBP_NewPuzzleAwakened_C::GetDefaultObj()
{
	static class UWBP_NewPuzzleAwakened_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NewPuzzleAwakened_C*>(UWBP_NewPuzzleAwakened_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     BrushImage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        PuzzleTypeMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NewPuzzleAwakened_C::Init(class UObject* BrushImage, class FText PuzzleTypeMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewPuzzleAwakened_C", "Init");

	Params::UWBP_NewPuzzleAwakened_C_Init_Params Parms{};

	Parms.BrushImage = BrushImage;
	Parms.PuzzleTypeMessage = PuzzleTypeMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NewPuzzleAwakened_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewPuzzleAwakened_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_NewPuzzleAwakened_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewPuzzleAwakened_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NewPuzzleAwakened_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewPuzzleAwakened_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.ExecuteUbergraph_WBP_NewPuzzleAwakened
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_BrushImage                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PuzzleTypeMessage                             (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWBP_NewPuzzleAwakened_C::ExecuteUbergraph_WBP_NewPuzzleAwakened(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_BrushImage, class FText K2Node_CustomEvent_PuzzleTypeMessage, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewPuzzleAwakened_C", "ExecuteUbergraph_WBP_NewPuzzleAwakened");

	Params::UWBP_NewPuzzleAwakened_C_ExecuteUbergraph_WBP_NewPuzzleAwakened_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_BrushImage = K2Node_CustomEvent_BrushImage;
	Parms.K2Node_CustomEvent_PuzzleTypeMessage = K2Node_CustomEvent_PuzzleTypeMessage;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}

}


