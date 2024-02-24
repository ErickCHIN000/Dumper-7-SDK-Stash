#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnergyBar.BP_EnergyBar_C
// (Actor)

class UClass* ABP_EnergyBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnergyBar_C");

	return Clss;
}


// BP_EnergyBar_C BP_EnergyBar.Default__BP_EnergyBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnergyBar_C* ABP_EnergyBar_C::GetDefaultObj()
{
	static class ABP_EnergyBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnergyBar_C*>(ABP_EnergyBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


