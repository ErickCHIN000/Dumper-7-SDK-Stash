#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama_Bleed3.Kama_Bleed3_C
// (Actor)

class UClass* AKama_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_Bleed3_C");

	return Clss;
}


// Kama_Bleed3_C Kama_Bleed3.Default__Kama_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_Bleed3_C* AKama_Bleed3_C::GetDefaultObj()
{
	static class AKama_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_Bleed3_C*>(AKama_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}


