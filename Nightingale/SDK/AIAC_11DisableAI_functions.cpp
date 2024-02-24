#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_11DisableAI.AIAC_11DisableAI_C
// (None)

class UClass* UAIAC_11DisableAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_11DisableAI_C");

	return Clss;
}


// AIAC_11DisableAI_C AIAC_11DisableAI.Default__AIAC_11DisableAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_11DisableAI_C* UAIAC_11DisableAI_C::GetDefaultObj()
{
	static class UAIAC_11DisableAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_11DisableAI_C*>(UAIAC_11DisableAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


