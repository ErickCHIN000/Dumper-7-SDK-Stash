#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Geode_Lamp_Monolith_Oxite.BP_Geode_Lamp_Monolith_Oxite_C
// (Actor)

class UClass* ABP_Geode_Lamp_Monolith_Oxite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Geode_Lamp_Monolith_Oxite_C");

	return Clss;
}


// BP_Geode_Lamp_Monolith_Oxite_C BP_Geode_Lamp_Monolith_Oxite.Default__BP_Geode_Lamp_Monolith_Oxite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Geode_Lamp_Monolith_Oxite_C* ABP_Geode_Lamp_Monolith_Oxite_C::GetDefaultObj()
{
	static class ABP_Geode_Lamp_Monolith_Oxite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Geode_Lamp_Monolith_Oxite_C*>(ABP_Geode_Lamp_Monolith_Oxite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Geode_Lamp_Monolith_Oxite.BP_Geode_Lamp_Monolith_Oxite_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Geode_Lamp_Monolith_Oxite_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Geode_Lamp_Monolith_Oxite_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Geode_Lamp_Monolith_Oxite.BP_Geode_Lamp_Monolith_Oxite_C.ExecuteUbergraph_BP_Geode_Lamp_Monolith_Oxite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Geode_Lamp_Monolith_Oxite_C::ExecuteUbergraph_BP_Geode_Lamp_Monolith_Oxite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Geode_Lamp_Monolith_Oxite_C", "ExecuteUbergraph_BP_Geode_Lamp_Monolith_Oxite");

	Params::ABP_Geode_Lamp_Monolith_Oxite_C_ExecuteUbergraph_BP_Geode_Lamp_Monolith_Oxite_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


