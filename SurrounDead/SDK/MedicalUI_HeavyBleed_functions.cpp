#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MedicalUI_HeavyBleed.MedicalUI_HeavyBleed_C
// (None)

class UClass* UMedicalUI_HeavyBleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedicalUI_HeavyBleed_C");

	return Clss;
}


// MedicalUI_HeavyBleed_C MedicalUI_HeavyBleed.Default__MedicalUI_HeavyBleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMedicalUI_HeavyBleed_C* UMedicalUI_HeavyBleed_C::GetDefaultObj()
{
	static class UMedicalUI_HeavyBleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMedicalUI_HeavyBleed_C*>(UMedicalUI_HeavyBleed_C::StaticClass()->DefaultObject);

	return Default;
}

}


