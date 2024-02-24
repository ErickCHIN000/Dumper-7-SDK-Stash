#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MyPlayerCameraManager.MyPlayerCameraManager_C
// (Actor)

class UClass* AMyPlayerCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MyPlayerCameraManager_C");

	return Clss;
}


// MyPlayerCameraManager_C MyPlayerCameraManager.Default__MyPlayerCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMyPlayerCameraManager_C* AMyPlayerCameraManager_C::GetDefaultObj()
{
	static class AMyPlayerCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMyPlayerCameraManager_C*>(AMyPlayerCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


