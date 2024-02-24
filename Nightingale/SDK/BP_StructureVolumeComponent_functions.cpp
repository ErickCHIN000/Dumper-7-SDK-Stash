#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureVolumeComponent.BP_StructureVolumeComponent_C
// (None)

class UClass* UBP_StructureVolumeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureVolumeComponent_C");

	return Clss;
}


// BP_StructureVolumeComponent_C BP_StructureVolumeComponent.Default__BP_StructureVolumeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureVolumeComponent_C* UBP_StructureVolumeComponent_C::GetDefaultObj()
{
	static class UBP_StructureVolumeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureVolumeComponent_C*>(UBP_StructureVolumeComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


