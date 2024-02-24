#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Barbwire.Barbwire_C
// (Actor)

class UClass* ABarbwire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Barbwire_C");

	return Clss;
}


// Barbwire_C Barbwire.Default__Barbwire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABarbwire_C* ABarbwire_C::GetDefaultObj()
{
	static class ABarbwire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABarbwire_C*>(ABarbwire_C::StaticClass()->DefaultObject);

	return Default;
}

}


