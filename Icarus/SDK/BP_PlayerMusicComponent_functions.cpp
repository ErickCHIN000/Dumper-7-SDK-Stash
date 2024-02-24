#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerMusicComponent.BP_PlayerMusicComponent_C
// (None)

class UClass* UBP_PlayerMusicComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerMusicComponent_C");

	return Clss;
}


// BP_PlayerMusicComponent_C BP_PlayerMusicComponent.Default__BP_PlayerMusicComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerMusicComponent_C* UBP_PlayerMusicComponent_C::GetDefaultObj()
{
	static class UBP_PlayerMusicComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerMusicComponent_C*>(UBP_PlayerMusicComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.GetBestQuestCondition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMusicQuestConditionsRowHandleQuestCondition                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestManager*               CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQuestsRowHandle>    CallFunc_GetActiveQuestsData_OutActiveQuests                     (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestSetup                 CallFunc_GetQuestsStruct_Quests                                  (None)
// enum class EValid                  CallFunc_GetQuestsStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::GetBestQuestCondition(struct FMusicQuestConditionsRowHandle* QuestCondition, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FQuestsRowHandle>& CallFunc_GetActiveQuestsData_OutActiveQuests, int32 CallFunc_Array_Length_ReturnValue, const struct FQuestSetup& CallFunc_GetQuestsStruct_Quests, enum class EValid CallFunc_GetQuestsStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "GetBestQuestCondition");

	Params::UBP_PlayerMusicComponent_C_GetBestQuestCondition_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveQuestsData_OutActiveQuests = CallFunc_GetActiveQuestsData_OutActiveQuests;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetQuestsStruct_Quests = CallFunc_GetQuestsStruct_Quests;
	Parms.CallFunc_GetQuestsStruct_Paths = CallFunc_GetQuestsStruct_Paths;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestCondition != nullptr)
		*QuestCondition = std::move(Parms.QuestCondition);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnRep_ReplicatedQuestCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::OnRep_ReplicatedQuestCondition(class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "OnRep_ReplicatedQuestCondition");

	Params::UBP_PlayerMusicComponent_C_OnRep_ReplicatedQuestCondition_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.GetConditionFromTimeOfDay
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionTimeOfDayMusicCondition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::GetConditionFromTimeOfDay(float Time, enum class EMusicConditionTimeOfDay* MusicCondition, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "GetConditionFromTimeOfDay");

	Params::UBP_PlayerMusicComponent_C_GetConditionFromTimeOfDay_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (MusicCondition != nullptr)
		*MusicCondition = Parms.MusicCondition;

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.UpdateOutOfBounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfBounds                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::UpdateOutOfBounds(class AIcarusPlayerCharacter* Player, bool OutOfBounds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "UpdateOutOfBounds");

	Params::UBP_PlayerMusicComponent_C_UpdateOutOfBounds_Params Parms{};

	Parms.Player = Player;
	Parms.OutOfBounds = OutOfBounds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Combat Music State
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SmoothedThreatLevelRounded                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplySmoothing_SmoothedValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_BMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::Update_Combat_Music_State(int32 SmoothedThreatLevelRounded, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_ApplySmoothing_SmoothedValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_BMax_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Update Combat Music State");

	Params::UBP_PlayerMusicComponent_C_Update_Combat_Music_State_Params Parms{};

	Parms.SmoothedThreatLevelRounded = SmoothedThreatLevelRounded;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ApplySmoothing_SmoothedValue = CallFunc_ApplySmoothing_SmoothedValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_BMax_ReturnValue = CallFunc_BMax_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ApplySmoothing
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SmoothedValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TempSmoothedValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TargetAsFloat                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::ApplySmoothing(float Value, int32 Target, float* SmoothedValue, float TempSmoothedValue, float TargetAsFloat, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "ApplySmoothing");

	Params::UBP_PlayerMusicComponent_C_ApplySmoothing_Params Parms{};

	Parms.Value = Value;
	Parms.Target = Target;
	Parms.TempSmoothedValue = TempSmoothedValue;
	Parms.TargetAsFloat = TargetAsFloat;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SmoothedValue != nullptr)
		*SmoothedValue = Parms.SmoothedValue;

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnRep_ReplicatedThreatLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SmoothedThreatLevelRounded                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::OnRep_ReplicatedThreatLevel(int32 SmoothedThreatLevelRounded, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "OnRep_ReplicatedThreatLevel");

	Params::UBP_PlayerMusicComponent_C_OnRep_ReplicatedThreatLevel_Params Parms{};

	Parms.SmoothedThreatLevelRounded = SmoothedThreatLevelRounded;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.SetCombatMusicState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMusicConditionCombatStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::SetCombatMusicState(enum class EMusicConditionCombatState State, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "SetCombatMusicState");

	Params::UBP_PlayerMusicComponent_C_SetCombatMusicState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.UpdateThreatLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UThreatAudioSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FThreatAudioResult          CallFunc_GetThreatLevel_ReturnValue                              (NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::UpdateThreatLevel(class UThreatAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FThreatAudioResult& CallFunc_GetThreatLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "UpdateThreatLevel");

	Params::UBP_PlayerMusicComponent_C_UpdateThreatLevel_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetThreatLevel_ReturnValue = CallFunc_GetThreatLevel_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.PlayRevivedEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::PlayRevivedEvent(class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "PlayRevivedEvent");

	Params::UBP_PlayerMusicComponent_C_PlayRevivedEvent_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.UpdateDisasterCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicConditionDisaster Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionDisaster Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalParameterValueByName_UserValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalParameterValueByName_FinalValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicConditionDisaster K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::UpdateDisasterCondition(bool Temp_bool_Variable, enum class EMusicConditionDisaster Temp_byte_Variable, enum class EMusicConditionDisaster Temp_byte_Variable_1, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_GetGlobalParameterValueByName_UserValue, float CallFunc_GetGlobalParameterValueByName_FinalValue, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class EMusicConditionDisaster K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "UpdateDisasterCondition");

	Params::UBP_PlayerMusicComponent_C_UpdateDisasterCondition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGlobalParameterValueByName_UserValue = CallFunc_GetGlobalParameterValueByName_UserValue;
	Parms.CallFunc_GetGlobalParameterValueByName_FinalValue = CallFunc_GetGlobalParameterValueByName_FinalValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Drop Time Condition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicConditionDropTime Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionDropTime Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionRemainingSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicConditionDropTime K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::Update_Drop_Time_Condition(bool Temp_bool_Variable, enum class EMusicConditionDropTime Temp_byte_Variable, enum class EMusicConditionDropTime Temp_byte_Variable_1, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetSessionRemainingSec_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EMusicConditionDropTime K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Update Drop Time Condition");

	Params::UBP_PlayerMusicComponent_C_Update_Drop_Time_Condition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetSessionRemainingSec_ReturnValue = CallFunc_GetSessionRemainingSec_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Location Condition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              SelectedCondition                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BiomeHasStorm                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMusicLocationConditionsRowHandleTemp_wildcard_Variable                                           (NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomeAudioData             CallFunc_GetBiomeAudioDataStruct_BiomeAudioData                  (None)
// enum class EValid                  CallFunc_GetBiomeAudioDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerMusicComponent_C::Update_Location_Condition(uint8 SelectedCondition, bool BiomeHasStorm, bool CallFunc_IsValid_ReturnValue, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FMusicLocationConditionsRowHandle& Temp_wildcard_Variable, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FBiomeAudioData& CallFunc_GetBiomeAudioDataStruct_BiomeAudioData, enum class EValid CallFunc_GetBiomeAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Update Location Condition");

	Params::UBP_PlayerMusicComponent_C_Update_Location_Condition_Params Parms{};

	Parms.SelectedCondition = SelectedCondition;
	Parms.BiomeHasStorm = BiomeHasStorm;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBiomeAudioDataStruct_BiomeAudioData = CallFunc_GetBiomeAudioDataStruct_BiomeAudioData;
	Parms.CallFunc_GetBiomeAudioDataStruct_Paths = CallFunc_GetBiomeAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Weather Condition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EventTimeElapsed                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionWeather  MostRecentMusicCondition                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BiomeHasStorm                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetActiveWeatherInfoForBiome_OutValidity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveWeatherInfo          CallFunc_GetActiveWeatherInfoForBiome_ReturnValue                (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusWeatherEvent         CallFunc_GetWeatherEventsStruct_WeatherEvents                    (None)
// enum class EValid                  CallFunc_GetWeatherEventsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherMusicCue            CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::Update_Weather_Condition(int32 EventTimeElapsed, enum class EMusicConditionWeather MostRecentMusicCondition, bool BiomeHasStorm, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetActiveWeatherInfoForBiome_OutValidity, const struct FActiveWeatherInfo& CallFunc_GetActiveWeatherInfoForBiome_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const struct FWeatherMusicCue& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Update Weather Condition");

	Params::UBP_PlayerMusicComponent_C_Update_Weather_Condition_Params Parms{};

	Parms.EventTimeElapsed = EventTimeElapsed;
	Parms.MostRecentMusicCondition = MostRecentMusicCondition;
	Parms.BiomeHasStorm = BiomeHasStorm;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActiveWeatherInfoForBiome_OutValidity = CallFunc_GetActiveWeatherInfoForBiome_OutValidity;
	Parms.CallFunc_GetActiveWeatherInfoForBiome_ReturnValue = CallFunc_GetActiveWeatherInfoForBiome_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWeatherEventsStruct_WeatherEvents = CallFunc_GetWeatherEventsStruct_WeatherEvents;
	Parms.CallFunc_GetWeatherEventsStruct_Paths = CallFunc_GetWeatherEventsStruct_Paths;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Time Condition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeRealtime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionTimeOfDayCallFunc_GetConditionFromTimeOfDay_MusicCondition                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::Update_Time_Condition(class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_GetTimeRealtime_ReturnValue, enum class EMusicConditionTimeOfDay CallFunc_GetConditionFromTimeOfDay_MusicCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Update Time Condition");

	Params::UBP_PlayerMusicComponent_C_Update_Time_Condition_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetTimeRealtime_ReturnValue = CallFunc_GetTimeRealtime_ReturnValue;
	Parms.CallFunc_GetConditionFromTimeOfDay_MusicCondition = CallFunc_GetConditionFromTimeOfDay_MusicCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Player State Condition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionPlayerStateTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionPlayerStateTemp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicConditionPlayerStateTemp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMusicConditionPlayerStateK2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMusicConditionPlayerStateK2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::Update_Player_State_Condition(class UActorState* ActorState, float NewHealth, enum class EMusicConditionPlayerState Temp_byte_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, enum class EMusicConditionPlayerState Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EMusicConditionPlayerState Temp_byte_Variable_2, bool Temp_bool_Variable_1, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class EMusicConditionPlayerState K2Node_Select_Default, enum class EMusicConditionPlayerState K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Update Player State Condition");

	Params::UBP_PlayerMusicComponent_C_Update_Player_State_Condition_Params Parms{};

	Parms.ActorState = ActorState;
	Parms.NewHealth = NewHealth;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "ReceiveEndPlay");

	Params::UBP_PlayerMusicComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnEnteredCave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Cave                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::OnEnteredCave(class AActor* Cave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "OnEnteredCave");

	Params::UBP_PlayerMusicComponent_C_OnEnteredCave_Params Parms{};

	Parms.Cave = Cave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnExitedCave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerMusicComponent_C::OnExitedCave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "OnExitedCave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Server_ReadyForReplication
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerMusicComponent_C::Server_ReadyForReplication()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "Server_ReadyForReplication");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PlayerMusicComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.HandleQuestUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                      Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::HandleQuestUpdated(class AQuest* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "HandleQuestUpdated");

	Params::UBP_PlayerMusicComponent_C_HandleQuestUpdated_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ExecuteUbergraph_BP_PlayerMusicComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABP_WeatherController_C*     CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UQuestNotificationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTestProspectActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UOutOfBoundsSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetBPIcarusPlayerController_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Cave                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasActiveProspect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class AQuest*                      K2Node_CustomEvent_Quest                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMusicQuestConditionsRowHandleCallFunc_GetBestQuestCondition_QuestCondition                    (NoDestructor, HasGetValueTypeHash)

void UBP_PlayerMusicComponent_C::ExecuteUbergraph_BP_PlayerMusicComponent(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_WeatherController_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UQuestNotificationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsTestProspectActive_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UOutOfBoundsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetBPIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_2, class AActor* K2Node_CustomEvent_Cave, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasActiveProspect_ReturnValue, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsLocallyControlled_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class AQuest* K2Node_CustomEvent_Quest, const struct FMusicQuestConditionsRowHandle& CallFunc_GetBestQuestCondition_QuestCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerMusicComponent_C", "ExecuteUbergraph_BP_PlayerMusicComponent");

	Params::UBP_PlayerMusicComponent_C_ExecuteUbergraph_BP_PlayerMusicComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsTestProspectActive_ReturnValue = CallFunc_IsTestProspectActive_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetBPIcarusPlayerController_ReturnValue = CallFunc_GetBPIcarusPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Cave = K2Node_CustomEvent_Cave;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasActiveProspect_ReturnValue = CallFunc_HasActiveProspect_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.CallFunc_GetBestQuestCondition_QuestCondition = CallFunc_GetBestQuestCondition_QuestCondition;

	UObject::ProcessEvent(Func, &Parms);

}

}


