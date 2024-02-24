#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyBatT.HarpyBatT_C
// (None)

class UClass* UHarpyBatT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyBatT_C");

	return Clss;
}


// HarpyBatT_C HarpyBatT.Default__HarpyBatT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpyBatT_C* UHarpyBatT_C::GetDefaultObj()
{
	static class UHarpyBatT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpyBatT_C*>(UHarpyBatT_C::StaticClass()->DefaultObject);

	return Default;
}

}


