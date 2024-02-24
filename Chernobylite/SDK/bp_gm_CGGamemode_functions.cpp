#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_gm_CGGamemode.bp_gm_CGGamemode_C
// (Actor)

class UClass* Abp_gm_CGGamemode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_gm_CGGamemode_C");

	return Clss;
}


// bp_gm_CGGamemode_C bp_gm_CGGamemode.Default__bp_gm_CGGamemode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_gm_CGGamemode_C* Abp_gm_CGGamemode_C::GetDefaultObj()
{
	static class Abp_gm_CGGamemode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_gm_CGGamemode_C*>(Abp_gm_CGGamemode_C::StaticClass()->DefaultObject);

	return Default;
}

}


