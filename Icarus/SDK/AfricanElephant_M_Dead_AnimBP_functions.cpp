#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AfricanElephant_M_Dead_AnimBP.AfricanElephant_M_Dead_AnimBP_C
// (None)

class UClass* UAfricanElephant_M_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AfricanElephant_M_Dead_AnimBP_C");

	return Clss;
}


// AfricanElephant_M_Dead_AnimBP_C AfricanElephant_M_Dead_AnimBP.Default__AfricanElephant_M_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAfricanElephant_M_Dead_AnimBP_C* UAfricanElephant_M_Dead_AnimBP_C::GetDefaultObj()
{
	static class UAfricanElephant_M_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAfricanElephant_M_Dead_AnimBP_C*>(UAfricanElephant_M_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AfricanElephant_M_Dead_AnimBP.AfricanElephant_M_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAfricanElephant_M_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AfricanElephant_M_Dead_AnimBP_C", "AnimGraph");

	Params::UAfricanElephant_M_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AfricanElephant_M_Dead_AnimBP.AfricanElephant_M_Dead_AnimBP_C.ExecuteUbergraph_AfricanElephant_M_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAfricanElephant_M_Dead_AnimBP_C::ExecuteUbergraph_AfricanElephant_M_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AfricanElephant_M_Dead_AnimBP_C", "ExecuteUbergraph_AfricanElephant_M_Dead_AnimBP");

	Params::UAfricanElephant_M_Dead_AnimBP_C_ExecuteUbergraph_AfricanElephant_M_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


