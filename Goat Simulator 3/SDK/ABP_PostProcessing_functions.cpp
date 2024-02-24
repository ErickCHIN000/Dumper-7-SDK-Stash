#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PostProcessing.ABP_PostProcessing_C
// (None)

class UClass* UABP_PostProcessing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PostProcessing_C");

	return Clss;
}


// ABP_PostProcessing_C ABP_PostProcessing.Default__ABP_PostProcessing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PostProcessing_C* UABP_PostProcessing_C::GetDefaultObj()
{
	static class UABP_PostProcessing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PostProcessing_C*>(UABP_PostProcessing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_PostProcessing.ABP_PostProcessing_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_PostProcessing_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PostProcessing_C", "AnimGraph");

	Params::UABP_PostProcessing_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_PostProcessing.ABP_PostProcessing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcessing_AnimGraphNode_BlendListByBool_3ED225ED4C7B01F8429BA2AABCE9E8DB
// (BlueprintEvent)
// Parameters:

void UABP_PostProcessing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcessing_AnimGraphNode_BlendListByBool_3ED225ED4C7B01F8429BA2AABCE9E8DB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PostProcessing_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcessing_AnimGraphNode_BlendListByBool_3ED225ED4C7B01F8429BA2AABCE9E8DB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_PostProcessing.ABP_PostProcessing_C.ExecuteUbergraph_ABP_PostProcessing
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnRagdollBlendTime_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PostProcessing_C::ExecuteUbergraph_ABP_PostProcessing(int32 EntryPoint, float CallFunc_GetUnRagdollBlendTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PostProcessing_C", "ExecuteUbergraph_ABP_PostProcessing");

	Params::UABP_PostProcessing_C_ExecuteUbergraph_ABP_PostProcessing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUnRagdollBlendTime_ReturnValue = CallFunc_GetUnRagdollBlendTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


