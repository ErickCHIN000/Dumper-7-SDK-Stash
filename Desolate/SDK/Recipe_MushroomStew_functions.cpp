#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MushroomStew.Recipe_MushroomStew_C
// (Actor)

class UClass* ARecipe_MushroomStew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MushroomStew_C");

	return Clss;
}


// Recipe_MushroomStew_C Recipe_MushroomStew.Default__Recipe_MushroomStew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MushroomStew_C* ARecipe_MushroomStew_C::GetDefaultObj()
{
	static class ARecipe_MushroomStew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MushroomStew_C*>(ARecipe_MushroomStew_C::StaticClass()->DefaultObject);

	return Default;
}

}


