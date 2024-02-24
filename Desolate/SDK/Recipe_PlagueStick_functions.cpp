#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_PlagueStick.Recipe_PlagueStick_C
// (Actor)

class UClass* ARecipe_PlagueStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_PlagueStick_C");

	return Clss;
}


// Recipe_PlagueStick_C Recipe_PlagueStick.Default__Recipe_PlagueStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_PlagueStick_C* ARecipe_PlagueStick_C::GetDefaultObj()
{
	static class ARecipe_PlagueStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_PlagueStick_C*>(ARecipe_PlagueStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


