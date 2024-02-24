#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer.Hammer_C
// (Actor)

class UClass* AHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_C");

	return Clss;
}


// Hammer_C Hammer.Default__Hammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_C* AHammer_C::GetDefaultObj()
{
	static class AHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_C*>(AHammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


