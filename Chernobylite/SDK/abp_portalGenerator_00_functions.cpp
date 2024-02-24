#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_portalGenerator_00.abp_portalGenerator_00_C
// (None)

class UClass* UAbp_portalGenerator_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_portalGenerator_00_C");

	return Clss;
}


// abp_portalGenerator_00_C abp_portalGenerator_00.Default__abp_portalGenerator_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_portalGenerator_00_C* UAbp_portalGenerator_00_C::GetDefaultObj()
{
	static class UAbp_portalGenerator_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_portalGenerator_00_C*>(UAbp_portalGenerator_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_portalGenerator_00.abp_portalGenerator_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_portalGenerator_00_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_portalGenerator_00_C", "AnimGraph");

	Params::UAbp_portalGenerator_00_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_portalGenerator_00.abp_portalGenerator_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_portalGenerator_00_AnimGraphNode_ModifyBone_AA117E144C77DB998020E384A1CCDCD9
// (BlueprintEvent)
// Parameters:

void UAbp_portalGenerator_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_portalGenerator_00_AnimGraphNode_ModifyBone_AA117E144C77DB998020E384A1CCDCD9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_portalGenerator_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_portalGenerator_00_AnimGraphNode_ModifyBone_AA117E144C77DB998020E384A1CCDCD9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_portalGenerator_00.abp_portalGenerator_00_C.ExecuteUbergraph_abp_portalGenerator_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_portalGenerator_00_C::ExecuteUbergraph_abp_portalGenerator_00(int32 EntryPoint, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_portalGenerator_00_C", "ExecuteUbergraph_abp_portalGenerator_00");

	Params::UAbp_portalGenerator_00_C_ExecuteUbergraph_abp_portalGenerator_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


