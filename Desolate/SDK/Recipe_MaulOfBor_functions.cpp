#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MaulOfBor.Recipe_MaulOfBor_C
// (Actor)

class UClass* ARecipe_MaulOfBor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MaulOfBor_C");

	return Clss;
}


// Recipe_MaulOfBor_C Recipe_MaulOfBor.Default__Recipe_MaulOfBor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MaulOfBor_C* ARecipe_MaulOfBor_C::GetDefaultObj()
{
	static class ARecipe_MaulOfBor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MaulOfBor_C*>(ARecipe_MaulOfBor_C::StaticClass()->DefaultObject);

	return Default;
}

}


