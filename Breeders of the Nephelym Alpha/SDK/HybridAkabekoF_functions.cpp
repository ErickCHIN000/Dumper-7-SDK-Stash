#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridAkabekoF.HybridAkabekoF_C
// (None)

class UClass* UHybridAkabekoF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridAkabekoF_C");

	return Clss;
}


// HybridAkabekoF_C HybridAkabekoF.Default__HybridAkabekoF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridAkabekoF_C* UHybridAkabekoF_C::GetDefaultObj()
{
	static class UHybridAkabekoF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridAkabekoF_C*>(UHybridAkabekoF_C::StaticClass()->DefaultObject);

	return Default;
}

}


