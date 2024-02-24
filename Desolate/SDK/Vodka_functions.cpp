#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vodka.Vodka_C
// (Actor)

class UClass* AVodka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vodka_C");

	return Clss;
}


// Vodka_C Vodka.Default__Vodka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVodka_C* AVodka_C::GetDefaultObj()
{
	static class AVodka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVodka_C*>(AVodka_C::StaticClass()->DefaultObject);

	return Default;
}

}


