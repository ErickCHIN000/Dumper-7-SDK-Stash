#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingBoots.BP_HuntingBoots_C
// (Actor)

class UClass* ABP_HuntingBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingBoots_C");

	return Clss;
}


// BP_HuntingBoots_C BP_HuntingBoots.Default__BP_HuntingBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingBoots_C* ABP_HuntingBoots_C::GetDefaultObj()
{
	static class ABP_HuntingBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingBoots_C*>(ABP_HuntingBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


