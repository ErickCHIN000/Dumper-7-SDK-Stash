#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridJabberwockT.HybridJabberwockT_C
// (None)

class UClass* UHybridJabberwockT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridJabberwockT_C");

	return Clss;
}


// HybridJabberwockT_C HybridJabberwockT.Default__HybridJabberwockT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridJabberwockT_C* UHybridJabberwockT_C::GetDefaultObj()
{
	static class UHybridJabberwockT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridJabberwockT_C*>(UHybridJabberwockT_C::StaticClass()->DefaultObject);

	return Default;
}

}


