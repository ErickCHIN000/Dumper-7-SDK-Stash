#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass XBench_Compressor.XBench_Compressor_C
// (Actor)

class UClass* AXBench_Compressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XBench_Compressor_C");

	return Clss;
}


// XBench_Compressor_C XBench_Compressor.Default__XBench_Compressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AXBench_Compressor_C* AXBench_Compressor_C::GetDefaultObj()
{
	static class AXBench_Compressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AXBench_Compressor_C*>(AXBench_Compressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


