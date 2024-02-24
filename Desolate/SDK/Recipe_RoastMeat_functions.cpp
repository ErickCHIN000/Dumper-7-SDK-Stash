#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_RoastMeat.Recipe_RoastMeat_C
// (Actor)

class UClass* ARecipe_RoastMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_RoastMeat_C");

	return Clss;
}


// Recipe_RoastMeat_C Recipe_RoastMeat.Default__Recipe_RoastMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_RoastMeat_C* ARecipe_RoastMeat_C::GetDefaultObj()
{
	static class ARecipe_RoastMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_RoastMeat_C*>(ARecipe_RoastMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


