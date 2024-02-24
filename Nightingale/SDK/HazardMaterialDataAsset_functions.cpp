#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HazardMaterialDataAsset.HazardMaterialDataAsset_C
// (None)

class UClass* UHazardMaterialDataAsset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HazardMaterialDataAsset_C");

	return Clss;
}


// HazardMaterialDataAsset_C HazardMaterialDataAsset.Default__HazardMaterialDataAsset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHazardMaterialDataAsset_C* UHazardMaterialDataAsset_C::GetDefaultObj()
{
	static class UHazardMaterialDataAsset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHazardMaterialDataAsset_C*>(UHazardMaterialDataAsset_C::StaticClass()->DefaultObject);

	return Default;
}

}


