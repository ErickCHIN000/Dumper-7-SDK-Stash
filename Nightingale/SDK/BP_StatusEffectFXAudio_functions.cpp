#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatusEffectFXAudio.BP_StatusEffectFXAudio_C
// (None)

class UClass* UBP_StatusEffectFXAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatusEffectFXAudio_C");

	return Clss;
}


// BP_StatusEffectFXAudio_C BP_StatusEffectFXAudio.Default__BP_StatusEffectFXAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StatusEffectFXAudio_C* UBP_StatusEffectFXAudio_C::GetDefaultObj()
{
	static class UBP_StatusEffectFXAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StatusEffectFXAudio_C*>(UBP_StatusEffectFXAudio_C::StaticClass()->DefaultObject);

	return Default;
}

}


