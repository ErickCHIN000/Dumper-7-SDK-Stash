#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HumanBreederM.HumanBreederM_C
// (None)

class UClass* UHumanBreederM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HumanBreederM_C");

	return Clss;
}


// HumanBreederM_C HumanBreederM.Default__HumanBreederM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHumanBreederM_C* UHumanBreederM_C::GetDefaultObj()
{
	static class UHumanBreederM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHumanBreederM_C*>(UHumanBreederM_C::StaticClass()->DefaultObject);

	return Default;
}

}


