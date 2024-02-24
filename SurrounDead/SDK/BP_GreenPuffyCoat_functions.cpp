#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GreenPuffyCoat.BP_GreenPuffyCoat_C
// (Actor)

class UClass* ABP_GreenPuffyCoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GreenPuffyCoat_C");

	return Clss;
}


// BP_GreenPuffyCoat_C BP_GreenPuffyCoat.Default__BP_GreenPuffyCoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GreenPuffyCoat_C* ABP_GreenPuffyCoat_C::GetDefaultObj()
{
	static class ABP_GreenPuffyCoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GreenPuffyCoat_C*>(ABP_GreenPuffyCoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


