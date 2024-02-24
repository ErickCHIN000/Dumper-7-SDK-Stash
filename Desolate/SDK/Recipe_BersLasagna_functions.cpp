#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_BersLasagna.Recipe_BersLasagna_C
// (Actor)

class UClass* ARecipe_BersLasagna_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_BersLasagna_C");

	return Clss;
}


// Recipe_BersLasagna_C Recipe_BersLasagna.Default__Recipe_BersLasagna_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_BersLasagna_C* ARecipe_BersLasagna_C::GetDefaultObj()
{
	static class ARecipe_BersLasagna_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_BersLasagna_C*>(ARecipe_BersLasagna_C::StaticClass()->DefaultObject);

	return Default;
}

}


