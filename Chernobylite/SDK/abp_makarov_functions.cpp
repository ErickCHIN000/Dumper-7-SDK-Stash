#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_makarov.abp_makarov_C
// (None)

class UClass* UAbp_makarov_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_makarov_C");

	return Clss;
}


// abp_makarov_C abp_makarov.Default__abp_makarov_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_makarov_C* UAbp_makarov_C::GetDefaultObj()
{
	static class UAbp_makarov_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_makarov_C*>(UAbp_makarov_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_makarov.abp_makarov_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_makarov_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_makarov_C", "AnimGraph");

	Params::UAbp_makarov_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_makarov.abp_makarov_C.ExecuteUbergraph_abp_makarov
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_makarov_C::ExecuteUbergraph_abp_makarov(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_makarov_C", "ExecuteUbergraph_abp_makarov");

	Params::UAbp_makarov_C_ExecuteUbergraph_abp_makarov_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


