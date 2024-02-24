#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridUnicornF.HybridUnicornF_C
// (None)

class UClass* UHybridUnicornF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridUnicornF_C");

	return Clss;
}


// HybridUnicornF_C HybridUnicornF.Default__HybridUnicornF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridUnicornF_C* UHybridUnicornF_C::GetDefaultObj()
{
	static class UHybridUnicornF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridUnicornF_C*>(UHybridUnicornF_C::StaticClass()->DefaultObject);

	return Default;
}

}


