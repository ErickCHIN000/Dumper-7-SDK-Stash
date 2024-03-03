#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_POI_Spawner.BP_POI_Spawner_C
// (Actor)

class UClass* ABP_POI_Spawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_POI_Spawner_C");

	return Clss;
}


// BP_POI_Spawner_C BP_POI_Spawner.Default__BP_POI_Spawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_POI_Spawner_C* ABP_POI_Spawner_C::GetDefaultObj()
{
	static class ABP_POI_Spawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_POI_Spawner_C*>(ABP_POI_Spawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_POI_Spawner.BP_POI_Spawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_POI_Spawner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POI_Spawner_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.ExecuteUbergraph_BP_POI_Spawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_POI_Spawner_C::ExecuteUbergraph_BP_POI_Spawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POI_Spawner_C", "ExecuteUbergraph_BP_POI_Spawner");

	Params::ABP_POI_Spawner_C_ExecuteUbergraph_BP_POI_Spawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


