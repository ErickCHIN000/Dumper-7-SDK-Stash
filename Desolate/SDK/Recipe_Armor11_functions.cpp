#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor11.Recipe_Armor11_C
// (Actor)

class UClass* ARecipe_Armor11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor11_C");

	return Clss;
}


// Recipe_Armor11_C Recipe_Armor11.Default__Recipe_Armor11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor11_C* ARecipe_Armor11_C::GetDefaultObj()
{
	static class ARecipe_Armor11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor11_C*>(ARecipe_Armor11_C::StaticClass()->DefaultObject);

	return Default;
}

}


