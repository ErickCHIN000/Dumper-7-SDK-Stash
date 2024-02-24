#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedHuntingHatchet.BP_DamagedHuntingHatchet_C
// (Actor)

class UClass* ABP_DamagedHuntingHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedHuntingHatchet_C");

	return Clss;
}


// BP_DamagedHuntingHatchet_C BP_DamagedHuntingHatchet.Default__BP_DamagedHuntingHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedHuntingHatchet_C* ABP_DamagedHuntingHatchet_C::GetDefaultObj()
{
	static class ABP_DamagedHuntingHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedHuntingHatchet_C*>(ABP_DamagedHuntingHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


