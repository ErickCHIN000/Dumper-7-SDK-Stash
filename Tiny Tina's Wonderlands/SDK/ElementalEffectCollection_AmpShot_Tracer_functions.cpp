#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_AmpShot_Tracer.ElementalEffectCollection_AmpShot_Tracer_C
// (None)

class UClass* UElementalEffectCollection_AmpShot_Tracer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_AmpShot_Tracer_C");

	return Clss;
}


// ElementalEffectCollection_AmpShot_Tracer_C ElementalEffectCollection_AmpShot_Tracer.Default__ElementalEffectCollection_AmpShot_Tracer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_AmpShot_Tracer_C* UElementalEffectCollection_AmpShot_Tracer_C::GetDefaultObj()
{
	static class UElementalEffectCollection_AmpShot_Tracer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_AmpShot_Tracer_C*>(UElementalEffectCollection_AmpShot_Tracer_C::StaticClass()->DefaultObject);

	return Default;
}

}


