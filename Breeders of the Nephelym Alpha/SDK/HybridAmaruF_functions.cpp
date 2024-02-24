#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridAmaruF.HybridAmaruF_C
// (None)

class UClass* UHybridAmaruF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridAmaruF_C");

	return Clss;
}


// HybridAmaruF_C HybridAmaruF.Default__HybridAmaruF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridAmaruF_C* UHybridAmaruF_C::GetDefaultObj()
{
	static class UHybridAmaruF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridAmaruF_C*>(UHybridAmaruF_C::StaticClass()->DefaultObject);

	return Default;
}

}


