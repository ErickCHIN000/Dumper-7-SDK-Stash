#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod_Bleed3.TelescopicRod_Bleed3_C
// (Actor)

class UClass* ATelescopicRod_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_Bleed3_C");

	return Clss;
}


// TelescopicRod_Bleed3_C TelescopicRod_Bleed3.Default__TelescopicRod_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_Bleed3_C* ATelescopicRod_Bleed3_C::GetDefaultObj()
{
	static class ATelescopicRod_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_Bleed3_C*>(ATelescopicRod_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}


