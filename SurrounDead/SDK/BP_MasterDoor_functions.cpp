#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterDoor.BP_MasterDoor_C
// (Actor)

class UClass* ABP_MasterDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterDoor_C");

	return Clss;
}


// BP_MasterDoor_C BP_MasterDoor.Default__BP_MasterDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterDoor_C* ABP_MasterDoor_C::GetDefaultObj()
{
	static class ABP_MasterDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterDoor_C*>(ABP_MasterDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


