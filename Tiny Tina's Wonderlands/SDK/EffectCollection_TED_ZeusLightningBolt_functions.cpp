#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_TED_ZeusLightningBolt.EffectCollection_TED_ZeusLightningBolt_C
// (None)

class UClass* UEffectCollection_TED_ZeusLightningBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_TED_ZeusLightningBolt_C");

	return Clss;
}


// EffectCollection_TED_ZeusLightningBolt_C EffectCollection_TED_ZeusLightningBolt.Default__EffectCollection_TED_ZeusLightningBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_TED_ZeusLightningBolt_C* UEffectCollection_TED_ZeusLightningBolt_C::GetDefaultObj()
{
	static class UEffectCollection_TED_ZeusLightningBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_TED_ZeusLightningBolt_C*>(UEffectCollection_TED_ZeusLightningBolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


