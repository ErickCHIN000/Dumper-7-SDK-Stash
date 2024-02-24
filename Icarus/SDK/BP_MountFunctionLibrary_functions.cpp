#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MountFunctionLibrary.BP_MountFunctionLibrary_C
// (None)

class UClass* UBP_MountFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MountFunctionLibrary_C");

	return Clss;
}


// BP_MountFunctionLibrary_C BP_MountFunctionLibrary.Default__BP_MountFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MountFunctionLibrary_C* UBP_MountFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_MountFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MountFunctionLibrary_C*>(UBP_MountFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MountFunctionLibrary.BP_MountFunctionLibrary_C.TameConsumeFoodItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusCharacter*            TameCharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        FoodQuery                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FModifierStatesRowHandle    Modifier                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class USurvivalCharacterState*     SurvivalCharacterState                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConsumableData             CallFunc_GetConsumableData_ConsumableData                        (None)
// enum class EDataValid              CallFunc_GetConsumableData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USurvivalCharacterState*     K2Node_DynamicCast_AsSurvival_Character_State                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFood_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxFood_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MountFunctionLibrary_C::TameConsumeFoodItem(class AIcarusCharacter* TameCharacter, const struct FItemData& Item, class UObject* __WorldContext, bool* Success, const struct FTagQueriesRowHandle& FoodQuery, const struct FModifierStatesRowHandle& Modifier, class USurvivalCharacterState* SurvivalCharacterState, int32 CallFunc_GetStat_ReturnValue, const struct FConsumableData& CallFunc_GetConsumableData_ConsumableData, enum class EDataValid CallFunc_GetConsumableData_Paths, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_Greater_IntInt_ReturnValue, class USurvivalCharacterState* K2Node_DynamicCast_AsSurvival_Character_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, int32 CallFunc_GetFood_ReturnValue, int32 CallFunc_GetMaxFood_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountFunctionLibrary_C", "TameConsumeFoodItem");

	Params::UBP_MountFunctionLibrary_C_TameConsumeFoodItem_Params Parms{};

	Parms.TameCharacter = TameCharacter;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.FoodQuery = FoodQuery;
	Parms.Modifier = Modifier;
	Parms.SurvivalCharacterState = SurvivalCharacterState;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetConsumableData_ConsumableData = CallFunc_GetConsumableData_ConsumableData;
	Parms.CallFunc_GetConsumableData_Paths = CallFunc_GetConsumableData_Paths;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSurvival_Character_State = K2Node_DynamicCast_AsSurvival_Character_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_GetFood_ReturnValue = CallFunc_GetFood_ReturnValue;
	Parms.CallFunc_GetMaxFood_ReturnValue = CallFunc_GetMaxFood_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue_1 = CallFunc_AddModifierState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MountFunctionLibrary.BP_MountFunctionLibrary_C.SendDeathChatMessage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISpawnableAI>SpawnableAI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsJuvenile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MountName                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      DeathCauserMsg                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OwnerName                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CreatureType                                                     (Edit, BlueprintVisible)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FAISetupRowHandle           CallFunc_GetAISetupRowHandle_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAICreatureType             CallFunc_GetAICreatureTypeStruct_AICreatureType                  (None)
// enum class EValid                  CallFunc_GetAICreatureTypeStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorState*                 CallFunc_GetAIActorState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameModeBase*         K2Node_DynamicCast_AsIcarus_Game_Mode_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class AIcarusNPCCharacter*         K2Node_DynamicCast_AsIcarus_NPCCharacter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TScriptInterface<class ISpawnableAI>CallFunc_GetCurrentLevel_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnableAI>CallFunc_GetAISetupRowHandle_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetupRowHandle           CallFunc_GetAISetupRowHandle_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup_1                              (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAICreatureType             CallFunc_GetAICreatureTypeStruct_AICreatureType_1                (None)
// enum class EValid                  CallFunc_GetAICreatureTypeStruct_Paths_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_2                              (ZeroConstructor, HasGetValueTypeHash)

