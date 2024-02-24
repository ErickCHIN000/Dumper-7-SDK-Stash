#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SoyCereal.Recipe_SoyCereal_C
// (Actor)

class UClass* ARecipe_SoyCereal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SoyCereal_C");

	return Clss;
}


// Recipe_SoyCereal_C Recipe_SoyCereal.Default__Recipe_SoyCereal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SoyCereal_C* ARecipe_SoyCereal_C::GetDefaultObj()
{
	static class ARecipe_SoyCereal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SoyCereal_C*>(ARecipe_SoyCereal_C::StaticClass()->DefaultObject);

	return Default;
}

}


