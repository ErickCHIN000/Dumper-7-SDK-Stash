#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Planet_Preset.UDS_Planet_Preset_C
// (None)

class UClass* UUDS_Planet_Preset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Planet_Preset_C");

	return Clss;
}


// UDS_Planet_Preset_C UDS_Planet_Preset.Default__UDS_Planet_Preset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUDS_Planet_Preset_C* UUDS_Planet_Preset_C::GetDefaultObj()
{
	static class UUDS_Planet_Preset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUDS_Planet_Preset_C*>(UUDS_Planet_Preset_C::StaticClass()->DefaultObject);

	return Default;
}

}


