#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ResetHealthToBase.GE_ResetHealthToBase_C
// (None)

class UClass* UGE_ResetHealthToBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ResetHealthToBase_C");

	return Clss;
}


// GE_ResetHealthToBase_C GE_ResetHealthToBase.Default__GE_ResetHealthToBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ResetHealthToBase_C* UGE_ResetHealthToBase_C::GetDefaultObj()
{
	static class UGE_ResetHealthToBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ResetHealthToBase_C*>(UGE_ResetHealthToBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


