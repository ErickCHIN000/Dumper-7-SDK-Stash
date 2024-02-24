#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureEffectBase.GE_CreatureEffectBase_C
// (None)

class UClass* UGE_CreatureEffectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureEffectBase_C");

	return Clss;
}


// GE_CreatureEffectBase_C GE_CreatureEffectBase.Default__GE_CreatureEffectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureEffectBase_C* UGE_CreatureEffectBase_C::GetDefaultObj()
{
	static class UGE_CreatureEffectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureEffectBase_C*>(UGE_CreatureEffectBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


