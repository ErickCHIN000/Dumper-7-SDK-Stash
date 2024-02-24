#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Emissary.Emissary_C
// (Actor, Pawn)

class UClass* AEmissary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Emissary_C");

	return Clss;
}


// Emissary_C Emissary.Default__Emissary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEmissary_C* AEmissary_C::GetDefaultObj()
{
	static class AEmissary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEmissary_C*>(AEmissary_C::StaticClass()->DefaultObject);

	return Default;
}

}


