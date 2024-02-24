#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MedicalUI_BrokenBone.MedicalUI_BrokenBone_C
// (None)

class UClass* UMedicalUI_BrokenBone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedicalUI_BrokenBone_C");

	return Clss;
}


// MedicalUI_BrokenBone_C MedicalUI_BrokenBone.Default__MedicalUI_BrokenBone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMedicalUI_BrokenBone_C* UMedicalUI_BrokenBone_C::GetDefaultObj()
{
	static class UMedicalUI_BrokenBone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMedicalUI_BrokenBone_C*>(UMedicalUI_BrokenBone_C::StaticClass()->DefaultObject);

	return Default;
}

}


