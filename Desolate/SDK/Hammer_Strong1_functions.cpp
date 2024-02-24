#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Strong1.Hammer_Strong1_C
// (Actor)

class UClass* AHammer_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Strong1_C");

	return Clss;
}


// Hammer_Strong1_C Hammer_Strong1.Default__Hammer_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Strong1_C* AHammer_Strong1_C::GetDefaultObj()
{
	static class AHammer_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Strong1_C*>(AHammer_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


