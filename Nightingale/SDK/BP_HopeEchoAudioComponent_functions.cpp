#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HopeEchoAudioComponent.BP_HopeEchoAudioComponent_C
// (None)

class UClass* UBP_HopeEchoAudioComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HopeEchoAudioComponent_C");

	return Clss;
}


// BP_HopeEchoAudioComponent_C BP_HopeEchoAudioComponent.Default__BP_HopeEchoAudioComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HopeEchoAudioComponent_C* UBP_HopeEchoAudioComponent_C::GetDefaultObj()
{
	static class UBP_HopeEchoAudioComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HopeEchoAudioComponent_C*>(UBP_HopeEchoAudioComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


