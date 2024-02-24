#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProtectiveEyewear.BP_ProtectiveEyewear_C
// (Actor)

class UClass* ABP_ProtectiveEyewear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProtectiveEyewear_C");

	return Clss;
}


// BP_ProtectiveEyewear_C BP_ProtectiveEyewear.Default__BP_ProtectiveEyewear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProtectiveEyewear_C* ABP_ProtectiveEyewear_C::GetDefaultObj()
{
	static class ABP_ProtectiveEyewear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProtectiveEyewear_C*>(ABP_ProtectiveEyewear_C::StaticClass()->DefaultObject);

	return Default;
}

}


