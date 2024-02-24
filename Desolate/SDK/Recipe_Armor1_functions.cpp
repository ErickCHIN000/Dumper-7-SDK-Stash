#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor1.Recipe_Armor1_C
// (Actor)

class UClass* ARecipe_Armor1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor1_C");

	return Clss;
}


// Recipe_Armor1_C Recipe_Armor1.Default__Recipe_Armor1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor1_C* ARecipe_Armor1_C::GetDefaultObj()
{
	static class ARecipe_Armor1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor1_C*>(ARecipe_Armor1_C::StaticClass()->DefaultObject);

	return Default;
}

}


