#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureInteractionRequirementObject.BP_StructureInteractionRequirementObject_C
// (None)

class UClass* UBP_StructureInteractionRequirementObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureInteractionRequirementObject_C");

	return Clss;
}


// BP_StructureInteractionRequirementObject_C BP_StructureInteractionRequirementObject.Default__BP_StructureInteractionRequirementObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureInteractionRequirementObject_C* UBP_StructureInteractionRequirementObject_C::GetDefaultObj()
{
	static class UBP_StructureInteractionRequirementObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureInteractionRequirementObject_C*>(UBP_StructureInteractionRequirementObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


