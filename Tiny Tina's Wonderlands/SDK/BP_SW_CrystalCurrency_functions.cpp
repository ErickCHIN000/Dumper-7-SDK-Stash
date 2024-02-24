#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SW_CrystalCurrency.BP_SW_CrystalCurrency_C
// (Actor)

class UClass* ABP_SW_CrystalCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SW_CrystalCurrency_C");

	return Clss;
}


// BP_SW_CrystalCurrency_C BP_SW_CrystalCurrency.Default__BP_SW_CrystalCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SW_CrystalCurrency_C* ABP_SW_CrystalCurrency_C::GetDefaultObj()
{
	static class ABP_SW_CrystalCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SW_CrystalCurrency_C*>(ABP_SW_CrystalCurrency_C::StaticClass()->DefaultObject);

	return Default;
}

}


