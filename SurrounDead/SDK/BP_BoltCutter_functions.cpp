#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoltCutter.BP_BoltCutter_C
// (Actor)

class UClass* ABP_BoltCutter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoltCutter_C");

	return Clss;
}


// BP_BoltCutter_C BP_BoltCutter.Default__BP_BoltCutter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoltCutter_C* ABP_BoltCutter_C::GetDefaultObj()
{
	static class ABP_BoltCutter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoltCutter_C*>(ABP_BoltCutter_C::StaticClass()->DefaultObject);

	return Default;
}

}


