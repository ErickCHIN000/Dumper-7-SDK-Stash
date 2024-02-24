#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PickupTruck.BPAnim_PickupTruck_C
// (None)

class UClass* UBPAnim_PickupTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PickupTruck_C");

	return Clss;
}


// BPAnim_PickupTruck_C BPAnim_PickupTruck.Default__BPAnim_PickupTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PickupTruck_C* UBPAnim_PickupTruck_C::GetDefaultObj()
{
	static class UBPAnim_PickupTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PickupTruck_C*>(UBPAnim_PickupTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PickupTruck.BPAnim_PickupTruck_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_PickupTruck_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PickupTruck_C", "AnimGraph");

	Params::UBPAnim_PickupTruck_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_PickupTruck.BPAnim_PickupTruck_C.ExecuteUbergraph_BPAnim_PickupTruck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_PickupTruck_C::ExecuteUbergraph_BPAnim_PickupTruck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PickupTruck_C", "ExecuteUbergraph_BPAnim_PickupTruck");

	Params::UBPAnim_PickupTruck_C_ExecuteUbergraph_BPAnim_PickupTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


