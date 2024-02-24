#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_Spikes.BlindMan_Spikes_C
// (Actor)

class UClass* ABlindMan_Spikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_Spikes_C");

	return Clss;
}


// BlindMan_Spikes_C BlindMan_Spikes.Default__BlindMan_Spikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindMan_Spikes_C* ABlindMan_Spikes_C::GetDefaultObj()
{
	static class ABlindMan_Spikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindMan_Spikes_C*>(ABlindMan_Spikes_C::StaticClass()->DefaultObject);

	return Default;
}

}


