#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_CitizenMaleTop_Blue.BP_ItemLegs_CitizenMaleTop_Blue_C
// (Actor)

class UClass* ABP_ItemLegs_CitizenMaleTop_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_CitizenMaleTop_Blue_C");

	return Clss;
}


// BP_ItemLegs_CitizenMaleTop_Blue_C BP_ItemLegs_CitizenMaleTop_Blue.Default__BP_ItemLegs_CitizenMaleTop_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_CitizenMaleTop_Blue_C* ABP_ItemLegs_CitizenMaleTop_Blue_C::GetDefaultObj()
{
	static class ABP_ItemLegs_CitizenMaleTop_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_CitizenMaleTop_Blue_C*>(ABP_ItemLegs_CitizenMaleTop_Blue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_CitizenMaleTop_Blue.BP_ItemLegs_CitizenMaleTop_Blue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_CitizenMaleTop_Blue_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_CitizenMaleTop_Blue_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_CitizenMaleTop_Blue.BP_ItemLegs_CitizenMaleTop_Blue_C.ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Blue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_CitizenMaleTop_Blue_C::ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Blue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_CitizenMaleTop_Blue_C", "ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Blue");

	Params::ABP_ItemLegs_CitizenMaleTop_Blue_C_ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Blue_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


