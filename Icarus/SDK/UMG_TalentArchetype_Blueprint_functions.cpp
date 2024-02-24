#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentArchetype_Blueprint.UMG_TalentArchetype_Blueprint_C
// (None)

class UClass* UUMG_TalentArchetype_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentArchetype_Blueprint_C");

	return Clss;
}


// UMG_TalentArchetype_Blueprint_C UMG_TalentArchetype_Blueprint.Default__UMG_TalentArchetype_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentArchetype_Blueprint_C* UUMG_TalentArchetype_Blueprint_C::GetDefaultObj()
{
	static class UUMG_TalentArchetype_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentArchetype_Blueprint_C*>(UUMG_TalentArchetype_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


