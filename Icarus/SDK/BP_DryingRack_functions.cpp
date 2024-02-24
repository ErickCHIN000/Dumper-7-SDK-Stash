#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DryingRack.BP_DryingRack_C
// (Actor)

class UClass* ABP_DryingRack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DryingRack_C");

	return Clss;
}


// BP_DryingRack_C BP_DryingRack.Default__BP_DryingRack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DryingRack_C* ABP_DryingRack_C::GetDefaultObj()
{
	static class ABP_DryingRack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DryingRack_C*>(ABP_DryingRack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DryingRack.BP_DryingRack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DryingRack_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DryingRack_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


