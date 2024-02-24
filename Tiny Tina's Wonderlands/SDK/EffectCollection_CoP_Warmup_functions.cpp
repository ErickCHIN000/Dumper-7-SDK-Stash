#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_CoP_Warmup.EffectCollection_CoP_Warmup_C
// (None)

class UClass* UEffectCollection_CoP_Warmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_CoP_Warmup_C");

	return Clss;
}


// EffectCollection_CoP_Warmup_C EffectCollection_CoP_Warmup.Default__EffectCollection_CoP_Warmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_CoP_Warmup_C* UEffectCollection_CoP_Warmup_C::GetDefaultObj()
{
	static class UEffectCollection_CoP_Warmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_CoP_Warmup_C*>(UEffectCollection_CoP_Warmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


