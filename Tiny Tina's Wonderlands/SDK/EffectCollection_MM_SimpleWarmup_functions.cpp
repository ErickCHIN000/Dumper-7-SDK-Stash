#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_MM_SimpleWarmup.EffectCollection_MM_SimpleWarmup_C
// (None)

class UClass* UEffectCollection_MM_SimpleWarmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_MM_SimpleWarmup_C");

	return Clss;
}


// EffectCollection_MM_SimpleWarmup_C EffectCollection_MM_SimpleWarmup.Default__EffectCollection_MM_SimpleWarmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_MM_SimpleWarmup_C* UEffectCollection_MM_SimpleWarmup_C::GetDefaultObj()
{
	static class UEffectCollection_MM_SimpleWarmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_MM_SimpleWarmup_C*>(UEffectCollection_MM_SimpleWarmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


