#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridBakenekoT.HybridBakenekoT_C
// (None)

class UClass* UHybridBakenekoT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridBakenekoT_C");

	return Clss;
}


// HybridBakenekoT_C HybridBakenekoT.Default__HybridBakenekoT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridBakenekoT_C* UHybridBakenekoT_C::GetDefaultObj()
{
	static class UHybridBakenekoT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridBakenekoT_C*>(UHybridBakenekoT_C::StaticClass()->DefaultObject);

	return Default;
}

}


