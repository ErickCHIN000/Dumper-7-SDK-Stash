#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Leather.Leather_C
// (Actor)

class UClass* ALeather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Leather_C");

	return Clss;
}


// Leather_C Leather.Default__Leather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALeather_C* ALeather_C::GetDefaultObj()
{
	static class ALeather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALeather_C*>(ALeather_C::StaticClass()->DefaultObject);

	return Default;
}

}


