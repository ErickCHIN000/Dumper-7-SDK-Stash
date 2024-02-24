#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WalkieTalkie.BP_WalkieTalkie_C
// (Actor)

class UClass* ABP_WalkieTalkie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WalkieTalkie_C");

	return Clss;
}


// BP_WalkieTalkie_C BP_WalkieTalkie.Default__BP_WalkieTalkie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WalkieTalkie_C* ABP_WalkieTalkie_C::GetDefaultObj()
{
	static class ABP_WalkieTalkie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WalkieTalkie_C*>(ABP_WalkieTalkie_C::StaticClass()->DefaultObject);

	return Default;
}

}


