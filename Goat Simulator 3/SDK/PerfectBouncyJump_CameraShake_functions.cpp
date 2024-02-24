#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PerfectBouncyJump_CameraShake.PerfectBouncyJump_CameraShake_C
// (None)

class UClass* UPerfectBouncyJump_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerfectBouncyJump_CameraShake_C");

	return Clss;
}


// PerfectBouncyJump_CameraShake_C PerfectBouncyJump_CameraShake.Default__PerfectBouncyJump_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerfectBouncyJump_CameraShake_C* UPerfectBouncyJump_CameraShake_C::GetDefaultObj()
{
	static class UPerfectBouncyJump_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerfectBouncyJump_CameraShake_C*>(UPerfectBouncyJump_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


