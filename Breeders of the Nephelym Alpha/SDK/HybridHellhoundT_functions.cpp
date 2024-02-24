#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridHellhoundT.HybridHellhoundT_C
// (None)

class UClass* UHybridHellhoundT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridHellhoundT_C");

	return Clss;
}


// HybridHellhoundT_C HybridHellhoundT.Default__HybridHellhoundT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridHellhoundT_C* UHybridHellhoundT_C::GetDefaultObj()
{
	static class UHybridHellhoundT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridHellhoundT_C*>(UHybridHellhoundT_C::StaticClass()->DefaultObject);

	return Default;
}

}


