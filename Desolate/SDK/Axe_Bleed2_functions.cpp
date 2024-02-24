#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Bleed2.Axe_Bleed2_C
// (Actor)

class UClass* AAxe_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Bleed2_C");

	return Clss;
}


// Axe_Bleed2_C Axe_Bleed2.Default__Axe_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Bleed2_C* AAxe_Bleed2_C::GetDefaultObj()
{
	static class AAxe_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Bleed2_C*>(AAxe_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


