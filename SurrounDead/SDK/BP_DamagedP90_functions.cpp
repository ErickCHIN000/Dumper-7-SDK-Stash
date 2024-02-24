#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedP90.BP_DamagedP90_C
// (Actor)

class UClass* ABP_DamagedP90_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedP90_C");

	return Clss;
}


// BP_DamagedP90_C BP_DamagedP90.Default__BP_DamagedP90_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedP90_C* ABP_DamagedP90_C::GetDefaultObj()
{
	static class ABP_DamagedP90_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedP90_C*>(ABP_DamagedP90_C::StaticClass()->DefaultObject);

	return Default;
}

}


