#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TrapDoor_ClayBrick.BP_TrapDoor_ClayBrick_C
// (Actor)

class UClass* ABP_TrapDoor_ClayBrick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TrapDoor_ClayBrick_C");

	return Clss;
}


// BP_TrapDoor_ClayBrick_C BP_TrapDoor_ClayBrick.Default__BP_TrapDoor_ClayBrick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TrapDoor_ClayBrick_C* ABP_TrapDoor_ClayBrick_C::GetDefaultObj()
{
	static class ABP_TrapDoor_ClayBrick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TrapDoor_ClayBrick_C*>(ABP_TrapDoor_ClayBrick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TrapDoor_ClayBrick.BP_TrapDoor_ClayBrick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TrapDoor_ClayBrick_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_ClayBrick_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TrapDoor_ClayBrick.BP_TrapDoor_ClayBrick_C.ExecuteUbergraph_BP_TrapDoor_ClayBrick
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapDoor_ClayBrick_C::ExecuteUbergraph_BP_TrapDoor_ClayBrick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_ClayBrick_C", "ExecuteUbergraph_BP_TrapDoor_ClayBrick");

	Params::ABP_TrapDoor_ClayBrick_C_ExecuteUbergraph_BP_TrapDoor_ClayBrick_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


