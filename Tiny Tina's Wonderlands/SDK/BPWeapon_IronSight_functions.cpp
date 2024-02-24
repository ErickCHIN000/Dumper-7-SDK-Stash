#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeapon_IronSight.BPWeapon_IronSight_C
// (None)

class UClass* UBPWeapon_IronSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeapon_IronSight_C");

	return Clss;
}


// BPWeapon_IronSight_C BPWeapon_IronSight.Default__BPWeapon_IronSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeapon_IronSight_C* UBPWeapon_IronSight_C::GetDefaultObj()
{
	static class UBPWeapon_IronSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeapon_IronSight_C*>(UBPWeapon_IronSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


