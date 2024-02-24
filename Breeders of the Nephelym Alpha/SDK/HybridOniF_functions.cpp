#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridOniF.HybridOniF_C
// (None)

class UClass* UHybridOniF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridOniF_C");

	return Clss;
}


// HybridOniF_C HybridOniF.Default__HybridOniF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridOniF_C* UHybridOniF_C::GetDefaultObj()
{
	static class UHybridOniF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridOniF_C*>(UHybridOniF_C::StaticClass()->DefaultObject);

	return Default;
}

}


