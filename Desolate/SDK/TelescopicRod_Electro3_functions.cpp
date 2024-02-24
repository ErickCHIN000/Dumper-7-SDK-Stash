#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelescopicRod_Electro3.TelescopicRod_Electro3_C
// (Actor)

class UClass* ATelescopicRod_Electro3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelescopicRod_Electro3_C");

	return Clss;
}


// TelescopicRod_Electro3_C TelescopicRod_Electro3.Default__TelescopicRod_Electro3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATelescopicRod_Electro3_C* ATelescopicRod_Electro3_C::GetDefaultObj()
{
	static class ATelescopicRod_Electro3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATelescopicRod_Electro3_C*>(ATelescopicRod_Electro3_C::StaticClass()->DefaultObject);

	return Default;
}

}


