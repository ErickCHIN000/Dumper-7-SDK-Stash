#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedM9.BP_DamagedM9_C
// (Actor)

class UClass* ABP_DamagedM9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedM9_C");

	return Clss;
}


// BP_DamagedM9_C BP_DamagedM9.Default__BP_DamagedM9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedM9_C* ABP_DamagedM9_C::GetDefaultObj()
{
	static class ABP_DamagedM9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedM9_C*>(ABP_DamagedM9_C::StaticClass()->DefaultObject);

	return Default;
}

}


