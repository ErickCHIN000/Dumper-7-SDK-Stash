#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Boltlash_Nova.DamageData_Boltlash_Nova_C
// (None)

class UClass* UDamageData_Boltlash_Nova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Boltlash_Nova_C");

	return Clss;
}


// DamageData_Boltlash_Nova_C DamageData_Boltlash_Nova.Default__DamageData_Boltlash_Nova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Boltlash_Nova_C* UDamageData_Boltlash_Nova_C::GetDefaultObj()
{
	static class UDamageData_Boltlash_Nova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Boltlash_Nova_C*>(UDamageData_Boltlash_Nova_C::StaticClass()->DefaultObject);

	return Default;
}

}


