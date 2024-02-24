#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyAviary.HarpyAviary_C
// (None)

class UClass* UHarpyAviary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyAviary_C");

	return Clss;
}


// HarpyAviary_C HarpyAviary.Default__HarpyAviary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpyAviary_C* UHarpyAviary_C::GetDefaultObj()
{
	static class UHarpyAviary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpyAviary_C*>(UHarpyAviary_C::StaticClass()->DefaultObject);

	return Default;
}

}


