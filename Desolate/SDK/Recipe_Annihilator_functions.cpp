#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Annihilator.Recipe_Annihilator_C
// (Actor)

class UClass* ARecipe_Annihilator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Annihilator_C");

	return Clss;
}


// Recipe_Annihilator_C Recipe_Annihilator.Default__Recipe_Annihilator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Annihilator_C* ARecipe_Annihilator_C::GetDefaultObj()
{
	static class ARecipe_Annihilator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Annihilator_C*>(ARecipe_Annihilator_C::StaticClass()->DefaultObject);

	return Default;
}

}


