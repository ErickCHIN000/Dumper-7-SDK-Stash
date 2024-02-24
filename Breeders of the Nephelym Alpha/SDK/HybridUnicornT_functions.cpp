#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridUnicornT.HybridUnicornT_C
// (None)

class UClass* UHybridUnicornT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridUnicornT_C");

	return Clss;
}


// HybridUnicornT_C HybridUnicornT.Default__HybridUnicornT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridUnicornT_C* UHybridUnicornT_C::GetDefaultObj()
{
	static class UHybridUnicornT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridUnicornT_C*>(UHybridUnicornT_C::StaticClass()->DefaultObject);

	return Default;
}

}


