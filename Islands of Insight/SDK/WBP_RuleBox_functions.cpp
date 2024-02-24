#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RuleBox.WBP_RuleBox_C
// (None)

class UClass* UWBP_RuleBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RuleBox_C");

	return Clss;
}


// WBP_RuleBox_C WBP_RuleBox.Default__WBP_RuleBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RuleBox_C* UWBP_RuleBox_C::GetDefaultObj()
{
	static class UWBP_RuleBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RuleBox_C*>(UWBP_RuleBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RuleBox.WBP_RuleBox_C.BP_UpdateStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ShowBar                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_RuleBox_C::BP_UpdateStatus(bool ShowBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RuleBox_C", "BP_UpdateStatus");

	Params::UWBP_RuleBox_C_BP_UpdateStatus_Params Parms{};

	Parms.ShowBar = ShowBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RuleBox.WBP_RuleBox_C.BP_PlayOpeningAnims
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RuleBox_C::BP_PlayOpeningAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RuleBox_C", "BP_PlayOpeningAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RuleBox.WBP_RuleBox_C.ExecuteUbergraph_WBP_RuleBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_showBar                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RuleBox_C::ExecuteUbergraph_WBP_RuleBox(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_showBar, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RuleBox_C", "ExecuteUbergraph_WBP_RuleBox");

	Params::UWBP_RuleBox_C_ExecuteUbergraph_WBP_RuleBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_showBar = K2Node_Event_showBar;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


