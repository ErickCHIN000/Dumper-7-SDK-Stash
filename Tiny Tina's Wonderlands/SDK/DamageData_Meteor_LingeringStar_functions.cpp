#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Meteor_LingeringStar.DamageData_Meteor_LingeringStar_C
// (None)

class UClass* UDamageData_Meteor_LingeringStar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Meteor_LingeringStar_C");

	return Clss;
}


// DamageData_Meteor_LingeringStar_C DamageData_Meteor_LingeringStar.Default__DamageData_Meteor_LingeringStar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Meteor_LingeringStar_C* UDamageData_Meteor_LingeringStar_C::GetDefaultObj()
{
	static class UDamageData_Meteor_LingeringStar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Meteor_LingeringStar_C*>(UDamageData_Meteor_LingeringStar_C::StaticClass()->DefaultObject);

	return Default;
}

}


