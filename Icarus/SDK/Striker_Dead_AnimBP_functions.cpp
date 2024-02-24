#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Striker_Dead_AnimBP.Striker_Dead_AnimBP_C
// (None)

class UClass* UStriker_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Striker_Dead_AnimBP_C");

	return Clss;
}


// Striker_Dead_AnimBP_C Striker_Dead_AnimBP.Default__Striker_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStriker_Dead_AnimBP_C* UStriker_Dead_AnimBP_C::GetDefaultObj()
{
	static class UStriker_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStriker_Dead_AnimBP_C*>(UStriker_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Striker_Dead_AnimBP.Striker_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UStriker_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Striker_Dead_AnimBP_C", "AnimGraph");

	Params::UStriker_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Striker_Dead_AnimBP.Striker_Dead_AnimBP_C.ExecuteUbergraph_Striker_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStriker_Dead_AnimBP_C::ExecuteUbergraph_Striker_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Striker_Dead_AnimBP_C", "ExecuteUbergraph_Striker_Dead_AnimBP");

	Params::UStriker_Dead_AnimBP_C_ExecuteUbergraph_Striker_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


