#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianSuppressor.BP_LocalGuardianSuppressor_C
// (Actor)

class UClass* ABP_LocalGuardianSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianSuppressor_C");

	return Clss;
}


// BP_LocalGuardianSuppressor_C BP_LocalGuardianSuppressor.Default__BP_LocalGuardianSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianSuppressor_C* ABP_LocalGuardianSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalGuardianSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianSuppressor_C*>(ABP_LocalGuardianSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


