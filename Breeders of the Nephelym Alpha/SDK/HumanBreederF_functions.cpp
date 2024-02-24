#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HumanBreederF.HumanBreederF_C
// (None)

class UClass* UHumanBreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HumanBreederF_C");

	return Clss;
}


// HumanBreederF_C HumanBreederF.Default__HumanBreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHumanBreederF_C* UHumanBreederF_C::GetDefaultObj()
{
	static class UHumanBreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHumanBreederF_C*>(UHumanBreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


