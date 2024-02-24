#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_HYP_ShieldNova.ElementalEffectCollection_HYP_ShieldNova_C
// (None)

class UClass* UElementalEffectCollection_HYP_ShieldNova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_HYP_ShieldNova_C");

	return Clss;
}


// ElementalEffectCollection_HYP_ShieldNova_C ElementalEffectCollection_HYP_ShieldNova.Default__ElementalEffectCollection_HYP_ShieldNova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_HYP_ShieldNova_C* UElementalEffectCollection_HYP_ShieldNova_C::GetDefaultObj()
{
	static class UElementalEffectCollection_HYP_ShieldNova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_HYP_ShieldNova_C*>(UElementalEffectCollection_HYP_ShieldNova_C::StaticClass()->DefaultObject);

	return Default;
}

}


