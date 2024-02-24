#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Squad_Placeholder.AIA_Squad_Placeholder_C
// (None)

class UClass* UAIA_Squad_Placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Squad_Placeholder_C");

	return Clss;
}


// AIA_Squad_Placeholder_C AIA_Squad_Placeholder.Default__AIA_Squad_Placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Squad_Placeholder_C* UAIA_Squad_Placeholder_C::GetDefaultObj()
{
	static class UAIA_Squad_Placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Squad_Placeholder_C*>(UAIA_Squad_Placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


