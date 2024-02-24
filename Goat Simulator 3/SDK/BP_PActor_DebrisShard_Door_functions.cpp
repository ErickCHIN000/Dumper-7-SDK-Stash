#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PActor_DebrisShard_Door.BP_PActor_DebrisShard_Door_C
// (Actor)

class UClass* ABP_PActor_DebrisShard_Door_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PActor_DebrisShard_Door_C");

	return Clss;
}


// BP_PActor_DebrisShard_Door_C BP_PActor_DebrisShard_Door.Default__BP_PActor_DebrisShard_Door_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PActor_DebrisShard_Door_C* ABP_PActor_DebrisShard_Door_C::GetDefaultObj()
{
	static class ABP_PActor_DebrisShard_Door_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PActor_DebrisShard_Door_C*>(ABP_PActor_DebrisShard_Door_C::StaticClass()->DefaultObject);

	return Default;
}

}


