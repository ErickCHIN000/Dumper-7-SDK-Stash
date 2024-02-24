#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryBoots.BP_MilitaryBoots_C
// (Actor)

class UClass* ABP_MilitaryBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryBoots_C");

	return Clss;
}


// BP_MilitaryBoots_C BP_MilitaryBoots.Default__BP_MilitaryBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryBoots_C* ABP_MilitaryBoots_C::GetDefaultObj()
{
	static class ABP_MilitaryBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryBoots_C*>(ABP_MilitaryBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


