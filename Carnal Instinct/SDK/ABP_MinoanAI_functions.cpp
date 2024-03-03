#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_MinoanAI.ABP_MinoanAI_C
// (None)

class UClass* UABP_MinoanAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_MinoanAI_C");

	return Clss;
}


// ABP_MinoanAI_C ABP_MinoanAI.Default__ABP_MinoanAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_MinoanAI_C* UABP_MinoanAI_C::GetDefaultObj()
{
	static class UABP_MinoanAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_MinoanAI_C*>(UABP_MinoanAI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_MinoanAI.ABP_MinoanAI_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_MinoanAI_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MinoanAI_C", "AnimGraph");

	Params::UABP_MinoanAI_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_MinoanAI.ABP_MinoanAI_C.ExecuteUbergraph_ABP_MinoanAI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MinoanAI_C::ExecuteUbergraph_ABP_MinoanAI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MinoanAI_C", "ExecuteUbergraph_ABP_MinoanAI");

	Params::UABP_MinoanAI_C_ExecuteUbergraph_ABP_MinoanAI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


