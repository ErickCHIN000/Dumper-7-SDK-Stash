#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Battery.Recipe_Battery_C
// (Actor)

class UClass* ARecipe_Battery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Battery_C");

	return Clss;
}


// Recipe_Battery_C Recipe_Battery.Default__Recipe_Battery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Battery_C* ARecipe_Battery_C::GetDefaultObj()
{
	static class ARecipe_Battery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Battery_C*>(ARecipe_Battery_C::StaticClass()->DefaultObject);

	return Default;
}

}


