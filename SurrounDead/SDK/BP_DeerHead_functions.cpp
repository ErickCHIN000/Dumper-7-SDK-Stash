#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeerHead.BP_DeerHead_C
// (Actor)

class UClass* ABP_DeerHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeerHead_C");

	return Clss;
}


// BP_DeerHead_C BP_DeerHead.Default__BP_DeerHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeerHead_C* ABP_DeerHead_C::GetDefaultObj()
{
	static class ABP_DeerHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeerHead_C*>(ABP_DeerHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


