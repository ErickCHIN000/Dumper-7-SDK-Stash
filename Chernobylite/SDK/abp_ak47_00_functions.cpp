#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_ak47_00.abp_ak47_00_C
// (None)

class UClass* UAbp_ak47_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_ak47_00_C");

	return Clss;
}


// abp_ak47_00_C abp_ak47_00.Default__abp_ak47_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_ak47_00_C* UAbp_ak47_00_C::GetDefaultObj()
{
	static class UAbp_ak47_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_ak47_00_C*>(UAbp_ak47_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_ak47_00.abp_ak47_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_ak47_00_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ak47_00_C", "AnimGraph");

	Params::UAbp_ak47_00_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_ak47_00.abp_ak47_00_C.ExecuteUbergraph_abp_ak47_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_ak47_00_C::ExecuteUbergraph_abp_ak47_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ak47_00_C", "ExecuteUbergraph_abp_ak47_00");

	Params::UAbp_ak47_00_C_ExecuteUbergraph_abp_ak47_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


