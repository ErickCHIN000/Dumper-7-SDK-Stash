#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKusarikkuT.HybridKusarikkuT_C
// (None)

class UClass* UHybridKusarikkuT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKusarikkuT_C");

	return Clss;
}


// HybridKusarikkuT_C HybridKusarikkuT.Default__HybridKusarikkuT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKusarikkuT_C* UHybridKusarikkuT_C::GetDefaultObj()
{
	static class UHybridKusarikkuT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKusarikkuT_C*>(UHybridKusarikkuT_C::StaticClass()->DefaultObject);

	return Default;
}

}


