#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_FlameThrower_Small.BP_SkeletalItem_FlameThrower_Small_C
// (Actor)

class UClass* ABP_SkeletalItem_FlameThrower_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_FlameThrower_Small_C");

	return Clss;
}


// BP_SkeletalItem_FlameThrower_Small_C BP_SkeletalItem_FlameThrower_Small.Default__BP_SkeletalItem_FlameThrower_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_FlameThrower_Small_C* ABP_SkeletalItem_FlameThrower_Small_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_FlameThrower_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_FlameThrower_Small_C*>(ABP_SkeletalItem_FlameThrower_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_FlameThrower_Small.BP_SkeletalItem_FlameThrower_Small_C.ToggleParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_FlameThrower_Small_C::ToggleParticle(bool Play)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_FlameThrower_Small_C", "ToggleParticle");

	Params::ABP_SkeletalItem_FlameThrower_Small_C_ToggleParticle_Params Parms{};

	Parms.Play = Play;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_FlameThrower_Small.BP_SkeletalItem_FlameThrower_Small_C.ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Play                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_FlameThrower_Small_C::ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small(int32 EntryPoint, bool K2Node_CustomEvent_Play)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_FlameThrower_Small_C", "ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small");

	Params::ABP_SkeletalItem_FlameThrower_Small_C_ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Play = K2Node_CustomEvent_Play;

	UObject::ProcessEvent(Func, &Parms);

}

}


