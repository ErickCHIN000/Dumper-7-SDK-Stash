#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ScoreRow.WBP_ScoreRow_C
// (None)

class UClass* UWBP_ScoreRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ScoreRow_C");

	return Clss;
}


// WBP_ScoreRow_C WBP_ScoreRow.Default__WBP_ScoreRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ScoreRow_C* UWBP_ScoreRow_C::GetDefaultObj()
{
	static class UWBP_ScoreRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ScoreRow_C*>(UWBP_ScoreRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


