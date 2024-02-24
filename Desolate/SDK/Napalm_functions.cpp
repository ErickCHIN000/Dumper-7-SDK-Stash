#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Napalm.Napalm_C
// (Actor)

class UClass* ANapalm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Napalm_C");

	return Clss;
}


// Napalm_C Napalm.Default__Napalm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANapalm_C* ANapalm_C::GetDefaultObj()
{
	static class ANapalm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANapalm_C*>(ANapalm_C::StaticClass()->DefaultObject);

	return Default;
}

}


