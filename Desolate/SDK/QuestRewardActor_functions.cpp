#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestRewardActor.QuestRewardActor_C
// (Actor)

class UClass* AQuestRewardActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestRewardActor_C");

	return Clss;
}


// QuestRewardActor_C QuestRewardActor.Default__QuestRewardActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestRewardActor_C* AQuestRewardActor_C::GetDefaultObj()
{
	static class AQuestRewardActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestRewardActor_C*>(AQuestRewardActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRewardActor.QuestRewardActor_C.GetSelectionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FS_Selection                K2Node_MakeStruct_S_Selection                                    (HasGetValueTypeHash)

void AQuestRewardActor_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "GetSelectionInfo");

	Params::AQuestRewardActor_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_S_Selection = K2Node_MakeStruct_S_Selection;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function QuestRewardActor.QuestRewardActor_C.IsCodeLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRewardActor_C::IsCodeLocked(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "IsCodeLocked");

	Params::AQuestRewardActor_C_IsCodeLocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function QuestRewardActor.QuestRewardActor_C.HoldUseSupports
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRewardActor_C::HoldUseSupports(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "HoldUseSupports");

	Params::AQuestRewardActor_C_HoldUseSupports_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function QuestRewardActor.QuestRewardActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRewardActor_C::UserConstructionScript(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "UserConstructionScript");

	Params::AQuestRewardActor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRewardActor.QuestRewardActor_C.OnHoldUseActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestRewardActor_C::OnHoldUseActor(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "OnHoldUseActor");

	Params::AQuestRewardActor_C_OnHoldUseActor_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRewardActor.QuestRewardActor_C.QuestOutline
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHighlighted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRewardActor_C::QuestOutline(bool IsHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "QuestOutline");

	Params::AQuestRewardActor_C_QuestOutline_Params Parms{};

	Parms.IsHighlighted = IsHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRewardActor.QuestRewardActor_C.UnlockActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Password                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AQuestRewardActor_C::UnlockActor(class FText Password)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "UnlockActor");

	Params::AQuestRewardActor_C_UnlockActor_Params Parms{};

	Parms.Password = Password;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRewardActor.QuestRewardActor_C.OnUseActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestRewardActor_C::OnUseActor(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "OnUseActor");

	Params::AQuestRewardActor_C_OnUseActor_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRewardActor.QuestRewardActor_C.Outline
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHighlighted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRewardActor_C::Outline(bool IsHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "Outline");

	Params::AQuestRewardActor_C_Outline_Params Parms{};

	Parms.IsHighlighted = IsHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRewardActor.QuestRewardActor_C.ExecuteUbergraph_QuestRewardActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isHighlighted_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isHighlighted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Password                                            (None)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Character_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestRewardActor_C::ExecuteUbergraph_QuestRewardActor(int32 EntryPoint, bool K2Node_Event_isHighlighted_1, bool K2Node_Event_isHighlighted, class ASHPlayerCharacter* K2Node_Event_Character, class FText K2Node_Event_Password, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardActor_C", "ExecuteUbergraph_QuestRewardActor");

	Params::AQuestRewardActor_C_ExecuteUbergraph_QuestRewardActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isHighlighted_1 = K2Node_Event_isHighlighted_1;
	Parms.K2Node_Event_isHighlighted = K2Node_Event_isHighlighted;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_Password = K2Node_Event_Password;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_Character_1 = K2Node_Event_Character_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


