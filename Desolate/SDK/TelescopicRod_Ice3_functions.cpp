#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod_Ice3.TelescopicRod_Ice3_C
// (Actor)

class UClass* ATelescopicRod_Ice3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_Ice3_C");

	return Clss;
}


// TelescopicRod_Ice3_C TelescopicRod_Ice3.Default__TelescopicRod_Ice3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_Ice3_C* ATelescopicRod_Ice3_C::GetDefaultObj()
{
	static class ATelescopicRod_Ice3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_Ice3_C*>(ATelescopicRod_Ice3_C::StaticClass()->DefaultObject);

	return Default;
}

}


