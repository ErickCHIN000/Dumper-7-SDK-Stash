#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_EnergySap.GE_PerkEffect_EnergySap_C
// (None)

class UClass* UGE_PerkEffect_EnergySap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_EnergySap_C");

	return Clss;
}


// GE_PerkEffect_EnergySap_C GE_PerkEffect_EnergySap.Default__GE_PerkEffect_EnergySap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_EnergySap_C* UGE_PerkEffect_EnergySap_C::GetDefaultObj()
{
	static class UGE_PerkEffect_EnergySap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_EnergySap_C*>(UGE_PerkEffect_EnergySap_C::StaticClass()->DefaultObject);

	return Default;
}

}


