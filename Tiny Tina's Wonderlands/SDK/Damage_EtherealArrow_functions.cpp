#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_EtherealArrow.Damage_EtherealArrow_C
// (None)

class UClass* UDamage_EtherealArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_EtherealArrow_C");

	return Clss;
}


// Damage_EtherealArrow_C Damage_EtherealArrow.Default__Damage_EtherealArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_EtherealArrow_C* UDamage_EtherealArrow_C::GetDefaultObj()
{
	static class UDamage_EtherealArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_EtherealArrow_C*>(UDamage_EtherealArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


