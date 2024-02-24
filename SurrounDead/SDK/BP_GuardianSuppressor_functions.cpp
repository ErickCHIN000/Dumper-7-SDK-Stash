#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuardianSuppressor.BP_GuardianSuppressor_C
// (Actor)

class UClass* ABP_GuardianSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuardianSuppressor_C");

	return Clss;
}


// BP_GuardianSuppressor_C BP_GuardianSuppressor.Default__BP_GuardianSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GuardianSuppressor_C* ABP_GuardianSuppressor_C::GetDefaultObj()
{
	static class ABP_GuardianSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GuardianSuppressor_C*>(ABP_GuardianSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


