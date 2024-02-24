#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Radiator.Recipe_Radiator_C
// (Actor)

class UClass* ARecipe_Radiator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Radiator_C");

	return Clss;
}


// Recipe_Radiator_C Recipe_Radiator.Default__Recipe_Radiator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Radiator_C* ARecipe_Radiator_C::GetDefaultObj()
{
	static class ARecipe_Radiator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Radiator_C*>(ARecipe_Radiator_C::StaticClass()->DefaultObject);

	return Default;
}

}


