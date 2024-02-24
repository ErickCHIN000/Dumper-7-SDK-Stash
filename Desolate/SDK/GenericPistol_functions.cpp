#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericPistol.GenericPistol_C
// (Actor)

class UClass* AGenericPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericPistol_C");

	return Clss;
}


// GenericPistol_C GenericPistol.Default__GenericPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericPistol_C* AGenericPistol_C::GetDefaultObj()
{
	static class AGenericPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericPistol_C*>(AGenericPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


