#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vehicle_Hatchback.BP_Vehicle_Hatchback_C
// (Actor, Pawn)

class UClass* ABP_Vehicle_Hatchback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vehicle_Hatchback_C");

	return Clss;
}


// BP_Vehicle_Hatchback_C BP_Vehicle_Hatchback.Default__BP_Vehicle_Hatchback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vehicle_Hatchback_C* ABP_Vehicle_Hatchback_C::GetDefaultObj()
{
	static class ABP_Vehicle_Hatchback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vehicle_Hatchback_C*>(ABP_Vehicle_Hatchback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vehicle_Hatchback.BP_Vehicle_Hatchback_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Vehicle_Hatchback_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Hatchback_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Hatchback.BP_Vehicle_Hatchback_C.ExecuteUbergraph_BP_Vehicle_Hatchback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Vehicle_Hatchback_C::ExecuteUbergraph_BP_Vehicle_Hatchback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Hatchback_C", "ExecuteUbergraph_BP_Vehicle_Hatchback");

	Params::ABP_Vehicle_Hatchback_C_ExecuteUbergraph_BP_Vehicle_Hatchback_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


