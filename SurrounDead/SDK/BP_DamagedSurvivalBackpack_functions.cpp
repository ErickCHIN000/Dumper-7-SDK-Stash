#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedSurvivalBackpack.BP_DamagedSurvivalBackpack_C
// (Actor)

class UClass* ABP_DamagedSurvivalBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedSurvivalBackpack_C");

	return Clss;
}


// BP_DamagedSurvivalBackpack_C BP_DamagedSurvivalBackpack.Default__BP_DamagedSurvivalBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedSurvivalBackpack_C* ABP_DamagedSurvivalBackpack_C::GetDefaultObj()
{
	static class ABP_DamagedSurvivalBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedSurvivalBackpack_C*>(ABP_DamagedSurvivalBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


