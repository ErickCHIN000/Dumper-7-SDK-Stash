#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedM249.BP_DamagedM249_C
// (Actor)

class UClass* ABP_DamagedM249_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedM249_C");

	return Clss;
}


// BP_DamagedM249_C BP_DamagedM249.Default__BP_DamagedM249_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedM249_C* ABP_DamagedM249_C::GetDefaultObj()
{
	static class ABP_DamagedM249_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedM249_C*>(ABP_DamagedM249_C::StaticClass()->DefaultObject);

	return Default;
}

}


