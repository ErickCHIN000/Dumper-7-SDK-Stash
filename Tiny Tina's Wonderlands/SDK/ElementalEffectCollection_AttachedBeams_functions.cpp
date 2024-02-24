#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_AttachedBeams.ElementalEffectCollection_AttachedBeams_C
// (None)

class UClass* UElementalEffectCollection_AttachedBeams_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_AttachedBeams_C");

	return Clss;
}


// ElementalEffectCollection_AttachedBeams_C ElementalEffectCollection_AttachedBeams.Default__ElementalEffectCollection_AttachedBeams_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_AttachedBeams_C* UElementalEffectCollection_AttachedBeams_C::GetDefaultObj()
{
	static class UElementalEffectCollection_AttachedBeams_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_AttachedBeams_C*>(UElementalEffectCollection_AttachedBeams_C::StaticClass()->DefaultObject);

	return Default;
}

}


