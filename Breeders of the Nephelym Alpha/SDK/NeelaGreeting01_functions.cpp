#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaGreeting01.NeelaGreeting01_C
// (None)

class UClass* UNeelaGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaGreeting01_C");

	return Clss;
}


// NeelaGreeting01_C NeelaGreeting01.Default__NeelaGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaGreeting01_C* UNeelaGreeting01_C::GetDefaultObj()
{
	static class UNeelaGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaGreeting01_C*>(UNeelaGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


