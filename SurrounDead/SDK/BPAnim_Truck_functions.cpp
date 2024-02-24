#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Truck.BPAnim_Truck_C
// (None)

class UClass* UBPAnim_Truck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Truck_C");

	return Clss;
}


// BPAnim_Truck_C BPAnim_Truck.Default__BPAnim_Truck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Truck_C* UBPAnim_Truck_C::GetDefaultObj()
{
	static class UBPAnim_Truck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Truck_C*>(UBPAnim_Truck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Truck.BPAnim_Truck_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_Truck_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Truck_C", "AnimGraph");

	Params::UBPAnim_Truck_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_Truck.BPAnim_Truck_C.ExecuteUbergraph_BPAnim_Truck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Truck_C::ExecuteUbergraph_BPAnim_Truck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Truck_C", "ExecuteUbergraph_BPAnim_Truck");

	Params::UBPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


