#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKluddeT.HybridKluddeT_C
// (None)

class UClass* UHybridKluddeT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKluddeT_C");

	return Clss;
}


// HybridKluddeT_C HybridKluddeT.Default__HybridKluddeT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKluddeT_C* UHybridKluddeT_C::GetDefaultObj()
{
	static class UHybridKluddeT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKluddeT_C*>(UHybridKluddeT_C::StaticClass()->DefaultObject);

	return Default;
}

}


