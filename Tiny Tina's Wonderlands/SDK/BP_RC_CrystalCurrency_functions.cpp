#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RC_CrystalCurrency.BP_RC_CrystalCurrency_C
// (Actor)

class UClass* ABP_RC_CrystalCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RC_CrystalCurrency_C");

	return Clss;
}


// BP_RC_CrystalCurrency_C BP_RC_CrystalCurrency.Default__BP_RC_CrystalCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RC_CrystalCurrency_C* ABP_RC_CrystalCurrency_C::GetDefaultObj()
{
	static class ABP_RC_CrystalCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RC_CrystalCurrency_C*>(ABP_RC_CrystalCurrency_C::StaticClass()->DefaultObject);

	return Default;
}

}


