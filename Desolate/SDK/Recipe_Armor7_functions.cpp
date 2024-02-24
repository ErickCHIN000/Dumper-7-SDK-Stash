#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor7.Recipe_Armor7_C
// (Actor)

class UClass* ARecipe_Armor7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor7_C");

	return Clss;
}


// Recipe_Armor7_C Recipe_Armor7.Default__Recipe_Armor7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor7_C* ARecipe_Armor7_C::GetDefaultObj()
{
	static class ARecipe_Armor7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor7_C*>(ARecipe_Armor7_C::StaticClass()->DefaultObject);

	return Default;
}

}


