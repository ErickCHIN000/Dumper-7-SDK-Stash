#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyGreeting01.RomyGreeting01_C
// (None)

class UClass* URomyGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyGreeting01_C");

	return Clss;
}


// RomyGreeting01_C RomyGreeting01.Default__RomyGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyGreeting01_C* URomyGreeting01_C::GetDefaultObj()
{
	static class URomyGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyGreeting01_C*>(URomyGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


