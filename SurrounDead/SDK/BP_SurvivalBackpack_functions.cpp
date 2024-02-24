#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SurvivalBackpack.BP_SurvivalBackpack_C
// (Actor)

class UClass* ABP_SurvivalBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SurvivalBackpack_C");

	return Clss;
}


// BP_SurvivalBackpack_C BP_SurvivalBackpack.Default__BP_SurvivalBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SurvivalBackpack_C* ABP_SurvivalBackpack_C::GetDefaultObj()
{
	static class ABP_SurvivalBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SurvivalBackpack_C*>(ABP_SurvivalBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


