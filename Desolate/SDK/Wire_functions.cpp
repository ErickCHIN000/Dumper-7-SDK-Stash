#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wire.Wire_C
// (Actor)

class UClass* AWire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wire_C");

	return Clss;
}


// Wire_C Wire.Default__Wire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWire_C* AWire_C::GetDefaultObj()
{
	static class AWire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWire_C*>(AWire_C::StaticClass()->DefaultObject);

	return Default;
}

}


