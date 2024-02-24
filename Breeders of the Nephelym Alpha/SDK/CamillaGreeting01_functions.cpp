#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaGreeting01.CamillaGreeting01_C
// (None)

class UClass* UCamillaGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaGreeting01_C");

	return Clss;
}


// CamillaGreeting01_C CamillaGreeting01.Default__CamillaGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaGreeting01_C* UCamillaGreeting01_C::GetDefaultObj()
{
	static class UCamillaGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaGreeting01_C*>(UCamillaGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


