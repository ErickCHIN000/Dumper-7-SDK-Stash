#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sapsy_Character_Alpha.Sapsy_Character_Alpha_C
// (Actor, Pawn)

class UClass* ASapsy_Character_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sapsy_Character_Alpha_C");

	return Clss;
}


// Sapsy_Character_Alpha_C Sapsy_Character_Alpha.Default__Sapsy_Character_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsy_Character_Alpha_C* ASapsy_Character_Alpha_C::GetDefaultObj()
{
	static class ASapsy_Character_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsy_Character_Alpha_C*>(ASapsy_Character_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


