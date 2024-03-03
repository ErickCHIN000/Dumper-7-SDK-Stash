#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DoorKey.BP_DoorKey_C
// (Actor)

class UClass* ABP_DoorKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DoorKey_C");

	return Clss;
}


// BP_DoorKey_C BP_DoorKey.Default__BP_DoorKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DoorKey_C* ABP_DoorKey_C::GetDefaultObj()
{
	static class ABP_DoorKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DoorKey_C*>(ABP_DoorKey_C::StaticClass()->DefaultObject);

	return Default;
}

}


