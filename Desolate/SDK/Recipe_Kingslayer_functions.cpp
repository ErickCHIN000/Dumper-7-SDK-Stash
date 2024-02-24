#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Kingslayer.Recipe_Kingslayer_C
// (Actor)

class UClass* ARecipe_Kingslayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Kingslayer_C");

	return Clss;
}


// Recipe_Kingslayer_C Recipe_Kingslayer.Default__Recipe_Kingslayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Kingslayer_C* ARecipe_Kingslayer_C::GetDefaultObj()
{
	static class ARecipe_Kingslayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Kingslayer_C*>(ARecipe_Kingslayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


