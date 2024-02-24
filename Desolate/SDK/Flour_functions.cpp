#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Flour.Flour_C
// (Actor)

class UClass* AFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Flour_C");

	return Clss;
}


// Flour_C Flour.Default__Flour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlour_C* AFlour_C::GetDefaultObj()
{
	static class AFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlour_C*>(AFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}


