#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maul_Bleed2.Maul_Bleed2_C
// (Actor)

class UClass* AMaul_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maul_Bleed2_C");

	return Clss;
}


// Maul_Bleed2_C Maul_Bleed2.Default__Maul_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaul_Bleed2_C* AMaul_Bleed2_C::GetDefaultObj()
{
	static class AMaul_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaul_Bleed2_C*>(AMaul_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


