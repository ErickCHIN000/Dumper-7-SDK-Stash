#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernMilk.FernMilk_C
// (None)

class UClass* UFernMilk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernMilk_C");

	return Clss;
}


// FernMilk_C FernMilk.Default__FernMilk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernMilk_C* UFernMilk_C::GetDefaultObj()
{
	static class UFernMilk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernMilk_C*>(UFernMilk_C::StaticClass()->DefaultObject);

	return Default;
}

}


