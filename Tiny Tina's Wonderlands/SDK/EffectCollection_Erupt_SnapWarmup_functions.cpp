#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Erupt_SnapWarmup.EffectCollection_Erupt_SnapWarmup_C
// (None)

class UClass* UEffectCollection_Erupt_SnapWarmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Erupt_SnapWarmup_C");

	return Clss;
}


// EffectCollection_Erupt_SnapWarmup_C EffectCollection_Erupt_SnapWarmup.Default__EffectCollection_Erupt_SnapWarmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Erupt_SnapWarmup_C* UEffectCollection_Erupt_SnapWarmup_C::GetDefaultObj()
{
	static class UEffectCollection_Erupt_SnapWarmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Erupt_SnapWarmup_C*>(UEffectCollection_Erupt_SnapWarmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


