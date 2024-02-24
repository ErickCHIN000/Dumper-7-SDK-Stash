#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FireInstance.BP_FireInstance_C
// (Actor)

class UClass* ABP_FireInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FireInstance_C");

	return Clss;
}


// BP_FireInstance_C BP_FireInstance.Default__BP_FireInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FireInstance_C* ABP_FireInstance_C::GetDefaultObj()
{
	static class ABP_FireInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FireInstance_C*>(ABP_FireInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FireInstance.BP_FireInstance_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstance_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstance_C", "ReceiveTick");

	Params::ABP_FireInstance_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FireInstance.BP_FireInstance_C.ExecuteUbergraph_BP_FireInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireInstance_C::ExecuteUbergraph_BP_FireInstance(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FireInstance_C", "ExecuteUbergraph_BP_FireInstance");

	Params::ABP_FireInstance_C_ExecuteUbergraph_BP_FireInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


