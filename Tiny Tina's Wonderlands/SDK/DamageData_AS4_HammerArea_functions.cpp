#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_AS4_HammerArea.DamageData_AS4_HammerArea_C
// (None)

class UClass* UDamageData_AS4_HammerArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_AS4_HammerArea_C");

	return Clss;
}


// DamageData_AS4_HammerArea_C DamageData_AS4_HammerArea.Default__DamageData_AS4_HammerArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_AS4_HammerArea_C* UDamageData_AS4_HammerArea_C::GetDefaultObj()
{
	static class UDamageData_AS4_HammerArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_AS4_HammerArea_C*>(UDamageData_AS4_HammerArea_C::StaticClass()->DefaultObject);

	return Default;
}

}


