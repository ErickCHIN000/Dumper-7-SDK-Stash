#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_Character_Alpha.Grutch_Character_Alpha_C
// (Actor, Pawn)

class UClass* AGrutch_Character_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_Character_Alpha_C");

	return Clss;
}


// Grutch_Character_Alpha_C Grutch_Character_Alpha.Default__Grutch_Character_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_Character_Alpha_C* AGrutch_Character_Alpha_C::GetDefaultObj()
{
	static class AGrutch_Character_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_Character_Alpha_C*>(AGrutch_Character_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


