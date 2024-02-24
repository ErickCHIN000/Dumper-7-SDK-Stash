#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedVector.BP_DamagedVector_C
// (Actor)

class UClass* ABP_DamagedVector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedVector_C");

	return Clss;
}


// BP_DamagedVector_C BP_DamagedVector.Default__BP_DamagedVector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedVector_C* ABP_DamagedVector_C::GetDefaultObj()
{
	static class ABP_DamagedVector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedVector_C*>(ABP_DamagedVector_C::StaticClass()->DefaultObject);

	return Default;
}

}


