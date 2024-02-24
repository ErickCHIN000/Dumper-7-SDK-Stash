#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_NPC.ABP_NPC_C
// (None)

class UClass* UABP_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_NPC_C");

	return Clss;
}


// ABP_NPC_C ABP_NPC.Default__ABP_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_NPC_C* UABP_NPC_C::GetDefaultObj()
{
	static class UABP_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_NPC_C*>(UABP_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_NPC.ABP_NPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_NPC_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_C", "AnimGraph");

	Params::UABP_NPC_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_NPC.ABP_NPC_C.ExecuteUbergraph_ABP_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_C::ExecuteUbergraph_ABP_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_C", "ExecuteUbergraph_ABP_NPC");

	Params::UABP_NPC_C_ExecuteUbergraph_ABP_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


