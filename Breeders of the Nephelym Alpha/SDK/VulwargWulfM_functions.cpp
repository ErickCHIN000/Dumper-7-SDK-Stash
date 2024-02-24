#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VulwargWulfM.VulwargWulfM_C
// (None)

class UClass* UVulwargWulfM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VulwargWulfM_C");

	return Clss;
}


// VulwargWulfM_C VulwargWulfM.Default__VulwargWulfM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVulwargWulfM_C* UVulwargWulfM_C::GetDefaultObj()
{
	static class UVulwargWulfM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVulwargWulfM_C*>(UVulwargWulfM_C::StaticClass()->DefaultObject);

	return Default;
}

}


