#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridLamassuT.HybridLamassuT_C
// (None)

class UClass* UHybridLamassuT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridLamassuT_C");

	return Clss;
}


// HybridLamassuT_C HybridLamassuT.Default__HybridLamassuT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridLamassuT_C* UHybridLamassuT_C::GetDefaultObj()
{
	static class UHybridLamassuT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridLamassuT_C*>(UHybridLamassuT_C::StaticClass()->DefaultObject);

	return Default;
}

}


