#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKujataT.HybridKujataT_C
// (None)

class UClass* UHybridKujataT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKujataT_C");

	return Clss;
}


// HybridKujataT_C HybridKujataT.Default__HybridKujataT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKujataT_C* UHybridKujataT_C::GetDefaultObj()
{
	static class UHybridKujataT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKujataT_C*>(UHybridKujataT_C::StaticClass()->DefaultObject);

	return Default;
}

}


