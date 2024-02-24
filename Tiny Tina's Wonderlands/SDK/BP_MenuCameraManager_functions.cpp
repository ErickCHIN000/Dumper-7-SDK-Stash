#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuCameraManager.BP_MenuCameraManager_C
// (Actor)

class UClass* ABP_MenuCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuCameraManager_C");

	return Clss;
}


// BP_MenuCameraManager_C BP_MenuCameraManager.Default__BP_MenuCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MenuCameraManager_C* ABP_MenuCameraManager_C::GetDefaultObj()
{
	static class ABP_MenuCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MenuCameraManager_C*>(ABP_MenuCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


