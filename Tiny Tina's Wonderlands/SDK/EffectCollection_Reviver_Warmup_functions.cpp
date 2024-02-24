#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Reviver_Warmup.EffectCollection_Reviver_Warmup_C
// (None)

class UClass* UEffectCollection_Reviver_Warmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Reviver_Warmup_C");

	return Clss;
}


// EffectCollection_Reviver_Warmup_C EffectCollection_Reviver_Warmup.Default__EffectCollection_Reviver_Warmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Reviver_Warmup_C* UEffectCollection_Reviver_Warmup_C::GetDefaultObj()
{
	static class UEffectCollection_Reviver_Warmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Reviver_Warmup_C*>(UEffectCollection_Reviver_Warmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


