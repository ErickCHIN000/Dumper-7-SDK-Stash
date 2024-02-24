#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Bleed2.Hammer_Bleed2_C
// (Actor)

class UClass* AHammer_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Bleed2_C");

	return Clss;
}


// Hammer_Bleed2_C Hammer_Bleed2.Default__Hammer_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Bleed2_C* AHammer_Bleed2_C::GetDefaultObj()
{
	static class AHammer_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Bleed2_C*>(AHammer_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


