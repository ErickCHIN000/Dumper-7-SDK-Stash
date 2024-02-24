#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Sedan.AB_Sedan_C
// (None)

class UClass* UAB_Sedan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Sedan_C");

	return Clss;
}


// AB_Sedan_C AB_Sedan.Default__AB_Sedan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Sedan_C* UAB_Sedan_C::GetDefaultObj()
{
	static class UAB_Sedan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Sedan_C*>(UAB_Sedan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Sedan.AB_Sedan_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Sedan_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Sedan_C", "AnimGraph");

	Params::UAB_Sedan_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Sedan.AB_Sedan_C.ExecuteUbergraph_AB_Sedan
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Sedan_C::ExecuteUbergraph_AB_Sedan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Sedan_C", "ExecuteUbergraph_AB_Sedan");

	Params::UAB_Sedan_C_ExecuteUbergraph_AB_Sedan_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


