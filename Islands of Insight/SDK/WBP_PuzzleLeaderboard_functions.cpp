#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PuzzleLeaderboard.WBP_PuzzleLeaderboard_C
// (None)

class UClass* UWBP_PuzzleLeaderboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PuzzleLeaderboard_C");

	return Clss;
}


// WBP_PuzzleLeaderboard_C WBP_PuzzleLeaderboard.Default__WBP_PuzzleLeaderboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PuzzleLeaderboard_C* UWBP_PuzzleLeaderboard_C::GetDefaultObj()
{
	static class UWBP_PuzzleLeaderboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PuzzleLeaderboard_C*>(UWBP_PuzzleLeaderboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


