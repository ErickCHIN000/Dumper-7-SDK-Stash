#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DragonAI.ABP_DragonAI_C
// (None)

class UClass* UABP_DragonAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DragonAI_C");

	return Clss;
}


// ABP_DragonAI_C ABP_DragonAI.Default__ABP_DragonAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DragonAI_C* UABP_DragonAI_C::GetDefaultObj()
{
	static class UABP_DragonAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DragonAI_C*>(UABP_DragonAI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DragonAI.ABP_DragonAI_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DragonAI_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DragonAI_C", "AnimGraph");

	Params::UABP_DragonAI_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DragonAI.ABP_DragonAI_C.ExecuteUbergraph_ABP_DragonAI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DragonAI_C::ExecuteUbergraph_ABP_DragonAI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DragonAI_C", "ExecuteUbergraph_ABP_DragonAI");

	Params::UABP_DragonAI_C_ExecuteUbergraph_ABP_DragonAI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


