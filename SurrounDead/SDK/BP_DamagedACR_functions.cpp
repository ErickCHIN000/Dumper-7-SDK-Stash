#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedACR.BP_DamagedACR_C
// (Actor)

class UClass* ABP_DamagedACR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedACR_C");

	return Clss;
}


// BP_DamagedACR_C BP_DamagedACR.Default__BP_DamagedACR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedACR_C* ABP_DamagedACR_C::GetDefaultObj()
{
	static class ABP_DamagedACR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedACR_C*>(ABP_DamagedACR_C::StaticClass()->DefaultObject);

	return Default;
}

}


