#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK-Bear_Dead_AnimBP.SK-Bear_Dead_AnimBP_C
// (None)

class UClass* USKMinusBear_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK-Bear_Dead_AnimBP_C");

	return Clss;
}


// SK-Bear_Dead_AnimBP_C SK-Bear_Dead_AnimBP.Default__SK-Bear_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USKMinusBear_Dead_AnimBP_C* USKMinusBear_Dead_AnimBP_C::GetDefaultObj()
{
	static class USKMinusBear_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USKMinusBear_Dead_AnimBP_C*>(USKMinusBear_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK-Bear_Dead_AnimBP.SK-Bear_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USKMinusBear_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK-Bear_Dead_AnimBP_C", "AnimGraph");

	Params::USKMinusBear_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK-Bear_Dead_AnimBP.SK-Bear_Dead_AnimBP_C.ExecuteUbergraph_SK-Bear_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USKMinusBear_Dead_AnimBP_C::ExecuteUbergraph_SKMinusBear_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK-Bear_Dead_AnimBP_C", "ExecuteUbergraph_SK-Bear_Dead_AnimBP");

	Params::USKMinusBear_Dead_AnimBP_C_ExecuteUbergraph_SKMinusBear_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


