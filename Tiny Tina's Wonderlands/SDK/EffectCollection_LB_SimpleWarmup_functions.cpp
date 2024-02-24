#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_LB_SimpleWarmup.EffectCollection_LB_SimpleWarmup_C
// (None)

class UClass* UEffectCollection_LB_SimpleWarmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_LB_SimpleWarmup_C");

	return Clss;
}


// EffectCollection_LB_SimpleWarmup_C EffectCollection_LB_SimpleWarmup.Default__EffectCollection_LB_SimpleWarmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_LB_SimpleWarmup_C* UEffectCollection_LB_SimpleWarmup_C::GetDefaultObj()
{
	static class UEffectCollection_LB_SimpleWarmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_LB_SimpleWarmup_C*>(UEffectCollection_LB_SimpleWarmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


