#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_small_physics_prop_bottlev2.bp_small_physics_prop_bottlev2_C
// (Actor)

class UClass* Abp_small_physics_prop_bottlev2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_small_physics_prop_bottlev2_C");

	return Clss;
}


// bp_small_physics_prop_bottlev2_C bp_small_physics_prop_bottlev2.Default__bp_small_physics_prop_bottlev2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_small_physics_prop_bottlev2_C* Abp_small_physics_prop_bottlev2_C::GetDefaultObj()
{
	static class Abp_small_physics_prop_bottlev2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_small_physics_prop_bottlev2_C*>(Abp_small_physics_prop_bottlev2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_small_physics_prop_bottlev2.bp_small_physics_prop_bottlev2_C.ModifyCollisionOnLaunch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_small_physics_prop_bottlev2_C::ModifyCollisionOnLaunch(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_bottlev2_C", "ModifyCollisionOnLaunch");

	Params::Abp_small_physics_prop_bottlev2_C_ModifyCollisionOnLaunch_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_bottlev2.bp_small_physics_prop_bottlev2_C.ExecuteUbergraph_bp_small_physics_prop_bottlev2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_small_physics_prop_bottlev2_C::ExecuteUbergraph_bp_small_physics_prop_bottlev2(int32 EntryPoint, float K2Node_CustomEvent_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_bottlev2_C", "ExecuteUbergraph_bp_small_physics_prop_bottlev2");

	Params::Abp_small_physics_prop_bottlev2_C_ExecuteUbergraph_bp_small_physics_prop_bottlev2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;

	UObject::ProcessEvent(Func, &Parms);

}

}


