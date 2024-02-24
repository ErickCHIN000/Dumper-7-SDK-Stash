#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookStrength.BP_XPBookStrength_C
// (Actor)

class UClass* ABP_XPBookStrength_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookStrength_C");

	return Clss;
}


// BP_XPBookStrength_C BP_XPBookStrength.Default__BP_XPBookStrength_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookStrength_C* ABP_XPBookStrength_C::GetDefaultObj()
{
	static class ABP_XPBookStrength_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookStrength_C*>(ABP_XPBookStrength_C::StaticClass()->DefaultObject);

	return Default;
}

}


