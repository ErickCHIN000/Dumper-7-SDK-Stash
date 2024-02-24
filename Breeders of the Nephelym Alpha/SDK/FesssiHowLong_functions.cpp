#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiHowLong.FesssiHowLong_C
// (None)

class UClass* UFesssiHowLong_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiHowLong_C");

	return Clss;
}


// FesssiHowLong_C FesssiHowLong.Default__FesssiHowLong_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiHowLong_C* UFesssiHowLong_C::GetDefaultObj()
{
	static class UFesssiHowLong_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiHowLong_C*>(UFesssiHowLong_C::StaticClass()->DefaultObject);

	return Default;
}

}


