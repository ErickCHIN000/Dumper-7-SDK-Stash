#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProspectPinFactionMission.UMG_ProspectPinFactionMission_C
// (None)

class UClass* UUMG_ProspectPinFactionMission_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProspectPinFactionMission_C");

	return Clss;
}


// UMG_ProspectPinFactionMission_C UMG_ProspectPinFactionMission.Default__UMG_ProspectPinFactionMission_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProspectPinFactionMission_C* UUMG_ProspectPinFactionMission_C::GetDefaultObj()
{
	static class UUMG_ProspectPinFactionMission_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProspectPinFactionMission_C*>(UUMG_ProspectPinFactionMission_C::StaticClass()->DefaultObject);

	return Default;
}

}


