#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CancelPuzzle.WBP_CancelPuzzle_C
// (None)

class UClass* UWBP_CancelPuzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CancelPuzzle_C");

	return Clss;
}


// WBP_CancelPuzzle_C WBP_CancelPuzzle.Default__WBP_CancelPuzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CancelPuzzle_C* UWBP_CancelPuzzle_C::GetDefaultObj()
{
	static class UWBP_CancelPuzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CancelPuzzle_C*>(UWBP_CancelPuzzle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.BPI_DisplayAnim
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CancelPuzzle_C::BPI_DisplayAnim(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "BPI_DisplayAnim");

	Params::UWBP_CancelPuzzle_C_BPI_DisplayAnim_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CancelPuzzle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CancelPuzzle_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.BindOnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CancelPuzzle_C::BindOnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "BindOnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.BPI_HideNow
// (BlueprintEvent)
// Parameters:

void UWBP_CancelPuzzle_C::BPI_HideNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "BPI_HideNow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.BP_OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CancelPuzzle_C::BP_OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "BP_OnTick");

	Params::UWBP_CancelPuzzle_C_BP_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CancelPuzzle.WBP_CancelPuzzle_C.ExecuteUbergraph_WBP_CancelPuzzle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CancelPuzzle_C::ExecuteUbergraph_WBP_CancelPuzzle(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_visible, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CancelPuzzle_C", "ExecuteUbergraph_WBP_CancelPuzzle");

	Params::UWBP_CancelPuzzle_C_ExecuteUbergraph_WBP_CancelPuzzle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_visible = K2Node_Event_visible;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

