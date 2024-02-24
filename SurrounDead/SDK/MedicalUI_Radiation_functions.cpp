#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MedicalUI_Radiation.MedicalUI_Radiation_C
// (None)

class UClass* UMedicalUI_Radiation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedicalUI_Radiation_C");

	return Clss;
}


// MedicalUI_Radiation_C MedicalUI_Radiation.Default__MedicalUI_Radiation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMedicalUI_Radiation_C* UMedicalUI_Radiation_C::GetDefaultObj()
{
	static class UMedicalUI_Radiation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMedicalUI_Radiation_C*>(UMedicalUI_Radiation_C::StaticClass()->DefaultObject);

	return Default;
}

}


