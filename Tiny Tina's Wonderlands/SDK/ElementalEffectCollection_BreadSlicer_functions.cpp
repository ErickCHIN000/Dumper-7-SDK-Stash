#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_BreadSlicer.ElementalEffectCollection_BreadSlicer_C
// (None)

class UClass* UElementalEffectCollection_BreadSlicer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_BreadSlicer_C");

	return Clss;
}


// ElementalEffectCollection_BreadSlicer_C ElementalEffectCollection_BreadSlicer.Default__ElementalEffectCollection_BreadSlicer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_BreadSlicer_C* UElementalEffectCollection_BreadSlicer_C::GetDefaultObj()
{
	static class UElementalEffectCollection_BreadSlicer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_BreadSlicer_C*>(UElementalEffectCollection_BreadSlicer_C::StaticClass()->DefaultObject);

	return Default;
}

}


