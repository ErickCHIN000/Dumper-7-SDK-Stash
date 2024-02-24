#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_nagant_doubleDrum.abp_nagant_doubleDrum_C
// (None)

class UClass* UAbp_nagant_doubleDrum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_nagant_doubleDrum_C");

	return Clss;
}


// abp_nagant_doubleDrum_C abp_nagant_doubleDrum.Default__abp_nagant_doubleDrum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_nagant_doubleDrum_C* UAbp_nagant_doubleDrum_C::GetDefaultObj()
{
	static class UAbp_nagant_doubleDrum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_nagant_doubleDrum_C*>(UAbp_nagant_doubleDrum_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_nagant_doubleDrum.abp_nagant_doubleDrum_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_nagant_doubleDrum_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_nagant_doubleDrum_C", "AnimGraph");

	Params::UAbp_nagant_doubleDrum_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_nagant_doubleDrum.abp_nagant_doubleDrum_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_A45A229141A03EC21544108E530179E1
// (BlueprintEvent)
// Parameters:

void UAbp_nagant_doubleDrum_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_A45A229141A03EC21544108E530179E1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_nagant_doubleDrum_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_A45A229141A03EC21544108E530179E1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_nagant_doubleDrum.abp_nagant_doubleDrum_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_200F7DC04B114F96C576689322A05F41
// (BlueprintEvent)
// Parameters:

void UAbp_nagant_doubleDrum_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_200F7DC04B114F96C576689322A05F41()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_nagant_doubleDrum_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_200F7DC04B114F96C576689322A05F41");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_nagant_doubleDrum.abp_nagant_doubleDrum_C.ExecuteUbergraph_abp_nagant_doubleDrum
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbp_nagant_doubleDrum_C::ExecuteUbergraph_abp_nagant_doubleDrum(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_nagant_doubleDrum_C", "ExecuteUbergraph_abp_nagant_doubleDrum");

	Params::UAbp_nagant_doubleDrum_C_ExecuteUbergraph_abp_nagant_doubleDrum_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


