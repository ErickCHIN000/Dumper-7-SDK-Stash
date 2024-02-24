#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MissionDifficulty.UMG_MissionDifficulty_C
// (None)

class UClass* UUMG_MissionDifficulty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MissionDifficulty_C");

	return Clss;
}


// UMG_MissionDifficulty_C UMG_MissionDifficulty.Default__UMG_MissionDifficulty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MissionDifficulty_C* UUMG_MissionDifficulty_C::GetDefaultObj()
{
	static class UUMG_MissionDifficulty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MissionDifficulty_C*>(UUMG_MissionDifficulty_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MissionDifficulty.UMG_MissionDifficulty_C.SetDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusProspectDifficultyDifficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MissionDifficulty_C::SetDifficulty(enum class EIcarusProspectDifficulty Difficulty, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissionDifficulty_C", "SetDifficulty");

	Params::UUMG_MissionDifficulty_C_SetDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


