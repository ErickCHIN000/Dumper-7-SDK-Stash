#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod.TelescopicRod_C
// (Actor)

class UClass* ATelescopicRod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_C");

	return Clss;
}


// TelescopicRod_C TelescopicRod.Default__TelescopicRod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_C* ATelescopicRod_C::GetDefaultObj()
{
	static class ATelescopicRod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_C*>(ATelescopicRod_C::StaticClass()->DefaultObject);

	return Default;
}

}


