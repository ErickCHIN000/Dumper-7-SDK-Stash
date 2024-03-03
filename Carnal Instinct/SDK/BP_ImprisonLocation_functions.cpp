#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ImprisonLocation.BP_ImprisonLocation_C
// (Actor)

class UClass* ABP_ImprisonLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ImprisonLocation_C");

	return Clss;
}


// BP_ImprisonLocation_C BP_ImprisonLocation.Default__BP_ImprisonLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ImprisonLocation_C* ABP_ImprisonLocation_C::GetDefaultObj()
{
	static class ABP_ImprisonLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ImprisonLocation_C*>(ABP_ImprisonLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


