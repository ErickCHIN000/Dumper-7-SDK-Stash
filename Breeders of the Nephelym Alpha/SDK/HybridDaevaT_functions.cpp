#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridDaevaT.HybridDaevaT_C
// (None)

class UClass* UHybridDaevaT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridDaevaT_C");

	return Clss;
}


// HybridDaevaT_C HybridDaevaT.Default__HybridDaevaT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridDaevaT_C* UHybridDaevaT_C::GetDefaultObj()
{
	static class UHybridDaevaT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridDaevaT_C*>(UHybridDaevaT_C::StaticClass()->DefaultObject);

	return Default;
}

}


