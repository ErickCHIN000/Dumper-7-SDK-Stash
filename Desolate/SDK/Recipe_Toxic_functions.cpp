#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Toxic.Recipe_Toxic_C
// (Actor)

class UClass* ARecipe_Toxic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Toxic_C");

	return Clss;
}


// Recipe_Toxic_C Recipe_Toxic.Default__Recipe_Toxic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Toxic_C* ARecipe_Toxic_C::GetDefaultObj()
{
	static class ARecipe_Toxic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Toxic_C*>(ARecipe_Toxic_C::StaticClass()->DefaultObject);

	return Default;
}

}


