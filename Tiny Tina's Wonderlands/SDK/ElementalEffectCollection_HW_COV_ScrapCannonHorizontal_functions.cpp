#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_HW_COV_ScrapCannonHorizontal.ElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C
// (None)

class UClass* UElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C");

	return Clss;
}


// ElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C ElementalEffectCollection_HW_COV_ScrapCannonHorizontal.Default__ElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C* UElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C::GetDefaultObj()
{
	static class UElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C*>(UElementalEffectCollection_HW_COV_ScrapCannonHorizontal_C::StaticClass()->DefaultObject);

	return Default;
}

}


