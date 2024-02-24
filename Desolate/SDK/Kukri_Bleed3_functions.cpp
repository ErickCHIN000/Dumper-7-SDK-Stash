#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kukri_Bleed3.Kukri_Bleed3_C
// (Actor)

class UClass* AKukri_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kukri_Bleed3_C");

	return Clss;
}


// Kukri_Bleed3_C Kukri_Bleed3.Default__Kukri_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKukri_Bleed3_C* AKukri_Bleed3_C::GetDefaultObj()
{
	static class AKukri_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKukri_Bleed3_C*>(AKukri_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}


