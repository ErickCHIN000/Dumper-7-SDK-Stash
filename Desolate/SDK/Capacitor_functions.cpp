#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Capacitor.Capacitor_C
// (Actor)

class UClass* ACapacitor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Capacitor_C");

	return Clss;
}


// Capacitor_C Capacitor.Default__Capacitor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACapacitor_C* ACapacitor_C::GetDefaultObj()
{
	static class ACapacitor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACapacitor_C*>(ACapacitor_C::StaticClass()->DefaultObject);

	return Default;
}

}


