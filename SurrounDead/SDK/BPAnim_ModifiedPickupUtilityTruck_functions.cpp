#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_ModifiedPickupUtilityTruck.BPAnim_ModifiedPickupUtilityTruck_C
// (None)

class UClass* UBPAnim_ModifiedPickupUtilityTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_ModifiedPickupUtilityTruck_C");

	return Clss;
}


// BPAnim_ModifiedPickupUtilityTruck_C BPAnim_ModifiedPickupUtilityTruck.Default__BPAnim_ModifiedPickupUtilityTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_ModifiedPickupUtilityTruck_C* UBPAnim_ModifiedPickupUtilityTruck_C::GetDefaultObj()
{
	static class UBPAnim_ModifiedPickupUtilityTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_ModifiedPickupUtilityTruck_C*>(UBPAnim_ModifiedPickupUtilityTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_ModifiedPickupUtilityTruck.BPAnim_ModifiedPickupUtilityTruck_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_ModifiedPickupUtilityTruck_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_ModifiedPickupUtilityTruck_C", "AnimGraph");

	Params::UBPAnim_ModifiedPickupUtilityTruck_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_ModifiedPickupUtilityTruck.BPAnim_ModifiedPickupUtilityTruck_C.ExecuteUbergraph_BPAnim_ModifiedPickupUtilityTruck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_ModifiedPickupUtilityTruck_C::ExecuteUbergraph_BPAnim_ModifiedPickupUtilityTruck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_ModifiedPickupUtilityTruck_C", "ExecuteUbergraph_BPAnim_ModifiedPickupUtilityTruck");

	Params::UBPAnim_ModifiedPickupUtilityTruck_C_ExecuteUbergraph_BPAnim_ModifiedPickupUtilityTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


