#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor12.Recipe_Armor12_C
// (Actor)

class UClass* ARecipe_Armor12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor12_C");

	return Clss;
}


// Recipe_Armor12_C Recipe_Armor12.Default__Recipe_Armor12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor12_C* ARecipe_Armor12_C::GetDefaultObj()
{
	static class ARecipe_Armor12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor12_C*>(ARecipe_Armor12_C::StaticClass()->DefaultObject);

	return Default;
}

}


