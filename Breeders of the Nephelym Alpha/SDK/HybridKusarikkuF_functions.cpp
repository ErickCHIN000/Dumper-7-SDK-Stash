#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridKusarikkuF.HybridKusarikkuF_C
// (None)

class UClass* UHybridKusarikkuF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridKusarikkuF_C");

	return Clss;
}


// HybridKusarikkuF_C HybridKusarikkuF.Default__HybridKusarikkuF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridKusarikkuF_C* UHybridKusarikkuF_C::GetDefaultObj()
{
	static class UHybridKusarikkuF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridKusarikkuF_C*>(UHybridKusarikkuF_C::StaticClass()->DefaultObject);

	return Default;
}

}


