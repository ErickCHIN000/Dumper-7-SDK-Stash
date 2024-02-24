#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Alcohol.Alcohol_C
// (Actor)

class UClass* AAlcohol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Alcohol_C");

	return Clss;
}


// Alcohol_C Alcohol.Default__Alcohol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAlcohol_C* AAlcohol_C::GetDefaultObj()
{
	static class AAlcohol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAlcohol_C*>(AAlcohol_C::StaticClass()->DefaultObject);

	return Default;
}

}


