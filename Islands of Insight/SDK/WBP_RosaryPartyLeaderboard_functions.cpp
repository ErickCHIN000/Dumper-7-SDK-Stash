#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RosaryPartyLeaderboard.WBP_RosaryPartyLeaderboard_C
// (None)

class UClass* UWBP_RosaryPartyLeaderboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RosaryPartyLeaderboard_C");

	return Clss;
}


// WBP_RosaryPartyLeaderboard_C WBP_RosaryPartyLeaderboard.Default__WBP_RosaryPartyLeaderboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RosaryPartyLeaderboard_C* UWBP_RosaryPartyLeaderboard_C::GetDefaultObj()
{
	static class UWBP_RosaryPartyLeaderboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RosaryPartyLeaderboard_C*>(UWBP_RosaryPartyLeaderboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


