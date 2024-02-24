#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalApplyEffectComponent.ArsenalApplyEffectComponent_C
// (None)

class UClass* UArsenalApplyEffectComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalApplyEffectComponent_C");

	return Clss;
}


// ArsenalApplyEffectComponent_C ArsenalApplyEffectComponent.Default__ArsenalApplyEffectComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalApplyEffectComponent_C* UArsenalApplyEffectComponent_C::GetDefaultObj()
{
	static class UArsenalApplyEffectComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalApplyEffectComponent_C*>(UArsenalApplyEffectComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


