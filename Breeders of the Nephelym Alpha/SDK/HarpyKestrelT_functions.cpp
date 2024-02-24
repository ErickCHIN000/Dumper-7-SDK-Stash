#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyKestrelT.HarpyKestrelT_C
// (None)

class UClass* UHarpyKestrelT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyKestrelT_C");

	return Clss;
}


// HarpyKestrelT_C HarpyKestrelT.Default__HarpyKestrelT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpyKestrelT_C* UHarpyKestrelT_C::GetDefaultObj()
{
	static class UHarpyKestrelT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpyKestrelT_C*>(UHarpyKestrelT_C::StaticClass()->DefaultObject);

	return Default;
}

}


