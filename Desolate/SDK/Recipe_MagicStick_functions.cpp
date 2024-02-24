#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MagicStick.Recipe_MagicStick_C
// (Actor)

class UClass* ARecipe_MagicStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MagicStick_C");

	return Clss;
}


// Recipe_MagicStick_C Recipe_MagicStick.Default__Recipe_MagicStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MagicStick_C* ARecipe_MagicStick_C::GetDefaultObj()
{
	static class ARecipe_MagicStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MagicStick_C*>(ARecipe_MagicStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


