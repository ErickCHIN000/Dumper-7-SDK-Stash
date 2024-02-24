#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bed_Wood_INT.BP_Bed_Wood_INT_C
// (Actor)

class UClass* ABP_Bed_Wood_INT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bed_Wood_INT_C");

	return Clss;
}


// BP_Bed_Wood_INT_C BP_Bed_Wood_INT.Default__BP_Bed_Wood_INT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bed_Wood_INT_C* ABP_Bed_Wood_INT_C::GetDefaultObj()
{
	static class ABP_Bed_Wood_INT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bed_Wood_INT_C*>(ABP_Bed_Wood_INT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Bed_Wood_INT.BP_Bed_Wood_INT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Bed_Wood_INT_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bed_Wood_INT_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Bed_Wood_INT.BP_Bed_Wood_INT_C.ExecuteUbergraph_BP_Bed_Wood_INT
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bed_Wood_INT_C::ExecuteUbergraph_BP_Bed_Wood_INT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bed_Wood_INT_C", "ExecuteUbergraph_BP_Bed_Wood_INT");

	Params::ABP_Bed_Wood_INT_C_ExecuteUbergraph_BP_Bed_Wood_INT_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


