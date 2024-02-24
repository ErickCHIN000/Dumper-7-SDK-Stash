#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalMP7Mag.BP_LocalMP7Mag_C
// (Actor)

class UClass* ABP_LocalMP7Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalMP7Mag_C");

	return Clss;
}


// BP_LocalMP7Mag_C BP_LocalMP7Mag.Default__BP_LocalMP7Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalMP7Mag_C* ABP_LocalMP7Mag_C::GetDefaultObj()
{
	static class ABP_LocalMP7Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalMP7Mag_C*>(ABP_LocalMP7Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


