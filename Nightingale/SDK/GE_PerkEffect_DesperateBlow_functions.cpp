#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_DesperateBlow.GE_PerkEffect_DesperateBlow_C
// (None)

class UClass* UGE_PerkEffect_DesperateBlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_DesperateBlow_C");

	return Clss;
}


// GE_PerkEffect_DesperateBlow_C GE_PerkEffect_DesperateBlow.Default__GE_PerkEffect_DesperateBlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_DesperateBlow_C* UGE_PerkEffect_DesperateBlow_C::GetDefaultObj()
{
	static class UGE_PerkEffect_DesperateBlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_DesperateBlow_C*>(UGE_PerkEffect_DesperateBlow_C::StaticClass()->DefaultObject);

	return Default;
}

}


