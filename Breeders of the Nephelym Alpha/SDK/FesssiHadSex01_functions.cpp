#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiHadSex01.FesssiHadSex01_C
// (None)

class UClass* UFesssiHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiHadSex01_C");

	return Clss;
}


// FesssiHadSex01_C FesssiHadSex01.Default__FesssiHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiHadSex01_C* UFesssiHadSex01_C::GetDefaultObj()
{
	static class UFesssiHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiHadSex01_C*>(UFesssiHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


