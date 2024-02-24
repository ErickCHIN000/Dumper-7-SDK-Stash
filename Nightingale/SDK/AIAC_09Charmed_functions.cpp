#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_09Charmed.AIAC_09Charmed_C
// (None)

class UClass* UAIAC_09Charmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_09Charmed_C");

	return Clss;
}


// AIAC_09Charmed_C AIAC_09Charmed.Default__AIAC_09Charmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_09Charmed_C* UAIAC_09Charmed_C::GetDefaultObj()
{
	static class UAIAC_09Charmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_09Charmed_C*>(UAIAC_09Charmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


