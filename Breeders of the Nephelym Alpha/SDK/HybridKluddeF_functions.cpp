#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKluddeF.HybridKluddeF_C
// (None)

class UClass* UHybridKluddeF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKluddeF_C");

	return Clss;
}


// HybridKluddeF_C HybridKluddeF.Default__HybridKluddeF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKluddeF_C* UHybridKluddeF_C::GetDefaultObj()
{
	static class UHybridKluddeF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKluddeF_C*>(UHybridKluddeF_C::StaticClass()->DefaultObject);

	return Default;
}

}


