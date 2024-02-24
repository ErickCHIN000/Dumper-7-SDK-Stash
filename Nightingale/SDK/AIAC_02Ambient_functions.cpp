#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_02Ambient.AIAC_02Ambient_C
// (None)

class UClass* UAIAC_02Ambient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_02Ambient_C");

	return Clss;
}


// AIAC_02Ambient_C AIAC_02Ambient.Default__AIAC_02Ambient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_02Ambient_C* UAIAC_02Ambient_C::GetDefaultObj()
{
	static class UAIAC_02Ambient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_02Ambient_C*>(UAIAC_02Ambient_C::StaticClass()->DefaultObject);

	return Default;
}

}


