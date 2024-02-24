#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor4.Recipe_Armor4_C
// (Actor)

class UClass* ARecipe_Armor4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor4_C");

	return Clss;
}


// Recipe_Armor4_C Recipe_Armor4.Default__Recipe_Armor4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor4_C* ARecipe_Armor4_C::GetDefaultObj()
{
	static class ARecipe_Armor4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor4_C*>(ARecipe_Armor4_C::StaticClass()->DefaultObject);

	return Default;
}

}


