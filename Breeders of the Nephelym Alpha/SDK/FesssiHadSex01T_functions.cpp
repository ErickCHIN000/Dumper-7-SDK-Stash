#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiHadSex01T.FesssiHadSex01T_C
// (None)

class UClass* UFesssiHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiHadSex01T_C");

	return Clss;
}


// FesssiHadSex01T_C FesssiHadSex01T.Default__FesssiHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiHadSex01T_C* UFesssiHadSex01T_C::GetDefaultObj()
{
	static class UFesssiHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiHadSex01T_C*>(UFesssiHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


