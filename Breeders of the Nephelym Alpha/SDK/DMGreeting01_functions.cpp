#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMGreeting01.DMGreeting01_C
// (None)

class UClass* UDMGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMGreeting01_C");

	return Clss;
}


// DMGreeting01_C DMGreeting01.Default__DMGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMGreeting01_C* UDMGreeting01_C::GetDefaultObj()
{
	static class UDMGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMGreeting01_C*>(UDMGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


