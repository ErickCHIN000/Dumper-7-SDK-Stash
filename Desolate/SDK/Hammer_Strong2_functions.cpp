#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Strong2.Hammer_Strong2_C
// (Actor)

class UClass* AHammer_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Strong2_C");

	return Clss;
}


// Hammer_Strong2_C Hammer_Strong2.Default__Hammer_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Strong2_C* AHammer_Strong2_C::GetDefaultObj()
{
	static class AHammer_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Strong2_C*>(AHammer_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


