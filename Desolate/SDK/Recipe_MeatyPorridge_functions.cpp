#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MeatyPorridge.Recipe_MeatyPorridge_C
// (Actor)

class UClass* ARecipe_MeatyPorridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MeatyPorridge_C");

	return Clss;
}


// Recipe_MeatyPorridge_C Recipe_MeatyPorridge.Default__Recipe_MeatyPorridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MeatyPorridge_C* ARecipe_MeatyPorridge_C::GetDefaultObj()
{
	static class ARecipe_MeatyPorridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MeatyPorridge_C*>(ARecipe_MeatyPorridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


