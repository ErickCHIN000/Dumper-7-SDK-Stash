#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_crossbow_00.abp_crossbow_00_C
// (None)

class UClass* UAbp_crossbow_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_crossbow_00_C");

	return Clss;
}


// abp_crossbow_00_C abp_crossbow_00.Default__abp_crossbow_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_crossbow_00_C* UAbp_crossbow_00_C::GetDefaultObj()
{
	static class UAbp_crossbow_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_crossbow_00_C*>(UAbp_crossbow_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_crossbow_00.abp_crossbow_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_crossbow_00_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_crossbow_00_C", "AnimGraph");

	Params::UAbp_crossbow_00_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_crossbow_00.abp_crossbow_00_C.ExecuteUbergraph_abp_crossbow_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_crossbow_00_C::ExecuteUbergraph_abp_crossbow_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_crossbow_00_C", "ExecuteUbergraph_abp_crossbow_00");

	Params::UAbp_crossbow_00_C_ExecuteUbergraph_abp_crossbow_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


