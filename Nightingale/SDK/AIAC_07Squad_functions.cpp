#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_07Squad.AIAC_07Squad_C
// (None)

class UClass* UAIAC_07Squad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_07Squad_C");

	return Clss;
}


// AIAC_07Squad_C AIAC_07Squad.Default__AIAC_07Squad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_07Squad_C* UAIAC_07Squad_C::GetDefaultObj()
{
	static class UAIAC_07Squad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_07Squad_C*>(UAIAC_07Squad_C::StaticClass()->DefaultObject);

	return Default;
}

}


