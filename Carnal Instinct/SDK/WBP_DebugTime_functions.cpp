#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DebugTime.WBP_DebugTime_C
// (None)

class UClass* UWBP_DebugTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DebugTime_C");

	return Clss;
}


// WBP_DebugTime_C WBP_DebugTime.Default__WBP_DebugTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DebugTime_C* UWBP_DebugTime_C::GetDefaultObj()
{
	static class UWBP_DebugTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DebugTime_C*>(UWBP_DebugTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DebugTime.WBP_DebugTime_C.fnSetTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_DebugTime_C::FnSetTime(float Time, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DebugTime_C", "fnSetTime");

	Params::UWBP_DebugTime_C_FnSetTime_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DebugTime.WBP_DebugTime_C.ExecuteUbergraph_WBP_DebugTime
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugTime_C::ExecuteUbergraph_WBP_DebugTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DebugTime_C", "ExecuteUbergraph_WBP_DebugTime");

	Params::UWBP_DebugTime_C_ExecuteUbergraph_WBP_DebugTime_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


