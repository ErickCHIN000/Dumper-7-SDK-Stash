#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_04Contract.AIAC_04Contract_C
// (None)

class UClass* UAIAC_04Contract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_04Contract_C");

	return Clss;
}


// AIAC_04Contract_C AIAC_04Contract.Default__AIAC_04Contract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_04Contract_C* UAIAC_04Contract_C::GetDefaultObj()
{
	static class UAIAC_04Contract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_04Contract_C*>(UAIAC_04Contract_C::StaticClass()->DefaultObject);

	return Default;
}

}


