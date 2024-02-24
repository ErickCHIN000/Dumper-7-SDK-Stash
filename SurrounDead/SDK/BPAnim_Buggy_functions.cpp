#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Buggy.BPAnim_Buggy_C
// (None)

class UClass* UBPAnim_Buggy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Buggy_C");

	return Clss;
}


// BPAnim_Buggy_C BPAnim_Buggy.Default__BPAnim_Buggy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Buggy_C* UBPAnim_Buggy_C::GetDefaultObj()
{
	static class UBPAnim_Buggy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Buggy_C*>(UBPAnim_Buggy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Buggy.BPAnim_Buggy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_Buggy_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Buggy_C", "AnimGraph");

	Params::UBPAnim_Buggy_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_Buggy.BPAnim_Buggy_C.ExecuteUbergraph_BPAnim_Buggy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Buggy_C::ExecuteUbergraph_BPAnim_Buggy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Buggy_C", "ExecuteUbergraph_BPAnim_Buggy");

	Params::UBPAnim_Buggy_C_ExecuteUbergraph_BPAnim_Buggy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


