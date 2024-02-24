#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_SUV.AB_SUV_C
// (None)

class UClass* UAB_SUV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_SUV_C");

	return Clss;
}


// AB_SUV_C AB_SUV.Default__AB_SUV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_SUV_C* UAB_SUV_C::GetDefaultObj()
{
	static class UAB_SUV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_SUV_C*>(UAB_SUV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_SUV.AB_SUV_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_SUV_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_SUV_C", "AnimGraph");

	Params::UAB_SUV_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_SUV.AB_SUV_C.ExecuteUbergraph_AB_SUV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_SUV_C::ExecuteUbergraph_AB_SUV(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_SUV_C", "ExecuteUbergraph_AB_SUV");

	Params::UAB_SUV_C_ExecuteUbergraph_AB_SUV_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


