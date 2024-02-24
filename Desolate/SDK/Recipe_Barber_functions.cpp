#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Barber.Recipe_Barber_C
// (Actor)

class UClass* ARecipe_Barber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Barber_C");

	return Clss;
}


// Recipe_Barber_C Recipe_Barber.Default__Recipe_Barber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Barber_C* ARecipe_Barber_C::GetDefaultObj()
{
	static class ARecipe_Barber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Barber_C*>(ARecipe_Barber_C::StaticClass()->DefaultObject);

	return Default;
}

}


