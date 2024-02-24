#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MAL_SMG_Beam_01.ElementalEffectCollection_MAL_SMG_Beam_01_C
// (None)

class UClass* UElementalEffectCollection_MAL_SMG_Beam_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MAL_SMG_Beam_01_C");

	return Clss;
}


// ElementalEffectCollection_MAL_SMG_Beam_01_C ElementalEffectCollection_MAL_SMG_Beam_01.Default__ElementalEffectCollection_MAL_SMG_Beam_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MAL_SMG_Beam_01_C* UElementalEffectCollection_MAL_SMG_Beam_01_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MAL_SMG_Beam_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MAL_SMG_Beam_01_C*>(UElementalEffectCollection_MAL_SMG_Beam_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


