#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalM249Mag.BP_LocalM249Mag_C
// (Actor)

class UClass* ABP_LocalM249Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalM249Mag_C");

	return Clss;
}


// BP_LocalM249Mag_C BP_LocalM249Mag.Default__BP_LocalM249Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalM249Mag_C* ABP_LocalM249Mag_C::GetDefaultObj()
{
	static class ABP_LocalM249Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalM249Mag_C*>(ABP_LocalM249Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


