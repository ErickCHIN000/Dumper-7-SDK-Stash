#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridOniT.HybridOniT_C
// (None)

class UClass* UHybridOniT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridOniT_C");

	return Clss;
}


// HybridOniT_C HybridOniT.Default__HybridOniT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridOniT_C* UHybridOniT_C::GetDefaultObj()
{
	static class UHybridOniT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridOniT_C*>(UHybridOniT_C::StaticClass()->DefaultObject);

	return Default;
}

}


