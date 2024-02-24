#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KvakunCharacter_Alpha.KvakunCharacter_Alpha_C
// (Actor, Pawn)

class UClass* AKvakunCharacter_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KvakunCharacter_Alpha_C");

	return Clss;
}


// KvakunCharacter_Alpha_C KvakunCharacter_Alpha.Default__KvakunCharacter_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKvakunCharacter_Alpha_C* AKvakunCharacter_Alpha_C::GetDefaultObj()
{
	static class AKvakunCharacter_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKvakunCharacter_Alpha_C*>(AKvakunCharacter_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


