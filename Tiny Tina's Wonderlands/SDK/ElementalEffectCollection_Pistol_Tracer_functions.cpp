#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Pistol_Tracer.ElementalEffectCollection_Pistol_Tracer_C
// (None)

class UClass* UElementalEffectCollection_Pistol_Tracer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Pistol_Tracer_C");

	return Clss;
}


// ElementalEffectCollection_Pistol_Tracer_C ElementalEffectCollection_Pistol_Tracer.Default__ElementalEffectCollection_Pistol_Tracer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Pistol_Tracer_C* UElementalEffectCollection_Pistol_Tracer_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Pistol_Tracer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Pistol_Tracer_C*>(UElementalEffectCollection_Pistol_Tracer_C::StaticClass()->DefaultObject);

	return Default;
}

}


