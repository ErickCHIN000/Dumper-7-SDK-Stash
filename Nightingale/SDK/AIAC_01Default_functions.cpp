#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_01Default.AIAC_01Default_C
// (None)

class UClass* UAIAC_01Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_01Default_C");

	return Clss;
}


// AIAC_01Default_C AIAC_01Default.Default__AIAC_01Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_01Default_C* UAIAC_01Default_C::GetDefaultObj()
{
	static class UAIAC_01Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_01Default_C*>(UAIAC_01Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


