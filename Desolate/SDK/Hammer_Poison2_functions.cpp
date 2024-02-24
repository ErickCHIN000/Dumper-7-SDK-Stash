#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Poison2.Hammer_Poison2_C
// (Actor)

class UClass* AHammer_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Poison2_C");

	return Clss;
}


// Hammer_Poison2_C Hammer_Poison2.Default__Hammer_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Poison2_C* AHammer_Poison2_C::GetDefaultObj()
{
	static class AHammer_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Poison2_C*>(AHammer_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


