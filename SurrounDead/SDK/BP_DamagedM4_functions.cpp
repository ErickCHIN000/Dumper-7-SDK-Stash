#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedM4.BP_DamagedM4_C
// (Actor)

class UClass* ABP_DamagedM4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedM4_C");

	return Clss;
}


// BP_DamagedM4_C BP_DamagedM4.Default__BP_DamagedM4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedM4_C* ABP_DamagedM4_C::GetDefaultObj()
{
	static class ABP_DamagedM4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedM4_C*>(ABP_DamagedM4_C::StaticClass()->DefaultObject);

	return Default;
}

}


