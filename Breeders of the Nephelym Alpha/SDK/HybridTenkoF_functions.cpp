#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridTenkoF.HybridTenkoF_C
// (None)

class UClass* UHybridTenkoF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridTenkoF_C");

	return Clss;
}


// HybridTenkoF_C HybridTenkoF.Default__HybridTenkoF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridTenkoF_C* UHybridTenkoF_C::GetDefaultObj()
{
	static class UHybridTenkoF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridTenkoF_C*>(UHybridTenkoF_C::StaticClass()->DefaultObject);

	return Default;
}

}


