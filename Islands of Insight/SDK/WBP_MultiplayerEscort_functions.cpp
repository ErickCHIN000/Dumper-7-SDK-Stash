#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MultiplayerEscort.WBP_MultiplayerEscort_C
// (None)

class UClass* UWBP_MultiplayerEscort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MultiplayerEscort_C");

	return Clss;
}


// WBP_MultiplayerEscort_C WBP_MultiplayerEscort.Default__WBP_MultiplayerEscort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MultiplayerEscort_C* UWBP_MultiplayerEscort_C::GetDefaultObj()
{
	static class UWBP_MultiplayerEscort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MultiplayerEscort_C*>(UWBP_MultiplayerEscort_C::StaticClass()->DefaultObject);

	return Default;
}

}


