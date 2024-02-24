#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MovementSpeed.WBP_MovementSpeed_C
// (None)

class UClass* UWBP_MovementSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MovementSpeed_C");

	return Clss;
}


// WBP_MovementSpeed_C WBP_MovementSpeed.Default__WBP_MovementSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MovementSpeed_C* UWBP_MovementSpeed_C::GetDefaultObj()
{
	static class UWBP_MovementSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MovementSpeed_C*>(UWBP_MovementSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


