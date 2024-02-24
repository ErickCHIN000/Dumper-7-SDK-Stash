#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecalOuterChargeBullet.DecalOuterChargeBullet_C
// (Actor)

class UClass* ADecalOuterChargeBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalOuterChargeBullet_C");

	return Clss;
}


// DecalOuterChargeBullet_C DecalOuterChargeBullet.Default__DecalOuterChargeBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecalOuterChargeBullet_C* ADecalOuterChargeBullet_C::GetDefaultObj()
{
	static class ADecalOuterChargeBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecalOuterChargeBullet_C*>(ADecalOuterChargeBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


