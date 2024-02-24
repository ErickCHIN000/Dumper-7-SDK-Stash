#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_4x4Jeep.BPAnim_4x4Jeep_C
// (None)

class UClass* UBPAnim_4x4Jeep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_4x4Jeep_C");

	return Clss;
}


// BPAnim_4x4Jeep_C BPAnim_4x4Jeep.Default__BPAnim_4x4Jeep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_4x4Jeep_C* UBPAnim_4x4Jeep_C::GetDefaultObj()
{
	static class UBPAnim_4x4Jeep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_4x4Jeep_C*>(UBPAnim_4x4Jeep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_4x4Jeep.BPAnim_4x4Jeep_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_4x4Jeep_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_4x4Jeep_C", "AnimGraph");

	Params::UBPAnim_4x4Jeep_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_4x4Jeep.BPAnim_4x4Jeep_C.ExecuteUbergraph_BPAnim_4x4Jeep
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_4x4Jeep_C::ExecuteUbergraph_BPAnim_4x4Jeep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_4x4Jeep_C", "ExecuteUbergraph_BPAnim_4x4Jeep");

	Params::UBPAnim_4x4Jeep_C_ExecuteUbergraph_BPAnim_4x4Jeep_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


