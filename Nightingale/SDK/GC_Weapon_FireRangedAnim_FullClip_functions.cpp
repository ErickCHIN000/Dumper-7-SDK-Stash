#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Weapon_FireRangedAnim_FullClip.GC_Weapon_FireRangedAnim_FullClip_C
// (None)

class UClass* UGC_Weapon_FireRangedAnim_FullClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Weapon_FireRangedAnim_FullClip_C");

	return Clss;
}


// GC_Weapon_FireRangedAnim_FullClip_C GC_Weapon_FireRangedAnim_FullClip.Default__GC_Weapon_FireRangedAnim_FullClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Weapon_FireRangedAnim_FullClip_C* UGC_Weapon_FireRangedAnim_FullClip_C::GetDefaultObj()
{
	static class UGC_Weapon_FireRangedAnim_FullClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Weapon_FireRangedAnim_FullClip_C*>(UGC_Weapon_FireRangedAnim_FullClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


