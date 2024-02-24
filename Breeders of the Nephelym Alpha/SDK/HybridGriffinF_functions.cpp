#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridGriffinF.HybridGriffinF_C
// (None)

class UClass* UHybridGriffinF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridGriffinF_C");

	return Clss;
}


// HybridGriffinF_C HybridGriffinF.Default__HybridGriffinF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridGriffinF_C* UHybridGriffinF_C::GetDefaultObj()
{
	static class UHybridGriffinF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridGriffinF_C*>(UHybridGriffinF_C::StaticClass()->DefaultObject);

	return Default;
}

}


