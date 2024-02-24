#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_FruitTea.Recipe_FruitTea_C
// (Actor)

class UClass* ARecipe_FruitTea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_FruitTea_C");

	return Clss;
}


// Recipe_FruitTea_C Recipe_FruitTea.Default__Recipe_FruitTea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_FruitTea_C* ARecipe_FruitTea_C::GetDefaultObj()
{
	static class ARecipe_FruitTea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_FruitTea_C*>(ARecipe_FruitTea_C::StaticClass()->DefaultObject);

	return Default;
}

}


