#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GorlanCharacter_Alpha.GorlanCharacter_Alpha_C
// (Actor, Pawn)

class UClass* AGorlanCharacter_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GorlanCharacter_Alpha_C");

	return Clss;
}


// GorlanCharacter_Alpha_C GorlanCharacter_Alpha.Default__GorlanCharacter_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlanCharacter_Alpha_C* AGorlanCharacter_Alpha_C::GetDefaultObj()
{
	static class AGorlanCharacter_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlanCharacter_Alpha_C*>(AGorlanCharacter_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


