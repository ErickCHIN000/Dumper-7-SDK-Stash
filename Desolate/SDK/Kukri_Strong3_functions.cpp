#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kukri_Strong3.Kukri_Strong3_C
// (Actor)

class UClass* AKukri_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kukri_Strong3_C");

	return Clss;
}


// Kukri_Strong3_C Kukri_Strong3.Default__Kukri_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKukri_Strong3_C* AKukri_Strong3_C::GetDefaultObj()
{
	static class AKukri_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKukri_Strong3_C*>(AKukri_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}


