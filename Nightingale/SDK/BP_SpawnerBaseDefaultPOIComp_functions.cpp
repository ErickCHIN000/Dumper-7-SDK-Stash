#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnerBaseDefaultPOIComp.BP_SpawnerBaseDefaultPOIComp_C
// (None)

class UClass* UBP_SpawnerBaseDefaultPOIComp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnerBaseDefaultPOIComp_C");

	return Clss;
}


// BP_SpawnerBaseDefaultPOIComp_C BP_SpawnerBaseDefaultPOIComp.Default__BP_SpawnerBaseDefaultPOIComp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SpawnerBaseDefaultPOIComp_C* UBP_SpawnerBaseDefaultPOIComp_C::GetDefaultObj()
{
	static class UBP_SpawnerBaseDefaultPOIComp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SpawnerBaseDefaultPOIComp_C*>(UBP_SpawnerBaseDefaultPOIComp_C::StaticClass()->DefaultObject);

	return Default;
}

}


