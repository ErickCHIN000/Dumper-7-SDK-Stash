#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlackPuffyCoat.BP_BlackPuffyCoat_C
// (Actor)

class UClass* ABP_BlackPuffyCoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlackPuffyCoat_C");

	return Clss;
}


// BP_BlackPuffyCoat_C BP_BlackPuffyCoat.Default__BP_BlackPuffyCoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlackPuffyCoat_C* ABP_BlackPuffyCoat_C::GetDefaultObj()
{
	static class ABP_BlackPuffyCoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlackPuffyCoat_C*>(ABP_BlackPuffyCoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


