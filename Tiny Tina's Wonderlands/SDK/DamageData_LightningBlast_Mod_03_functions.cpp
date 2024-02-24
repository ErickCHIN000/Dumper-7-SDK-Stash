#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_LightningBlast_Mod_03.DamageData_LightningBlast_Mod_03_C
// (None)

class UClass* UDamageData_LightningBlast_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_LightningBlast_Mod_03_C");

	return Clss;
}


// DamageData_LightningBlast_Mod_03_C DamageData_LightningBlast_Mod_03.Default__DamageData_LightningBlast_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_LightningBlast_Mod_03_C* UDamageData_LightningBlast_Mod_03_C::GetDefaultObj()
{
	static class UDamageData_LightningBlast_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_LightningBlast_Mod_03_C*>(UDamageData_LightningBlast_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


