#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedAKM.BP_DamagedAKM_C
// (Actor)

class UClass* ABP_DamagedAKM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedAKM_C");

	return Clss;
}


// BP_DamagedAKM_C BP_DamagedAKM.Default__BP_DamagedAKM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedAKM_C* ABP_DamagedAKM_C::GetDefaultObj()
{
	static class ABP_DamagedAKM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedAKM_C*>(ABP_DamagedAKM_C::StaticClass()->DefaultObject);

	return Default;
}

}


