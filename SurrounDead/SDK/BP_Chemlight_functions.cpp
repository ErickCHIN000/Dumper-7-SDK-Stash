#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chemlight.BP_Chemlight_C
// (Actor)

class UClass* ABP_Chemlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chemlight_C");

	return Clss;
}


// BP_Chemlight_C BP_Chemlight.Default__BP_Chemlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chemlight_C* ABP_Chemlight_C::GetDefaultObj()
{
	static class ABP_Chemlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chemlight_C*>(ABP_Chemlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


