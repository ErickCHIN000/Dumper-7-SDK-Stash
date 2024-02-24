#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Devourer.Recipe_Devourer_C
// (Actor)

class UClass* ARecipe_Devourer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Devourer_C");

	return Clss;
}


// Recipe_Devourer_C Recipe_Devourer.Default__Recipe_Devourer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Devourer_C* ARecipe_Devourer_C::GetDefaultObj()
{
	static class ARecipe_Devourer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Devourer_C*>(ARecipe_Devourer_C::StaticClass()->DefaultObject);

	return Default;
}

}


