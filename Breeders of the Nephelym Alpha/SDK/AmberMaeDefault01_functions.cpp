#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDefault01.AmberMaeDefault01_C
// (None)

class UClass* UAmberMaeDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDefault01_C");

	return Clss;
}


// AmberMaeDefault01_C AmberMaeDefault01.Default__AmberMaeDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDefault01_C* UAmberMaeDefault01_C::GetDefaultObj()
{
	static class UAmberMaeDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDefault01_C*>(UAmberMaeDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


