#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridHellhoundF.HybridHellhoundF_C
// (None)

class UClass* UHybridHellhoundF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridHellhoundF_C");

	return Clss;
}


// HybridHellhoundF_C HybridHellhoundF.Default__HybridHellhoundF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridHellhoundF_C* UHybridHellhoundF_C::GetDefaultObj()
{
	static class UHybridHellhoundF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridHellhoundF_C*>(UHybridHellhoundF_C::StaticClass()->DefaultObject);

	return Default;
}

}


