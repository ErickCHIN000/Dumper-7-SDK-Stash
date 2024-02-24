#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_Shotgun.BPAmmoItem_Shotgun_C
// (Actor)

class UClass* ABPAmmoItem_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_Shotgun_C");

	return Clss;
}


// BPAmmoItem_Shotgun_C BPAmmoItem_Shotgun.Default__BPAmmoItem_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_Shotgun_C* ABPAmmoItem_Shotgun_C::GetDefaultObj()
{
	static class ABPAmmoItem_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_Shotgun_C*>(ABPAmmoItem_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


