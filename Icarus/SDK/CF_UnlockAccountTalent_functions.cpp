#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_UnlockAccountTalent.CF_UnlockAccountTalent_C
// (None)

class UClass* UCF_UnlockAccountTalent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_UnlockAccountTalent_C");

	return Clss;
}


// CF_UnlockAccountTalent_C CF_UnlockAccountTalent.Default__CF_UnlockAccountTalent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_UnlockAccountTalent_C* UCF_UnlockAccountTalent_C::GetDefaultObj()
{
	static class UCF_UnlockAccountTalent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_UnlockAccountTalent_C*>(UCF_UnlockAccountTalent_C::StaticClass()->DefaultObject);

	return Default;
}

}


