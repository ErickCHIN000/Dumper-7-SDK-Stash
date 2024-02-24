#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_AppleMix.Recipe_AppleMix_C
// (Actor)

class UClass* ARecipe_AppleMix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_AppleMix_C");

	return Clss;
}


// Recipe_AppleMix_C Recipe_AppleMix.Default__Recipe_AppleMix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_AppleMix_C* ARecipe_AppleMix_C::GetDefaultObj()
{
	static class ARecipe_AppleMix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_AppleMix_C*>(ARecipe_AppleMix_C::StaticClass()->DefaultObject);

	return Default;
}

}


