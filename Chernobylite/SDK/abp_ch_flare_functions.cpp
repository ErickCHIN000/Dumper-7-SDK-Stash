#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_ch_flare.abp_ch_flare_C
// (None)

class UClass* UAbp_ch_flare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_ch_flare_C");

	return Clss;
}


// abp_ch_flare_C abp_ch_flare.Default__abp_ch_flare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_ch_flare_C* UAbp_ch_flare_C::GetDefaultObj()
{
	static class UAbp_ch_flare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_ch_flare_C*>(UAbp_ch_flare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_ch_flare.abp_ch_flare_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_ch_flare_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_flare_C", "AnimGraph");

	Params::UAbp_ch_flare_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_ch_flare.abp_ch_flare_C.ExecuteUbergraph_abp_ch_flare
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_ch_flare_C::ExecuteUbergraph_abp_ch_flare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_flare_C", "ExecuteUbergraph_abp_ch_flare");

	Params::UAbp_ch_flare_C_ExecuteUbergraph_abp_ch_flare_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


