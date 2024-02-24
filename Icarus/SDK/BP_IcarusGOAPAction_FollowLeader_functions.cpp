#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_FollowLeader.BP_IcarusGOAPAction_FollowLeader_C
// (None)

class UClass* UBP_IcarusGOAPAction_FollowLeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_FollowLeader_C");

	return Clss;
}


// BP_IcarusGOAPAction_FollowLeader_C BP_IcarusGOAPAction_FollowLeader.Default__BP_IcarusGOAPAction_FollowLeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_FollowLeader_C* UBP_IcarusGOAPAction_FollowLeader_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_FollowLeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_FollowLeader_C*>(UBP_IcarusGOAPAction_FollowLeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


