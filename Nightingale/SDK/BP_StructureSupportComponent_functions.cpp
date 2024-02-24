#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureSupportComponent.BP_StructureSupportComponent_C
// (None)

class UClass* UBP_StructureSupportComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureSupportComponent_C");

	return Clss;
}


// BP_StructureSupportComponent_C BP_StructureSupportComponent.Default__BP_StructureSupportComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureSupportComponent_C* UBP_StructureSupportComponent_C::GetDefaultObj()
{
	static class UBP_StructureSupportComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureSupportComponent_C*>(UBP_StructureSupportComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


