#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_NorthernDrake.BP_ItemHead_NorthernDrake_C
// (Actor)

class UClass* ABP_ItemHead_NorthernDrake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_NorthernDrake_C");

	return Clss;
}


// BP_ItemHead_NorthernDrake_C BP_ItemHead_NorthernDrake.Default__BP_ItemHead_NorthernDrake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_NorthernDrake_C* ABP_ItemHead_NorthernDrake_C::GetDefaultObj()
{
	static class ABP_ItemHead_NorthernDrake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_NorthernDrake_C*>(ABP_ItemHead_NorthernDrake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_NorthernDrake.BP_ItemHead_NorthernDrake_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_NorthernDrake_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_NorthernDrake_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_NorthernDrake.BP_ItemHead_NorthernDrake_C.ExecuteUbergraph_BP_ItemHead_NorthernDrake
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_NorthernDrake_C::ExecuteUbergraph_BP_ItemHead_NorthernDrake(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_NorthernDrake_C", "ExecuteUbergraph_BP_ItemHead_NorthernDrake");

	Params::ABP_ItemHead_NorthernDrake_C_ExecuteUbergraph_BP_ItemHead_NorthernDrake_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


