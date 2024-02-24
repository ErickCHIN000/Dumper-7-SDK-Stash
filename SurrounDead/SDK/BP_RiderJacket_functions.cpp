#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RiderJacket.BP_RiderJacket_C
// (Actor)

class UClass* ABP_RiderJacket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RiderJacket_C");

	return Clss;
}


// BP_RiderJacket_C BP_RiderJacket.Default__BP_RiderJacket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RiderJacket_C* ABP_RiderJacket_C::GetDefaultObj()
{
	static class ABP_RiderJacket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RiderJacket_C*>(ABP_RiderJacket_C::StaticClass()->DefaultObject);

	return Default;
}

}


