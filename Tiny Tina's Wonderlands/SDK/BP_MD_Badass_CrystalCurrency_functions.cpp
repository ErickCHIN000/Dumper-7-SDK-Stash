#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MD_Badass_CrystalCurrency.BP_MD_Badass_CrystalCurrency_C
// (Actor)

class UClass* ABP_MD_Badass_CrystalCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MD_Badass_CrystalCurrency_C");

	return Clss;
}


// BP_MD_Badass_CrystalCurrency_C BP_MD_Badass_CrystalCurrency.Default__BP_MD_Badass_CrystalCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MD_Badass_CrystalCurrency_C* ABP_MD_Badass_CrystalCurrency_C::GetDefaultObj()
{
	static class ABP_MD_Badass_CrystalCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MD_Badass_CrystalCurrency_C*>(ABP_MD_Badass_CrystalCurrency_C::StaticClass()->DefaultObject);

	return Default;
}

}


