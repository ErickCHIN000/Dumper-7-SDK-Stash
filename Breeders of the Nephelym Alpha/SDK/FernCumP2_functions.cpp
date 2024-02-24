#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernCumP2.FernCumP2_C
// (None)

class UClass* UFernCumP2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernCumP2_C");

	return Clss;
}


// FernCumP2_C FernCumP2.Default__FernCumP2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernCumP2_C* UFernCumP2_C::GetDefaultObj()
{
	static class UFernCumP2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernCumP2_C*>(UFernCumP2_C::StaticClass()->DefaultObject);

	return Default;
}

}


