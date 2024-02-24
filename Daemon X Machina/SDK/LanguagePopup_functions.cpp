#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LanguagePopup.LanguagePopup_C
// (Actor)

class UClass* ALanguagePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LanguagePopup_C");

	return Clss;
}


// LanguagePopup_C LanguagePopup.Default__LanguagePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALanguagePopup_C* ALanguagePopup_C::GetDefaultObj()
{
	static class ALanguagePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALanguagePopup_C*>(ALanguagePopup_C::StaticClass()->DefaultObject);

	return Default;
}

}


