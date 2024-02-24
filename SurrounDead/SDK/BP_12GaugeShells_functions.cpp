#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_12GaugeShells.BP_12GaugeShells_C
// (Actor)

class UClass* ABP_12GaugeShells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_12GaugeShells_C");

	return Clss;
}


// BP_12GaugeShells_C BP_12GaugeShells.Default__BP_12GaugeShells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_12GaugeShells_C* ABP_12GaugeShells_C::GetDefaultObj()
{
	static class ABP_12GaugeShells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_12GaugeShells_C*>(ABP_12GaugeShells_C::StaticClass()->DefaultObject);

	return Default;
}

}


