#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MM_Cast_Shoot.ElementalEffectCollection_MM_Cast_Shoot_C
// (None)

class UClass* UElementalEffectCollection_MM_Cast_Shoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MM_Cast_Shoot_C");

	return Clss;
}


// ElementalEffectCollection_MM_Cast_Shoot_C ElementalEffectCollection_MM_Cast_Shoot.Default__ElementalEffectCollection_MM_Cast_Shoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MM_Cast_Shoot_C* UElementalEffectCollection_MM_Cast_Shoot_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MM_Cast_Shoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MM_Cast_Shoot_C*>(UElementalEffectCollection_MM_Cast_Shoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


