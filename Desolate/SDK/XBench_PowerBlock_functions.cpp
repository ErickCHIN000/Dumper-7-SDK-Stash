#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass XBench_PowerBlock.XBench_PowerBlock_C
// (Actor)

class UClass* AXBench_PowerBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XBench_PowerBlock_C");

	return Clss;
}


// XBench_PowerBlock_C XBench_PowerBlock.Default__XBench_PowerBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AXBench_PowerBlock_C* AXBench_PowerBlock_C::GetDefaultObj()
{
	static class AXBench_PowerBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AXBench_PowerBlock_C*>(AXBench_PowerBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


