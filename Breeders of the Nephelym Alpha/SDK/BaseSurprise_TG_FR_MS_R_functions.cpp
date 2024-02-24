#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSurprise_TG_FR_MS_R.BaseSurprise_TG_FR_MS_R_C
// (None)

class UClass* UBaseSurprise_TG_FR_MS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSurprise_TG_FR_MS_R_C");

	return Clss;
}


// BaseSurprise_TG_FR_MS_R_C BaseSurprise_TG_FR_MS_R.Default__BaseSurprise_TG_FR_MS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSurprise_TG_FR_MS_R_C* UBaseSurprise_TG_FR_MS_R_C::GetDefaultObj()
{
	static class UBaseSurprise_TG_FR_MS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSurprise_TG_FR_MS_R_C*>(UBaseSurprise_TG_FR_MS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


