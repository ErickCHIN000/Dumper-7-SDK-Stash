#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnergyDrink.BP_EnergyDrink_C
// (Actor)

class UClass* ABP_EnergyDrink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnergyDrink_C");

	return Clss;
}


// BP_EnergyDrink_C BP_EnergyDrink.Default__BP_EnergyDrink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnergyDrink_C* ABP_EnergyDrink_C::GetDefaultObj()
{
	static class ABP_EnergyDrink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnergyDrink_C*>(ABP_EnergyDrink_C::StaticClass()->DefaultObject);

	return Default;
}

}


