#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_08Fear.AIAC_08Fear_C
// (None)

class UClass* UAIAC_08Fear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_08Fear_C");

	return Clss;
}


// AIAC_08Fear_C AIAC_08Fear.Default__AIAC_08Fear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_08Fear_C* UAIAC_08Fear_C::GetDefaultObj()
{
	static class UAIAC_08Fear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_08Fear_C*>(UAIAC_08Fear_C::StaticClass()->DefaultObject);

	return Default;
}

}


