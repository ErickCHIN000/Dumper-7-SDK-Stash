#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavyMeal.NavyMeal_C
// (Actor)

class UClass* ANavyMeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavyMeal_C");

	return Clss;
}


// NavyMeal_C NavyMeal.Default__NavyMeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANavyMeal_C* ANavyMeal_C::GetDefaultObj()
{
	static class ANavyMeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavyMeal_C*>(ANavyMeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


