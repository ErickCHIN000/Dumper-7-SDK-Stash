#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Vampire.Recipe_Vampire_C
// (Actor)

class UClass* ARecipe_Vampire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Vampire_C");

	return Clss;
}


// Recipe_Vampire_C Recipe_Vampire.Default__Recipe_Vampire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Vampire_C* ARecipe_Vampire_C::GetDefaultObj()
{
	static class ARecipe_Vampire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Vampire_C*>(ARecipe_Vampire_C::StaticClass()->DefaultObject);

	return Default;
}

}


