#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Dynamo_Explosive.Damage_Dynamo_Explosive_C
// (None)

class UClass* UDamage_Dynamo_Explosive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Dynamo_Explosive_C");

	return Clss;
}


// Damage_Dynamo_Explosive_C Damage_Dynamo_Explosive.Default__Damage_Dynamo_Explosive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Dynamo_Explosive_C* UDamage_Dynamo_Explosive_C::GetDefaultObj()
{
	static class UDamage_Dynamo_Explosive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Dynamo_Explosive_C*>(UDamage_Dynamo_Explosive_C::StaticClass()->DefaultObject);

	return Default;
}

}


