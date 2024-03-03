#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DockCentaur.ABP_DockCentaur_C
// (None)

class UClass* UABP_DockCentaur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DockCentaur_C");

	return Clss;
}


// ABP_DockCentaur_C ABP_DockCentaur.Default__ABP_DockCentaur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DockCentaur_C* UABP_DockCentaur_C::GetDefaultObj()
{
	static class UABP_DockCentaur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DockCentaur_C*>(UABP_DockCentaur_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DockCentaur.ABP_DockCentaur_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DockCentaur_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DockCentaur_C", "AnimGraph");

	Params::UABP_DockCentaur_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DockCentaur.ABP_DockCentaur_C.ExecuteUbergraph_ABP_DockCentaur
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DockCentaur_C::ExecuteUbergraph_ABP_DockCentaur(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DockCentaur_C", "ExecuteUbergraph_ABP_DockCentaur");

	Params::UABP_DockCentaur_C_ExecuteUbergraph_ABP_DockCentaur_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


