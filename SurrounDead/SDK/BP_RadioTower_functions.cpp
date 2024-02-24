#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RadioTower.BP_RadioTower_C
// (Actor)

class UClass* ABP_RadioTower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RadioTower_C");

	return Clss;
}


// BP_RadioTower_C BP_RadioTower.Default__BP_RadioTower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RadioTower_C* ABP_RadioTower_C::GetDefaultObj()
{
	static class ABP_RadioTower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RadioTower_C*>(ABP_RadioTower_C::StaticClass()->DefaultObject);

	return Default;
}

}


