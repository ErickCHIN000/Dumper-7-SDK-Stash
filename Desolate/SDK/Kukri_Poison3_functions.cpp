#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kukri_Poison3.Kukri_Poison3_C
// (Actor)

class UClass* AKukri_Poison3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kukri_Poison3_C");

	return Clss;
}


// Kukri_Poison3_C Kukri_Poison3.Default__Kukri_Poison3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKukri_Poison3_C* AKukri_Poison3_C::GetDefaultObj()
{
	static class AKukri_Poison3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKukri_Poison3_C*>(AKukri_Poison3_C::StaticClass()->DefaultObject);

	return Default;
}

}


