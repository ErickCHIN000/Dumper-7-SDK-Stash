#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CD_CrystalCurrency.BP_CD_CrystalCurrency_C
// (Actor)

class UClass* ABP_CD_CrystalCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CD_CrystalCurrency_C");

	return Clss;
}


// BP_CD_CrystalCurrency_C BP_CD_CrystalCurrency.Default__BP_CD_CrystalCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CD_CrystalCurrency_C* ABP_CD_CrystalCurrency_C::GetDefaultObj()
{
	static class ABP_CD_CrystalCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CD_CrystalCurrency_C*>(ABP_CD_CrystalCurrency_C::StaticClass()->DefaultObject);

	return Default;
}

}


