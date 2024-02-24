#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_IceSpike_Mod_02.DamageData_IceSpike_Mod_02_C
// (None)

class UClass* UDamageData_IceSpike_Mod_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_IceSpike_Mod_02_C");

	return Clss;
}


// DamageData_IceSpike_Mod_02_C DamageData_IceSpike_Mod_02.Default__DamageData_IceSpike_Mod_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_IceSpike_Mod_02_C* UDamageData_IceSpike_Mod_02_C::GetDefaultObj()
{
	static class UDamageData_IceSpike_Mod_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_IceSpike_Mod_02_C*>(UDamageData_IceSpike_Mod_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


