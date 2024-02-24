#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cshake_shadowMeleeReactUR_00.cshake_shadowMeleeReactUR_00_C
// (None)

class UClass* UCshake_shadowMeleeReactUR_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cshake_shadowMeleeReactUR_00_C");

	return Clss;
}


// cshake_shadowMeleeReactUR_00_C cshake_shadowMeleeReactUR_00.Default__cshake_shadowMeleeReactUR_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCshake_shadowMeleeReactUR_00_C* UCshake_shadowMeleeReactUR_00_C::GetDefaultObj()
{
	static class UCshake_shadowMeleeReactUR_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCshake_shadowMeleeReactUR_00_C*>(UCshake_shadowMeleeReactUR_00_C::StaticClass()->DefaultObject);

	return Default;
}

}


