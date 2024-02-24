#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneBlowJob_BreederT.FaleneBlowJob_BreederT_C
// (None)

class UClass* UFaleneBlowJob_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneBlowJob_BreederT_C");

	return Clss;
}


// FaleneBlowJob_BreederT_C FaleneBlowJob_BreederT.Default__FaleneBlowJob_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneBlowJob_BreederT_C* UFaleneBlowJob_BreederT_C::GetDefaultObj()
{
	static class UFaleneBlowJob_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneBlowJob_BreederT_C*>(UFaleneBlowJob_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


