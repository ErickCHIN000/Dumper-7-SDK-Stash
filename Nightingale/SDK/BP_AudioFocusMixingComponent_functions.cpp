#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AudioFocusMixingComponent.BP_AudioFocusMixingComponent_C
// (None)

class UClass* UBP_AudioFocusMixingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AudioFocusMixingComponent_C");

	return Clss;
}


// BP_AudioFocusMixingComponent_C BP_AudioFocusMixingComponent.Default__BP_AudioFocusMixingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AudioFocusMixingComponent_C* UBP_AudioFocusMixingComponent_C::GetDefaultObj()
{
	static class UBP_AudioFocusMixingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AudioFocusMixingComponent_C*>(UBP_AudioFocusMixingComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


