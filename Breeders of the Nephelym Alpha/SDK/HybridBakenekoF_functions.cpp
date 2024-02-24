#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridBakenekoF.HybridBakenekoF_C
// (None)

class UClass* UHybridBakenekoF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridBakenekoF_C");

	return Clss;
}


// HybridBakenekoF_C HybridBakenekoF.Default__HybridBakenekoF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridBakenekoF_C* UHybridBakenekoF_C::GetDefaultObj()
{
	static class UHybridBakenekoF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridBakenekoF_C*>(UHybridBakenekoF_C::StaticClass()->DefaultObject);

	return Default;
}

}


