#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeForceFullDamage.DmgTypeForceFullDamage_C
// (None)

class UClass* UDmgTypeForceFullDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeForceFullDamage_C");

	return Clss;
}


// DmgTypeForceFullDamage_C DmgTypeForceFullDamage.Default__DmgTypeForceFullDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeForceFullDamage_C* UDmgTypeForceFullDamage_C::GetDefaultObj()
{
	static class UDmgTypeForceFullDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeForceFullDamage_C*>(UDmgTypeForceFullDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


