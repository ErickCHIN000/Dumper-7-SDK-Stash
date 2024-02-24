#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RedNosedShotgun.BP_RedNosedShotgun_C
// (Actor)

class UClass* ABP_RedNosedShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RedNosedShotgun_C");

	return Clss;
}


// BP_RedNosedShotgun_C BP_RedNosedShotgun.Default__BP_RedNosedShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RedNosedShotgun_C* ABP_RedNosedShotgun_C::GetDefaultObj()
{
	static class ABP_RedNosedShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RedNosedShotgun_C*>(ABP_RedNosedShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


