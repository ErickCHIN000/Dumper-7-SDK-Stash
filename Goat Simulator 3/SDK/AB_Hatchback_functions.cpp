#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Hatchback.AB_Hatchback_C
// (None)

class UClass* UAB_Hatchback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Hatchback_C");

	return Clss;
}


// AB_Hatchback_C AB_Hatchback.Default__AB_Hatchback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Hatchback_C* UAB_Hatchback_C::GetDefaultObj()
{
	static class UAB_Hatchback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Hatchback_C*>(UAB_Hatchback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Hatchback.AB_Hatchback_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Hatchback_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Hatchback_C", "AnimGraph");

	Params::UAB_Hatchback_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Hatchback.AB_Hatchback_C.ExecuteUbergraph_AB_Hatchback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Hatchback_C::ExecuteUbergraph_AB_Hatchback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Hatchback_C", "ExecuteUbergraph_AB_Hatchback");

	Params::UAB_Hatchback_C_ExecuteUbergraph_AB_Hatchback_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


