#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PostProcessSettingsMaster.PostProcessSettingsMaster_C
// (None)

class UClass* UPostProcessSettingsMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PostProcessSettingsMaster_C");

	return Clss;
}


// PostProcessSettingsMaster_C PostProcessSettingsMaster.Default__PostProcessSettingsMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPostProcessSettingsMaster_C* UPostProcessSettingsMaster_C::GetDefaultObj()
{
	static class UPostProcessSettingsMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPostProcessSettingsMaster_C*>(UPostProcessSettingsMaster_C::StaticClass()->DefaultObject);

	return Default;
}

}


