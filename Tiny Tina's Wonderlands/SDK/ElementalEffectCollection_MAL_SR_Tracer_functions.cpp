#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MAL_SR_Tracer.ElementalEffectCollection_MAL_SR_Tracer_C
// (None)

class UClass* UElementalEffectCollection_MAL_SR_Tracer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MAL_SR_Tracer_C");

	return Clss;
}


// ElementalEffectCollection_MAL_SR_Tracer_C ElementalEffectCollection_MAL_SR_Tracer.Default__ElementalEffectCollection_MAL_SR_Tracer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MAL_SR_Tracer_C* UElementalEffectCollection_MAL_SR_Tracer_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MAL_SR_Tracer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MAL_SR_Tracer_C*>(UElementalEffectCollection_MAL_SR_Tracer_C::StaticClass()->DefaultObject);

	return Default;
}

}


