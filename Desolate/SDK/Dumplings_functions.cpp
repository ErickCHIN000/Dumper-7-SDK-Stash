#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dumplings.Dumplings_C
// (Actor)

class UClass* ADumplings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dumplings_C");

	return Clss;
}


// Dumplings_C Dumplings.Default__Dumplings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADumplings_C* ADumplings_C::GetDefaultObj()
{
	static class ADumplings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADumplings_C*>(ADumplings_C::StaticClass()->DefaultObject);

	return Default;
}

}


