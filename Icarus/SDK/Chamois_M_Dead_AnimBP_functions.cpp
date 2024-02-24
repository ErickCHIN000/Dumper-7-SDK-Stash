#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C
// (None)

class UClass* UChamois_M_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chamois_M_Dead_AnimBP_C");

	return Clss;
}


// Chamois_M_Dead_AnimBP_C Chamois_M_Dead_AnimBP.Default__Chamois_M_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChamois_M_Dead_AnimBP_C* UChamois_M_Dead_AnimBP_C::GetDefaultObj()
{
	static class UChamois_M_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChamois_M_Dead_AnimBP_C*>(UChamois_M_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UChamois_M_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chamois_M_Dead_AnimBP_C", "AnimGraph");

	Params::UChamois_M_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C.ExecuteUbergraph_Chamois_M_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChamois_M_Dead_AnimBP_C::ExecuteUbergraph_Chamois_M_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chamois_M_Dead_AnimBP_C", "ExecuteUbergraph_Chamois_M_Dead_AnimBP");

	Params::UChamois_M_Dead_AnimBP_C_ExecuteUbergraph_Chamois_M_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


