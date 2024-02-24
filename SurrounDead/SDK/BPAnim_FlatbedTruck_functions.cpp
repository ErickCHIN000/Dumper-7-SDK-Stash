#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_FlatbedTruck.BPAnim_FlatbedTruck_C
// (None)

class UClass* UBPAnim_FlatbedTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_FlatbedTruck_C");

	return Clss;
}


// BPAnim_FlatbedTruck_C BPAnim_FlatbedTruck.Default__BPAnim_FlatbedTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_FlatbedTruck_C* UBPAnim_FlatbedTruck_C::GetDefaultObj()
{
	static class UBPAnim_FlatbedTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_FlatbedTruck_C*>(UBPAnim_FlatbedTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_FlatbedTruck.BPAnim_FlatbedTruck_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_FlatbedTruck_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_FlatbedTruck_C", "AnimGraph");

	Params::UBPAnim_FlatbedTruck_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_FlatbedTruck.BPAnim_FlatbedTruck_C.ExecuteUbergraph_BPAnim_FlatbedTruck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_FlatbedTruck_C::ExecuteUbergraph_BPAnim_FlatbedTruck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_FlatbedTruck_C", "ExecuteUbergraph_BPAnim_FlatbedTruck");

	Params::UBPAnim_FlatbedTruck_C_ExecuteUbergraph_BPAnim_FlatbedTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


