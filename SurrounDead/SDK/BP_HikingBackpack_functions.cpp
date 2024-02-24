#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HikingBackpack.BP_HikingBackpack_C
// (Actor)

class UClass* ABP_HikingBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HikingBackpack_C");

	return Clss;
}


// BP_HikingBackpack_C BP_HikingBackpack.Default__BP_HikingBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HikingBackpack_C* ABP_HikingBackpack_C::GetDefaultObj()
{
	static class ABP_HikingBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HikingBackpack_C*>(ABP_HikingBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


