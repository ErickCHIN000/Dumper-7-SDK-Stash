#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericGun.GenericGun_C
// (Actor)

class UClass* AGenericGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericGun_C");

	return Clss;
}


// GenericGun_C GenericGun.Default__GenericGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericGun_C* AGenericGun_C::GetDefaultObj()
{
	static class AGenericGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericGun_C*>(AGenericGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


