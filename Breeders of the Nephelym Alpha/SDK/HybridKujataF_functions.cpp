#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKujataF.HybridKujataF_C
// (None)

class UClass* UHybridKujataF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKujataF_C");

	return Clss;
}


// HybridKujataF_C HybridKujataF.Default__HybridKujataF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKujataF_C* UHybridKujataF_C::GetDefaultObj()
{
	static class UHybridKujataF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKujataF_C*>(UHybridKujataF_C::StaticClass()->DefaultObject);

	return Default;
}

}


