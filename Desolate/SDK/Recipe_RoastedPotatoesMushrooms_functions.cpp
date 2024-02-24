#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_RoastedPotatoesMushrooms.Recipe_RoastedPotatoesMushrooms_C
// (Actor)

class UClass* ARecipe_RoastedPotatoesMushrooms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_RoastedPotatoesMushrooms_C");

	return Clss;
}


// Recipe_RoastedPotatoesMushrooms_C Recipe_RoastedPotatoesMushrooms.Default__Recipe_RoastedPotatoesMushrooms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_RoastedPotatoesMushrooms_C* ARecipe_RoastedPotatoesMushrooms_C::GetDefaultObj()
{
	static class ARecipe_RoastedPotatoesMushrooms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_RoastedPotatoesMushrooms_C*>(ARecipe_RoastedPotatoesMushrooms_C::StaticClass()->DefaultObject);

	return Default;
}

}


