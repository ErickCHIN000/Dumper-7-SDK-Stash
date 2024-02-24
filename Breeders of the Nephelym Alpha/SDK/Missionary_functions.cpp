#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Missionary.Missionary_C
// (None)

class UClass* UMissionary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Missionary_C");

	return Clss;
}


// Missionary_C Missionary.Default__Missionary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionary_C* UMissionary_C::GetDefaultObj()
{
	static class UMissionary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionary_C*>(UMissionary_C::StaticClass()->DefaultObject);

	return Default;
}

}


