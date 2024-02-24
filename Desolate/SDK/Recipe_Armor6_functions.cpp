#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor6.Recipe_Armor6_C
// (Actor)

class UClass* ARecipe_Armor6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor6_C");

	return Clss;
}


// Recipe_Armor6_C Recipe_Armor6.Default__Recipe_Armor6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor6_C* ARecipe_Armor6_C::GetDefaultObj()
{
	static class ARecipe_Armor6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor6_C*>(ARecipe_Armor6_C::StaticClass()->DefaultObject);

	return Default;
}

}


