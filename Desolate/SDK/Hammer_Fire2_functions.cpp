#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Fire2.Hammer_Fire2_C
// (Actor)

class UClass* AHammer_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Fire2_C");

	return Clss;
}


// Hammer_Fire2_C Hammer_Fire2.Default__Hammer_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Fire2_C* AHammer_Fire2_C::GetDefaultObj()
{
	static class AHammer_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Fire2_C*>(AHammer_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


