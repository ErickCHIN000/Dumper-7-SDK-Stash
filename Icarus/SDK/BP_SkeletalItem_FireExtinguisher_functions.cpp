#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_FireExtinguisher.BP_SkeletalItem_FireExtinguisher_C
// (Actor)

class UClass* ABP_SkeletalItem_FireExtinguisher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_FireExtinguisher_C");

	return Clss;
}


// BP_SkeletalItem_FireExtinguisher_C BP_SkeletalItem_FireExtinguisher.Default__BP_SkeletalItem_FireExtinguisher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_FireExtinguisher_C* ABP_SkeletalItem_FireExtinguisher_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_FireExtinguisher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_FireExtinguisher_C*>(ABP_SkeletalItem_FireExtinguisher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_FireExtinguisher.BP_SkeletalItem_FireExtinguisher_C.ToggleParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_FireExtinguisher_C::ToggleParticle(bool Play)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_FireExtinguisher_C", "ToggleParticle");

	Params::ABP_SkeletalItem_FireExtinguisher_C_ToggleParticle_Params Parms{};

	Parms.Play = Play;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_FireExtinguisher.BP_SkeletalItem_FireExtinguisher_C.ExecuteUbergraph_BP_SkeletalItem_FireExtinguisher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Play                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_FireExtinguisher_C::ExecuteUbergraph_BP_SkeletalItem_FireExtinguisher(int32 EntryPoint, bool K2Node_CustomEvent_Play)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_FireExtinguisher_C", "ExecuteUbergraph_BP_SkeletalItem_FireExtinguisher");

	Params::ABP_SkeletalItem_FireExtinguisher_C_ExecuteUbergraph_BP_SkeletalItem_FireExtinguisher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Play = K2Node_CustomEvent_Play;

	UObject::ProcessEvent(Func, &Parms);

}

}


