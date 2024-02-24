#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCR308Mag.BP_LocalCR308Mag_C
// (Actor)

class UClass* ABP_LocalCR308Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCR308Mag_C");

	return Clss;
}


// BP_LocalCR308Mag_C BP_LocalCR308Mag.Default__BP_LocalCR308Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCR308Mag_C* ABP_LocalCR308Mag_C::GetDefaultObj()
{
	static class ABP_LocalCR308Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCR308Mag_C*>(ABP_LocalCR308Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


