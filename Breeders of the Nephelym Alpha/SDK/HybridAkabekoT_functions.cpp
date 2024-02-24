#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridAkabekoT.HybridAkabekoT_C
// (None)

class UClass* UHybridAkabekoT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridAkabekoT_C");

	return Clss;
}


// HybridAkabekoT_C HybridAkabekoT.Default__HybridAkabekoT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridAkabekoT_C* UHybridAkabekoT_C::GetDefaultObj()
{
	static class UHybridAkabekoT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridAkabekoT_C*>(UHybridAkabekoT_C::StaticClass()->DefaultObject);

	return Default;
}

}


