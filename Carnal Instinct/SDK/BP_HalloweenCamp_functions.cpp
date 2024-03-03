#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HalloweenCamp.BP_HalloweenCamp_C
// (Actor)

class UClass* ABP_HalloweenCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HalloweenCamp_C");

	return Clss;
}


// BP_HalloweenCamp_C BP_HalloweenCamp.Default__BP_HalloweenCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HalloweenCamp_C* ABP_HalloweenCamp_C::GetDefaultObj()
{
	static class ABP_HalloweenCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HalloweenCamp_C*>(ABP_HalloweenCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HalloweenCamp.BP_HalloweenCamp_C.Collision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnOn_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HalloweenCamp_C::Collision(bool TurnOn_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HalloweenCamp_C", "Collision");

	Params::ABP_HalloweenCamp_C_Collision_Params Parms{};

	Parms.TurnOn_ = TurnOn_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HalloweenCamp.BP_HalloweenCamp_C.ExecuteUbergraph_BP_HalloweenCamp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TurnOn_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HalloweenCamp_C::ExecuteUbergraph_BP_HalloweenCamp(int32 EntryPoint, bool K2Node_CustomEvent_TurnOn_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HalloweenCamp_C", "ExecuteUbergraph_BP_HalloweenCamp");

	Params::ABP_HalloweenCamp_C_ExecuteUbergraph_BP_HalloweenCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TurnOn_ = K2Node_CustomEvent_TurnOn_;

	UObject::ProcessEvent(Func, &Parms);

}

}


