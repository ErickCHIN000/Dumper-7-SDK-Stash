#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedFiremansAxe.BP_DamagedFiremansAxe_C
// (Actor)

class UClass* ABP_DamagedFiremansAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedFiremansAxe_C");

	return Clss;
}


// BP_DamagedFiremansAxe_C BP_DamagedFiremansAxe.Default__BP_DamagedFiremansAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedFiremansAxe_C* ABP_DamagedFiremansAxe_C::GetDefaultObj()
{
	static class ABP_DamagedFiremansAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedFiremansAxe_C*>(ABP_DamagedFiremansAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


