#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ReaperAnimation.ReaperAnimation_C
// (None)

class UClass* UReaperAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperAnimation_C");

	return Clss;
}


// ReaperAnimation_C ReaperAnimation.Default__ReaperAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperAnimation_C* UReaperAnimation_C::GetDefaultObj()
{
	static class UReaperAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperAnimation_C*>(UReaperAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReaperAnimation.ReaperAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UReaperAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "AnimGraph");

	Params::UReaperAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_LookAt_DF478698463CA29A517125BAF66140B1
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_LookAt_DF478698463CA29A517125BAF66140B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_LookAt_DF478698463CA29A517125BAF66140B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_BlendListByBool_87FF5004491CB8419FE504A5053B1E1F
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_BlendListByBool_87FF5004491CB8419FE504A5053B1E1F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_BlendListByBool_87FF5004491CB8419FE504A5053B1E1F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_01DBE1A6465575643D8B3990ACE0F60C
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_01DBE1A6465575643D8B3990ACE0F60C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_01DBE1A6465575643D8B3990ACE0F60C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_2913C62A4C1CA011F3E18DA56C6554C4
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_2913C62A4C1CA011F3E18DA56C6554C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_2913C62A4C1CA011F3E18DA56C6554C4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_ED6CDAF449F56CEFD8EAA3AF6CF387E0
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_ED6CDAF449F56CEFD8EAA3AF6CF387E0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_ED6CDAF449F56CEFD8EAA3AF6CF387E0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_328EE08C4717096C83B8DB8A9961D04B
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_328EE08C4717096C83B8DB8A9961D04B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_328EE08C4717096C83B8DB8A9961D04B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_218C5AA246A95DBC0E54F79E71FE1E9D
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_218C5AA246A95DBC0E54F79E71FE1E9D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_218C5AA246A95DBC0E54F79E71FE1E9D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_CC2E29C94BF80F4F0A59E9BCCDB63266
// (BlueprintEvent)
// Parameters:

void UReaperAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_CC2E29C94BF80F4F0A59E9BCCDB63266()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_CC2E29C94BF80F4F0A59E9BCCDB63266");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReaperAnimation.ReaperAnimation_C.ExecuteUbergraph_ReaperAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UReaperAnimation_C::ExecuteUbergraph_ReaperAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReaperAnimation_C", "ExecuteUbergraph_ReaperAnimation");

	Params::UReaperAnimation_C_ExecuteUbergraph_ReaperAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


