#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SM_TED.BPAnim_SM_TED_C
// (None)

class UClass* UBPAnim_SM_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SM_TED_C");

	return Clss;
}


// BPAnim_SM_TED_C BPAnim_SM_TED.Default__BPAnim_SM_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SM_TED_C* UBPAnim_SM_TED_C::GetDefaultObj()
{
	static class UBPAnim_SM_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SM_TED_C*>(UBPAnim_SM_TED_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SM_TED.BPAnim_SM_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_TED_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_TED.BPAnim_SM_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_TED_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_TED.BPAnim_SM_TED_C.ExecuteUbergraph_BPAnim_SM_TED
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SM_TED_C::ExecuteUbergraph_BPAnim_SM_TED(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_TED_C", "ExecuteUbergraph_BPAnim_SM_TED");

	Params::UBPAnim_SM_TED_C_ExecuteUbergraph_BPAnim_SM_TED_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


