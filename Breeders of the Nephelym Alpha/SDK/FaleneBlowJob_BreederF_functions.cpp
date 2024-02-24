#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneBlowJob_BreederF.FaleneBlowJob_BreederF_C
// (None)

class UClass* UFaleneBlowJob_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneBlowJob_BreederF_C");

	return Clss;
}


// FaleneBlowJob_BreederF_C FaleneBlowJob_BreederF.Default__FaleneBlowJob_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneBlowJob_BreederF_C* UFaleneBlowJob_BreederF_C::GetDefaultObj()
{
	static class UFaleneBlowJob_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneBlowJob_BreederF_C*>(UFaleneBlowJob_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


