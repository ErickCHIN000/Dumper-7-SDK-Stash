#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridAmaruT.HybridAmaruT_C
// (None)

class UClass* UHybridAmaruT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridAmaruT_C");

	return Clss;
}


// HybridAmaruT_C HybridAmaruT.Default__HybridAmaruT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridAmaruT_C* UHybridAmaruT_C::GetDefaultObj()
{
	static class UHybridAmaruT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridAmaruT_C*>(UHybridAmaruT_C::StaticClass()->DefaultObject);

	return Default;
}

}


