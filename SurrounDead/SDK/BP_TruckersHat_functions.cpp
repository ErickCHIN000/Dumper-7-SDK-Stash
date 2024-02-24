#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TruckersHat.BP_TruckersHat_C
// (Actor)

class UClass* ABP_TruckersHat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TruckersHat_C");

	return Clss;
}


// BP_TruckersHat_C BP_TruckersHat.Default__BP_TruckersHat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TruckersHat_C* ABP_TruckersHat_C::GetDefaultObj()
{
	static class ABP_TruckersHat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TruckersHat_C*>(ABP_TruckersHat_C::StaticClass()->DefaultObject);

	return Default;
}

}


