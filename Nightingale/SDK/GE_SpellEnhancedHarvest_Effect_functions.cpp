#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpellEnhancedHarvest_Effect.GE_SpellEnhancedHarvest_Effect_C
// (None)

class UClass* UGE_SpellEnhancedHarvest_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpellEnhancedHarvest_Effect_C");

	return Clss;
}


// GE_SpellEnhancedHarvest_Effect_C GE_SpellEnhancedHarvest_Effect.Default__GE_SpellEnhancedHarvest_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpellEnhancedHarvest_Effect_C* UGE_SpellEnhancedHarvest_Effect_C::GetDefaultObj()
{
	static class UGE_SpellEnhancedHarvest_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpellEnhancedHarvest_Effect_C*>(UGE_SpellEnhancedHarvest_Effect_C::StaticClass()->DefaultObject);

	return Default;
}

}


