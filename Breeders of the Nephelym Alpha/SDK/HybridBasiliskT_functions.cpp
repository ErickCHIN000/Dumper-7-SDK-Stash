#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridBasiliskT.HybridBasiliskT_C
// (None)

class UClass* UHybridBasiliskT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridBasiliskT_C");

	return Clss;
}


// HybridBasiliskT_C HybridBasiliskT.Default__HybridBasiliskT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridBasiliskT_C* UHybridBasiliskT_C::GetDefaultObj()
{
	static class UHybridBasiliskT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridBasiliskT_C*>(UHybridBasiliskT_C::StaticClass()->DefaultObject);

	return Default;
}

}


