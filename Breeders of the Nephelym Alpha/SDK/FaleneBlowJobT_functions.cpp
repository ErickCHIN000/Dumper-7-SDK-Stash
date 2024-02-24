#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneBlowJobT.FaleneBlowJobT_C
// (None)

class UClass* UFaleneBlowJobT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneBlowJobT_C");

	return Clss;
}


// FaleneBlowJobT_C FaleneBlowJobT.Default__FaleneBlowJobT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneBlowJobT_C* UFaleneBlowJobT_C::GetDefaultObj()
{
	static class UFaleneBlowJobT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneBlowJobT_C*>(UFaleneBlowJobT_C::StaticClass()->DefaultObject);

	return Default;
}

}


