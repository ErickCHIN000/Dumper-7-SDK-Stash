#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Ansora-stylePasta.Recipe_Ansora-stylePasta_C
// (Actor)

class UClass* ARecipe_AnsoraMinusstylePasta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Ansora-stylePasta_C");

	return Clss;
}


// Recipe_Ansora-stylePasta_C Recipe_Ansora-stylePasta.Default__Recipe_Ansora-stylePasta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_AnsoraMinusstylePasta_C* ARecipe_AnsoraMinusstylePasta_C::GetDefaultObj()
{
	static class ARecipe_AnsoraMinusstylePasta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_AnsoraMinusstylePasta_C*>(ARecipe_AnsoraMinusstylePasta_C::StaticClass()->DefaultObject);

	return Default;
}

}


