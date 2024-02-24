#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneHadSex01.FaleneHadSex01_C
// (None)

class UClass* UFaleneHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneHadSex01_C");

	return Clss;
}


// FaleneHadSex01_C FaleneHadSex01.Default__FaleneHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneHadSex01_C* UFaleneHadSex01_C::GetDefaultObj()
{
	static class UFaleneHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneHadSex01_C*>(UFaleneHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


