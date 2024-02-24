#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lighter.Lighter_C
// (Actor)

class UClass* ALighter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lighter_C");

	return Clss;
}


// Lighter_C Lighter.Default__Lighter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALighter_C* ALighter_C::GetDefaultObj()
{
	static class ALighter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALighter_C*>(ALighter_C::StaticClass()->DefaultObject);

	return Default;
}

}


