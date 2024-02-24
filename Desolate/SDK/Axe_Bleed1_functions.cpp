#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Bleed1.Axe_Bleed1_C
// (Actor)

class UClass* AAxe_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Bleed1_C");

	return Clss;
}


// Axe_Bleed1_C Axe_Bleed1.Default__Axe_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Bleed1_C* AAxe_Bleed1_C::GetDefaultObj()
{
	static class AAxe_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Bleed1_C*>(AAxe_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


