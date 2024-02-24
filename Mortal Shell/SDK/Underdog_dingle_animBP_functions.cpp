#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Underdog_dingle_animBP.Underdog_dingle_animBP_C
// (None)

class UClass* UUnderdog_dingle_animBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Underdog_dingle_animBP_C");

	return Clss;
}


// Underdog_dingle_animBP_C Underdog_dingle_animBP.Default__Underdog_dingle_animBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUnderdog_dingle_animBP_C* UUnderdog_dingle_animBP_C::GetDefaultObj()
{
	static class UUnderdog_dingle_animBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnderdog_dingle_animBP_C*>(UUnderdog_dingle_animBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Underdog_dingle_animBP.Underdog_dingle_animBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UUnderdog_dingle_animBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Underdog_dingle_animBP_C", "AnimGraph");

	Params::UUnderdog_dingle_animBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Underdog_dingle_animBP.Underdog_dingle_animBP_C.ExecuteUbergraph_Underdog_dingle_animBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnderdog_dingle_animBP_C::ExecuteUbergraph_Underdog_dingle_animBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Underdog_dingle_animBP_C", "ExecuteUbergraph_Underdog_dingle_animBP");

	Params::UUnderdog_dingle_animBP_C_ExecuteUbergraph_Underdog_dingle_animBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


