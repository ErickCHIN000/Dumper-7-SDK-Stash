#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TutorialBox.WBP_TutorialBox_C
// (None)

class UClass* UWBP_TutorialBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TutorialBox_C");

	return Clss;
}


// WBP_TutorialBox_C WBP_TutorialBox.Default__WBP_TutorialBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TutorialBox_C* UWBP_TutorialBox_C::GetDefaultObj()
{
	static class UWBP_TutorialBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TutorialBox_C*>(UWBP_TutorialBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TutorialBox.WBP_TutorialBox_C.BP_UpdateTutorialMessage
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TutorialBox_C::BP_UpdateTutorialMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialBox_C", "BP_UpdateTutorialMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TutorialBox.WBP_TutorialBox_C.BP_PlayAppearAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TutorialBox_C::BP_PlayAppearAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialBox_C", "BP_PlayAppearAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TutorialBox.WBP_TutorialBox_C.ExecuteUbergraph_WBP_TutorialBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBoxMessage_ReturnValue                               (None)

void UWBP_TutorialBox_C::ExecuteUbergraph_WBP_TutorialBox(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetBoxMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialBox_C", "ExecuteUbergraph_WBP_TutorialBox");

	Params::UWBP_TutorialBox_C_ExecuteUbergraph_WBP_TutorialBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetBoxMessage_ReturnValue = CallFunc_GetBoxMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


