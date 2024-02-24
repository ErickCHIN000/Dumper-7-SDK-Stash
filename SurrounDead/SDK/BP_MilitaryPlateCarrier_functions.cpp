#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryPlateCarrier.BP_MilitaryPlateCarrier_C
// (Actor)

class UClass* ABP_MilitaryPlateCarrier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryPlateCarrier_C");

	return Clss;
}


// BP_MilitaryPlateCarrier_C BP_MilitaryPlateCarrier.Default__BP_MilitaryPlateCarrier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryPlateCarrier_C* ABP_MilitaryPlateCarrier_C::GetDefaultObj()
{
	static class ABP_MilitaryPlateCarrier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryPlateCarrier_C*>(ABP_MilitaryPlateCarrier_C::StaticClass()->DefaultObject);

	return Default;
}

}


