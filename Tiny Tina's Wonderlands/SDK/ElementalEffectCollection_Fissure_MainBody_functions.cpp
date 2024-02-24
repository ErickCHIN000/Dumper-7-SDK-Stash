#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Fissure_MainBody.ElementalEffectCollection_Fissure_MainBody_C
// (None)

class UClass* UElementalEffectCollection_Fissure_MainBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Fissure_MainBody_C");

	return Clss;
}


// ElementalEffectCollection_Fissure_MainBody_C ElementalEffectCollection_Fissure_MainBody.Default__ElementalEffectCollection_Fissure_MainBody_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Fissure_MainBody_C* UElementalEffectCollection_Fissure_MainBody_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Fissure_MainBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Fissure_MainBody_C*>(UElementalEffectCollection_Fissure_MainBody_C::StaticClass()->DefaultObject);

	return Default;
}

}


