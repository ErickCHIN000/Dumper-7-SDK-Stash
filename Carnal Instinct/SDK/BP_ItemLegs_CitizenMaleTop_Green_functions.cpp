#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_CitizenMaleTop_Green.BP_ItemLegs_CitizenMaleTop_Green_C
// (Actor)

class UClass* ABP_ItemLegs_CitizenMaleTop_Green_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_CitizenMaleTop_Green_C");

	return Clss;
}


// BP_ItemLegs_CitizenMaleTop_Green_C BP_ItemLegs_CitizenMaleTop_Green.Default__BP_ItemLegs_CitizenMaleTop_Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_CitizenMaleTop_Green_C* ABP_ItemLegs_CitizenMaleTop_Green_C::GetDefaultObj()
{
	static class ABP_ItemLegs_CitizenMaleTop_Green_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_CitizenMaleTop_Green_C*>(ABP_ItemLegs_CitizenMaleTop_Green_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_CitizenMaleTop_Green.BP_ItemLegs_CitizenMaleTop_Green_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_CitizenMaleTop_Green_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_CitizenMaleTop_Green_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_CitizenMaleTop_Green.BP_ItemLegs_CitizenMaleTop_Green_C.ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Green
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_CitizenMaleTop_Green_C::ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Green(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_CitizenMaleTop_Green_C", "ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Green");

	Params::ABP_ItemLegs_CitizenMaleTop_Green_C_ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Green_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


