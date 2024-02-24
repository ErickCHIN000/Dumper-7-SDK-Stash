#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cshake_shadowMeleeReactDL_00.cshake_shadowMeleeReactDL_00_C
// (None)

class UClass* UCshake_shadowMeleeReactDL_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cshake_shadowMeleeReactDL_00_C");

	return Clss;
}


// cshake_shadowMeleeReactDL_00_C cshake_shadowMeleeReactDL_00.Default__cshake_shadowMeleeReactDL_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCshake_shadowMeleeReactDL_00_C* UCshake_shadowMeleeReactDL_00_C::GetDefaultObj()
{
	static class UCshake_shadowMeleeReactDL_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCshake_shadowMeleeReactDL_00_C*>(UCshake_shadowMeleeReactDL_00_C::StaticClass()->DefaultObject);

	return Default;
}

}


