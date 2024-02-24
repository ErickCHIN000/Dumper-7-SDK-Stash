#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Apocalypse.Recipe_Apocalypse_C
// (Actor)

class UClass* ARecipe_Apocalypse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Apocalypse_C");

	return Clss;
}


// Recipe_Apocalypse_C Recipe_Apocalypse.Default__Recipe_Apocalypse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Apocalypse_C* ARecipe_Apocalypse_C::GetDefaultObj()
{
	static class ARecipe_Apocalypse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Apocalypse_C*>(ARecipe_Apocalypse_C::StaticClass()->DefaultObject);

	return Default;
}

}


