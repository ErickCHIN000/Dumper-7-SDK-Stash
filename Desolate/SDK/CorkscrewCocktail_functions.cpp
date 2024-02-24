#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CorkscrewCocktail.CorkscrewCocktail_C
// (Actor)

class UClass* ACorkscrewCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorkscrewCocktail_C");

	return Clss;
}


// CorkscrewCocktail_C CorkscrewCocktail.Default__CorkscrewCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACorkscrewCocktail_C* ACorkscrewCocktail_C::GetDefaultObj()
{
	static class ACorkscrewCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACorkscrewCocktail_C*>(ACorkscrewCocktail_C::StaticClass()->DefaultObject);

	return Default;
}

}


