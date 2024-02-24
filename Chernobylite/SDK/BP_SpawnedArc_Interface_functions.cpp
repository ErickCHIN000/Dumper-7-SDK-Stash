#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnedArc_Interface.BP_SpawnedArc_Interface_C
// (None)

class UClass* IBP_SpawnedArc_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnedArc_Interface_C");

	return Clss;
}


// BP_SpawnedArc_Interface_C BP_SpawnedArc_Interface.Default__BP_SpawnedArc_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SpawnedArc_Interface_C* IBP_SpawnedArc_Interface_C::GetDefaultObj()
{
	static class IBP_SpawnedArc_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SpawnedArc_Interface_C*>(IBP_SpawnedArc_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpawnedArc_Interface.BP_SpawnedArc_Interface_C.SpawnArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArcValues                  ArcStruct                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SpawnedArc_Interface_C::SpawnArc(const struct FArcValues& ArcStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpawnedArc_Interface_C", "SpawnArc");

	Params::IBP_SpawnedArc_Interface_C_SpawnArc_Params Parms{};

	Parms.ArcStruct = ArcStruct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpawnedArc_Interface.BP_SpawnedArc_Interface_C.SetAllowUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowUpdates                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_SpawnedArc_Interface_C::SetAllowUpdates(bool AllowUpdates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpawnedArc_Interface_C", "SetAllowUpdates");

	Params::IBP_SpawnedArc_Interface_C_SetAllowUpdates_Params Parms{};

	Parms.AllowUpdates = AllowUpdates;

	UObject::ProcessEvent(Func, &Parms);

}

}


