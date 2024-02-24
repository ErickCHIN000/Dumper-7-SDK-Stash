#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_XBench.KeyCard_XBench_C
// (Actor)

class UClass* AKeyCard_XBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_XBench_C");

	return Clss;
}


// KeyCard_XBench_C KeyCard_XBench.Default__KeyCard_XBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_XBench_C* AKeyCard_XBench_C::GetDefaultObj()
{
	static class AKeyCard_XBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_XBench_C*>(AKeyCard_XBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


