#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGameUserSettings.BP_IcarusGameUserSettings_C
// (None)

class UClass* UBP_IcarusGameUserSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGameUserSettings_C");

	return Clss;
}


// BP_IcarusGameUserSettings_C BP_IcarusGameUserSettings.Default__BP_IcarusGameUserSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGameUserSettings_C* UBP_IcarusGameUserSettings_C::GetDefaultObj()
{
	static class UBP_IcarusGameUserSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGameUserSettings_C*>(UBP_IcarusGameUserSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


