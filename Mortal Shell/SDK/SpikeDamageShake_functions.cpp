#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpikeDamageShake.SpikeDamageShake_C
// (None)

class UClass* USpikeDamageShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpikeDamageShake_C");

	return Clss;
}


// SpikeDamageShake_C SpikeDamageShake.Default__SpikeDamageShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpikeDamageShake_C* USpikeDamageShake_C::GetDefaultObj()
{
	static class USpikeDamageShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpikeDamageShake_C*>(USpikeDamageShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


