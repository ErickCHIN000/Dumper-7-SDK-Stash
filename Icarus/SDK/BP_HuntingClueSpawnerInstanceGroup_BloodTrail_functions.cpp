#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingClueSpawnerInstanceGroup_BloodTrail.BP_HuntingClueSpawnerInstanceGroup_BloodTrail_C
// (None)

class UClass* UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingClueSpawnerInstanceGroup_BloodTrail_C");

	return Clss;
}


// BP_HuntingClueSpawnerInstanceGroup_BloodTrail_C BP_HuntingClueSpawnerInstanceGroup_BloodTrail.Default__BP_HuntingClueSpawnerInstanceGroup_BloodTrail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C* UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C::GetDefaultObj()
{
	static class UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C*>(UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C::StaticClass()->DefaultObject);

	return Default;
}

}


