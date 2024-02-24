#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass XBench_Relay.XBench_Relay_C
// (Actor)

class UClass* AXBench_Relay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XBench_Relay_C");

	return Clss;
}


// XBench_Relay_C XBench_Relay.Default__XBench_Relay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AXBench_Relay_C* AXBench_Relay_C::GetDefaultObj()
{
	static class AXBench_Relay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AXBench_Relay_C*>(AXBench_Relay_C::StaticClass()->DefaultObject);

	return Default;
}

}


