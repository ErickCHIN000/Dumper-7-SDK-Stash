#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecalBulletM.DecalBulletM_C
// (Actor)

class UClass* ADecalBulletM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalBulletM_C");

	return Clss;
}


// DecalBulletM_C DecalBulletM.Default__DecalBulletM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecalBulletM_C* ADecalBulletM_C::GetDefaultObj()
{
	static class ADecalBulletM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecalBulletM_C*>(ADecalBulletM_C::StaticClass()->DefaultObject);

	return Default;
}

}


