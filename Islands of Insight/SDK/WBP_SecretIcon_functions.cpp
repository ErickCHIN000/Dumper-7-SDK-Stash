#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SecretIcon.WBP_SecretIcon_C
// (None)

class UClass* UWBP_SecretIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SecretIcon_C");

	return Clss;
}


// WBP_SecretIcon_C WBP_SecretIcon.Default__WBP_SecretIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SecretIcon_C* UWBP_SecretIcon_C::GetDefaultObj()
{
	static class UWBP_SecretIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SecretIcon_C*>(UWBP_SecretIcon_C::StaticClass()->DefaultObject);

	return Default;
}

}


