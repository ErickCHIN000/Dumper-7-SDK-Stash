#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridBasiliskF.HybridBasiliskF_C
// (None)

class UClass* UHybridBasiliskF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridBasiliskF_C");

	return Clss;
}


// HybridBasiliskF_C HybridBasiliskF.Default__HybridBasiliskF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridBasiliskF_C* UHybridBasiliskF_C::GetDefaultObj()
{
	static class UHybridBasiliskF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridBasiliskF_C*>(UHybridBasiliskF_C::StaticClass()->DefaultObject);

	return Default;
}

}


