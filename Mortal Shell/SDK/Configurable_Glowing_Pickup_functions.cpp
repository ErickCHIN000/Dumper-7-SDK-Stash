#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Configurable_Glowing_Pickup.Configurable_Glowing_Pickup_C
// (Actor)

class UClass* AConfigurable_Glowing_Pickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Configurable_Glowing_Pickup_C");

	return Clss;
}


// Configurable_Glowing_Pickup_C Configurable_Glowing_Pickup.Default__Configurable_Glowing_Pickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConfigurable_Glowing_Pickup_C* AConfigurable_Glowing_Pickup_C::GetDefaultObj()
{
	static class AConfigurable_Glowing_Pickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConfigurable_Glowing_Pickup_C*>(AConfigurable_Glowing_Pickup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Configurable_Glowing_Pickup.Configurable_Glowing_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


