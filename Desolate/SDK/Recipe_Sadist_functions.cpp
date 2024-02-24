#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Sadist.Recipe_Sadist_C
// (Actor)

class UClass* ARecipe_Sadist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Sadist_C");

	return Clss;
}


// Recipe_Sadist_C Recipe_Sadist.Default__Recipe_Sadist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Sadist_C* ARecipe_Sadist_C::GetDefaultObj()
{
	static class ARecipe_Sadist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Sadist_C*>(ARecipe_Sadist_C::StaticClass()->DefaultObject);

	return Default;
}

}


