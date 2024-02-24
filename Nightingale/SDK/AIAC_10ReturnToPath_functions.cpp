#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_10ReturnToPath.AIAC_10ReturnToPath_C
// (None)

class UClass* UAIAC_10ReturnToPath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_10ReturnToPath_C");

	return Clss;
}


// AIAC_10ReturnToPath_C AIAC_10ReturnToPath.Default__AIAC_10ReturnToPath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_10ReturnToPath_C* UAIAC_10ReturnToPath_C::GetDefaultObj()
{
	static class UAIAC_10ReturnToPath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_10ReturnToPath_C*>(UAIAC_10ReturnToPath_C::StaticClass()->DefaultObject);

	return Default;
}

}


