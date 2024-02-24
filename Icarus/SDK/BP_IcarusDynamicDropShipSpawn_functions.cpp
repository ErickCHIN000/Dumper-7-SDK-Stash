#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusDynamicDropShipSpawn.BP_IcarusDynamicDropShipSpawn_C
// (Actor)

class UClass* ABP_IcarusDynamicDropShipSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusDynamicDropShipSpawn_C");

	return Clss;
}


// BP_IcarusDynamicDropShipSpawn_C BP_IcarusDynamicDropShipSpawn.Default__BP_IcarusDynamicDropShipSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusDynamicDropShipSpawn_C* ABP_IcarusDynamicDropShipSpawn_C::GetDefaultObj()
{
	static class ABP_IcarusDynamicDropShipSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusDynamicDropShipSpawn_C*>(ABP_IcarusDynamicDropShipSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


