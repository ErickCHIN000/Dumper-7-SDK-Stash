#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_HiltMod07.DamageSource_HiltMod07_C
// (None)

class UClass* UDamageSource_HiltMod07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_HiltMod07_C");

	return Clss;
}


// DamageSource_HiltMod07_C DamageSource_HiltMod07.Default__DamageSource_HiltMod07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_HiltMod07_C* UDamageSource_HiltMod07_C::GetDefaultObj()
{
	static class UDamageSource_HiltMod07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_HiltMod07_C*>(UDamageSource_HiltMod07_C::StaticClass()->DefaultObject);

	return Default;
}

}


