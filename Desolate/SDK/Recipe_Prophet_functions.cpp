#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Prophet.Recipe_Prophet_C
// (Actor)

class UClass* ARecipe_Prophet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Prophet_C");

	return Clss;
}


// Recipe_Prophet_C Recipe_Prophet.Default__Recipe_Prophet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Prophet_C* ARecipe_Prophet_C::GetDefaultObj()
{
	static class ARecipe_Prophet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Prophet_C*>(ARecipe_Prophet_C::StaticClass()->DefaultObject);

	return Default;
}

}


