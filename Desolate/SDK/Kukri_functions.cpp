#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kukri.Kukri_C
// (Actor)

class UClass* AKukri_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kukri_C");

	return Clss;
}


// Kukri_C Kukri.Default__Kukri_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKukri_C* AKukri_C::GetDefaultObj()
{
	static class AKukri_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKukri_C*>(AKukri_C::StaticClass()->DefaultObject);

	return Default;
}

}


