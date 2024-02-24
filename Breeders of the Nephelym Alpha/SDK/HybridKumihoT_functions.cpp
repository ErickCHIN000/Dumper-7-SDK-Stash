#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKumihoT.HybridKumihoT_C
// (None)

class UClass* UHybridKumihoT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKumihoT_C");

	return Clss;
}


// HybridKumihoT_C HybridKumihoT.Default__HybridKumihoT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKumihoT_C* UHybridKumihoT_C::GetDefaultObj()
{
	static class UHybridKumihoT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKumihoT_C*>(UHybridKumihoT_C::StaticClass()->DefaultObject);

	return Default;
}

}


