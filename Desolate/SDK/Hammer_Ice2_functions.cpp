#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Ice2.Hammer_Ice2_C
// (Actor)

class UClass* AHammer_Ice2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Ice2_C");

	return Clss;
}


// Hammer_Ice2_C Hammer_Ice2.Default__Hammer_Ice2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Ice2_C* AHammer_Ice2_C::GetDefaultObj()
{
	static class AHammer_Ice2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Ice2_C*>(AHammer_Ice2_C::StaticClass()->DefaultObject);

	return Default;
}

}


