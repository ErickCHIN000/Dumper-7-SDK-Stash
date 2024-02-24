#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Battery.Battery_C
// (Actor)

class UClass* ABattery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Battery_C");

	return Clss;
}


// Battery_C Battery.Default__Battery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattery_C* ABattery_C::GetDefaultObj()
{
	static class ABattery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattery_C*>(ABattery_C::StaticClass()->DefaultObject);

	return Default;
}

}


