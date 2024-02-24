#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeGreeting01.AmberMaeGreeting01_C
// (None)

class UClass* UAmberMaeGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeGreeting01_C");

	return Clss;
}


// AmberMaeGreeting01_C AmberMaeGreeting01.Default__AmberMaeGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeGreeting01_C* UAmberMaeGreeting01_C::GetDefaultObj()
{
	static class UAmberMaeGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeGreeting01_C*>(UAmberMaeGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


