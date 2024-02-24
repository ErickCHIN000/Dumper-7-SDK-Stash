#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoliceShirt2.BP_PoliceShirt2_C
// (Actor)

class UClass* ABP_PoliceShirt2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoliceShirt2_C");

	return Clss;
}


// BP_PoliceShirt2_C BP_PoliceShirt2.Default__BP_PoliceShirt2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoliceShirt2_C* ABP_PoliceShirt2_C::GetDefaultObj()
{
	static class ABP_PoliceShirt2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoliceShirt2_C*>(ABP_PoliceShirt2_C::StaticClass()->DefaultObject);

	return Default;
}

}


