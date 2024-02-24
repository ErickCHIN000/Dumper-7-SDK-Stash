#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SapsySalve.Recipe_SapsySalve_C
// (Actor)

class UClass* ARecipe_SapsySalve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SapsySalve_C");

	return Clss;
}


// Recipe_SapsySalve_C Recipe_SapsySalve.Default__Recipe_SapsySalve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SapsySalve_C* ARecipe_SapsySalve_C::GetDefaultObj()
{
	static class ARecipe_SapsySalve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SapsySalve_C*>(ARecipe_SapsySalve_C::StaticClass()->DefaultObject);

	return Default;
}

}


