#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_HW_COV_ScrapCannon.ElementalEffectCollection_HW_COV_ScrapCannon_C
// (None)

class UClass* UElementalEffectCollection_HW_COV_ScrapCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_HW_COV_ScrapCannon_C");

	return Clss;
}


// ElementalEffectCollection_HW_COV_ScrapCannon_C ElementalEffectCollection_HW_COV_ScrapCannon.Default__ElementalEffectCollection_HW_COV_ScrapCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_HW_COV_ScrapCannon_C* UElementalEffectCollection_HW_COV_ScrapCannon_C::GetDefaultObj()
{
	static class UElementalEffectCollection_HW_COV_ScrapCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_HW_COV_ScrapCannon_C*>(UElementalEffectCollection_HW_COV_ScrapCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


