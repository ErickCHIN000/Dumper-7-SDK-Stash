#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MortarAndPestle.BP_MortarAndPestle_C
// (Actor)

class UClass* ABP_MortarAndPestle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MortarAndPestle_C");

	return Clss;
}


// BP_MortarAndPestle_C BP_MortarAndPestle.Default__BP_MortarAndPestle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MortarAndPestle_C* ABP_MortarAndPestle_C::GetDefaultObj()
{
	static class ABP_MortarAndPestle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MortarAndPestle_C*>(ABP_MortarAndPestle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MortarAndPestle.BP_MortarAndPestle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MortarAndPestle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MortarAndPestle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MortarAndPestle.BP_MortarAndPestle_C.ExecuteUbergraph_BP_MortarAndPestle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarAndPestle_C::ExecuteUbergraph_BP_MortarAndPestle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MortarAndPestle_C", "ExecuteUbergraph_BP_MortarAndPestle");

	Params::ABP_MortarAndPestle_C_ExecuteUbergraph_BP_MortarAndPestle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


