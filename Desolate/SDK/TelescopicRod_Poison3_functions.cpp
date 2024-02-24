#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod_Poison3.TelescopicRod_Poison3_C
// (Actor)

class UClass* ATelescopicRod_Poison3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_Poison3_C");

	return Clss;
}


// TelescopicRod_Poison3_C TelescopicRod_Poison3.Default__TelescopicRod_Poison3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_Poison3_C* ATelescopicRod_Poison3_C::GetDefaultObj()
{
	static class ATelescopicRod_Poison3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_Poison3_C*>(ATelescopicRod_Poison3_C::StaticClass()->DefaultObject);

	return Default;
}

}


