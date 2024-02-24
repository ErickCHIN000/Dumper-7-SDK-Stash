#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecalOuterBullet.DecalOuterBullet_C
// (Actor)

class UClass* ADecalOuterBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalOuterBullet_C");

	return Clss;
}


// DecalOuterBullet_C DecalOuterBullet.Default__DecalOuterBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecalOuterBullet_C* ADecalOuterBullet_C::GetDefaultObj()
{
	static class ADecalOuterBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecalOuterBullet_C*>(ADecalOuterBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


