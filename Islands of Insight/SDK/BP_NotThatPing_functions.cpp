#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NotThatPing.BP_NotThatPing_C
// (Actor)

class UClass* ABP_NotThatPing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NotThatPing_C");

	return Clss;
}


// BP_NotThatPing_C BP_NotThatPing.Default__BP_NotThatPing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NotThatPing_C* ABP_NotThatPing_C::GetDefaultObj()
{
	static class ABP_NotThatPing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NotThatPing_C*>(ABP_NotThatPing_C::StaticClass()->DefaultObject);

	return Default;
}

}


