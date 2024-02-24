#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Grenade_Ice.Recipe_Grenade_Ice_C
// (Actor)

class UClass* ARecipe_Grenade_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Grenade_Ice_C");

	return Clss;
}


// Recipe_Grenade_Ice_C Recipe_Grenade_Ice.Default__Recipe_Grenade_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Grenade_Ice_C* ARecipe_Grenade_Ice_C::GetDefaultObj()
{
	static class ARecipe_Grenade_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Grenade_Ice_C*>(ARecipe_Grenade_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


