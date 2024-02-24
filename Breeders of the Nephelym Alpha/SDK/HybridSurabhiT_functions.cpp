#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridSurabhiT.HybridSurabhiT_C
// (None)

class UClass* UHybridSurabhiT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridSurabhiT_C");

	return Clss;
}


// HybridSurabhiT_C HybridSurabhiT.Default__HybridSurabhiT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridSurabhiT_C* UHybridSurabhiT_C::GetDefaultObj()
{
	static class UHybridSurabhiT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridSurabhiT_C*>(UHybridSurabhiT_C::StaticClass()->DefaultObject);

	return Default;
}

}


