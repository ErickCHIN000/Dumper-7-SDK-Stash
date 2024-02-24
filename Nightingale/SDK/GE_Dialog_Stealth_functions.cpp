#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Dialog_Stealth.GE_Dialog_Stealth_C
// (None)

class UClass* UGE_Dialog_Stealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Dialog_Stealth_C");

	return Clss;
}


// GE_Dialog_Stealth_C GE_Dialog_Stealth.Default__GE_Dialog_Stealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Dialog_Stealth_C* UGE_Dialog_Stealth_C::GetDefaultObj()
{
	static class UGE_Dialog_Stealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Dialog_Stealth_C*>(UGE_Dialog_Stealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


