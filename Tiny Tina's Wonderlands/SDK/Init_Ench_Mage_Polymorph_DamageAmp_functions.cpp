#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Mage_Polymorph_DamageAmp.Init_Ench_Mage_Polymorph_DamageAmp_C
// (None)

class UClass* UInit_Ench_Mage_Polymorph_DamageAmp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Mage_Polymorph_DamageAmp_C");

	return Clss;
}


// Init_Ench_Mage_Polymorph_DamageAmp_C Init_Ench_Mage_Polymorph_DamageAmp.Default__Init_Ench_Mage_Polymorph_DamageAmp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Mage_Polymorph_DamageAmp_C* UInit_Ench_Mage_Polymorph_DamageAmp_C::GetDefaultObj()
{
	static class UInit_Ench_Mage_Polymorph_DamageAmp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Mage_Polymorph_DamageAmp_C*>(UInit_Ench_Mage_Polymorph_DamageAmp_C::StaticClass()->DefaultObject);

	return Default;
}

}

