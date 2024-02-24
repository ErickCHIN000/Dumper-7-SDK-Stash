#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodFloorModule_5x5.BP_WoodFloorModule_5x5_C
// (Actor)

class UClass* ABP_WoodFloorModule_5x5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodFloorModule_5x5_C");

	return Clss;
}


// BP_WoodFloorModule_5x5_C BP_WoodFloorModule_5x5.Default__BP_WoodFloorModule_5x5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodFloorModule_5x5_C* ABP_WoodFloorModule_5x5_C::GetDefaultObj()
{
	static class ABP_WoodFloorModule_5x5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodFloorModule_5x5_C*>(ABP_WoodFloorModule_5x5_C::StaticClass()->DefaultObject);

	return Default;
}

}


