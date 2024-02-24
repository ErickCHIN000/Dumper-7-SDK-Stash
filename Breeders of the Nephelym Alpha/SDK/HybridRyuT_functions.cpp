#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridRyuT.HybridRyuT_C
// (None)

class UClass* UHybridRyuT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridRyuT_C");

	return Clss;
}


// HybridRyuT_C HybridRyuT.Default__HybridRyuT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridRyuT_C* UHybridRyuT_C::GetDefaultObj()
{
	static class UHybridRyuT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridRyuT_C*>(UHybridRyuT_C::StaticClass()->DefaultObject);

	return Default;
}

}


