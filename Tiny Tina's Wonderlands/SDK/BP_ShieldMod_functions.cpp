#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShieldMod.BP_ShieldMod_C
// (Actor)

class UClass* ABP_ShieldMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShieldMod_C");

	return Clss;
}


// BP_ShieldMod_C BP_ShieldMod.Default__BP_ShieldMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShieldMod_C* ABP_ShieldMod_C::GetDefaultObj()
{
	static class ABP_ShieldMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShieldMod_C*>(ABP_ShieldMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ShieldMod.BP_ShieldMod_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ShieldMod_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


