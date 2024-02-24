#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor13.Recipe_Armor13_C
// (Actor)

class UClass* ARecipe_Armor13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor13_C");

	return Clss;
}


// Recipe_Armor13_C Recipe_Armor13.Default__Recipe_Armor13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor13_C* ARecipe_Armor13_C::GetDefaultObj()
{
	static class ARecipe_Armor13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor13_C*>(ARecipe_Armor13_C::StaticClass()->DefaultObject);

	return Default;
}

}


