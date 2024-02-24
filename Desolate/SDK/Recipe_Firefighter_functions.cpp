#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Firefighter.Recipe_Firefighter_C
// (Actor)

class UClass* ARecipe_Firefighter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Firefighter_C");

	return Clss;
}


// Recipe_Firefighter_C Recipe_Firefighter.Default__Recipe_Firefighter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Firefighter_C* ARecipe_Firefighter_C::GetDefaultObj()
{
	static class ARecipe_Firefighter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Firefighter_C*>(ARecipe_Firefighter_C::StaticClass()->DefaultObject);

	return Default;
}

}


