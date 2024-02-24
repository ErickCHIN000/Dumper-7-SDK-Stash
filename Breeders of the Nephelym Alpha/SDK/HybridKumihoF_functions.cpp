#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKumihoF.HybridKumihoF_C
// (None)

class UClass* UHybridKumihoF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKumihoF_C");

	return Clss;
}


// HybridKumihoF_C HybridKumihoF.Default__HybridKumihoF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKumihoF_C* UHybridKumihoF_C::GetDefaultObj()
{
	static class UHybridKumihoF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKumihoF_C*>(UHybridKumihoF_C::StaticClass()->DefaultObject);

	return Default;
}

}


