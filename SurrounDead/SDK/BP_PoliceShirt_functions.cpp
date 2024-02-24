#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoliceShirt.BP_PoliceShirt_C
// (Actor)

class UClass* ABP_PoliceShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoliceShirt_C");

	return Clss;
}


// BP_PoliceShirt_C BP_PoliceShirt.Default__BP_PoliceShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoliceShirt_C* ABP_PoliceShirt_C::GetDefaultObj()
{
	static class ABP_PoliceShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoliceShirt_C*>(ABP_PoliceShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


