#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraGreeting01.PetraGreeting01_C
// (None)

class UClass* UPetraGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraGreeting01_C");

	return Clss;
}


// PetraGreeting01_C PetraGreeting01.Default__PetraGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraGreeting01_C* UPetraGreeting01_C::GetDefaultObj()
{
	static class UPetraGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraGreeting01_C*>(UPetraGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


