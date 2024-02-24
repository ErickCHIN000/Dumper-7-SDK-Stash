#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PickupUtilityTruck.BPAnim_PickupUtilityTruck_C
// (None)

class UClass* UBPAnim_PickupUtilityTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PickupUtilityTruck_C");

	return Clss;
}


// BPAnim_PickupUtilityTruck_C BPAnim_PickupUtilityTruck.Default__BPAnim_PickupUtilityTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PickupUtilityTruck_C* UBPAnim_PickupUtilityTruck_C::GetDefaultObj()
{
	static class UBPAnim_PickupUtilityTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PickupUtilityTruck_C*>(UBPAnim_PickupUtilityTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PickupUtilityTruck.BPAnim_PickupUtilityTruck_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_PickupUtilityTruck_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PickupUtilityTruck_C", "AnimGraph");

	Params::UBPAnim_PickupUtilityTruck_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_PickupUtilityTruck.BPAnim_PickupUtilityTruck_C.ExecuteUbergraph_BPAnim_PickupUtilityTruck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_PickupUtilityTruck_C::ExecuteUbergraph_BPAnim_PickupUtilityTruck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PickupUtilityTruck_C", "ExecuteUbergraph_BPAnim_PickupUtilityTruck");

	Params::UBPAnim_PickupUtilityTruck_C_ExecuteUbergraph_BPAnim_PickupUtilityTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


