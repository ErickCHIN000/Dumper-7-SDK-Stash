#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C
// (None)

class UClass* USKMinusDeer_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK-Deer_Dead_AnimBP_C");

	return Clss;
}


// SK-Deer_Dead_AnimBP_C SK-Deer_Dead_AnimBP.Default__SK-Deer_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USKMinusDeer_Dead_AnimBP_C* USKMinusDeer_Dead_AnimBP_C::GetDefaultObj()
{
	static class USKMinusDeer_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USKMinusDeer_Dead_AnimBP_C*>(USKMinusDeer_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USKMinusDeer_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK-Deer_Dead_AnimBP_C", "AnimGraph");

	Params::USKMinusDeer_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C.ExecuteUbergraph_SK-Deer_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USKMinusDeer_Dead_AnimBP_C::ExecuteUbergraph_SKMinusDeer_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK-Deer_Dead_AnimBP_C", "ExecuteUbergraph_SK-Deer_Dead_AnimBP");

	Params::USKMinusDeer_Dead_AnimBP_C_ExecuteUbergraph_SKMinusDeer_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


