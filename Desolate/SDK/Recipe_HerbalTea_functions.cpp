#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_HerbalTea.Recipe_HerbalTea_C
// (Actor)

class UClass* ARecipe_HerbalTea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_HerbalTea_C");

	return Clss;
}


// Recipe_HerbalTea_C Recipe_HerbalTea.Default__Recipe_HerbalTea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_HerbalTea_C* ARecipe_HerbalTea_C::GetDefaultObj()
{
	static class ARecipe_HerbalTea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_HerbalTea_C*>(ARecipe_HerbalTea_C::StaticClass()->DefaultObject);

	return Default;
}

}


