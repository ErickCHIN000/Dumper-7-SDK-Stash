#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IdleCamWobble.IdleCamWobble_C
// (None)

class UClass* UIdleCamWobble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IdleCamWobble_C");

	return Clss;
}


// IdleCamWobble_C IdleCamWobble.Default__IdleCamWobble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIdleCamWobble_C* UIdleCamWobble_C::GetDefaultObj()
{
	static class UIdleCamWobble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIdleCamWobble_C*>(UIdleCamWobble_C::StaticClass()->DefaultObject);

	return Default;
}

}


