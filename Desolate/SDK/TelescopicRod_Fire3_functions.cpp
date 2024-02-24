#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod_Fire3.TelescopicRod_Fire3_C
// (Actor)

class UClass* ATelescopicRod_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_Fire3_C");

	return Clss;
}


// TelescopicRod_Fire3_C TelescopicRod_Fire3.Default__TelescopicRod_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_Fire3_C* ATelescopicRod_Fire3_C::GetDefaultObj()
{
	static class ATelescopicRod_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_Fire3_C*>(ATelescopicRod_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}


