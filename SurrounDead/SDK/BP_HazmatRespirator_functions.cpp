#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HazmatRespirator.BP_HazmatRespirator_C
// (Actor)

class UClass* ABP_HazmatRespirator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HazmatRespirator_C");

	return Clss;
}


// BP_HazmatRespirator_C BP_HazmatRespirator.Default__BP_HazmatRespirator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HazmatRespirator_C* ABP_HazmatRespirator_C::GetDefaultObj()
{
	static class ABP_HazmatRespirator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HazmatRespirator_C*>(ABP_HazmatRespirator_C::StaticClass()->DefaultObject);

	return Default;
}

}


