#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_NagaMovement.ABP_NagaMovement_C
// (None)

class UClass* UABP_NagaMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_NagaMovement_C");

	return Clss;
}


// ABP_NagaMovement_C ABP_NagaMovement.Default__ABP_NagaMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_NagaMovement_C* UABP_NagaMovement_C::GetDefaultObj()
{
	static class UABP_NagaMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_NagaMovement_C*>(UABP_NagaMovement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_NagaMovement.ABP_NagaMovement_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_NagaMovement_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NagaMovement_C", "AnimGraph");

	Params::UABP_NagaMovement_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_NagaMovement.ABP_NagaMovement_C.ExecuteUbergraph_ABP_NagaMovement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NagaMovement_C::ExecuteUbergraph_ABP_NagaMovement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NagaMovement_C", "ExecuteUbergraph_ABP_NagaMovement");

	Params::UABP_NagaMovement_C_ExecuteUbergraph_ABP_NagaMovement_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


