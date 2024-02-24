#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedRiotHelmet.BP_DamagedRiotHelmet_C
// (Actor)

class UClass* ABP_DamagedRiotHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedRiotHelmet_C");

	return Clss;
}


// BP_DamagedRiotHelmet_C BP_DamagedRiotHelmet.Default__BP_DamagedRiotHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedRiotHelmet_C* ABP_DamagedRiotHelmet_C::GetDefaultObj()
{
	static class ABP_DamagedRiotHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedRiotHelmet_C*>(ABP_DamagedRiotHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


