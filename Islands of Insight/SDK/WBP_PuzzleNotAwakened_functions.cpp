#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PuzzleNotAwakened.WBP_PuzzleNotAwakened_C
// (None)

class UClass* UWBP_PuzzleNotAwakened_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PuzzleNotAwakened_C");

	return Clss;
}


// WBP_PuzzleNotAwakened_C WBP_PuzzleNotAwakened.Default__WBP_PuzzleNotAwakened_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PuzzleNotAwakened_C* UWBP_PuzzleNotAwakened_C::GetDefaultObj()
{
	static class UWBP_PuzzleNotAwakened_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PuzzleNotAwakened_C*>(UWBP_PuzzleNotAwakened_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PuzzleNotAwakened.WBP_PuzzleNotAwakened_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PuzzleNotAwakened_C::PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PuzzleNotAwakened_C", "PlayAnim");

	Params::UWBP_PuzzleNotAwakened_C_PlayAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PuzzleNotAwakened.WBP_PuzzleNotAwakened_C.ShowWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PuzzleNotAwakened_C::ShowWarning(class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PuzzleNotAwakened_C", "ShowWarning");

	Params::UWBP_PuzzleNotAwakened_C_ShowWarning_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PuzzleNotAwakened.WBP_PuzzleNotAwakened_C.ExecuteUbergraph_WBP_PuzzleNotAwakened
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PuzzleNotAwakened_C::ExecuteUbergraph_WBP_PuzzleNotAwakened(int32 EntryPoint, class FText K2Node_CustomEvent_Message, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PuzzleNotAwakened_C", "ExecuteUbergraph_WBP_PuzzleNotAwakened");

	Params::UWBP_PuzzleNotAwakened_C_ExecuteUbergraph_WBP_PuzzleNotAwakened_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


