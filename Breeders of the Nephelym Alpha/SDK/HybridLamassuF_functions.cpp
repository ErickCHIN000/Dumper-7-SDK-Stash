#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridLamassuF.HybridLamassuF_C
// (None)

class UClass* UHybridLamassuF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridLamassuF_C");

	return Clss;
}


// HybridLamassuF_C HybridLamassuF.Default__HybridLamassuF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridLamassuF_C* UHybridLamassuF_C::GetDefaultObj()
{
	static class UHybridLamassuF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridLamassuF_C*>(UHybridLamassuF_C::StaticClass()->DefaultObject);

	return Default;
}

}


