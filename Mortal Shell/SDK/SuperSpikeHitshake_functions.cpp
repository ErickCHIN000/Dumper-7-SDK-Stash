#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuperSpikeHitshake.SuperSpikeHitShake_C
// (None)

class UClass* USuperSpikeHitShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuperSpikeHitShake_C");

	return Clss;
}


// SuperSpikeHitShake_C SuperSpikeHitshake.Default__SuperSpikeHitShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USuperSpikeHitShake_C* USuperSpikeHitShake_C::GetDefaultObj()
{
	static class USuperSpikeHitShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USuperSpikeHitShake_C*>(USuperSpikeHitShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


