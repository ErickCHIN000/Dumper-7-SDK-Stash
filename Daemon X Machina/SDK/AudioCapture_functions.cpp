#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioCapture.AudioCaptureComponent
// (SceneComponent)

class UClass* UAudioCaptureComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCaptureComponent");

	return Clss;
}


// AudioCaptureComponent AudioCapture.Default__AudioCaptureComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCaptureComponent* UAudioCaptureComponent::GetDefaultObj()
{
	static class UAudioCaptureComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCaptureComponent*>(UAudioCaptureComponent::StaticClass()->DefaultObject);

	return Default;
}

}


