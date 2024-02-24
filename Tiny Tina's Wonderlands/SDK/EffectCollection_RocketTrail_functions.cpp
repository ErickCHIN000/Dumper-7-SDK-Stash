#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_RocketTrail.EffectCollection_RocketTrail_C
// (None)

class UClass* UEffectCollection_RocketTrail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_RocketTrail_C");

	return Clss;
}


// EffectCollection_RocketTrail_C EffectCollection_RocketTrail.Default__EffectCollection_RocketTrail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_RocketTrail_C* UEffectCollection_RocketTrail_C::GetDefaultObj()
{
	static class UEffectCollection_RocketTrail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_RocketTrail_C*>(UEffectCollection_RocketTrail_C::StaticClass()->DefaultObject);

	return Default;
}

}


