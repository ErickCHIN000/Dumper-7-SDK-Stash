#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WitcherOuterChargeShotBullet.WitcherOuterChargeShotBullet_C
// (Actor)

class UClass* AWitcherOuterChargeShotBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WitcherOuterChargeShotBullet_C");

	return Clss;
}


// WitcherOuterChargeShotBullet_C WitcherOuterChargeShotBullet.Default__WitcherOuterChargeShotBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWitcherOuterChargeShotBullet_C* AWitcherOuterChargeShotBullet_C::GetDefaultObj()
{
	static class AWitcherOuterChargeShotBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWitcherOuterChargeShotBullet_C*>(AWitcherOuterChargeShotBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


