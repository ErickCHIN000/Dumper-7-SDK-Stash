#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridCatsuneF.HybridCatsuneF_C
// (None)

class UClass* UHybridCatsuneF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridCatsuneF_C");

	return Clss;
}


// HybridCatsuneF_C HybridCatsuneF.Default__HybridCatsuneF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridCatsuneF_C* UHybridCatsuneF_C::GetDefaultObj()
{
	static class UHybridCatsuneF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridCatsuneF_C*>(UHybridCatsuneF_C::StaticClass()->DefaultObject);

	return Default;
}

}


