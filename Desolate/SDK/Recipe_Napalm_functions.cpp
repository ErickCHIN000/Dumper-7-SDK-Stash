#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Napalm.Recipe_Napalm_C
// (Actor)

class UClass* ARecipe_Napalm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Napalm_C");

	return Clss;
}


// Recipe_Napalm_C Recipe_Napalm.Default__Recipe_Napalm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Napalm_C* ARecipe_Napalm_C::GetDefaultObj()
{
	static class ARecipe_Napalm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Napalm_C*>(ARecipe_Napalm_C::StaticClass()->DefaultObject);

	return Default;
}

}


