#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyBatF.HarpyBatF_C
// (None)

class UClass* UHarpyBatF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyBatF_C");

	return Clss;
}


// HarpyBatF_C HarpyBatF.Default__HarpyBatF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpyBatF_C* UHarpyBatF_C::GetDefaultObj()
{
	static class UHarpyBatF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpyBatF_C*>(UHarpyBatF_C::StaticClass()->DefaultObject);

	return Default;
}

}


