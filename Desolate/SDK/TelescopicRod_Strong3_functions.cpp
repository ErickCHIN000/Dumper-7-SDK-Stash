#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod_Strong3.TelescopicRod_Strong3_C
// (Actor)

class UClass* ATelescopicRod_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_Strong3_C");

	return Clss;
}


// TelescopicRod_Strong3_C TelescopicRod_Strong3.Default__TelescopicRod_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_Strong3_C* ATelescopicRod_Strong3_C::GetDefaultObj()
{
	static class ATelescopicRod_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_Strong3_C*>(ATelescopicRod_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}


