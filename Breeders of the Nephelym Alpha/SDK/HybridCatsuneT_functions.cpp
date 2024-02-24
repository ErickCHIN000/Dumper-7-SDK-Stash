#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridCatsuneT.HybridCatsuneT_C
// (None)

class UClass* UHybridCatsuneT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridCatsuneT_C");

	return Clss;
}


// HybridCatsuneT_C HybridCatsuneT.Default__HybridCatsuneT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridCatsuneT_C* UHybridCatsuneT_C::GetDefaultObj()
{
	static class UHybridCatsuneT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridCatsuneT_C*>(UHybridCatsuneT_C::StaticClass()->DefaultObject);

	return Default;
}

}


