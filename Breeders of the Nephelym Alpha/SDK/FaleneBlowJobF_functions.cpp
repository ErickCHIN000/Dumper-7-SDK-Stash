#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneBlowJobF.FaleneBlowJobF_C
// (None)

class UClass* UFaleneBlowJobF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneBlowJobF_C");

	return Clss;
}


// FaleneBlowJobF_C FaleneBlowJobF.Default__FaleneBlowJobF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneBlowJobF_C* UFaleneBlowJobF_C::GetDefaultObj()
{
	static class UFaleneBlowJobF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneBlowJobF_C*>(UFaleneBlowJobF_C::StaticClass()->DefaultObject);

	return Default;
}

}


