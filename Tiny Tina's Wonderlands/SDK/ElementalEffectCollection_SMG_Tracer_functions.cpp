#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_SMG_Tracer.ElementalEffectCollection_SMG_Tracer_C
// (None)

class UClass* UElementalEffectCollection_SMG_Tracer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_SMG_Tracer_C");

	return Clss;
}


// ElementalEffectCollection_SMG_Tracer_C ElementalEffectCollection_SMG_Tracer.Default__ElementalEffectCollection_SMG_Tracer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_SMG_Tracer_C* UElementalEffectCollection_SMG_Tracer_C::GetDefaultObj()
{
	static class UElementalEffectCollection_SMG_Tracer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_SMG_Tracer_C*>(UElementalEffectCollection_SMG_Tracer_C::StaticClass()->DefaultObject);

	return Default;
}

}


