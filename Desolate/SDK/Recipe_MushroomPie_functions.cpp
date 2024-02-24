#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MushroomPie.Recipe_MushroomPie_C
// (Actor)

class UClass* ARecipe_MushroomPie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MushroomPie_C");

	return Clss;
}


// Recipe_MushroomPie_C Recipe_MushroomPie.Default__Recipe_MushroomPie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MushroomPie_C* ARecipe_MushroomPie_C::GetDefaultObj()
{
	static class ARecipe_MushroomPie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MushroomPie_C*>(ARecipe_MushroomPie_C::StaticClass()->DefaultObject);

	return Default;
}

}


