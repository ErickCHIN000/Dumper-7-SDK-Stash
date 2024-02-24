#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernHadSex03.FernHadSex03_C
// (None)

class UClass* UFernHadSex03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernHadSex03_C");

	return Clss;
}


// FernHadSex03_C FernHadSex03.Default__FernHadSex03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernHadSex03_C* UFernHadSex03_C::GetDefaultObj()
{
	static class UFernHadSex03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernHadSex03_C*>(UFernHadSex03_C::StaticClass()->DefaultObject);

	return Default;
}

}


