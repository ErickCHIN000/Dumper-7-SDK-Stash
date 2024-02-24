#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MedicalUI_Bleed.MedicalUI_Bleed_C
// (None)

class UClass* UMedicalUI_Bleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedicalUI_Bleed_C");

	return Clss;
}


// MedicalUI_Bleed_C MedicalUI_Bleed.Default__MedicalUI_Bleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMedicalUI_Bleed_C* UMedicalUI_Bleed_C::GetDefaultObj()
{
	static class UMedicalUI_Bleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMedicalUI_Bleed_C*>(UMedicalUI_Bleed_C::StaticClass()->DefaultObject);

	return Default;
}

}


