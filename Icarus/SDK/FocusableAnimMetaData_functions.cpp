#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FocusableAnimMetaData.FocusableAnimMetaData_C
// (None)

class UClass* UFocusableAnimMetaData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FocusableAnimMetaData_C");

	return Clss;
}


// FocusableAnimMetaData_C FocusableAnimMetaData.Default__FocusableAnimMetaData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFocusableAnimMetaData_C* UFocusableAnimMetaData_C::GetDefaultObj()
{
	static class UFocusableAnimMetaData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFocusableAnimMetaData_C*>(UFocusableAnimMetaData_C::StaticClass()->DefaultObject);

	return Default;
}

}


