#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_JungleBoots2.BP_JungleBoots2_C
// (Actor)

class UClass* ABP_JungleBoots2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_JungleBoots2_C");

	return Clss;
}


// BP_JungleBoots2_C BP_JungleBoots2.Default__BP_JungleBoots2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_JungleBoots2_C* ABP_JungleBoots2_C::GetDefaultObj()
{
	static class ABP_JungleBoots2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_JungleBoots2_C*>(ABP_JungleBoots2_C::StaticClass()->DefaultObject);

	return Default;
}

}


