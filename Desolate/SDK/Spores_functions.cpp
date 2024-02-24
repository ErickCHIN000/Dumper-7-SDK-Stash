#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Spores.Spores_C
// (Actor)

class UClass* ASpores_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spores_C");

	return Clss;
}


// Spores_C Spores.Default__Spores_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpores_C* ASpores_C::GetDefaultObj()
{
	static class ASpores_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpores_C*>(ASpores_C::StaticClass()->DefaultObject);

	return Default;
}

}


