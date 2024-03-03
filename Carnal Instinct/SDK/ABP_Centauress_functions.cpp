#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Centauress.ABP_Centauress_C
// (None)

class UClass* UABP_Centauress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Centauress_C");

	return Clss;
}


// ABP_Centauress_C ABP_Centauress.Default__ABP_Centauress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Centauress_C* UABP_Centauress_C::GetDefaultObj()
{
	static class UABP_Centauress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Centauress_C*>(UABP_Centauress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Centauress.ABP_Centauress_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Centauress_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Centauress_C", "AnimGraph");

	Params::UABP_Centauress_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Centauress.ABP_Centauress_C.ExecuteUbergraph_ABP_Centauress
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Centauress_C::ExecuteUbergraph_ABP_Centauress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Centauress_C", "ExecuteUbergraph_ABP_Centauress");

	Params::UABP_Centauress_C_ExecuteUbergraph_ABP_Centauress_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


