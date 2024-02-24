#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyKestrelF.HarpyKestrelF_C
// (None)

class UClass* UHarpyKestrelF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyKestrelF_C");

	return Clss;
}


// HarpyKestrelF_C HarpyKestrelF.Default__HarpyKestrelF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpyKestrelF_C* UHarpyKestrelF_C::GetDefaultObj()
{
	static class UHarpyKestrelF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpyKestrelF_C*>(UHarpyKestrelF_C::StaticClass()->DefaultObject);

	return Default;
}

}


