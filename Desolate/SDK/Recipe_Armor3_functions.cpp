#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor3.Recipe_Armor3_C
// (Actor)

class UClass* ARecipe_Armor3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor3_C");

	return Clss;
}


// Recipe_Armor3_C Recipe_Armor3.Default__Recipe_Armor3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor3_C* ARecipe_Armor3_C::GetDefaultObj()
{
	static class ARecipe_Armor3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor3_C*>(ARecipe_Armor3_C::StaticClass()->DefaultObject);

	return Default;
}

}


