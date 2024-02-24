#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HumanBreederT.HumanBreederT_C
// (None)

class UClass* UHumanBreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HumanBreederT_C");

	return Clss;
}


// HumanBreederT_C HumanBreederT.Default__HumanBreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHumanBreederT_C* UHumanBreederT_C::GetDefaultObj()
{
	static class UHumanBreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHumanBreederT_C*>(UHumanBreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


