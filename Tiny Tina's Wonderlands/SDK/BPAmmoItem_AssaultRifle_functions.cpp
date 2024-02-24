#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_AssaultRifle.BPAmmoItem_AssaultRifle_C
// (Actor)

class UClass* ABPAmmoItem_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_AssaultRifle_C");

	return Clss;
}


// BPAmmoItem_AssaultRifle_C BPAmmoItem_AssaultRifle.Default__BPAmmoItem_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_AssaultRifle_C* ABPAmmoItem_AssaultRifle_C::GetDefaultObj()
{
	static class ABPAmmoItem_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_AssaultRifle_C*>(ABPAmmoItem_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


