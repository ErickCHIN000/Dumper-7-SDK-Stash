#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernCum_01.FernCum_01_C
// (None)

class UClass* UFernCum_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernCum_01_C");

	return Clss;
}


// FernCum_01_C FernCum_01.Default__FernCum_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernCum_01_C* UFernCum_01_C::GetDefaultObj()
{
	static class UFernCum_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernCum_01_C*>(UFernCum_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


