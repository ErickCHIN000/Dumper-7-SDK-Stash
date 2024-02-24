#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_03Cleanup.AIAC_03Cleanup_C
// (None)

class UClass* UAIAC_03Cleanup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_03Cleanup_C");

	return Clss;
}


// AIAC_03Cleanup_C AIAC_03Cleanup.Default__AIAC_03Cleanup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_03Cleanup_C* UAIAC_03Cleanup_C::GetDefaultObj()
{
	static class UAIAC_03Cleanup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_03Cleanup_C*>(UAIAC_03Cleanup_C::StaticClass()->DefaultObject);

	return Default;
}

}


