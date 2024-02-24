#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Blade_Slave_dingle_rig.Blade_Slave_dingle_rig_C
// (None)

class UClass* UBlade_Slave_dingle_rig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blade_Slave_dingle_rig_C");

	return Clss;
}


// Blade_Slave_dingle_rig_C Blade_Slave_dingle_rig.Default__Blade_Slave_dingle_rig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlade_Slave_dingle_rig_C* UBlade_Slave_dingle_rig_C::GetDefaultObj()
{
	static class UBlade_Slave_dingle_rig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlade_Slave_dingle_rig_C*>(UBlade_Slave_dingle_rig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Blade_Slave_dingle_rig.Blade_Slave_dingle_rig_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBlade_Slave_dingle_rig_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blade_Slave_dingle_rig_C", "AnimGraph");

	Params::UBlade_Slave_dingle_rig_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Blade_Slave_dingle_rig.Blade_Slave_dingle_rig_C.ExecuteUbergraph_Blade_Slave_dingle_rig
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlade_Slave_dingle_rig_C::ExecuteUbergraph_Blade_Slave_dingle_rig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blade_Slave_dingle_rig_C", "ExecuteUbergraph_Blade_Slave_dingle_rig");

	Params::UBlade_Slave_dingle_rig_C_ExecuteUbergraph_Blade_Slave_dingle_rig_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


