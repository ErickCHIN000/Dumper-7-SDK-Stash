#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TravellersBackpack.BP_TravellersBackpack_C
// (Actor)

class UClass* ABP_TravellersBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TravellersBackpack_C");

	return Clss;
}


// BP_TravellersBackpack_C BP_TravellersBackpack.Default__BP_TravellersBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TravellersBackpack_C* ABP_TravellersBackpack_C::GetDefaultObj()
{
	static class ABP_TravellersBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TravellersBackpack_C*>(ABP_TravellersBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


