#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_AnubiteNPC.ABP_AnubiteNPC_C
// (None)

class UClass* UABP_AnubiteNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_AnubiteNPC_C");

	return Clss;
}


// ABP_AnubiteNPC_C ABP_AnubiteNPC.Default__ABP_AnubiteNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_AnubiteNPC_C* UABP_AnubiteNPC_C::GetDefaultObj()
{
	static class UABP_AnubiteNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_AnubiteNPC_C*>(UABP_AnubiteNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_AnubiteNPC.ABP_AnubiteNPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_AnubiteNPC_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteNPC_C", "AnimGraph");

	Params::UABP_AnubiteNPC_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_AnubiteNPC.ABP_AnubiteNPC_C.ExecuteUbergraph_ABP_AnubiteNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AnubiteNPC_C::ExecuteUbergraph_ABP_AnubiteNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteNPC_C", "ExecuteUbergraph_ABP_AnubiteNPC");

	Params::UABP_AnubiteNPC_C_ExecuteUbergraph_ABP_AnubiteNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


