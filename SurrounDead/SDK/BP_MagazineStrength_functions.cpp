#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineStrength.BP_MagazineStrength_C
// (Actor)

class UClass* ABP_MagazineStrength_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineStrength_C");

	return Clss;
}


// BP_MagazineStrength_C BP_MagazineStrength.Default__BP_MagazineStrength_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineStrength_C* ABP_MagazineStrength_C::GetDefaultObj()
{
	static class ABP_MagazineStrength_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineStrength_C*>(ABP_MagazineStrength_C::StaticClass()->DefaultObject);

	return Default;
}

}


