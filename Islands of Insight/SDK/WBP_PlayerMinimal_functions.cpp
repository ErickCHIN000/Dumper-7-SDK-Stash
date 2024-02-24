#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerMinimal.WBP_PlayerMinimal_C
// (None)

class UClass* UWBP_PlayerMinimal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerMinimal_C");

	return Clss;
}


// WBP_PlayerMinimal_C WBP_PlayerMinimal.Default__WBP_PlayerMinimal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerMinimal_C* UWBP_PlayerMinimal_C::GetDefaultObj()
{
	static class UWBP_PlayerMinimal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerMinimal_C*>(UWBP_PlayerMinimal_C::StaticClass()->DefaultObject);

	return Default;
}

}


