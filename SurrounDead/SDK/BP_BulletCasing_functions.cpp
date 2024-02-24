#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BulletCasing.BP_BulletCasing_C
// (Actor)

class UClass* ABP_BulletCasing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BulletCasing_C");

	return Clss;
}


// BP_BulletCasing_C BP_BulletCasing.Default__BP_BulletCasing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BulletCasing_C* ABP_BulletCasing_C::GetDefaultObj()
{
	static class ABP_BulletCasing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BulletCasing_C*>(ABP_BulletCasing_C::StaticClass()->DefaultObject);

	return Default;
}

}