void UBP_MountFunctionLibrary_C::SendDeathChatMessage(TScriptInterface<class ISpawnableAI> SpawnableAI, bool IsJuvenile, class UObject* __WorldContext, const class FString& MountName, const class FString& DeathCauserMsg, const class FString& OwnerName, class FText CreatureType, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FAISetupRowHandle& CallFunc_GetAISetupRowHandle_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UActorState* CallFunc_GetAIActorState_ReturnValue, class AIcarusGameModeBase* K2Node_DynamicCast_AsIcarus_Game_Mode_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_2, class FText CallFunc_Conv_StringToText_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TScriptInterface<class ISpawnableAI> CallFunc_GetCurrentLevel_self_CastInput, int32 CallFunc_GetCurrentLevel_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TScriptInterface<class ISpawnableAI> CallFunc_GetAISetupRowHandle_self_CastInput, const struct FAISetupRowHandle& CallFunc_GetAISetupRowHandle_ReturnValue_1, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup_1, enum class EValid CallFunc_GetAISetupStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType_1, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, class FText CallFunc_Conv_StringToText_ReturnValue_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, class FText CallFunc_Format_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_4, class FText CallFunc_Format_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_SelectString_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountFunctionLibrary_C", "SendDeathChatMessage");

	Params::UBP_MountFunctionLibrary_C_SendDeathChatMessage_Params Parms{};

	Parms.SpawnableAI = SpawnableAI;
	Parms.IsJuvenile = IsJuvenile;
	Parms.__WorldContext = __WorldContext;
	Parms.MountName = MountName;
	Parms.DeathCauserMsg = DeathCauserMsg;
	Parms.OwnerName = OwnerName;
	Parms.CreatureType = CreatureType;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetAISetupRowHandle_ReturnValue = CallFunc_GetAISetupRowHandle_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAICreatureTypeStruct_AICreatureType = CallFunc_GetAICreatureTypeStruct_AICreatureType;
	Parms.CallFunc_GetAICreatureTypeStruct_Paths = CallFunc_GetAICreatureTypeStruct_Paths;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetAIActorState_ReturnValue = CallFunc_GetAIActorState_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Mode_Base = K2Node_DynamicCast_AsIcarus_Game_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_DynamicCast_AsIcarus_NPCCharacter = K2Node_DynamicCast_AsIcarus_NPCCharacter;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetCurrentLevel_self_CastInput = CallFunc_GetCurrentLevel_self_CastInput;
	Parms.CallFunc_GetCurrentLevel_ReturnValue = CallFunc_GetCurrentLevel_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetAISetupRowHandle_self_CastInput = CallFunc_GetAISetupRowHandle_self_CastInput;
	Parms.CallFunc_GetAISetupRowHandle_ReturnValue_1 = CallFunc_GetAISetupRowHandle_ReturnValue_1;
	Parms.CallFunc_GetAISetupStruct_AISetup_1 = CallFunc_GetAISetupStruct_AISetup_1;
	Parms.CallFunc_GetAISetupStruct_Paths_1 = CallFunc_GetAISetupStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetAICreatureTypeStruct_AICreatureType_1 = CallFunc_GetAICreatureTypeStruct_AICreatureType_1;
	Parms.CallFunc_GetAICreatureTypeStruct_Paths_1 = CallFunc_GetAICreatureTypeStruct_Paths_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_SelectString_ReturnValue_2 = CallFunc_SelectString_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MountFunctionLibrary.BP_MountFunctionLibrary_C.GetMountParent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusCharacter*            MountCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ParentActor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ParentCharacterKey                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OwningPlayerKey                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCCharacter*         K2Node_DynamicCast_AsIcarus_NPCCharacter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MountFunctionLibrary_C::GetMountParent(class AIcarusCharacter* MountCharacter, class UObject* __WorldContext, class AActor** ParentActor, bool* Success, class FName ParentCharacterKey, class FName OwningPlayerKey, bool CallFunc_IsValid_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetValueAsObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountFunctionLibrary_C", "GetMountParent");

	Params::UBP_MountFunctionLibrary_C_GetMountParent_Params Parms{};

	Parms.MountCharacter = MountCharacter;
	Parms.__WorldContext = __WorldContext;
	Parms.ParentCharacterKey = ParentCharacterKey;
	Parms.OwningPlayerKey = OwningPlayerKey;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCCharacter = K2Node_DynamicCast_AsIcarus_NPCCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValueAsObject_ReturnValue_1 = CallFunc_GetValueAsObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsActor_1 = K2Node_DynamicCast_AsActor_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ParentActor != nullptr)
		*ParentActor = Parms.ParentActor;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MountFunctionLibrary.BP_MountFunctionLibrary_C.SetMountParent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusCharacter*            MountCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ParentActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OwningPlayerKey                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MountFunctionLibrary_C::SetMountParent(class AIcarusCharacter* MountCharacter, class AActor* ParentActor, class UObject* __WorldContext, class FName OwningPlayerKey, bool CallFunc_IsValid_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountFunctionLibrary_C", "SetMountParent");

	Params::UBP_MountFunctionLibrary_C_SetMountParent_Params Parms{};

	Parms.MountCharacter = MountCharacter;
	Parms.ParentActor = ParentActor;
	Parms.__WorldContext = __WorldContext;
	Parms.OwningPlayerKey = OwningPlayerKey;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MountFunctionLibrary.BP_MountFunctionLibrary_C.SetDesiredMountCombatState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusCharacter*            MountCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateCombatBehaviour                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CombatBehaviourStateKey                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MountInterface_C>K2Node_DynamicCast_AsBP_Mount_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MountFunctionLibrary_C::SetDesiredMountCombatState(class AIcarusCharacter* MountCharacter, enum class EMountCombatBehaviourState CombatBehaviour, class UObject* __WorldContext, class FName CombatBehaviourStateKey, TScriptInterface<class IBP_MountInterface_C> K2Node_DynamicCast_AsBP_Mount_Interface, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountFunctionLibrary_C", "SetDesiredMountCombatState");

	Params::UBP_MountFunctionLibrary_C_SetDesiredMountCombatState_Params Parms{};

	Parms.MountCharacter = MountCharacter;
	Parms.CombatBehaviour = CombatBehaviour;
	Parms.__WorldContext = __WorldContext;
	Parms.CombatBehaviourStateKey = CombatBehaviourStateKey;
	Parms.K2Node_DynamicCast_AsBP_Mount_Interface = K2Node_DynamicCast_AsBP_Mount_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MountFunctionLibrary.BP_MountFunctionLibrary_C.SetDesiredMountMovementState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusCharacter*            MountCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateMovementBehaviour                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MovementBehaviourStateKey                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MountInterface_C>K2Node_DynamicCast_AsBP_Mount_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MountFunctionLibrary_C::SetDesiredMountMovementState(class AIcarusCharacter* MountCharacter, enum class EMountMovementBehaviourState MovementBehaviour, class UObject* __WorldContext, class FName MovementBehaviourStateKey, TScriptInterface<class IBP_MountInterface_C> K2Node_DynamicCast_AsBP_Mount_Interface, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountFunctionLibrary_C", "SetDesiredMountMovementState");

	Params::UBP_MountFunctionLibrary_C_SetDesiredMountMovementState_Params Parms{};

	Parms.MountCharacter = MountCharacter;
	Parms.MovementBehaviour = MovementBehaviour;
	Parms.__WorldContext = __WorldContext;
	Parms.MovementBehaviourStateKey = MovementBehaviourStateKey;
	Parms.K2Node_DynamicCast_AsBP_Mount_Interface = K2Node_DynamicCast_AsBP_Mount_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


