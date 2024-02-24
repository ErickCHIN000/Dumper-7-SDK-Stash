#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Reaper.Recipe_Reaper_C
// (Actor)

class UClass* ARecipe_Reaper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Reaper_C");

	return Clss;
}


// Recipe_Reaper_C Recipe_Reaper.Default__Recipe_Reaper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Reaper_C* ARecipe_Reaper_C::GetDefaultObj()
{
	static class ARecipe_Reaper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Reaper_C*>(ARecipe_Reaper_C::StaticClass()->DefaultObject);

	return Default;
}

}


