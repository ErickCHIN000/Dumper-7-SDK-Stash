#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SoyCerealWithMushrooms.Recipe_SoyCerealWithMushrooms_C
// (Actor)

class UClass* ARecipe_SoyCerealWithMushrooms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SoyCerealWithMushrooms_C");

	return Clss;
}


// Recipe_SoyCerealWithMushrooms_C Recipe_SoyCerealWithMushrooms.Default__Recipe_SoyCerealWithMushrooms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SoyCerealWithMushrooms_C* ARecipe_SoyCerealWithMushrooms_C::GetDefaultObj()
{
	static class ARecipe_SoyCerealWithMushrooms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SoyCerealWithMushrooms_C*>(ARecipe_SoyCerealWithMushrooms_C::StaticClass()->DefaultObject);

	return Default;
}

}


