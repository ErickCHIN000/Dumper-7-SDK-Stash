#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridJabberwockF.HybridJabberwockF_C
// (None)

class UClass* UHybridJabberwockF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridJabberwockF_C");

	return Clss;
}


// HybridJabberwockF_C HybridJabberwockF.Default__HybridJabberwockF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridJabberwockF_C* UHybridJabberwockF_C::GetDefaultObj()
{
	static class UHybridJabberwockF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridJabberwockF_C*>(UHybridJabberwockF_C::StaticClass()->DefaultObject);

	return Default;
}

}


