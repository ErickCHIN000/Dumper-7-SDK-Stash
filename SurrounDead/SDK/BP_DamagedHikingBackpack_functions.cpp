#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedHikingBackpack.BP_DamagedHikingBackpack_C
// (Actor)

class UClass* ABP_DamagedHikingBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedHikingBackpack_C");

	return Clss;
}


// BP_DamagedHikingBackpack_C BP_DamagedHikingBackpack.Default__BP_DamagedHikingBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedHikingBackpack_C* ABP_DamagedHikingBackpack_C::GetDefaultObj()
{
	static class ABP_DamagedHikingBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedHikingBackpack_C*>(ABP_DamagedHikingBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


