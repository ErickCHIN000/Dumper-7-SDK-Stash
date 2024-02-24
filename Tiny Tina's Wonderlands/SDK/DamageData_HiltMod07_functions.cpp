#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_HiltMod07.DamageData_HiltMod07_C
// (None)

class UClass* UDamageData_HiltMod07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_HiltMod07_C");

	return Clss;
}


// DamageData_HiltMod07_C DamageData_HiltMod07.Default__DamageData_HiltMod07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_HiltMod07_C* UDamageData_HiltMod07_C::GetDefaultObj()
{
	static class UDamageData_HiltMod07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_HiltMod07_C*>(UDamageData_HiltMod07_C::StaticClass()->DefaultObject);

	return Default;
}

}


