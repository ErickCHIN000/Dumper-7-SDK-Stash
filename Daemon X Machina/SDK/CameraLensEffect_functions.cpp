#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraLensEffect.CameraLensEffect_C
// (Actor)

class UClass* ACameraLensEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraLensEffect_C");

	return Clss;
}


// CameraLensEffect_C CameraLensEffect.Default__CameraLensEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACameraLensEffect_C* ACameraLensEffect_C::GetDefaultObj()
{
	static class ACameraLensEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACameraLensEffect_C*>(ACameraLensEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


