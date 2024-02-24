#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Ambulance.BPAnim_Ambulance_C
// (None)

class UClass* UBPAnim_Ambulance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Ambulance_C");

	return Clss;
}


// BPAnim_Ambulance_C BPAnim_Ambulance.Default__BPAnim_Ambulance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Ambulance_C* UBPAnim_Ambulance_C::GetDefaultObj()
{
	static class UBPAnim_Ambulance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Ambulance_C*>(UBPAnim_Ambulance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Ambulance.BPAnim_Ambulance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_Ambulance_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Ambulance_C", "AnimGraph");

	Params::UBPAnim_Ambulance_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_Ambulance.BPAnim_Ambulance_C.ExecuteUbergraph_BPAnim_Ambulance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Ambulance_C::ExecuteUbergraph_BPAnim_Ambulance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Ambulance_C", "ExecuteUbergraph_BPAnim_Ambulance");

	Params::UBPAnim_Ambulance_C_ExecuteUbergraph_BPAnim_Ambulance_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


