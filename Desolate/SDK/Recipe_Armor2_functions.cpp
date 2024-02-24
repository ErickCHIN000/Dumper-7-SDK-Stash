#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor2.Recipe_Armor2_C
// (Actor)

class UClass* ARecipe_Armor2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor2_C");

	return Clss;
}


// Recipe_Armor2_C Recipe_Armor2.Default__Recipe_Armor2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor2_C* ARecipe_Armor2_C::GetDefaultObj()
{
	static class ARecipe_Armor2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor2_C*>(ARecipe_Armor2_C::StaticClass()->DefaultObject);

	return Default;
}

}


