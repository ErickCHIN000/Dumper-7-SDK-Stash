#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_Flint.KeyCard_Flint_C
// (Actor)

class UClass* AKeyCard_Flint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_Flint_C");

	return Clss;
}


// KeyCard_Flint_C KeyCard_Flint.Default__KeyCard_Flint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_Flint_C* AKeyCard_Flint_C::GetDefaultObj()
{
	static class AKeyCard_Flint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_Flint_C*>(AKeyCard_Flint_C::StaticClass()->DefaultObject);

	return Default;
}

}


