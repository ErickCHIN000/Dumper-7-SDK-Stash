#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentArchetype_Orbital.UMG_TalentArchetype_Orbital_C
// (None)

class UClass* UUMG_TalentArchetype_Orbital_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentArchetype_Orbital_C");

	return Clss;
}


// UMG_TalentArchetype_Orbital_C UMG_TalentArchetype_Orbital.Default__UMG_TalentArchetype_Orbital_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentArchetype_Orbital_C* UUMG_TalentArchetype_Orbital_C::GetDefaultObj()
{
	static class UUMG_TalentArchetype_Orbital_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentArchetype_Orbital_C*>(UUMG_TalentArchetype_Orbital_C::StaticClass()->DefaultObject);

	return Default;
}

}


