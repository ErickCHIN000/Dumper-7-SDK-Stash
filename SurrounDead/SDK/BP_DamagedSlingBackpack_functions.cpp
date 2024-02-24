#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedSlingBackpack.BP_DamagedSlingBackpack_C
// (Actor)

class UClass* ABP_DamagedSlingBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedSlingBackpack_C");

	return Clss;
}


// BP_DamagedSlingBackpack_C BP_DamagedSlingBackpack.Default__BP_DamagedSlingBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedSlingBackpack_C* ABP_DamagedSlingBackpack_C::GetDefaultObj()
{
	static class ABP_DamagedSlingBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedSlingBackpack_C*>(ABP_DamagedSlingBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


