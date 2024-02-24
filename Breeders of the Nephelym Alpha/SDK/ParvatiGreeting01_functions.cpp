#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiGreeting01.ParvatiGreeting01_C
// (None)

class UClass* UParvatiGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiGreeting01_C");

	return Clss;
}


// ParvatiGreeting01_C ParvatiGreeting01.Default__ParvatiGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiGreeting01_C* UParvatiGreeting01_C::GetDefaultObj()
{
	static class UParvatiGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiGreeting01_C*>(UParvatiGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


