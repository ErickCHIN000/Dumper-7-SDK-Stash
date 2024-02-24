#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiWantAss.FesssiWantAss_C
// (None)

class UClass* UFesssiWantAss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiWantAss_C");

	return Clss;
}


// FesssiWantAss_C FesssiWantAss.Default__FesssiWantAss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiWantAss_C* UFesssiWantAss_C::GetDefaultObj()
{
	static class UFesssiWantAss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiWantAss_C*>(UFesssiWantAss_C::StaticClass()->DefaultObject);

	return Default;
}

}


