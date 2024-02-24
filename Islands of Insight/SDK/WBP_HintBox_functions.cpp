#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HintBox.WBP_HintBox_C
// (None)

class UClass* UWBP_HintBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HintBox_C");

	return Clss;
}


// WBP_HintBox_C WBP_HintBox.Default__WBP_HintBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HintBox_C* UWBP_HintBox_C::GetDefaultObj()
{
	static class UWBP_HintBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HintBox_C*>(UWBP_HintBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HintBox.WBP_HintBox_C.BP_PlayShowAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_HintBox_C::BP_PlayShowAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HintBox_C", "BP_PlayShowAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HintBox.WBP_HintBox_C.BP_PlayHideAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_HintBox_C::BP_PlayHideAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HintBox_C", "BP_PlayHideAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HintBox.WBP_HintBox_C.ExecuteUbergraph_WBP_HintBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HintBox_C::ExecuteUbergraph_WBP_HintBox(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HintBox_C", "ExecuteUbergraph_WBP_HintBox");

	Params::UWBP_HintBox_C_ExecuteUbergraph_WBP_HintBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue_1 = CallFunc_PlayAnimationTimeRange_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


