#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StreamingLevelProxy.BP_StreamingLevelProxy_C
// (Actor)

class UClass* ABP_StreamingLevelProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StreamingLevelProxy_C");

	return Clss;
}


// BP_StreamingLevelProxy_C BP_StreamingLevelProxy.Default__BP_StreamingLevelProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StreamingLevelProxy_C* ABP_StreamingLevelProxy_C::GetDefaultObj()
{
	static class ABP_StreamingLevelProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StreamingLevelProxy_C*>(ABP_StreamingLevelProxy_C::StaticClass()->DefaultObject);

	return Default;
}

}


