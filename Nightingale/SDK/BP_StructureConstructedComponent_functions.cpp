#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureConstructedComponent.BP_StructureConstructedComponent_C
// (None)

class UClass* UBP_StructureConstructedComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureConstructedComponent_C");

	return Clss;
}


// BP_StructureConstructedComponent_C BP_StructureConstructedComponent.Default__BP_StructureConstructedComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureConstructedComponent_C* UBP_StructureConstructedComponent_C::GetDefaultObj()
{
	static class UBP_StructureConstructedComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureConstructedComponent_C*>(UBP_StructureConstructedComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


