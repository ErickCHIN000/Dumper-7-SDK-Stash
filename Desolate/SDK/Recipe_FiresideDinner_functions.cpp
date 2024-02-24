#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_FiresideDinner.Recipe_FiresideDinner_C
// (Actor)

class UClass* ARecipe_FiresideDinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_FiresideDinner_C");

	return Clss;
}


// Recipe_FiresideDinner_C Recipe_FiresideDinner.Default__Recipe_FiresideDinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_FiresideDinner_C* ARecipe_FiresideDinner_C::GetDefaultObj()
{
	static class ARecipe_FiresideDinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_FiresideDinner_C*>(ARecipe_FiresideDinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


