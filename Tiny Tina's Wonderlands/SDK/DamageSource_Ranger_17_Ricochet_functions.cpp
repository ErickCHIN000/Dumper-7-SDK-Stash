#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Ranger_17_Ricochet.DamageSource_Ranger_17_Ricochet_C
// (None)

class UClass* UDamageSource_Ranger_17_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Ranger_17_Ricochet_C");

	return Clss;
}


// DamageSource_Ranger_17_Ricochet_C DamageSource_Ranger_17_Ricochet.Default__DamageSource_Ranger_17_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Ranger_17_Ricochet_C* UDamageSource_Ranger_17_Ricochet_C::GetDefaultObj()
{
	static class UDamageSource_Ranger_17_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Ranger_17_Ricochet_C*>(UDamageSource_Ranger_17_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}

}


