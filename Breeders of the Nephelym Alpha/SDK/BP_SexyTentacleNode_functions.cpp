#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SexyTentacleNode.BP_SexyTentacleNode_C
// (Actor)

class UClass* ABP_SexyTentacleNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SexyTentacleNode_C");

	return Clss;
}


// BP_SexyTentacleNode_C BP_SexyTentacleNode.Default__BP_SexyTentacleNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SexyTentacleNode_C* ABP_SexyTentacleNode_C::GetDefaultObj()
{
	static class ABP_SexyTentacleNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SexyTentacleNode_C*>(ABP_SexyTentacleNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


