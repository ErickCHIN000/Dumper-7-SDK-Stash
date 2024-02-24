#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadGreeting01.DryadGreeting01_C
// (None)

class UClass* UDryadGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadGreeting01_C");

	return Clss;
}


// DryadGreeting01_C DryadGreeting01.Default__DryadGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadGreeting01_C* UDryadGreeting01_C::GetDefaultObj()
{
	static class UDryadGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadGreeting01_C*>(UDryadGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


