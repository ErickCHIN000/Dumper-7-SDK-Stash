#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Shield_Spike_1p.EffectCollection_Shield_Spike_1p_C
// (None)

class UClass* UEffectCollection_Shield_Spike_1p_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Shield_Spike_1p_C");

	return Clss;
}


// EffectCollection_Shield_Spike_1p_C EffectCollection_Shield_Spike_1p.Default__EffectCollection_Shield_Spike_1p_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Shield_Spike_1p_C* UEffectCollection_Shield_Spike_1p_C::GetDefaultObj()
{
	static class UEffectCollection_Shield_Spike_1p_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Shield_Spike_1p_C*>(UEffectCollection_Shield_Spike_1p_C::StaticClass()->DefaultObject);

	return Default;
}

}

