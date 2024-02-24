#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SegmentMasteryBar.WBP_SegmentMasteryBar_C
// (None)

class UClass* UWBP_SegmentMasteryBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SegmentMasteryBar_C");

	return Clss;
}


// WBP_SegmentMasteryBar_C WBP_SegmentMasteryBar.Default__WBP_SegmentMasteryBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SegmentMasteryBar_C* UWBP_SegmentMasteryBar_C::GetDefaultObj()
{
	static class UWBP_SegmentMasteryBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SegmentMasteryBar_C*>(UWBP_SegmentMasteryBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SegmentMasteryBar.WBP_SegmentMasteryBar_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SegmentMasteryBar_C::SetProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SegmentMasteryBar_C", "SetProgress");

	Params::UWBP_SegmentMasteryBar_C_SetProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SegmentMasteryBar.WBP_SegmentMasteryBar_C.ExecuteUbergraph_WBP_SegmentMasteryBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_progress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SegmentMasteryBar_C::ExecuteUbergraph_WBP_SegmentMasteryBar(int32 EntryPoint, float K2Node_CustomEvent_progress, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SegmentMasteryBar_C", "ExecuteUbergraph_WBP_SegmentMasteryBar");

	Params::UWBP_SegmentMasteryBar_C_ExecuteUbergraph_WBP_SegmentMasteryBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_progress = K2Node_CustomEvent_progress;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


