#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Tesla.Recipe_Tesla_C
// (Actor)

class UClass* ARecipe_Tesla_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Tesla_C");

	return Clss;
}


// Recipe_Tesla_C Recipe_Tesla.Default__Recipe_Tesla_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Tesla_C* ARecipe_Tesla_C::GetDefaultObj()
{
	static class ARecipe_Tesla_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Tesla_C*>(ARecipe_Tesla_C::StaticClass()->DefaultObject);

	return Default;
}

}


