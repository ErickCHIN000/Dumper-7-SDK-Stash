#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_HW_TOR.BPAnim_HW_TOR_C
// (None)

class UClass* UBPAnim_HW_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_HW_TOR_C");

	return Clss;
}


// BPAnim_HW_TOR_C BPAnim_HW_TOR.Default__BPAnim_HW_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_HW_TOR_C* UBPAnim_HW_TOR_C::GetDefaultObj()
{
	static class UBPAnim_HW_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_HW_TOR_C*>(UBPAnim_HW_TOR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6
// (BlueprintEvent)
// Parameters:

void UBPAnim_HW_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3
// (BlueprintEvent)
// Parameters:

void UBPAnim_HW_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.ExecuteUbergraph_BPAnim_HW_TOR
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_HW_TOR_C::ExecuteUbergraph_BPAnim_HW_TOR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_TOR_C", "ExecuteUbergraph_BPAnim_HW_TOR");

	Params::UBPAnim_HW_TOR_C_ExecuteUbergraph_BPAnim_HW_TOR_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


