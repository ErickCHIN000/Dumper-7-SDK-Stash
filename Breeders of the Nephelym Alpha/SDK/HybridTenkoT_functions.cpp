#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridTenkoT.HybridTenkoT_C
// (None)

class UClass* UHybridTenkoT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridTenkoT_C");

	return Clss;
}


// HybridTenkoT_C HybridTenkoT.Default__HybridTenkoT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridTenkoT_C* UHybridTenkoT_C::GetDefaultObj()
{
	static class UHybridTenkoT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridTenkoT_C*>(UHybridTenkoT_C::StaticClass()->DefaultObject);

	return Default;
}

}


