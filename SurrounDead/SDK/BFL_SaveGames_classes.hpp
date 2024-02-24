#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BFL_SaveGames.BFL_SaveGames_C
class UBFL_SaveGames_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBFL_SaveGames_C* GetDefaultObj();

	void ZeroFill(int32 Int, class UObject* __WorldContext, class FString* Out, const class FString& LeadingZero, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class FString DateToString_AutoSave(const struct FDateTime& InDateTime, class UObject* __WorldContext, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_ZeroFill_Out, const class FString& CallFunc_ZeroFill_Out_1, const class FString& CallFunc_ZeroFill_Out_2, const class FString& CallFunc_ZeroFill_Out_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_DateMonth_Date, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void DateMonth(int32 Month, class UObject* __WorldContext, class FName* Date, const class FString& Text, bool K2Node_SwitchInteger_CmpSuccess);
	void Reset_Player_Stats(class ABP_PlayerCharacter_C* Player, class UObject* __WorldContext, class ABP_MPGameMode_C* CallFunc_GetGameMode_GameMode, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller);
	void Save_Custom_Objects(class UObject* __WorldContext, class USave_General_C* CallFunc_GetCustomSave_ReturnValue, class USave_General_C* CallFunc_GetCustomSave_ReturnValue_1, bool CallFunc_SaveCustom_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_2, const struct FUDS_and_UDW_State& CallFunc_Create_UDS_and_UDW_State_for_Saving_Packaged_State, bool CallFunc_SaveCustom_ReturnValue_1, class USave_Difficulties_C* CallFunc_GetCustomSave_ReturnValue_3, bool CallFunc_SaveCustom_ReturnValue_2);
	void SaveThumbnailImage(class UObject* __WorldContext, class USceneCaptureComponent2D* CaptureComp, class AActor* TempActor, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class USceneCaptureComponent2D* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	class FString DateStringPrefix(int32 A, class UObject* __WorldContext, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default);
	class FString DateToString(const struct FDateTime& InDateTime, class UObject* __WorldContext, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, class FName CallFunc_DateMonth_Date, const class FString& CallFunc_DateStringPrefix_ReturnValue, const class FString& CallFunc_DateStringPrefix_ReturnValue_1, const class FString& CallFunc_DateStringPrefix_ReturnValue_2, const class FString& CallFunc_BuildString_Int_ReturnValue, const class FString& CallFunc_BuildString_Name_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue_1, const class FString& CallFunc_BuildString_Int_ReturnValue_2, const class FString& CallFunc_BuildString_Int_ReturnValue_3);
};

}


