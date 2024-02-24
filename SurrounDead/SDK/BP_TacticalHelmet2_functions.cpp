#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TacticalHelmet2.BP_TacticalHelmet2_C
// (Actor)

class UClass* ABP_TacticalHelmet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TacticalHelmet2_C");

	return Clss;
}


// BP_TacticalHelmet2_C BP_TacticalHelmet2.Default__BP_TacticalHelmet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TacticalHelmet2_C* ABP_TacticalHelmet2_C::GetDefaultObj()
{
	static class ABP_TacticalHelmet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TacticalHelmet2_C*>(ABP_TacticalHelmet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


