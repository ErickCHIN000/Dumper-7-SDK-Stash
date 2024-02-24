#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingClueSpawnerInstanceGroup.BP_HuntingClueSpawnerInstanceGroup_C
// (None)

class UClass* UBP_HuntingClueSpawnerInstanceGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingClueSpawnerInstanceGroup_C");

	return Clss;
}


// BP_HuntingClueSpawnerInstanceGroup_C BP_HuntingClueSpawnerInstanceGroup.Default__BP_HuntingClueSpawnerInstanceGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HuntingClueSpawnerInstanceGroup_C* UBP_HuntingClueSpawnerInstanceGroup_C::GetDefaultObj()
{
	static class UBP_HuntingClueSpawnerInstanceGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HuntingClueSpawnerInstanceGroup_C*>(UBP_HuntingClueSpawnerInstanceGroup_C::StaticClass()->DefaultObject);

	return Default;
}

}


