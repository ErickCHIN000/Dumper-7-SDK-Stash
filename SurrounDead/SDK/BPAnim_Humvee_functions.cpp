#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Humvee.BPAnim_Humvee_C
// (None)

class UClass* UBPAnim_Humvee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Humvee_C");

	return Clss;
}


// BPAnim_Humvee_C BPAnim_Humvee.Default__BPAnim_Humvee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Humvee_C* UBPAnim_Humvee_C::GetDefaultObj()
{
	static class UBPAnim_Humvee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Humvee_C*>(UBPAnim_Humvee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Humvee.BPAnim_Humvee_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_Humvee_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Humvee_C", "AnimGraph");

	Params::UBPAnim_Humvee_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_Humvee.BPAnim_Humvee_C.ExecuteUbergraph_BPAnim_Humvee
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Humvee_C::ExecuteUbergraph_BPAnim_Humvee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Humvee_C", "ExecuteUbergraph_BPAnim_Humvee");

	Params::UBPAnim_Humvee_C_ExecuteUbergraph_BPAnim_Humvee_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


