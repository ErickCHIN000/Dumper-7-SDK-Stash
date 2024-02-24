#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_SniperRifle.BPAmmoItem_SniperRifle_C
// (Actor)

class UClass* ABPAmmoItem_SniperRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_SniperRifle_C");

	return Clss;
}


// BPAmmoItem_SniperRifle_C BPAmmoItem_SniperRifle.Default__BPAmmoItem_SniperRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_SniperRifle_C* ABPAmmoItem_SniperRifle_C::GetDefaultObj()
{
	static class ABPAmmoItem_SniperRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_SniperRifle_C*>(ABPAmmoItem_SniperRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


