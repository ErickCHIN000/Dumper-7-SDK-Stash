#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryGreeting01.EmissaryGreeting01_C
// (None)

class UClass* UEmissaryGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryGreeting01_C");

	return Clss;
}


// EmissaryGreeting01_C EmissaryGreeting01.Default__EmissaryGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryGreeting01_C* UEmissaryGreeting01_C::GetDefaultObj()
{
	static class UEmissaryGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryGreeting01_C*>(UEmissaryGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


