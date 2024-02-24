#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDefault01_Accent.AmberMaeDefault01_Accent_C
// (None)

class UClass* UAmberMaeDefault01_Accent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDefault01_Accent_C");

	return Clss;
}


// AmberMaeDefault01_Accent_C AmberMaeDefault01_Accent.Default__AmberMaeDefault01_Accent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDefault01_Accent_C* UAmberMaeDefault01_Accent_C::GetDefaultObj()
{
	static class UAmberMaeDefault01_Accent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDefault01_Accent_C*>(UAmberMaeDefault01_Accent_C::StaticClass()->DefaultObject);

	return Default;
}

}


