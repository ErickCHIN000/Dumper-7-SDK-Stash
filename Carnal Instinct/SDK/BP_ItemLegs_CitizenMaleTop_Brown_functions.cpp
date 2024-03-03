#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_CitizenMaleTop_Brown.BP_ItemLegs_CitizenMaleTop_Brown_C
// (Actor)

class UClass* ABP_ItemLegs_CitizenMaleTop_Brown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_CitizenMaleTop_Brown_C");

	return Clss;
}


// BP_ItemLegs_CitizenMaleTop_Brown_C BP_ItemLegs_CitizenMaleTop_Brown.Default__BP_ItemLegs_CitizenMaleTop_Brown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_CitizenMaleTop_Brown_C* ABP_ItemLegs_CitizenMaleTop_Brown_C::GetDefaultObj()
{
	static class ABP_ItemLegs_CitizenMaleTop_Brown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_CitizenMaleTop_Brown_C*>(ABP_ItemLegs_CitizenMaleTop_Brown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_CitizenMaleTop_Brown.BP_ItemLegs_CitizenMaleTop_Brown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_CitizenMaleTop_Brown_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_CitizenMaleTop_Brown_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_CitizenMaleTop_Brown.BP_ItemLegs_CitizenMaleTop_Brown_C.ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Brown
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_CitizenMaleTop_Brown_C::ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Brown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_CitizenMaleTop_Brown_C", "ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Brown");

	Params::ABP_ItemLegs_CitizenMaleTop_Brown_C_ExecuteUbergraph_BP_ItemLegs_CitizenMaleTop_Brown_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


