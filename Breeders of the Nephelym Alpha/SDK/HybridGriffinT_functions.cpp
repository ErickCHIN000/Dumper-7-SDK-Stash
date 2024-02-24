#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridGriffinT.HybridGriffinT_C
// (None)

class UClass* UHybridGriffinT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridGriffinT_C");

	return Clss;
}


// HybridGriffinT_C HybridGriffinT.Default__HybridGriffinT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridGriffinT_C* UHybridGriffinT_C::GetDefaultObj()
{
	static class UHybridGriffinT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridGriffinT_C*>(UHybridGriffinT_C::StaticClass()->DefaultObject);

	return Default;
}

}


