#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExampleCriticalHitShake.ExampleCriticalHitShake_C
// (None)

class UClass* UExampleCriticalHitShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExampleCriticalHitShake_C");

	return Clss;
}


// ExampleCriticalHitShake_C ExampleCriticalHitShake.Default__ExampleCriticalHitShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExampleCriticalHitShake_C* UExampleCriticalHitShake_C::GetDefaultObj()
{
	static class UExampleCriticalHitShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExampleCriticalHitShake_C*>(UExampleCriticalHitShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


