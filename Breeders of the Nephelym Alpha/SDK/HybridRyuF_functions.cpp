#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridRyuF.HybridRyuF_C
// (None)

class UClass* UHybridRyuF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridRyuF_C");

	return Clss;
}


// HybridRyuF_C HybridRyuF.Default__HybridRyuF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridRyuF_C* UHybridRyuF_C::GetDefaultObj()
{
	static class UHybridRyuF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridRyuF_C*>(UHybridRyuF_C::StaticClass()->DefaultObject);

	return Default;
}

}


