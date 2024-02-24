#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_UnlockCharacterTalent.CF_UnlockCharacterTalent_C
// (None)

class UClass* UCF_UnlockCharacterTalent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_UnlockCharacterTalent_C");

	return Clss;
}


// CF_UnlockCharacterTalent_C CF_UnlockCharacterTalent.Default__CF_UnlockCharacterTalent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_UnlockCharacterTalent_C* UCF_UnlockCharacterTalent_C::GetDefaultObj()
{
	static class UCF_UnlockCharacterTalent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_UnlockCharacterTalent_C*>(UCF_UnlockCharacterTalent_C::StaticClass()->DefaultObject);

	return Default;
}

}


