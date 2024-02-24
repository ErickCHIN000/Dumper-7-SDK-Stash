#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TacticalHelmet1.BP_TacticalHelmet1_C
// (Actor)

class UClass* ABP_TacticalHelmet1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TacticalHelmet1_C");

	return Clss;
}


// BP_TacticalHelmet1_C BP_TacticalHelmet1.Default__BP_TacticalHelmet1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TacticalHelmet1_C* ABP_TacticalHelmet1_C::GetDefaultObj()
{
	static class ABP_TacticalHelmet1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TacticalHelmet1_C*>(ABP_TacticalHelmet1_C::StaticClass()->DefaultObject);

	return Default;
}

}


