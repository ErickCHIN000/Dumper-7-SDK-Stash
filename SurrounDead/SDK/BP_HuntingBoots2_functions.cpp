#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingBoots2.BP_HuntingBoots2_C
// (Actor)

class UClass* ABP_HuntingBoots2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingBoots2_C");

	return Clss;
}


// BP_HuntingBoots2_C BP_HuntingBoots2.Default__BP_HuntingBoots2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingBoots2_C* ABP_HuntingBoots2_C::GetDefaultObj()
{
	static class ABP_HuntingBoots2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingBoots2_C*>(ABP_HuntingBoots2_C::StaticClass()->DefaultObject);

	return Default;
}

}


