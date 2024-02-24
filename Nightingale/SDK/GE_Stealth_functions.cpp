#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Stealth.GE_Stealth_C
// (None)

class UClass* UGE_Stealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Stealth_C");

	return Clss;
}


// GE_Stealth_C GE_Stealth.Default__GE_Stealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Stealth_C* UGE_Stealth_C::GetDefaultObj()
{
	static class UGE_Stealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Stealth_C*>(UGE_Stealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


