#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CountdownBackground.WBP_CountdownBackground_C
// (None)

class UClass* UWBP_CountdownBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CountdownBackground_C");

	return Clss;
}


// WBP_CountdownBackground_C WBP_CountdownBackground.Default__WBP_CountdownBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CountdownBackground_C* UWBP_CountdownBackground_C::GetDefaultObj()
{
	static class UWBP_CountdownBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CountdownBackground_C*>(UWBP_CountdownBackground_C::StaticClass()->DefaultObject);

	return Default;
}

}


