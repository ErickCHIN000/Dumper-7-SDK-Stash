#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeGreeting01.MegaSlimeGreeting01_C
// (None)

class UClass* UMegaSlimeGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeGreeting01_C");

	return Clss;
}


// MegaSlimeGreeting01_C MegaSlimeGreeting01.Default__MegaSlimeGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeGreeting01_C* UMegaSlimeGreeting01_C::GetDefaultObj()
{
	static class UMegaSlimeGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeGreeting01_C*>(UMegaSlimeGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


