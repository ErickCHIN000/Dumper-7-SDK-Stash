#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_EasternLunch.Recipe_EasternLunch_C
// (Actor)

class UClass* ARecipe_EasternLunch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_EasternLunch_C");

	return Clss;
}


// Recipe_EasternLunch_C Recipe_EasternLunch.Default__Recipe_EasternLunch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_EasternLunch_C* ARecipe_EasternLunch_C::GetDefaultObj()
{
	static class ARecipe_EasternLunch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_EasternLunch_C*>(ARecipe_EasternLunch_C::StaticClass()->DefaultObject);

	return Default;
}

}


