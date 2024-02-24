#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BouncyJump_CameraShake.BouncyJump_CameraShake_C
// (None)

class UClass* UBouncyJump_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BouncyJump_CameraShake_C");

	return Clss;
}


// BouncyJump_CameraShake_C BouncyJump_CameraShake.Default__BouncyJump_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBouncyJump_CameraShake_C* UBouncyJump_CameraShake_C::GetDefaultObj()
{
	static class UBouncyJump_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBouncyJump_CameraShake_C*>(UBouncyJump_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


