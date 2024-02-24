#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Rabbit_Dead_AnimBP.Rabbit_Dead_AnimBP_C
// (None)

class UClass* URabbit_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rabbit_Dead_AnimBP_C");

	return Clss;
}


// Rabbit_Dead_AnimBP_C Rabbit_Dead_AnimBP.Default__Rabbit_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URabbit_Dead_AnimBP_C* URabbit_Dead_AnimBP_C::GetDefaultObj()
{
	static class URabbit_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URabbit_Dead_AnimBP_C*>(URabbit_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rabbit_Dead_AnimBP.Rabbit_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URabbit_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rabbit_Dead_AnimBP_C", "AnimGraph");

	Params::URabbit_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Rabbit_Dead_AnimBP.Rabbit_Dead_AnimBP_C.ExecuteUbergraph_Rabbit_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URabbit_Dead_AnimBP_C::ExecuteUbergraph_Rabbit_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rabbit_Dead_AnimBP_C", "ExecuteUbergraph_Rabbit_Dead_AnimBP");

	Params::URabbit_Dead_AnimBP_C_ExecuteUbergraph_Rabbit_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


