#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor9.Recipe_Armor9_C
// (Actor)

class UClass* ARecipe_Armor9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor9_C");

	return Clss;
}


// Recipe_Armor9_C Recipe_Armor9.Default__Recipe_Armor9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor9_C* ARecipe_Armor9_C::GetDefaultObj()
{
	static class ARecipe_Armor9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor9_C*>(ARecipe_Armor9_C::StaticClass()->DefaultObject);

	return Default;
}

}


