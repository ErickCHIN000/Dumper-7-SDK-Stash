#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_DogRose.Recipe_DogRose_C
// (Actor)

class UClass* ARecipe_DogRose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_DogRose_C");

	return Clss;
}


// Recipe_DogRose_C Recipe_DogRose.Default__Recipe_DogRose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_DogRose_C* ARecipe_DogRose_C::GetDefaultObj()
{
	static class ARecipe_DogRose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_DogRose_C*>(ARecipe_DogRose_C::StaticClass()->DefaultObject);

	return Default;
}

}


