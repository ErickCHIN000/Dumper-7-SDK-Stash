#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dog_Character_Alpha.Dog_Character_Alpha_C
// (Actor, Pawn)

class UClass* ADog_Character_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_Character_Alpha_C");

	return Clss;
}


// Dog_Character_Alpha_C Dog_Character_Alpha.Default__Dog_Character_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADog_Character_Alpha_C* ADog_Character_Alpha_C::GetDefaultObj()
{
	static class ADog_Character_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADog_Character_Alpha_C*>(ADog_Character_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


