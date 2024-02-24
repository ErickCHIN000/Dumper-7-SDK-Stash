#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_JungleBoots.BP_JungleBoots_C
// (Actor)

class UClass* ABP_JungleBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_JungleBoots_C");

	return Clss;
}


// BP_JungleBoots_C BP_JungleBoots.Default__BP_JungleBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_JungleBoots_C* ABP_JungleBoots_C::GetDefaultObj()
{
	static class ABP_JungleBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_JungleBoots_C*>(ABP_JungleBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


