#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hybrid.Hybrid_C
// (None)

class UClass* UHybrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hybrid_C");

	return Clss;
}


// Hybrid_C Hybrid.Default__Hybrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybrid_C* UHybrid_C::GetDefaultObj()
{
	static class UHybrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybrid_C*>(UHybrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


