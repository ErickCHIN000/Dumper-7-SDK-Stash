#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CGGameInstance.CGGameInstance_C
// (None)

class UClass* UCGGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CGGameInstance_C");

	return Clss;
}


// CGGameInstance_C CGGameInstance.Default__CGGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCGGameInstance_C* UCGGameInstance_C::GetDefaultObj()
{
	static class UCGGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCGGameInstance_C*>(UCGGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CGGameInstance.CGGameInstance_C.InitTMPDecorationsEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_GetEnabledGlobalSkin_OutSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGlobalSkinInfo             CallFunc_K2_GetEnabledGlobalSkin_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::InitTMPDecorationsEnabled(bool CallFunc_K2_GetEnabledGlobalSkin_OutSuccess, const struct FGlobalSkinInfo& CallFunc_K2_GetEnabledGlobalSkin_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "InitTMPDecorationsEnabled");

	Params::UCGGameInstance_C_InitTMPDecorationsEnabled_Params Parms{};

	Parms.CallFunc_K2_GetEnabledGlobalSkin_OutSuccess = CallFunc_K2_GetEnabledGlobalSkin_OutSuccess;
	Parms.CallFunc_K2_GetEnabledGlobalSkin_ReturnValue = CallFunc_K2_GetEnabledGlobalSkin_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.TMP_UpdateDecoration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::TMP_UpdateDecoration(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "TMP_UpdateDecoration");

	Params::UCGGameInstance_C_TMP_UpdateDecoration_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.IsPropertyLinkGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_GM_PropertyLinkDump_C*   K2Node_DynamicCast_AsBp_GM_Property_Link_Dump                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::IsPropertyLinkGM(bool* bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class Abp_GM_PropertyLinkDump_C* K2Node_DynamicCast_AsBp_GM_Property_Link_Dump, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "IsPropertyLinkGM");

	Params::UCGGameInstance_C_IsPropertyLinkGM_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBp_GM_Property_Link_Dump = K2Node_DynamicCast_AsBp_GM_Property_Link_Dump;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function CGGameInstance.CGGameInstance_C.AwardExperienceForNote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BoardID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CustomExpHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle         EmptyEventObject                                                 (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::AwardExperienceForNote(class FName BoardID, const struct FDataTableRowHandle& CustomExpHandle, const struct FDataTableRowHandle& EmptyEventObject, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AwardExperienceForNote");

	Params::UCGGameInstance_C_AwardExperienceForNote_Params Parms{};

	Parms.BoardID = BoardID;
	Parms.CustomExpHandle = CustomExpHandle;
	Parms.EmptyEventObject = EmptyEventObject;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CreateLoadingBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Loading_ProgressBar_C*  Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Loading_ProgressBar_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::CreateLoadingBar(class UWid_Loading_ProgressBar_C** Widget, bool CallFunc_IsInViewport_ReturnValue, class UWid_Loading_ProgressBar_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CreateLoadingBar");

	Params::UCGGameInstance_C_CreateLoadingBar_Params Parms{};

	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function CGGameInstance.CGGameInstance_C.KeyNameToEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      KeyName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::KeyNameToEnum(class FString& KeyName, enum class Enum_Buttons_PC* Value, enum class Enum_Buttons_PC Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, enum class Enum_Buttons_PC CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class Enum_Buttons_PC K2Node_Select_Default, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "KeyNameToEnum");

	Params::UCGGameInstance_C_KeyNameToEnum_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function CGGameInstance.CGGameInstance_C.GetIndoorLightingSetups
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class Aba_IndoorLightingSetup_01_C*>Output                                                           (Parm, OutParm)
// TArray<class Aba_IndoorLightingSetup_01_C*>_afterclean                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_IndoorLightingSetup_01_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetIndoorLightingSetups(TArray<class Aba_IndoorLightingSetup_01_C*>* Output, const TArray<class Aba_IndoorLightingSetup_01_C*>& _afterclean, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class Aba_IndoorLightingSetup_01_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetIndoorLightingSetups");

	Params::UCGGameInstance_C_GetIndoorLightingSetups_Params Parms{};

	Parms._afterclean = _afterclean;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function CGGameInstance.CGGameInstance_C.AddIndoorLightingSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_IndoorLightingSetup_01_C*IndoorLightingSetup_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddIndoorLightingSetup(class Aba_IndoorLightingSetup_01_C* IndoorLightingSetup_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddIndoorLightingSetup");

	Params::UCGGameInstance_C_AddIndoorLightingSetup_Params Parms{};

	Parms.IndoorLightingSetup_ = IndoorLightingSetup_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CalculateTimeUntilStorm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DevicesOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InMinutes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InSeconds                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinimumStormDuration                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NormalStormDuration                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingDuration                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingDurationInMinutes                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::CalculateTimeUntilStorm(int32 DevicesOffset, float* InMinutes, int32* InSeconds, float Duration, float MinimumStormDuration, float NormalStormDuration, float StartingDuration, float StartingDurationInMinutes, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetDifficultyModifier_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDifficultyModifier_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetDifficultyModifier_ReturnValue_2, int32 CallFunc_GetCurrentDay_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_2, float CallFunc_GetDifficultyModifier_ReturnValue_3, float CallFunc_GetDifficultyModifier_ReturnValue_4, float CallFunc_Multiply_IntFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CalculateTimeUntilStorm");

	Params::UCGGameInstance_C_CalculateTimeUntilStorm_Params Parms{};

	Parms.DevicesOffset = DevicesOffset;
	Parms.Duration = Duration;
	Parms.MinimumStormDuration = MinimumStormDuration;
	Parms.NormalStormDuration = NormalStormDuration;
	Parms.StartingDuration = StartingDuration;
	Parms.StartingDurationInMinutes = StartingDurationInMinutes;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue = CallFunc_GetDifficultyModifier_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue_1 = CallFunc_GetDifficultyModifier_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue_2 = CallFunc_GetDifficultyModifier_ReturnValue_2;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue_3 = CallFunc_GetDifficultyModifier_ReturnValue_3;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue_4 = CallFunc_GetDifficultyModifier_ReturnValue_4;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_3 = CallFunc_Multiply_IntFloat_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InMinutes != nullptr)
		*InMinutes = Parms.InMinutes;

	if (InSeconds != nullptr)
		*InSeconds = Parms.InSeconds;

}


// Function CGGameInstance.CGGameInstance_C.GetWeatherCPP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetWeather_TodaysWeather                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UCGGameInstance_C::GetWeatherCPP(class FName CallFunc_GetWeather_TodaysWeather)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetWeatherCPP");

	Params::UCGGameInstance_C_GetWeatherCPP_Params Parms{};

	Parms.CallFunc_GetWeather_TodaysWeather = CallFunc_GetWeather_TodaysWeather;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.PrintResourcesOnLevelImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, float>           Map                                                              (Edit, BlueprintVisible)
// TMap<class FName, float>           K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FResourcesForMap            CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EResourceType>   CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_PickableItem_00_Distributor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_Distributor_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::PrintResourcesOnLevelImpl(TMap<class FName, float> Map, TMap<class FName, float> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FResourcesForMap& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<enum class EResourceType>& CallFunc_Map_Keys_Keys_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, enum class EResourceType CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, enum class EResourceType CallFunc_Array_Get_Item_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FName CallFunc_GetEnumeratorName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, float CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class ABP_PickableItem_00_Distributor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_3, class ABP_PickableItem_00_Distributor_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, float CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "PrintResourcesOnLevelImpl");

	Params::UCGGameInstance_C_PrintResourcesOnLevelImpl_Params Parms{};

	Parms.Map = Map;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.TestResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, float>           Resources                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_PickableItem_00_Distributor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_Distributor_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::TestResources(TMap<class FName, float> Resources, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ABP_PickableItem_00_Distributor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_PickableItem_00_Distributor_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "TestResources");

	Params::UCGGameInstance_C_TestResources_Params Parms{};

	Parms.Resources = Resources;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Recalculate and Update Storm Time Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartingDurationInMinutes                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyModifier_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::Recalculate_and_Update_Storm_Time_Duration(float StartingDurationInMinutes, float CallFunc_GetDifficultyModifier_ReturnValue, float CallFunc_GetDifficultyModifier_ReturnValue_1, float CallFunc_GetDifficultyModifier_ReturnValue_2, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, int32 CallFunc_GetCurrentDay_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Recalculate and Update Storm Time Duration");

	Params::UCGGameInstance_C_Recalculate_and_Update_Storm_Time_Duration_Params Parms{};

	Parms.StartingDurationInMinutes = StartingDurationInMinutes;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue = CallFunc_GetDifficultyModifier_ReturnValue;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue_1 = CallFunc_GetDifficultyModifier_ReturnValue_1;
	Parms.CallFunc_GetDifficultyModifier_ReturnValue_2 = CallFunc_GetDifficultyModifier_ReturnValue_2;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetDayKozlovQuestEnded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DayKozlovQuestEnded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetDayKozlovQuestEnded(int32* DayKozlovQuestEnded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetDayKozlovQuestEnded");

	Params::UCGGameInstance_C_GetDayKozlovQuestEnded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DayKozlovQuestEnded != nullptr)
		*DayKozlovQuestEnded = Parms.DayKozlovQuestEnded;

}


// Function CGGameInstance.CGGameInstance_C.SetDayKozlovQuestEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SetDayKozlovQuestEnded(int32 CallFunc_GetCurrentDay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetDayKozlovQuestEnded");

	Params::UCGGameInstance_C_SetDayKozlovQuestEnded_Params Parms{};

	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ReloadGameSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EReloadGameType         SaveType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CustomSave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetCustomSaveNames_ReturnValue                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::ReloadGameSave(enum class EReloadGameType SaveType, class FName CustomSave, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FString>& CallFunc_GetCustomSaveNames_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ReloadGameSave");

	Params::UCGGameInstance_C_ReloadGameSave_Params Parms{};

	Parms.SaveType = SaveType;
	Parms.CustomSave = CustomSave;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCustomSaveNames_ReturnValue = CallFunc_GetCustomSaveNames_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SetDialogueStartAsUsed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_ch_npc_00_C*             Companion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DialogueStart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                NewArray                                                         (Edit, BlueprintVisible)
// struct FSavedNameArray             CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedNameArray             K2Node_MakeStruct_SavedNameArray                                 (UObjectWrapper)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SetDialogueStartAsUsed(class Aba_ch_npc_00_C* Companion, class FName DialogueStart, const TArray<class FName>& NewArray, const struct FSavedNameArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSavedNameArray& K2Node_MakeStruct_SavedNameArray, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetDialogueStartAsUsed");

	Params::UCGGameInstance_C_SetDialogueStartAsUsed_Params Parms{};

	Parms.Companion = Companion;
	Parms.DialogueStart = DialogueStart;
	Parms.NewArray = NewArray;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_SavedNameArray = K2Node_MakeStruct_SavedNameArray;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetRandomUnusedDialogueStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_ch_npc_00_C*             Companion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dialogue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CurrentRandomDialogue                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                RandomDialgoues                                                  (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedNameArray             CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetRandomUnusedDialogueStart(class Aba_ch_npc_00_C* Companion, class FName* Dialogue, bool* Result, class FName CurrentRandomDialogue, const TArray<class FName>& RandomDialgoues, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FSavedNameArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 K2Node_Select_Default, class FName CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetRandomUnusedDialogueStart");

	Params::UCGGameInstance_C_GetRandomUnusedDialogueStart_Params Parms{};

	Parms.Companion = Companion;
	Parms.CurrentRandomDialogue = CurrentRandomDialogue;
	Parms.RandomDialgoues = RandomDialgoues;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Dialogue != nullptr)
		*Dialogue = Parms.Dialogue;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CGGameInstance.CGGameInstance_C.UpdateInfluenceToNewSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::UpdateInfluenceToNewSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateInfluenceToNewSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.GetAdjustedSoldierEventLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               SkipLevelModifiers                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCustomSoldierEventLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsCustomSoldierEventLevelEnabled_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentSoldierEventLevel_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UCGGameInstance_C::GetAdjustedSoldierEventLevel(bool SkipLevelModifiers, int32 CallFunc_GetCustomSoldierEventLevel_ReturnValue, bool CallFunc_GetIsCustomSoldierEventLevelEnabled_ReturnValue, int32 CallFunc_GetCurrentSoldierEventLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetAdjustedSoldierEventLevel");

	Params::UCGGameInstance_C_GetAdjustedSoldierEventLevel_Params Parms{};

	Parms.SkipLevelModifiers = SkipLevelModifiers;
	Parms.CallFunc_GetCustomSoldierEventLevel_ReturnValue = CallFunc_GetCustomSoldierEventLevel_ReturnValue;
	Parms.CallFunc_GetIsCustomSoldierEventLevelEnabled_ReturnValue = CallFunc_GetIsCustomSoldierEventLevelEnabled_ReturnValue;
	Parms.CallFunc_GetCurrentSoldierEventLevel_ReturnValue = CallFunc_GetCurrentSoldierEventLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.SpendSkillPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SpendSkillPoints(int32 Amount, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpendSkillPoints");

	Params::UCGGameInstance_C_SpendSkillPoints_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.DebugToggleViewableObjectVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::DebugToggleViewableObjectVisibility(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "DebugToggleViewableObjectVisibility");

	Params::UCGGameInstance_C_DebugToggleViewableObjectVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ApplyTimelinesDebugPermanentData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       CallFunc_Map_Values_Values                                       (ReferenceParm)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)

void UCGGameInstance_C::ApplyTimelinesDebugPermanentData(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<bool>& CallFunc_Map_Values_Values, bool CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ApplyTimelinesDebugPermanentData");

	Params::UCGGameInstance_C_ApplyTimelinesDebugPermanentData_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetWeather
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TodaysWeather                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetWeather(class FName* TodaysWeather)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetWeather");

	Params::UCGGameInstance_C_GetWeather_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TodaysWeather != nullptr)
		*TodaysWeather = Parms.TodaysWeather;

}


// Function CGGameInstance.CGGameInstance_C.SetWeather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Calendar                CallFunc_GetDataTableRowFromName_OutRow                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::SetWeather(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FSt_Calendar& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 K2Node_Select_Default, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetWeather");

	Params::UCGGameInstance_C_SetWeather_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Companion add or substract Loyalty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Mod                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DecisionID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DontShowLoyalityFrame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERelationshipStatusType NewStatus                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> LogVariableHandle                                                (Edit, BlueprintVisible)
// float                              PreviousLoyalty                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              New_Loyality                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Dummy                                                            (Edit, BlueprintVisible)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_OnScreenFrameInformation_C*CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionLoyaltyRevertInfo K2Node_MakeStruct_CompanionLoyaltyRevertInfo                     (NoDestructor, UObjectWrapper)
// float                              CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_4                           (NoDestructor)

void UCGGameInstance_C::Companion_add_or_substract_Loyalty(class FName Companion, float Mod, class FName DecisionID, bool DontShowLoyalityFrame, enum class ERelationshipStatusType NewStatus, const TArray<struct FDataTableRowHandle>& LogVariableHandle, float PreviousLoyalty, float New_Loyality, const TArray<float>& Dummy, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UWid_OnScreenFrameInformation_C* CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_5, const struct FCompanionLoyaltyRevertInfo& K2Node_MakeStruct_CompanionLoyaltyRevertInfo, float CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Companion add or substract Loyalty");

	Params::UCGGameInstance_C_Companion_add_or_substract_Loyalty_Params Parms{};

	Parms.Companion = Companion;
	Parms.Mod = Mod;
	Parms.DecisionID = DecisionID;
	Parms.DontShowLoyalityFrame = DontShowLoyalityFrame;
	Parms.NewStatus = NewStatus;
	Parms.LogVariableHandle = LogVariableHandle;
	Parms.PreviousLoyalty = PreviousLoyalty;
	Parms.New_Loyality = New_Loyality;
	Parms.Dummy = Dummy;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue = CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_2 = CallFunc_EqualEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_3 = CallFunc_EqualEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_4 = CallFunc_EqualEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_5 = CallFunc_EqualEqual_FloatFloat_ReturnValue_5;
	Parms.K2Node_MakeStruct_CompanionLoyaltyRevertInfo = K2Node_MakeStruct_CompanionLoyaltyRevertInfo;
	Parms.CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue = CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_4 = K2Node_MakeStruct_DataTableRowHandle_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.IsBenchmark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGm_Benchmark_C*             K2Node_DynamicCast_AsGm_Benchmark                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::IsBenchmark(bool* bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGm_Benchmark_C* K2Node_DynamicCast_AsGm_Benchmark, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "IsBenchmark");

	Params::UCGGameInstance_C_IsBenchmark_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGm_Benchmark = K2Node_DynamicCast_AsGm_Benchmark;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function CGGameInstance.CGGameInstance_C.GetPhysMaterialtoAkSwitchMapping
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPhysicalMaterial*           Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PhysMaterialValueMappingCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetPhysMaterialtoAkSwitchMapping(class UPhysicalMaterial*& Key, class FString* Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FStruct_PhysMaterialValueMapping& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPhysicalMaterial* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetPhysMaterialtoAkSwitchMapping");

	Params::UCGGameInstance_C_GetPhysMaterialtoAkSwitchMapping_Params Parms{};

	Parms.Key = Key;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function CGGameInstance.CGGameInstance_C.OpenPauseMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_02_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_WorkshopUI_Main_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_WorkshopUI_Main_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_WorkshopUI_Main_C*      K2Node_DynamicCast_AsWid_Workshop_UI_Main                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_Crafting_Base_02_C*      K2Node_DynamicCast_AsBa_Crafting_Base_02                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_BuildSystem_C*           K2Node_DynamicCast_AsBp_Build_System                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_pda_MainView_C*         K2Node_DynamicCast_AsWid_Pda_Main_View                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPdaInput>  CallFunc_InputForceLeave_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_MainMenu_02_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UWid_MainMenu_02_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_16                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::OpenPauseMenu(class UWid_MainMenu_02_C* CallFunc_Create_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class UWid_WorkshopUI_Main_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_BooleanOR_ReturnValue, class UWid_WorkshopUI_Main_C* CallFunc_Array_Get_Item, class UWid_WorkshopUI_Main_C* K2Node_DynamicCast_AsWid_Workshop_UI_Main, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class Aba_Crafting_Base_02_C* K2Node_DynamicCast_AsBa_Crafting_Base_02, bool K2Node_DynamicCast_bSuccess_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class Abp_BuildSystem_C* K2Node_DynamicCast_AsBp_Build_System, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class UWid_pda_MainView_C* K2Node_DynamicCast_AsWid_Pda_Main_View, bool K2Node_DynamicCast_bSuccess_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, TScriptInterface<class IPdaInput> CallFunc_InputForceLeave_self_CastInput, TArray<class UWid_MainMenu_02_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue_1, class UWid_MainMenu_02_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_7, bool CallFunc_EqualEqual_ClassClass_ReturnValue_8, bool CallFunc_EqualEqual_ClassClass_ReturnValue_9, bool CallFunc_EqualEqual_ClassClass_ReturnValue_10, bool CallFunc_EqualEqual_ClassClass_ReturnValue_11, bool CallFunc_EqualEqual_ClassClass_ReturnValue_12, bool CallFunc_EqualEqual_ClassClass_ReturnValue_13, bool CallFunc_EqualEqual_ClassClass_ReturnValue_14, bool CallFunc_EqualEqual_ClassClass_ReturnValue_15, bool CallFunc_EqualEqual_ClassClass_ReturnValue_16, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OpenPauseMenu");

	Params::UCGGameInstance_C_OpenPauseMenu_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWid_Workshop_UI_Main = K2Node_DynamicCast_AsWid_Workshop_UI_Main;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_DynamicCast_AsBa_Crafting_Base_02 = K2Node_DynamicCast_AsBa_Crafting_Base_02;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBp_Build_System = K2Node_DynamicCast_AsBp_Build_System;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Pda_Main_View = K2Node_DynamicCast_AsWid_Pda_Main_View;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_InputForceLeave_self_CastInput = CallFunc_InputForceLeave_self_CastInput;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue_1 = CallFunc_GetCurrentMovementState_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_6 = CallFunc_EqualEqual_ClassClass_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_7 = CallFunc_EqualEqual_ClassClass_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_8 = CallFunc_EqualEqual_ClassClass_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_9 = CallFunc_EqualEqual_ClassClass_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_10 = CallFunc_EqualEqual_ClassClass_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_11 = CallFunc_EqualEqual_ClassClass_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_12 = CallFunc_EqualEqual_ClassClass_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_13 = CallFunc_EqualEqual_ClassClass_ReturnValue_13;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_14 = CallFunc_EqualEqual_ClassClass_ReturnValue_14;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_15 = CallFunc_EqualEqual_ClassClass_ReturnValue_15;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_16 = CallFunc_EqualEqual_ClassClass_ReturnValue_16;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CheckIfCompanionHasSomethingImportantToSay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasSomethingImporntantToSay                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::CheckIfCompanionHasSomethingImportantToSay(class FName& Key, bool* Has, bool HasSomethingImporntantToSay, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EDayPart CallFunc_GetDayPart_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CheckIfCompanionHasSomethingImportantToSay");

	Params::UCGGameInstance_C_CheckIfCompanionHasSomethingImportantToSay_Params Parms{};

	Parms.Key = Key;
	Parms.HasSomethingImporntantToSay = HasSomethingImporntantToSay;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has != nullptr)
		*Has = Parms.Has;

}


// Function CGGameInstance.CGGameInstance_C.SpendSp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SpendSp(int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpendSp");

	Params::UCGGameInstance_C_SpendSp_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetKnownInvestigationBoards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Return                                                           (Parm, OutParm)
// TArray<class FName>                ReorderedBoards                                                  (Edit, BlueprintVisible)
// TArray<class FName>                DiscoveredBoards                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetKnownInvestigationBoards(TArray<class FName>* Return, const TArray<class FName>& ReorderedBoards, const TArray<class FName>& DiscoveredBoards, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetKnownInvestigationBoards");

	Params::UCGGameInstance_C_GetKnownInvestigationBoards_Params Parms{};

	Parms.ReorderedBoards = ReorderedBoards;
	Parms.DiscoveredBoards = DiscoveredBoards;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function CGGameInstance.CGGameInstance_C.InitiateBuildingSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BuildSystemInit_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::InitiateBuildingSystem(bool CallFunc_BuildSystemInit_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "InitiateBuildingSystem");

	Params::UCGGameInstance_C_InitiateBuildingSystem_Params Parms{};

	Parms.CallFunc_BuildSystemInit_ReturnValue = CallFunc_BuildSystemInit_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetExpForLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CustomLevelInsteadOfCurrent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CustomLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRequiredExperiencePerLevel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UCGGameInstance_C::GetExpForLevel(bool CustomLevelInsteadOfCurrent, int32 CustomLevel, bool Temp_bool_Variable, float CallFunc_GetRequiredExperiencePerLevel_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetExpForLevel");

	Params::UCGGameInstance_C_GetExpForLevel_Params Parms{};

	Parms.CustomLevelInsteadOfCurrent = CustomLevelInsteadOfCurrent;
	Parms.CustomLevel = CustomLevel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetRequiredExperiencePerLevel_ReturnValue = CallFunc_GetRequiredExperiencePerLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.RemoveCurveAnimatedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::RemoveCurveAnimatedWidget(class UWidget*& Key, class Aba_WidgetCurveAnimation_Parent_C*& Value, bool CallFunc_Map_Remove_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveCurveAnimatedWidget");

	Params::UCGGameInstance_C_RemoveCurveAnimatedWidget_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.AddCurveAnimatedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::AddCurveAnimatedWidget(class UWidget*& Key, class Aba_WidgetCurveAnimation_Parent_C*& Value, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddCurveAnimatedWidget");

	Params::UCGGameInstance_C_AddCurveAnimatedWidget_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SetQuestCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reached                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::SetQuestCheckpoint(class FName Name, bool Reached)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetQuestCheckpoint");

	Params::UCGGameInstance_C_SetQuestCheckpoint_Params Parms{};

	Parms.Name = Name;
	Parms.Reached = Reached;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetQuestCheckpoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CheckpointName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckpointReached                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetQuestCheckpoint(class FName CheckpointName, bool* CheckpointReached, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetQuestCheckpoint");

	Params::UCGGameInstance_C_GetQuestCheckpoint_Params Parms{};

	Parms.CheckpointName = CheckpointName;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CheckpointReached != nullptr)
		*CheckpointReached = Parms.CheckpointReached;

}


// Function CGGameInstance.CGGameInstance_C.GetCurrentMaxCompanions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UCGGameInstance_C::GetCurrentMaxCompanions(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetCurrentMaxCompanions");

	Params::UCGGameInstance_C_GetCurrentMaxCompanions_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.GetKnownRecipes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                KnownRecipes                                                     (Parm, OutParm)
// TArray<class FName>                Return                                                           (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetAvaiableRecipies_ReturnValue                         (ReferenceParm)

void UCGGameInstance_C::GetKnownRecipes(TArray<class FName>* KnownRecipes, const TArray<class FName>& Return, TArray<class FName>& CallFunc_GetAvaiableRecipies_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetKnownRecipes");

	Params::UCGGameInstance_C_GetKnownRecipes_Params Parms{};

	Parms.Return = Return;
	Parms.CallFunc_GetAvaiableRecipies_ReturnValue = CallFunc_GetAvaiableRecipies_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (KnownRecipes != nullptr)
		*KnownRecipes = std::move(Parms.KnownRecipes);

}


// Function CGGameInstance.CGGameInstance_C.GetAttitudeTowardsStimuli
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PersonsName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_MoraleStimulant    Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AttitudeTowards    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_MoraleStimuliPreferencesMapCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AttitudeTowards    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AttitudeTowards    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AttitudeTowards    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AttitudeTowards    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AttitudeTowards    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_AttitudeTowards UCGGameInstance_C::GetAttitudeTowardsStimuli(class FName PersonsName, enum class Enum_MoraleStimulant Stimulus, bool Temp_bool_Variable, const struct FSt_MoraleStimuliPreferencesMap& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class Enum_AttitudeTowards Temp_byte_Variable, enum class Enum_AttitudeTowards Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class Enum_AttitudeTowards Temp_byte_Variable_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, enum class Enum_AttitudeTowards K2Node_Select_Default, enum class Enum_AttitudeTowards K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetAttitudeTowardsStimuli");

	Params::UCGGameInstance_C_GetAttitudeTowardsStimuli_Params Parms{};

	Parms.PersonsName = PersonsName;
	Parms.Stimulus = Stimulus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.GetMoraleBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PersonsName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetMoraleBonus(class FName PersonsName, float* Value, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetMoraleBonus");

	Params::UCGGameInstance_C_GetMoraleBonus_Params Parms{};

	Parms.PersonsName = PersonsName;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function CGGameInstance.CGGameInstance_C.RecountInfluencers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInfluencerComponentValue>ValuesToConsider2                                                (Edit, BlueprintVisible)
// TMap<enum class Enum_MoraleStimulant, float>CurrentlyIteratedMoraleInfluencers                               (Edit, BlueprintVisible)
// TMap<enum class Enum_MoraleStimulant, float>MoraleInfluenceToConsider                                        (Edit, BlueprintVisible)
// TMap<enum class EInfluenceTargets, float>ValueRemap                                                       (Edit, BlueprintVisible)
// class Aba_InfluencerComponent_C*   CurrentlyIteratedInfluencer                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class Enum_MoraleStimulant>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_MoraleStimulant, float>K2Node_MakeVariable_MakeVariableOutput                           (None)
// bool                               CallFunc_GetisInfluencingActive_Output_Get                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class Enum_MoraleStimulant, float>K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_MoraleStimulant    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInfluencerComponentValue   CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PowerManagmentGetLimit_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PowerManagmentRemoveFromLimit_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PowerManagmentAddToLimit_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_InfluencerComponent_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// float                              CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InfluencerComponent_C*   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::RecountInfluencers(const TArray<struct FInfluencerComponentValue>& ValuesToConsider2, TMap<enum class Enum_MoraleStimulant, float> CurrentlyIteratedMoraleInfluencers, TMap<enum class Enum_MoraleStimulant, float> MoraleInfluenceToConsider, TMap<enum class EInfluenceTargets, float> ValueRemap, class Aba_InfluencerComponent_C* CurrentlyIteratedInfluencer, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable, TArray<enum class Enum_MoraleStimulant>& CallFunc_Map_Keys_Keys, float Temp_float_Variable, int32 CallFunc_Array_Length_ReturnValue, TMap<enum class Enum_MoraleStimulant, float> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_GetisInfluencingActive_Output_Get, TMap<enum class Enum_MoraleStimulant, float> K2Node_MakeVariable_MakeVariableOutput_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, enum class Enum_MoraleStimulant CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FInfluencerComponentValue& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_PowerManagmentGetLimit_ReturnValue, bool CallFunc_PowerManagmentRemoveFromLimit_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_PowerManagmentAddToLimit_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, TArray<class Aba_InfluencerComponent_C*>& CallFunc_GetAllActorsOfClass_OutActors, float CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class Aba_InfluencerComponent_C* CallFunc_Array_Get_Item_2, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RecountInfluencers");

	Params::UCGGameInstance_C_RecountInfluencers_Params Parms{};

	Parms.ValuesToConsider2 = ValuesToConsider2;
	Parms.CurrentlyIteratedMoraleInfluencers = CurrentlyIteratedMoraleInfluencers;
	Parms.MoraleInfluenceToConsider = MoraleInfluenceToConsider;
	Parms.ValueRemap = ValueRemap;
	Parms.CurrentlyIteratedInfluencer = CurrentlyIteratedInfluencer;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetisInfluencingActive_Output_Get = CallFunc_GetisInfluencingActive_Output_Get;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_PowerManagmentGetLimit_ReturnValue = CallFunc_PowerManagmentGetLimit_ReturnValue;
	Parms.CallFunc_PowerManagmentRemoveFromLimit_ReturnValue = CallFunc_PowerManagmentRemoveFromLimit_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_PowerManagmentAddToLimit_ReturnValue = CallFunc_PowerManagmentAddToLimit_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.AddArrayOfCompletedQuests
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMissionReportRequiredInformation>Person_who_completed_the_quest                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Completer                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReportRequiredInformationCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddArrayOfCompletedQuests(TArray<struct FMissionReportRequiredInformation>& Person_who_completed_the_quest, class FName Completer, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FMissionReportRequiredInformation& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddArrayOfCompletedQuests");

	Params::UCGGameInstance_C_AddArrayOfCompletedQuests_Params Parms{};

	Parms.Person_who_completed_the_quest = Person_who_completed_the_quest;
	Parms.Completer = Completer;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetCompletedQuests
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FilterByPerson                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequireResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ApproximateResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionResult          ResultFilter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxCompletionAgeFilter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_CompletedQuestInfo>Return_quests                                                    (Parm, OutParm)
// TArray<class FString>              SerialisedStructure                                              (Edit, BlueprintVisible)
// struct FSt_CompletedQuestInfo      CurrentlyIteratedCompletedQuestInfo                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FSt_CompletedQuestInfo>CollectedQuests                                                  (Edit, BlueprintVisible)
// class FName                        CurrentlyIteratedQuestName                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReportRequiredInformationK2Node_MakeStruct_MissionReportRequiredInformation               (UObjectWrapper)
// struct FSt_CompletedQuestInfo      K2Node_MakeStruct_st_CompletedQuestInfo                          (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetCompletedQuests(class FName FilterByPerson, bool RequireResult, bool ApproximateResult, enum class EMissionResult ResultFilter, int32 MaxCompletionAgeFilter, TArray<struct FSt_CompletedQuestInfo>* Return_quests, const TArray<class FString>& SerialisedStructure, const struct FSt_CompletedQuestInfo& CurrentlyIteratedCompletedQuestInfo, const TArray<struct FSt_CompletedQuestInfo>& CollectedQuests, class FName CurrentlyIteratedQuestName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Conv_StringToInt_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_4, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FMissionReportRequiredInformation& K2Node_MakeStruct_MissionReportRequiredInformation, const struct FSt_CompletedQuestInfo& K2Node_MakeStruct_st_CompletedQuestInfo, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_BooleanAND_ReturnValue_4, class FName CallFunc_Array_Get_Item_5, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetCompletedQuests");

	Params::UCGGameInstance_C_GetCompletedQuests_Params Parms{};

	Parms.FilterByPerson = FilterByPerson;
	Parms.RequireResult = RequireResult;
	Parms.ApproximateResult = ApproximateResult;
	Parms.ResultFilter = ResultFilter;
	Parms.MaxCompletionAgeFilter = MaxCompletionAgeFilter;
	Parms.SerialisedStructure = SerialisedStructure;
	Parms.CurrentlyIteratedCompletedQuestInfo = CurrentlyIteratedCompletedQuestInfo;
	Parms.CollectedQuests = CollectedQuests;
	Parms.CurrentlyIteratedQuestName = CurrentlyIteratedQuestName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeStruct_MissionReportRequiredInformation = K2Node_MakeStruct_MissionReportRequiredInformation;
	Parms.K2Node_MakeStruct_st_CompletedQuestInfo = K2Node_MakeStruct_st_CompletedQuestInfo;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_quests != nullptr)
		*Return_quests = std::move(Parms.Return_quests);

}


// Function CGGameInstance.CGGameInstance_C.AddCompletedQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionReportRequiredInformationPerson_who_completed_the_quest                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        Completer                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_CompletedQuestInfo      K2Node_MakeStruct_st_CompletedQuestInfo                          (UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddCompletedQuest(const struct FMissionReportRequiredInformation& Person_who_completed_the_quest, class FName Completer, int32 CallFunc_GetCurrentDay_ReturnValue, const struct FSt_CompletedQuestInfo& K2Node_MakeStruct_st_CompletedQuestInfo, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddCompletedQuest");

	Params::UCGGameInstance_C_AddCompletedQuest_Params Parms{};

	Parms.Person_who_completed_the_quest = Person_who_completed_the_quest;
	Parms.Completer = Completer;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.K2Node_MakeStruct_st_CompletedQuestInfo = K2Node_MakeStruct_st_CompletedQuestInfo;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_ByteToString_ReturnValue_1 = CallFunc_Conv_ByteToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.WasPersonDiscovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Input_Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddIfNotDiscovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Return                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCGGameInstance_C::WasPersonDiscovered(class FName& Input_Name, bool AddIfNotDiscovered, bool Return, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "WasPersonDiscovered");

	Params::UCGGameInstance_C_WasPersonDiscovered_Params Parms{};

	Parms.Input_Name = Input_Name;
	Parms.AddIfNotDiscovered = AddIfNotDiscovered;
	Parms.Return = Return;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.AddDiscoveredPerson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input_Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddDiscoveredPerson(class FName& Input_Name, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddDiscoveredPerson");

	Params::UCGGameInstance_C_AddDiscoveredPerson_Params Parms{};

	Parms.Input_Name = Input_Name;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CheckIfSquadMembersHealthMeetsCritiera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGSquadManager*             Input_squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Comparsion                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class ACGSoldier*>          CallFunc_GetSquadMembers_ReturnValue                             (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGSoldier*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompareFloatByComparsionType_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCGGameInstance_C::CheckIfSquadMembersHealthMeetsCritiera(class ACGSquadManager* Input_squad, uint8 Comparsion, float Value, TArray<class ACGSoldier*>& CallFunc_GetSquadMembers_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class ACGSoldier* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CompareFloatByComparsionType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CheckIfSquadMembersHealthMeetsCritiera");

	Params::UCGGameInstance_C_CheckIfSquadMembersHealthMeetsCritiera_Params Parms{};

	Parms.Input_squad = Input_squad;
	Parms.Comparsion = Comparsion;
	Parms.Value = Value;
	Parms.CallFunc_GetSquadMembers_ReturnValue = CallFunc_GetSquadMembers_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CompareFloatByComparsionType_ReturnValue = CallFunc_CompareFloatByComparsionType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.ClearBuffsToReport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::ClearBuffsToReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ClearBuffsToReport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.AddKnownPerson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Person                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddKnownPerson(struct FDataTableRowHandle& Person, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddKnownPerson");

	Params::UCGGameInstance_C_AddKnownPerson_Params Parms{};

	Parms.Person = Person;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ActivateCustomScene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CustomSceneRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UCGGameInstance_C::ActivateCustomScene(class FName CustomSceneRow, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ActivateCustomScene");

	Params::UCGGameInstance_C_ActivateCustomScene_Params Parms{};

	Parms.CustomSceneRow = CustomSceneRow;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CustomWorkshopSceneFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::CustomWorkshopSceneFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CustomWorkshopSceneFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.GetCustomWorkshopScene
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GotAScene                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSet<TSoftObjectPtr<class UWorld>> RequestedLevels                                                  (Parm, OutParm)
// TSet<TSoftObjectPtr<class UWorld>> LevelsToLoad                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<TSoftObjectPtr<class UWorld>> K2Node_MakeSet_Set                                               (None)
// struct FSt_CustomWorkshopSceneData CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldSoftObjectReference   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetCustomWorkshopScene(bool* GotAScene, TSet<TSoftObjectPtr<class UWorld>>* RequestedLevels, TSet<TSoftObjectPtr<class UWorld>> LevelsToLoad, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSet<TSoftObjectPtr<class UWorld>> K2Node_MakeSet_Set, const struct FSt_CustomWorkshopSceneData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FWorldSoftObjectReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetCustomWorkshopScene");

	Params::UCGGameInstance_C_GetCustomWorkshopScene_Params Parms{};

	Parms.LevelsToLoad = LevelsToLoad;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GotAScene != nullptr)
		*GotAScene = Parms.GotAScene;

	if (RequestedLevels != nullptr)
		*RequestedLevels = Parms.RequestedLevels;

}


// Function CGGameInstance.CGGameInstance_C.CheckForPlotArmor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion_Name                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Armor_Pierced                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::CheckForPlotArmor(class FName& Companion_Name, bool* Armor_Pierced, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CheckForPlotArmor");

	Params::UCGGameInstance_C_CheckForPlotArmor_Params Parms{};

	Parms.Companion_Name = Companion_Name;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Armor_Pierced != nullptr)
		*Armor_Pierced = Parms.Armor_Pierced;

}


// Function CGGameInstance.CGGameInstance_C.AddPlotArmorToCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion_Name                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddPlotArmorToCompanion(class FName Companion_Name, int32 CallFunc_GetCurrentDay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddPlotArmorToCompanion");

	Params::UCGGameInstance_C_AddPlotArmorToCompanion_Params Parms{};

	Parms.Companion_Name = Companion_Name;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CompanionNoLongerHasImportantThingToSay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Olivier                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::CompanionNoLongerHasImportantThingToSay(class FName& Olivier, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CompanionNoLongerHasImportantThingToSay");

	Params::UCGGameInstance_C_CompanionNoLongerHasImportantThingToSay_Params Parms{};

	Parms.Olivier = Olivier;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetCharactersBasicData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CompanionName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionDefinition        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetCharactersBasicData(class FName CompanionName, class UDataTable* DataTable, class FText* Name, class UTexture2D** Image, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetCharactersBasicData");

	Params::UCGGameInstance_C_GetCharactersBasicData_Params Parms{};

	Parms.CompanionName = CompanionName;
	Parms.DataTable = DataTable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function CGGameInstance.CGGameInstance_C.DiscoverHideout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UCGGameInstance_C::DiscoverHideout(TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "DiscoverHideout");

	Params::UCGGameInstance_C_DiscoverHideout_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.DiscoverEvidence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SuppressLog                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnExpHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNoteExperienceHandle       ExperienceHandle                                                 (Parm, OutParm, NoDestructor)
// struct FDataTableRowHandle         NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// TArray<class FName>                ProcessedArray                                                   (Edit, BlueprintVisible)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FNoteExperienceHandle       K2Node_MakeStruct_NoteExperienceHandle                           (NoDestructor, UObjectWrapper)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UCGGameInstance_C::DiscoverEvidence(class FName Name, bool SuppressLog, bool ReturnExpHandle, struct FNoteExperienceHandle* ExperienceHandle, const struct FDataTableRowHandle& NewLocalVar_0, const TArray<class FName>& ProcessedArray, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, const struct FNoteExperienceHandle& K2Node_MakeStruct_NoteExperienceHandle, TArray<float>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "DiscoverEvidence");

	Params::UCGGameInstance_C_DiscoverEvidence_Params Parms{};

	Parms.Name = Name;
	Parms.SuppressLog = SuppressLog;
	Parms.ReturnExpHandle = ReturnExpHandle;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.ProcessedArray = ProcessedArray;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_NoteExperienceHandle = K2Node_MakeStruct_NoteExperienceHandle;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ExperienceHandle != nullptr)
		*ExperienceHandle = std::move(Parms.ExperienceHandle);

}


// Function CGGameInstance.CGGameInstance_C.AddTransitionalLevelKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::AddTransitionalLevelKey(class FName Name, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddTransitionalLevelKey");

	Params::UCGGameInstance_C_AddTransitionalLevelKey_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.AddMoraleStimulantValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MoraleStimulant    Stimulant                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ValueToAdd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HACkGetCurrentDayAdjustedForEvening_Day                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddMoraleStimulantValue(enum class Enum_MoraleStimulant Stimulant, float ValueToAdd, float Result, float Temp_float_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_HACkGetCurrentDayAdjustedForEvening_Day, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddMoraleStimulantValue");

	Params::UCGGameInstance_C_AddMoraleStimulantValue_Params Parms{};

	Parms.Stimulant = Stimulant;
	Parms.ValueToAdd = ValueToAdd;
	Parms.Result = Result;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HACkGetCurrentDayAdjustedForEvening_Day = CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetMoraleFeedbackDialogueAndRemoveItFromStack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion_Name                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceOutput                                                           (Parm, OutParm, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceChosenDialogue                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FStruct_DialogueDataReference>IteratedArray                                                    (Edit, BlueprintVisible)
// struct FStruct_DialogueDataReferenceCallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_DialogueDataArray       K2Node_MakeStruct_st_DialogueDataArray                           (UObjectWrapper, HasGetValueTypeHash)
// struct FSt_DialogueDataArray       CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCGGameInstance_C::GetMoraleFeedbackDialogueAndRemoveItFromStack(class FName& Companion_Name, struct FStruct_DialogueDataReference* Output, const struct FStruct_DialogueDataReference& ChosenDialogue, const TArray<struct FStruct_DialogueDataReference>& IteratedArray, const struct FStruct_DialogueDataReference& CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FSt_DialogueDataArray& K2Node_MakeStruct_st_DialogueDataArray, const struct FSt_DialogueDataArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetMoraleFeedbackDialogueAndRemoveItFromStack");

	Params::UCGGameInstance_C_GetMoraleFeedbackDialogueAndRemoveItFromStack_Params Parms{};

	Parms.Companion_Name = Companion_Name;
	Parms.ChosenDialogue = ChosenDialogue;
	Parms.IteratedArray = IteratedArray;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_MakeStruct_st_DialogueDataArray = K2Node_MakeStruct_st_DialogueDataArray;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function CGGameInstance.CGGameInstance_C.GetDialogeDataFromStackRepository
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceValue                                                            (Parm, OutParm, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetDialogeDataFromStackRepository(class FName RowName, class FName& Key, struct FStruct_DialogueDataReference* Value, bool* Found, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetDialogeDataFromStackRepository");

	Params::UCGGameInstance_C_GetDialogeDataFromStackRepository_Params Parms{};

	Parms.RowName = RowName;
	Parms.Key = Key;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function CGGameInstance.CGGameInstance_C.ApplyMoraleStimulusToSpecificPerson
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PersonName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_MoraleStimulant    Stimulus                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_DialogueDataReference>NewArray                                                         (Edit, BlueprintVisible)
// struct FSt_DialogueDataArray       Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// enum class Enum_AttitudeTowards    CallFunc_GetAttitudeTowardsStimuli_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// struct FSt_DialogueDataArray       K2Node_MakeStruct_st_DialogueDataArray                           (UObjectWrapper, HasGetValueTypeHash)
// struct FSt_DialogueDataArray       K2Node_MakeStruct_st_DialogueDataArray_1                         (UObjectWrapper, HasGetValueTypeHash)
// struct FSt_DialogueDataArray       CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_DialogueDataArray       CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceCallFunc_GetDialogeDataFromStackRepository_Value                 (HasGetValueTypeHash)
// bool                               CallFunc_GetDialogeDataFromStackRepository_Found                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceCallFunc_GetDialogeDataFromStackRepository_Value_1               (HasGetValueTypeHash)
// bool                               CallFunc_GetDialogeDataFromStackRepository_Found_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::ApplyMoraleStimulusToSpecificPerson(class FName PersonName, enum class Enum_MoraleStimulant& Stimulus, const TArray<struct FStruct_DialogueDataReference>& NewArray, const struct FSt_DialogueDataArray& Temp_struct_Variable, enum class Enum_AttitudeTowards CallFunc_GetAttitudeTowardsStimuli_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<float>& K2Node_MakeArray_Array, TArray<float>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3, const struct FSt_DialogueDataArray& K2Node_MakeStruct_st_DialogueDataArray, const struct FSt_DialogueDataArray& K2Node_MakeStruct_st_DialogueDataArray_1, const struct FSt_DialogueDataArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSt_DialogueDataArray& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_2, const struct FStruct_DialogueDataReference& CallFunc_GetDialogeDataFromStackRepository_Value, bool CallFunc_GetDialogeDataFromStackRepository_Found, const struct FStruct_DialogueDataReference& CallFunc_GetDialogeDataFromStackRepository_Value_1, bool CallFunc_GetDialogeDataFromStackRepository_Found_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ApplyMoraleStimulusToSpecificPerson");

	Params::UCGGameInstance_C_ApplyMoraleStimulusToSpecificPerson_Params Parms{};

	Parms.PersonName = PersonName;
	Parms.Stimulus = Stimulus;
	Parms.NewArray = NewArray;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAttitudeTowardsStimuli_ReturnValue = CallFunc_GetAttitudeTowardsStimuli_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeStruct_st_DialogueDataArray = K2Node_MakeStruct_st_DialogueDataArray;
	Parms.K2Node_MakeStruct_st_DialogueDataArray_1 = K2Node_MakeStruct_st_DialogueDataArray_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_GetDialogeDataFromStackRepository_Value = CallFunc_GetDialogeDataFromStackRepository_Value;
	Parms.CallFunc_GetDialogeDataFromStackRepository_Found = CallFunc_GetDialogeDataFromStackRepository_Found;
	Parms.CallFunc_GetDialogeDataFromStackRepository_Value_1 = CallFunc_GetDialogeDataFromStackRepository_Value_1;
	Parms.CallFunc_GetDialogeDataFromStackRepository_Found_1 = CallFunc_GetDialogeDataFromStackRepository_Found_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.RemoveMultipleModifiersForAllCompanion
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Modifier_structures                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::RemoveMultipleModifiersForAllCompanion(TArray<struct FDataTableRowHandle>& Modifier_structures, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveMultipleModifiersForAllCompanion");

	Params::UCGGameInstance_C_RemoveMultipleModifiersForAllCompanion_Params Parms{};

	Parms.Modifier_structures = Modifier_structures;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SetMultipleModifiersForAllCompanions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Modifier_structures                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SetMultipleModifiersForAllCompanions(TArray<struct FDataTableRowHandle>& Modifier_structures, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetMultipleModifiersForAllCompanions");

	Params::UCGGameInstance_C_SetMultipleModifiersForAllCompanions_Params Parms{};

	Parms.Modifier_structures = Modifier_structures;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.RemoveModifierForAllCompanions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Modifier_name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveBuffFromCompanion_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::RemoveModifierForAllCompanions(const struct FDataTableRowHandle& Modifier_name, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveBuffFromCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveModifierForAllCompanions");

	Params::UCGGameInstance_C_RemoveModifierForAllCompanions_Params Parms{};

	Parms.Modifier_name = Modifier_name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RemoveBuffFromCompanion_ReturnValue = CallFunc_RemoveBuffFromCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SetModifierForAllCompanions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Modifier_name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddBuffToCompanion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::SetModifierForAllCompanions(const struct FDataTableRowHandle& Modifier_name, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddBuffToCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetModifierForAllCompanions");

	Params::UCGGameInstance_C_SetModifierForAllCompanions_Params Parms{};

	Parms.Modifier_name = Modifier_name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddBuffToCompanion_ReturnValue = CallFunc_AddBuffToCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Clear QuestResults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              AppendedArray                                                    (Edit, BlueprintVisible)

void UCGGameInstance_C::Clear_QuestResults(const TArray<class FString>& AppendedArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Clear QuestResults");

	Params::UCGGameInstance_C_Clear_QuestResults_Params Parms{};

	Parms.AppendedArray = AppendedArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Add QuestResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              ReportText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class FName, struct FQuestResultStructure>QuestResults                                                     (Parm, OutParm)
// TArray<class FString>              AppendedArray                                                    (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestResultStructure       CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default                                            (ReferenceParm)
// struct FQuestResultStructure       K2Node_MakeStruct_QuestResultStructure                           (HasGetValueTypeHash)

void UCGGameInstance_C::Add_QuestResult(class FName Companion, TArray<class FString>& ReportText, TMap<class FName, struct FQuestResultStructure>* QuestResults, const TArray<class FString>& AppendedArray, bool Temp_bool_Variable, const struct FQuestResultStructure& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& K2Node_Select_Default, const struct FQuestResultStructure& K2Node_MakeStruct_QuestResultStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Add QuestResult");

	Params::UCGGameInstance_C_Add_QuestResult_Params Parms{};

	Parms.Companion = Companion;
	Parms.ReportText = ReportText;
	Parms.AppendedArray = AppendedArray;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_QuestResultStructure = K2Node_MakeStruct_QuestResultStructure;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestResults != nullptr)
		*QuestResults = Parms.QuestResults;

}


// Function CGGameInstance.CGGameInstance_C.Companion Add or subtract health
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Mod                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Respect_plot_armor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                ExBuffs                                                          (Edit, BlueprintVisible)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForPlotArmor_Armor_Pierced                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             K2Node_MakeStruct_CompanionEntry                                 (UObjectWrapper)
// bool                               CallFunc_SetStatsForCompanion_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddBuffToCompanion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::Companion_Add_or_subtract_health(class FName Companion_Name, float Mod, bool Respect_plot_armor, const TArray<class FName>& ExBuffs, bool CallFunc_Less_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckForPlotArmor_Armor_Pierced, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FCompanionEntry& K2Node_MakeStruct_CompanionEntry, bool CallFunc_SetStatsForCompanion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddBuffToCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Companion Add or subtract health");

	Params::UCGGameInstance_C_Companion_Add_or_subtract_health_Params Parms{};

	Parms.Companion_Name = Companion_Name;
	Parms.Mod = Mod;
	Parms.Respect_plot_armor = Respect_plot_armor;
	Parms.ExBuffs = ExBuffs;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CheckForPlotArmor_Armor_Pierced = CallFunc_CheckForPlotArmor_Armor_Pierced;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_MakeStruct_CompanionEntry = K2Node_MakeStruct_CompanionEntry;
	Parms.CallFunc_SetStatsForCompanion_ReturnValue = CallFunc_SetStatsForCompanion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddBuffToCompanion_ReturnValue = CallFunc_AddBuffToCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetBuffsToReportForCompanion
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Output_new                                                       (Parm, OutParm)
// TArray<class FName>                Output_ex                                                        (Parm, OutParm)
// TArray<class FName>                ExBuffs                                                          (Edit, BlueprintVisible)
// TArray<class FName>                NewBuffs                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue_1                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetBuffsToReportForCompanion(class FName& Companion, TArray<class FName>* Output_new, TArray<class FName>* Output_ex, const TArray<class FName>& ExBuffs, const TArray<class FName>& NewBuffs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetBuffsToReportForCompanion");

	Params::UCGGameInstance_C_GetBuffsToReportForCompanion_Params Parms{};

	Parms.Companion = Companion;
	Parms.ExBuffs = ExBuffs;
	Parms.NewBuffs = NewBuffs;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue_1 = CallFunc_ParseIntoArray_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_new != nullptr)
		*Output_new = std::move(Parms.Output_new);

	if (Output_ex != nullptr)
		*Output_ex = std::move(Parms.Output_ex);

}


// Function CGGameInstance.CGGameInstance_C.AppendBuffIntoReportingStack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Buff                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, class FName>     TargetMap                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AppendBuffIntoReportingStack(class FName& Companion, class FName Buff, TMap<class FName, class FName>& TargetMap, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AppendBuffIntoReportingStack");

	Params::UCGGameInstance_C_AppendBuffIntoReportingStack_Params Parms{};

	Parms.Companion = Companion;
	Parms.Buff = Buff;
	Parms.TargetMap = TargetMap;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SetOneBuffFromGroup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_of_array_entry_that_should_be_enabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Companion_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Array_of_Buff_names                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Set_buff                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Any_Buff_Removed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Removed_Buff_Index                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  BuffTable                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Companion_Table                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RemovedBuffName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_A_Buff_Removed                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index_of_removed_buff                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadBuff                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                BuffsToTurnOff                                                   (Edit, BlueprintVisible)
// class FName                        SelectedBuff                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddBuffToCompanion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveBuffFromCompanion_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::SetOneBuffFromGroup(int32 Index_of_array_entry_that_should_be_enabled, class FName Companion_Name, TArray<class FName>& Array_of_Buff_names, class FName* Set_buff, bool* Was_Any_Buff_Removed, int32* Removed_Buff_Index, class UDataTable* BuffTable, class UDataTable* Companion_Table, class FName RemovedBuffName, bool Was_A_Buff_Removed, int32 Index_of_removed_buff, bool HadBuff, const TArray<class FName>& BuffsToTurnOff, class FName SelectedBuff, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<float>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, bool CallFunc_HaveBuffCompanion_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_HaveBuffCompanion_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_AddBuffToCompanion_ReturnValue, bool CallFunc_RemoveBuffFromCompanion_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SetOneBuffFromGroup");

	Params::UCGGameInstance_C_SetOneBuffFromGroup_Params Parms{};

	Parms.Index_of_array_entry_that_should_be_enabled = Index_of_array_entry_that_should_be_enabled;
	Parms.Companion_Name = Companion_Name;
	Parms.Array_of_Buff_names = Array_of_Buff_names;
	Parms.BuffTable = BuffTable;
	Parms.Companion_Table = Companion_Table;
	Parms.RemovedBuffName = RemovedBuffName;
	Parms.Was_A_Buff_Removed = Was_A_Buff_Removed;
	Parms.Index_of_removed_buff = Index_of_removed_buff;
	Parms.HadBuff = HadBuff;
	Parms.BuffsToTurnOff = BuffsToTurnOff;
	Parms.SelectedBuff = SelectedBuff;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_1 = CallFunc_HaveBuffCompanion_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_AddBuffToCompanion_ReturnValue = CallFunc_AddBuffToCompanion_ReturnValue;
	Parms.CallFunc_RemoveBuffFromCompanion_ReturnValue = CallFunc_RemoveBuffFromCompanion_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Set_buff != nullptr)
		*Set_buff = Parms.Set_buff;

	if (Was_Any_Buff_Removed != nullptr)
		*Was_Any_Buff_Removed = Parms.Was_Any_Buff_Removed;

	if (Removed_Buff_Index != nullptr)
		*Removed_Buff_Index = Parms.Removed_Buff_Index;

}


// Function CGGameInstance.CGGameInstance_C.UpdateSystemicBuffs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentlyIteratedCompanion                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMorale_Current_Morale                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetOneBuffFromGroup_Set_buff                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetOneBuffFromGroup_Removed_Buff_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetOneBuffFromGroup_Set_buff_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetOneBuffFromGroup_Removed_Buff_Index_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::UpdateSystemicBuffs(class FName CurrentlyIteratedCompanion, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetMorale_Current_Morale, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_SetOneBuffFromGroup_Set_buff, bool CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed, int32 CallFunc_SetOneBuffFromGroup_Removed_Buff_Index, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, class FName CallFunc_SetOneBuffFromGroup_Set_buff_1, bool CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed_1, int32 CallFunc_SetOneBuffFromGroup_Removed_Buff_Index_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateSystemicBuffs");

	Params::UCGGameInstance_C_UpdateSystemicBuffs_Params Parms{};

	Parms.CurrentlyIteratedCompanion = CurrentlyIteratedCompanion;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetMorale_Current_Morale = CallFunc_GetMorale_Current_Morale;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_SetOneBuffFromGroup_Set_buff = CallFunc_SetOneBuffFromGroup_Set_buff;
	Parms.CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed = CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed;
	Parms.CallFunc_SetOneBuffFromGroup_Removed_Buff_Index = CallFunc_SetOneBuffFromGroup_Removed_Buff_Index;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_SetOneBuffFromGroup_Set_buff_1 = CallFunc_SetOneBuffFromGroup_Set_buff_1;
	Parms.CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed_1 = CallFunc_SetOneBuffFromGroup_Was_Any_Buff_Removed_1;
	Parms.CallFunc_SetOneBuffFromGroup_Removed_Buff_Index_1 = CallFunc_SetOneBuffFromGroup_Removed_Buff_Index_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ApplyMoraleStimulus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MoraleStimulant    Triggered_stimulus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CompanionName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             Companion                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HACkGetCurrentDayAdjustedForEvening_Day                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::ApplyMoraleStimulus(enum class Enum_MoraleStimulant Triggered_stimulus, class FName CompanionName, const struct FCompanionEntry& Companion, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_HACkGetCurrentDayAdjustedForEvening_Day, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ApplyMoraleStimulus");

	Params::UCGGameInstance_C_ApplyMoraleStimulus_Params Parms{};

	Parms.Triggered_stimulus = Triggered_stimulus;
	Parms.CompanionName = CompanionName;
	Parms.Companion = Companion;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HACkGetCurrentDayAdjustedForEvening_Day = CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Add radio audition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Audition_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  AuditionsRepository                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::Add_radio_audition(class FName Audition_ID, class UDataTable* AuditionsRepository, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Add radio audition");

	Params::UCGGameInstance_C_Add_radio_audition_Params Parms{};

	Parms.Audition_ID = Audition_ID;
	Parms.AuditionsRepository = AuditionsRepository;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Clearhollers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::Clearhollers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Clearhollers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.Add holler to stack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Person_name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Response_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::Add_holler_to_stack(class FName Person_name, class FName Response_ID, enum class EDayPart CallFunc_GetDayPart_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Add holler to stack");

	Params::UCGGameInstance_C_Add_holler_to_stack_Params Parms{};

	Parms.Person_name = Person_name;
	Parms.Response_ID = Response_ID;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ShadowWorldSceneEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::ShadowWorldSceneEnded(int32 Scene, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ShadowWorldSceneEnded");

	Params::UCGGameInstance_C_ShadowWorldSceneEnded_Params Parms{};

	Parms.Scene = Scene;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Companion Add or subtract morale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Mod                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Respect_plot_armor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewMorale                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHp                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ExBuffs                                                          (Edit, BlueprintVisible)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)
// bool                               CallFunc_CheckForPlotArmor_Armor_Pierced                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             K2Node_MakeStruct_CompanionEntry                                 (UObjectWrapper)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStatsForCompanion_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddBuffToCompanion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::Companion_Add_or_subtract_morale(class FName Companion_Name, float Mod, bool Respect_plot_armor, float NewMorale, float NewHp, const TArray<class FName>& ExBuffs, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_NameName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, bool CallFunc_CheckForPlotArmor_Armor_Pierced, const struct FCompanionEntry& K2Node_MakeStruct_CompanionEntry, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_SetStatsForCompanion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddBuffToCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Companion Add or subtract morale");

	Params::UCGGameInstance_C_Companion_Add_or_subtract_morale_Params Parms{};

	Parms.Companion_Name = Companion_Name;
	Parms.Mod = Mod;
	Parms.Respect_plot_armor = Respect_plot_armor;
	Parms.NewMorale = NewMorale;
	Parms.NewHp = NewHp;
	Parms.ExBuffs = ExBuffs;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;
	Parms.CallFunc_CheckForPlotArmor_Armor_Pierced = CallFunc_CheckForPlotArmor_Armor_Pierced;
	Parms.K2Node_MakeStruct_CompanionEntry = K2Node_MakeStruct_CompanionEntry;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SetStatsForCompanion_ReturnValue = CallFunc_SetStatsForCompanion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddBuffToCompanion_ReturnValue = CallFunc_AddBuffToCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Companion Heal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::Companion_Heal(class FName Companion_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Companion Heal");

	Params::UCGGameInstance_C_Companion_Heal_Params Parms{};

	Parms.Companion_Name = Companion_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.Add dialogue to stack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Person_name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Response_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DayPartString                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDayPart                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::Add_dialogue_to_stack(class FName Person_name, class FName Response_ID, const class FString& DayPartString, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EDayPart CallFunc_Array_Get_Item, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Add dialogue to stack");

	Params::UCGGameInstance_C_Add_dialogue_to_stack_Params Parms{};

	Parms.Person_name = Person_name;
	Parms.Response_ID = Response_ID;
	Parms.DayPartString = DayPartString;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.HACkGetCurrentDayAdjustedForEvening
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Day                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::HACkGetCurrentDayAdjustedForEvening(int32* Day, enum class EDayPart CallFunc_GetDayPart_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "HACkGetCurrentDayAdjustedForEvening");

	Params::UCGGameInstance_C_HACkGetCurrentDayAdjustedForEvening_Params Parms{};

	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Day != nullptr)
		*Day = Parms.Day;

}


// Function CGGameInstance.CGGameInstance_C.GetModsForLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class FName>                  Return_custom_handle_set                                         (Parm, OutParm)
// TSet<TSoftObjectPtr<class UWorld>> Return_Streaming_level_references                                (Parm, OutParm)
// TSet<TSoftObjectPtr<class UWorld>> InternalListOfModLevelReferences                                 (Edit, BlueprintVisible)
// TSet<class FName>                  InternalListOfLevelModHandlesForMap                              (Edit, BlueprintVisible)
// enum class EEventMap               CurrentlyEvaluatedMap                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_LevelModificationMapStructureCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LevelToLevelModStructureCallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWorldSoftObjectReference   CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSet<class FName>                  CallFunc_Set_Union_Result                                        (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetModsForLevel(enum class EEventMap Value, TSet<class FName>* Return_custom_handle_set, TSet<TSoftObjectPtr<class UWorld>>* Return_Streaming_level_references, TSet<TSoftObjectPtr<class UWorld>> InternalListOfModLevelReferences, TSet<class FName> InternalListOfLevelModHandlesForMap, enum class EEventMap CurrentlyEvaluatedMap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, TArray<class FName>& CallFunc_Set_ToArray_Result, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item, const struct FSt_LevelModificationMapStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_LevelToLevelModStructure& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FWorldSoftObjectReference& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TSet<class FName> CallFunc_Set_Union_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetModsForLevel");

	Params::UCGGameInstance_C_GetModsForLevel_Params Parms{};

	Parms.Value = Value;
	Parms.InternalListOfModLevelReferences = InternalListOfModLevelReferences;
	Parms.InternalListOfLevelModHandlesForMap = InternalListOfLevelModHandlesForMap;
	Parms.CurrentlyEvaluatedMap = CurrentlyEvaluatedMap;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Set_Union_Result = CallFunc_Set_Union_Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_custom_handle_set != nullptr)
		*Return_custom_handle_set = Parms.Return_custom_handle_set;

	if (Return_Streaming_level_references != nullptr)
		*Return_Streaming_level_references = Parms.Return_Streaming_level_references;

}


// Function CGGameInstance.CGGameInstance_C.ActivateLevelMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FName>                  NewLevelMods                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class FName>                  CallFunc_Set_Union_Result                                        (None)
// struct FSt_LevelModificationMapStructureCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::ActivateLevelMods(TSet<class FName> NewLevelMods, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Array_Get_Item, TSet<class FName> CallFunc_Set_Union_Result, const struct FSt_LevelModificationMapStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ActivateLevelMods");

	Params::UCGGameInstance_C_ActivateLevelMods_Params Parms{};

	Parms.NewLevelMods = NewLevelMods;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Set_Union_Result = CallFunc_Set_Union_Result;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ConvertInventoryToItemAndCountStructure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Source_inventory_array                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSt_ItemAndCount>    TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemAndCount            K2Node_MakeStruct_st_ItemAndCount                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::ConvertInventoryToItemAndCountStructure(TArray<struct FInventoryEntry>& Source_inventory_array, TArray<struct FSt_ItemAndCount>& TargetArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, float CallFunc_Count_ReturnValue, const struct FSt_ItemAndCount& K2Node_MakeStruct_st_ItemAndCount, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ConvertInventoryToItemAndCountStructure");

	Params::UCGGameInstance_C_ConvertInventoryToItemAndCountStructure_Params Parms{};

	Parms.Source_inventory_array = Source_inventory_array;
	Parms.TargetArray = TargetArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.K2Node_MakeStruct_st_ItemAndCount = K2Node_MakeStruct_st_ItemAndCount;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.RefreshFeedinDayDates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      ProcessedFeedingDates                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::RefreshFeedinDayDates(const TArray<float>& ProcessedFeedingDates, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RefreshFeedinDayDates");

	Params::UCGGameInstance_C_RefreshFeedinDayDates_Params Parms{};

	Parms.ProcessedFeedingDates = ProcessedFeedingDates;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.CalculateNewPlayeritems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSt_ItemAndCount>    NewItems                                                         (Parm, OutParm)
// TArray<struct FSt_ItemAndCount>    Internal_new_player_items                                        (Edit, BlueprintVisible)
// TMap<class FName, float>           InternalItemCountMap                                             (Edit, BlueprintVisible)
// TArray<struct FSt_ItemAndCount>    Internal_Current_player_items                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemAndCount            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemAndCount            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_ItemAndCount            K2Node_MakeStruct_st_ItemAndCount                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)

void UCGGameInstance_C::CalculateNewPlayeritems(TArray<struct FSt_ItemAndCount>* NewItems, const TArray<struct FSt_ItemAndCount>& Internal_new_player_items, TMap<class FName, float> InternalItemCountMap, const TArray<struct FSt_ItemAndCount>& Internal_Current_player_items, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSt_ItemAndCount& CallFunc_Array_Get_Item, const struct FSt_ItemAndCount& CallFunc_Array_Get_Item_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSt_ItemAndCount& K2Node_MakeStruct_st_ItemAndCount, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CalculateNewPlayeritems");

	Params::UCGGameInstance_C_CalculateNewPlayeritems_Params Parms{};

	Parms.Internal_new_player_items = Internal_new_player_items;
	Parms.InternalItemCountMap = InternalItemCountMap;
	Parms.Internal_Current_player_items = Internal_Current_player_items;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_st_ItemAndCount = K2Node_MakeStruct_st_ItemAndCount;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewItems != nullptr)
		*NewItems = std::move(Parms.NewItems);

}


// Function CGGameInstance.CGGameInstance_C.InternalCheckLoadingFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ALevelStreamingManager*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelStreamingManager*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::InternalCheckLoadingFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class ALevelStreamingManager*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class ALevelStreamingManager* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "InternalCheckLoadingFinished");

	Params::UCGGameInstance_C_InternalCheckLoadingFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.LoadGame2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                LevelsLoadedWhileSave                                            (Edit, BlueprintVisible)

void UCGGameInstance_C::LoadGame2(bool* Result, const TArray<class FName>& LevelsLoadedWhileSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "LoadGame2");

	Params::UCGGameInstance_C_LoadGame2_Params Parms{};

	Parms.LevelsLoadedWhileSave = LevelsLoadedWhileSave;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CGGameInstance.CGGameInstance_C.GetNearestFeedingDayInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Interval                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Date                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetNearestFeedingDayInterval(float* Interval, float* Date, struct FLinearColor* Color, int32 CallFunc_GetCurrentDay_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetNearestFeedingDayInterval");

	Params::UCGGameInstance_C_GetNearestFeedingDayInterval_Params Parms{};

	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Interval != nullptr)
		*Interval = Parms.Interval;

	if (Date != nullptr)
		*Date = Parms.Date;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function CGGameInstance.CGGameInstance_C.GetNeededFood
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentAmount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetAmount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                PercentageColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// TArray<struct FCompanionEntry>     CallFunc_GetLiveCompanions_CurrentLiveCompanionsOutput           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetNeededFood(int32* CurrentAmount, int32* TargetAmount, struct FLinearColor* PercentageColor, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetLiveCompanions_CurrentLiveCompanionsOutput, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetNeededFood");

	Params::UCGGameInstance_C_GetNeededFood_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_GetLiveCompanions_CurrentLiveCompanionsOutput = CallFunc_GetLiveCompanions_CurrentLiveCompanionsOutput;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentAmount != nullptr)
		*CurrentAmount = Parms.CurrentAmount;

	if (TargetAmount != nullptr)
		*TargetAmount = Parms.TargetAmount;

	if (PercentageColor != nullptr)
		*PercentageColor = std::move(Parms.PercentageColor);

}


// Function CGGameInstance.CGGameInstance_C.GetLiveCompanions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCompanionEntry>     Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               SkipIgor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCompanionEntry>     CurrentLiveCompanionsOutput                                      (Parm, OutParm)
// TArray<struct FCompanionEntry>     CurrentLiveCompanions                                            (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetLiveCompanions(TArray<struct FCompanionEntry>& Array, bool SkipIgor, TArray<struct FCompanionEntry>* CurrentLiveCompanionsOutput, const TArray<struct FCompanionEntry>& CurrentLiveCompanions, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetLiveCompanions");

	Params::UCGGameInstance_C_GetLiveCompanions_Params Parms{};

	Parms.Array = Array;
	Parms.SkipIgor = SkipIgor;
	Parms.CurrentLiveCompanions = CurrentLiveCompanions;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentLiveCompanionsOutput != nullptr)
		*CurrentLiveCompanionsOutput = std::move(Parms.CurrentLiveCompanionsOutput);

}


// Function CGGameInstance.CGGameInstance_C.LoadGameOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Rot                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CameraTransfrom                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  PlayerTransform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSaveAndLoadLocked_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDataFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void UCGGameInstance_C::LoadGameOld(bool* Result, const struct FRotator& Rot, const struct FTransform& CameraTransfrom, const struct FTransform& PlayerTransform, bool CallFunc_IsSaveAndLoadLocked_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_LoadDataFromSlot_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class AController* CallFunc_GetController_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "LoadGameOld");

	Params::UCGGameInstance_C_LoadGameOld_Params Parms{};

	Parms.Rot = Rot;
	Parms.CameraTransfrom = CameraTransfrom;
	Parms.PlayerTransform = PlayerTransform;
	Parms.CallFunc_IsSaveAndLoadLocked_ReturnValue = CallFunc_IsSaveAndLoadLocked_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_LoadDataFromSlot_ReturnValue = CallFunc_LoadDataFromSlot_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CGGameInstance.CGGameInstance_C.SaveGameOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSaveAndLoadLocked_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UCGGameInstance_C::SaveGameOld(bool* Result, bool CallFunc_IsSaveAndLoadLocked_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const class FString& CallFunc_Conv_NameToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SaveGameOld");

	Params::UCGGameInstance_C_SaveGameOld_Params Parms{};

	Parms.CallFunc_IsSaveAndLoadLocked_ReturnValue = CallFunc_IsSaveAndLoadLocked_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CGGameInstance.CGGameInstance_C.UpdateNewNote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNew                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Note                    K2Node_MakeStruct_st_Note                                        (HasGetValueTypeHash)

void UCGGameInstance_C::UpdateNewNote(bool IsNew, int32 Index, const struct FSt_Note& K2Node_MakeStruct_st_Note)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateNewNote");

	Params::UCGGameInstance_C_UpdateNewNote_Params Parms{};

	Parms.IsNew = IsNew;
	Parms.Index = Index;
	Parms.K2Node_MakeStruct_st_Note = K2Node_MakeStruct_st_Note;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetNoteDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NoteID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSucceeded                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectNoteDescription_01NoteDescription                                                  (Parm, OutParm, HasGetValueTypeHash)
// struct FSt_col_CollectableObjectNoteDescription_01Result                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               bSearchSucceeded                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCollectableObjectDescription_IndexInArray            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectDescriptionWithKey_01CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FSt_col_CollectableObjectNoteDescription_01CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetNoteDescription(class FName CollectableObjectID, class FName NoteID, bool* bSucceeded, struct FSt_col_CollectableObjectNoteDescription_01* NoteDescription, const struct FSt_col_CollectableObjectNoteDescription_01& Result, bool bSearchSucceeded, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetCollectableObjectDescription_IndexInArray, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FSt_col_CollectableObjectDescriptionWithKey_01& CallFunc_Array_Get_Item, const struct FSt_col_CollectableObjectNoteDescription_01& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetNoteDescription");

	Params::UCGGameInstance_C_GetNoteDescription_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.NoteID = NoteID;
	Parms.Result = Result;
	Parms.bSearchSucceeded = bSearchSucceeded;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCollectableObjectDescription_IndexInArray = CallFunc_GetCollectableObjectDescription_IndexInArray;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSucceeded != nullptr)
		*bSucceeded = Parms.bSucceeded;

	if (NoteDescription != nullptr)
		*NoteDescription = std::move(Parms.NoteDescription);

}


// Function CGGameInstance.CGGameInstance_C.InvestigationSolved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InvestigationID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInvestigationDescription_IndexInArray                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::InvestigationSolved(class FName InvestigationID, int32 CallFunc_GetInvestigationDescription_IndexInArray, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "InvestigationSolved");

	Params::UCGGameInstance_C_InvestigationSolved_Params Parms{};

	Parms.InvestigationID = InvestigationID;
	Parms.CallFunc_GetInvestigationDescription_IndexInArray = CallFunc_GetInvestigationDescription_IndexInArray;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.InvestigationPointFound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PointID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInvestigationPointDescription_bSucceeded             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectPointDescription_01CallFunc_GetInvestigationPointDescription_PointDescription       (HasGetValueTypeHash)
// struct FSt_col_CollectableObjectPointDescription_01K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)

void UCGGameInstance_C::InvestigationPointFound(class FName CollectableObjectID, class FName PointID, bool CallFunc_GetInvestigationPointDescription_bSucceeded, const struct FSt_col_CollectableObjectPointDescription_01& CallFunc_GetInvestigationPointDescription_PointDescription, const struct FSt_col_CollectableObjectPointDescription_01& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "InvestigationPointFound");

	Params::UCGGameInstance_C_InvestigationPointFound_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.PointID = PointID;
	Parms.CallFunc_GetInvestigationPointDescription_bSucceeded = CallFunc_GetInvestigationPointDescription_bSucceeded;
	Parms.CallFunc_GetInvestigationPointDescription_PointDescription = CallFunc_GetInvestigationPointDescription_PointDescription;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetInvestigationPointOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PointID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSucceeded                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_InvestigationOption_01InvestigationOption                                              (Parm, OutParm, HasGetValueTypeHash)
// struct FSt_col_InvestigationOption_01Result                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               bFound                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInvestigationPointDescription_bSucceeded             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectPointDescription_01CallFunc_GetInvestigationPointDescription_PointDescription       (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_col_InvestigationOption_01CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::GetInvestigationPointOption(class FName CollectableObjectID, class FName PointID, class FName OptionID, bool* bSucceeded, struct FSt_col_InvestigationOption_01* InvestigationOption, const struct FSt_col_InvestigationOption_01& Result, bool bFound, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_GetInvestigationPointDescription_bSucceeded, const struct FSt_col_CollectableObjectPointDescription_01& CallFunc_GetInvestigationPointDescription_PointDescription, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSt_col_InvestigationOption_01& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetInvestigationPointOption");

	Params::UCGGameInstance_C_GetInvestigationPointOption_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.PointID = PointID;
	Parms.OptionID = OptionID;
	Parms.Result = Result;
	Parms.bFound = bFound;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetInvestigationPointDescription_bSucceeded = CallFunc_GetInvestigationPointDescription_bSucceeded;
	Parms.CallFunc_GetInvestigationPointDescription_PointDescription = CallFunc_GetInvestigationPointDescription_PointDescription;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSucceeded != nullptr)
		*bSucceeded = Parms.bSucceeded;

	if (InvestigationOption != nullptr)
		*InvestigationOption = std::move(Parms.InvestigationOption);

}


// Function CGGameInstance.CGGameInstance_C.InvestigationPointAnalyzeFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PointID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_col_OptionActivationPrerequisite_01AnalyzeMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_col_CollectableObjectPointDescription_01PointDescription                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::InvestigationPointAnalyzeFinished(class FName CollectableObjectID, class FName PointID, enum class Enum_col_OptionActivationPrerequisite_01 AnalyzeMode, const struct FSt_col_CollectableObjectPointDescription_01& PointDescription, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "InvestigationPointAnalyzeFinished");

	Params::UCGGameInstance_C_InvestigationPointAnalyzeFinished_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.PointID = PointID;
	Parms.AnalyzeMode = AnalyzeMode;
	Parms.PointDescription = PointDescription;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetInvestigationPointDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PointID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSucceeded                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectPointDescription_01PointDescription                                                 (Parm, OutParm, HasGetValueTypeHash)
// bool                               bSearchSucceeded                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectPointDescription_01Result                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCollectableObjectDescription_IndexInArray            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_col_CollectableObjectPointDescription_01CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetInvestigationPointDescription(class FName CollectableObjectID, class FName PointID, bool* bSucceeded, struct FSt_col_CollectableObjectPointDescription_01* PointDescription, bool bSearchSucceeded, const struct FSt_col_CollectableObjectPointDescription_01& Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetCollectableObjectDescription_IndexInArray, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_col_CollectableObjectPointDescription_01& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetInvestigationPointDescription");

	Params::UCGGameInstance_C_GetInvestigationPointDescription_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.PointID = PointID;
	Parms.bSearchSucceeded = bSearchSucceeded;
	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCollectableObjectDescription_IndexInArray = CallFunc_GetCollectableObjectDescription_IndexInArray;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSucceeded != nullptr)
		*bSucceeded = Parms.bSucceeded;

	if (PointDescription != nullptr)
		*PointDescription = std::move(Parms.PointDescription);

}


// Function CGGameInstance.CGGameInstance_C.CollectableObjectFound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCollectableObjectDescription_IndexInArray            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::CollectableObjectFound(class FName CollectableObjectID, int32 CallFunc_GetCollectableObjectDescription_IndexInArray, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CollectableObjectFound");

	Params::UCGGameInstance_C_CollectableObjectFound_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.CallFunc_GetCollectableObjectDescription_IndexInArray = CallFunc_GetCollectableObjectDescription_IndexInArray;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.GetInvestigationDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InvestigationID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexInArray                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalIndexInArray                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetInvestigationDescription(class FName InvestigationID, int32* IndexInArray, int32 LocalIndexInArray, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetInvestigationDescription");

	Params::UCGGameInstance_C_GetInvestigationDescription_Params Parms{};

	Parms.InvestigationID = InvestigationID;
	Parms.LocalIndexInArray = LocalIndexInArray;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IndexInArray != nullptr)
		*IndexInArray = Parms.IndexInArray;

}


// Function CGGameInstance.CGGameInstance_C.GetCollectableObjectDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexInArray                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalIndexInArray                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::GetCollectableObjectDescription(class FName CollectableObjectID, int32* IndexInArray, int32 LocalIndexInArray, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "GetCollectableObjectDescription");

	Params::UCGGameInstance_C_GetCollectableObjectDescription_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.LocalIndexInArray = LocalIndexInArray;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IndexInArray != nullptr)
		*IndexInArray = Parms.IndexInArray;

}


// Function CGGameInstance.CGGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.PostLoadMapWithWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                      InWorld                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::PostLoadMapWithWorld(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "PostLoadMapWithWorld");

	Params::UCGGameInstance_C_PostLoadMapWithWorld_Params Parms{};

	Parms.InWorld = InWorld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.EventInternalShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::EventInternalShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "EventInternalShowLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.EventInternalHideLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::EventInternalHideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "EventInternalHideLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnSettingLevelsCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnSettingLevelsCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnSettingLevelsCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.LoadComplitedSave
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::LoadComplitedSave(class FName& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "LoadComplitedSave");

	Params::UCGGameInstance_C_LoadComplitedSave_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.UnloadComplitedSave
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::UnloadComplitedSave(class FName& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UnloadComplitedSave");

	Params::UCGGameInstance_C_UnloadComplitedSave_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SublevelLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SublevelLoaded(class FName& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SublevelLoaded");

	Params::UCGGameInstance_C_SublevelLoaded_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SquadLostTrack
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACGSquadManager*             InSquad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SquadLostTrack(class ACGSquadManager* InSquad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SquadLostTrack");

	Params::UCGGameInstance_C_SquadLostTrack_Params Parms{};

	Parms.InSquad = InSquad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.EventStatusAdded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::EventStatusAdded(class FName Event, class FName Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "EventStatusAdded");

	Params::UCGGameInstance_C_EventStatusAdded_Params Parms{};

	Parms.Event = Event;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SquadGotTrack
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACGSquadManager*             InSquad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::SquadGotTrack(class ACGSquadManager* InSquad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SquadGotTrack");

	Params::UCGGameInstance_C_SquadGotTrack_Params Parms{};

	Parms.InSquad = InSquad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.RemoveUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::RemoveUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.LevelUpDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AddedExp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::LevelUpDelegate_Event_0(float AddedExp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "LevelUpDelegate_Event_0");

	Params::UCGGameInstance_C_LevelUpDelegate_Event_0_Params Parms{};

	Parms.AddedExp = AddedExp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ReportSolvedExp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::ReportSolvedExp(float B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ReportSolvedExp");

	Params::UCGGameInstance_C_ReportSolvedExp_Params Parms{};

	Parms.B = B;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.DialogueSpawnInteractable
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACGAICharacter*              InAICharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InItemName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::DialogueSpawnInteractable(class ACGAICharacter* InAICharacter, class FName InItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "DialogueSpawnInteractable");

	Params::UCGGameInstance_C_DialogueSpawnInteractable_Params Parms{};

	Parms.InAICharacter = InAICharacter;
	Parms.InItemName = InItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.portalTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::PortalTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "portalTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFPAnimSystemActivity   InQueryActivity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   InActiveItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               bInLastActivity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InActivitySuccesful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::CustomEvent_0(enum class EFPAnimSystemActivity InQueryActivity, TSubclassOf<class ACGActiveItem> InActiveItemClass, bool bInLastActivity, bool InActivitySuccesful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "CustomEvent_0");

	Params::UCGGameInstance_C_CustomEvent_0_Params Parms{};

	Parms.InQueryActivity = InQueryActivity;
	Parms.InActiveItemClass = InActiveItemClass;
	Parms.bInLastActivity = bInLastActivity;
	Parms.InActivitySuccesful = InActivitySuccesful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.RemoveWatermark
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::RemoveWatermark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveWatermark");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.RemoveSubtitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::RemoveSubtitles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveSubtitles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnDeadSoldier
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnDeadSoldier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnDeadSoldier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnSoldier
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnSoldier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnSoldier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnShadow
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnShadow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnShadow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnEliteSoldier
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnEliteSoldier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnEliteSoldier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnSeregantSoldier
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnSeregantSoldier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnSeregantSoldier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnChernoHost
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnChernoHost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnChernoHost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.Master loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkResult               Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::Master_loaded(enum class EAkResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "Master loaded");

	Params::UCGGameInstance_C_Master_loaded_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ChangeNumberSoldiers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::ChangeNumberSoldiers(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ChangeNumberSoldiers");

	Params::UCGGameInstance_C_ChangeNumberSoldiers_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.BPPrepareDataForNewGamePlus
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::BPPrepareDataForNewGamePlus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "BPPrepareDataForNewGamePlus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.BPRestoreDataForNewGamePlus
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::BPRestoreDataForNewGamePlus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "BPRestoreDataForNewGamePlus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnLoadGameFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnLoadGameFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnLoadGameFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnBlackStalker
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnBlackStalker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnBlackStalker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.BuildingOnLevelTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::BuildingOnLevelTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "BuildingOnLevelTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.BuildSystemStart_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::BuildSystemStart_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "BuildSystemStart_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.BuildSystemEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::BuildSystemEnd_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "BuildSystemEnd_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.PrintResourcesOnLevel
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::PrintResourcesOnLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "PrintResourcesOnLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.WriteAchievement
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAchievementType        AchievementType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::WriteAchievement(enum class EAchievementType AchievementType, float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "WriteAchievement");

	Params::UCGGameInstance_C_WriteAchievement_Params Parms{};

	Parms.AchievementType = AchievementType;
	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ApplyCompanionLoyaltyRevert
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::ApplyCompanionLoyaltyRevert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ApplyCompanionLoyaltyRevert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.AddCurveAnimatedWidgetMaster
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::AddCurveAnimatedWidgetMaster(class UWidget* InWidget, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "AddCurveAnimatedWidgetMaster");

	Params::UCGGameInstance_C_AddCurveAnimatedWidgetMaster_Params Parms{};

	Parms.InWidget = InWidget;
	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.RemoveCurveAnimatedWidgetMaster
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::RemoveCurveAnimatedWidgetMaster(class UWidget* InWidget, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "RemoveCurveAnimatedWidgetMaster");

	Params::UCGGameInstance_C_RemoveCurveAnimatedWidgetMaster_Params Parms{};

	Parms.InWidget = InWidget;
	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.SpawnHeavySoldier
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnHeavySoldier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnHeavySoldier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.SpawnSuperHeavySoldier
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::SpawnSuperHeavySoldier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "SpawnSuperHeavySoldier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnQuestFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        QuestID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnQuestFinished(class FName QuestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnQuestFinished");

	Params::UCGGameInstance_C_OnQuestFinished_Params Parms{};

	Parms.QuestID = QuestID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ValidateArmor_CPP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowMessage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::ValidateArmor_CPP(bool bShowMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ValidateArmor_CPP");

	Params::UCGGameInstance_C_ValidateArmor_CPP_Params Parms{};

	Parms.bShowMessage = bShowMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.UpdateMaterialSharpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::UpdateMaterialSharpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateMaterialSharpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.ForceScreenshot
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::ForceScreenshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ForceScreenshot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.UpdateMaterialSharpen_CPP
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::UpdateMaterialSharpen_CPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateMaterialSharpen_CPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnTemporalStorageDropped
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnTemporalStorageDropped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnTemporalStorageDropped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.UpdateRaytracingSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::UpdateRaytracingSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateRaytracingSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.UpdateRaytracingParams
// (Event, Public, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::UpdateRaytracingParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "UpdateRaytracingParams");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.ExecuteUbergraph_CGGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable              (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable_1            (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable              (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable_1            (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_2                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_4                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_5                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_3                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_6                    (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_7                    (IsPlainOldData, NoDestructor)
// class ACGSoldier*                  CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default_1                                          (IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGSoldier*                  CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_8                    (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_2                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_9                    (IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Select_Default_2                                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGSoldier*                  CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_2       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_15                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_10                   (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_3                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_11                   (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default_3                                          (IsPlainOldData, NoDestructor)
// class ACGSoldier*                  CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_3       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_4                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_4                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_12                   (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default_4                                          (IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class ACGSoldier*                  CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_4  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_4       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_col_InvestigationDescription_01CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_InvestigationDescriptionWithKey_01K2Node_MakeStruct_st_col_InvestigationDescriptionWithKey_01      (UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      K2Node_Event_InWorld                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation_8                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_16                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_13                   (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_17                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_col_CollectableObjectDescription_01CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_col_CollectableObjectDescriptionWithKey_01K2Node_MakeStruct_st_col_CollectableObjectDescriptionWithKey_01  (UObjectWrapper, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_5                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_5                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_sw_LevelLoading_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_14                   (IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Select_Default_5                                          (IsPlainOldData, NoDestructor)
// class ACGSoldier*                  CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_5  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_5       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UCustomSaveGame*             CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LevelName_2                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LevelName_1                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ALevelStreamingManager*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ALevelStreamingManager*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_LevelName                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGSquadManager*             K2Node_Event_InSquad_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadName_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfSquadMembersHealthMeetsCritiera_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_Event                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Status                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABackend*                    CallFunc_GetBackend_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGSquadManager*             K2Node_Event_InSquad                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOuterEvent                 CallFunc_GetOuterEventStructure_ReturnValue                      (None)
// TArray<class ACGSoldier*>          CallFunc_GetSquadMembers_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadName_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APatrolActor*>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AddedExp                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_B                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_Event_InAICharacter                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_InItemName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_AIHand_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          CallFunc_NameIDToitemEnum_Output                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractable>CallFunc_SetInteractionLocked_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class ACGShadowTeleportingAreaBase*>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFPAnimSystemActivity   K2Node_CustomEvent_InQueryActivity                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_CustomEvent_InActiveItemClass                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInLastActivity                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_InActivitySuccesful                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_WaterMark_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_WaterMark_C*            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_SubtitleManager_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UWid_SubtitleManager_C*      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoadedSoundbank_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAkResult               K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadingScreen_Flares_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAchievementType        K2Node_Event_AchievementType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanionLoyaltyRevertPossible_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FCompanionLoyaltyRevertInfo CallFunc_Array_Get_Item_6                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class UWid_LoadingScreen_C*        CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// TArray<struct FActiveQuestInfo>    CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FActiveQuestInfo            CallFunc_Array_Get_Item_7                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Event_InWidget_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InActor_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_InWidget                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InActor                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_WidgetCurveAnimation_Parent_C*K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent_1          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_6                                           (ConstParm, ReferenceParm)
// class FName                        K2Node_Event_QuestID                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_6                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_6                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowMessage                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_15                   (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default_6                                          (IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         CallFunc_KeyNameToEnum_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class ACGDarkStalker*              CallFunc_SpawnDarkStalkerEnemy_OutSpawnedDarkStalker             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnDarkStalkerEnemy_OutSpawnResult                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Loading_ProgressBar_C*  CallFunc_CreateLoadingBar_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUDLSSMode              CallFunc_GetDLSSMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDLSSMode              CallFunc_GetDLSSMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_7                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_7                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_7                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_16                   (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDLSSMode              CallFunc_GetAutoDLSSQualityBasedOnPixels_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Select_Default_7                                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGShadow*                   CallFunc_SpawnShadowEnemy_OutSpawnedShadow                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnShadowEnemy_OutSpawnResult                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_8                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_8                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_8                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_17                   (IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRTTranslucentReflections_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Select_Default_8                                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_SpawnAIFromSoftClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRTReflections_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRTReflectionsMaxBounces_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRTGlobalIllumination_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRTReflections_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRTTranslucentReflections_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRTWaterCausticsAllowed_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRTWaterCaustics_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRTMeshCausticsAllowed_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRTMeshCaustics_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRequiredExperiencePerLevel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRequiredExperiencePerLevel_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::ExecuteUbergraph_CGGameInstance(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Variable, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable, bool Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable_1, TArray<class AActor*>& Temp_object_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_1, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, bool Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_3, bool Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, bool Temp_bool_Variable_1, TArray<class AActor*>& Temp_object_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_2, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, TArray<class AActor*>& Temp_object_Variable_2, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool Temp_bool_Variable_3, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_3, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_3, int32 Temp_int_Loop_Counter_Variable_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_7, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_4, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_4, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_5, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_5, const struct FVector& CallFunc_GetForwardVector_ReturnValue_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_8, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_9, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_4, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_10, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_11, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_11, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, TArray<class AActor*>& Temp_object_Variable_3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_6, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FTransform& K2Node_Select_Default, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_7, class ACGSoldier* CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller, bool CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult, const struct FTransform& K2Node_Select_Default_1, float CallFunc_ApplyDamage_ReturnValue, class ACGSoldier* CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_1, bool CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_1, int32 Temp_int_Loop_Counter_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_6, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_6, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FVector& CallFunc_GetForwardVector_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_12, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_13, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_13, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_8, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_2, bool CallFunc_LineTraceSingle_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool Temp_bool_Variable_4, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, const struct FTransform& K2Node_Select_Default_2, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_7, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_7, class ACGSoldier* CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_2, bool CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_7, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_14, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_15, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_14, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_15, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_10, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_3, bool CallFunc_LineTraceSingle_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_11, const struct FTransform& K2Node_Select_Default_3, class ACGSoldier* CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_3, bool CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class AActor*>& Temp_object_Variable_4, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_4, bool CallFunc_LineTraceSingle_ReturnValue_4, bool CallFunc_BreakHitResult_bBlockingHit_4, bool CallFunc_BreakHitResult_bInitialOverlap_4, float CallFunc_BreakHitResult_Time_4, float CallFunc_BreakHitResult_Distance_4, const struct FVector& CallFunc_BreakHitResult_Location_4, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_4, const struct FVector& CallFunc_BreakHitResult_Normal_4, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_4, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_4, class AActor* CallFunc_BreakHitResult_HitActor_4, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_4, class FName CallFunc_BreakHitResult_HitBoneName_4, int32 CallFunc_BreakHitResult_HitItem_4, int32 CallFunc_BreakHitResult_FaceIndex_4, const struct FVector& CallFunc_BreakHitResult_TraceStart_4, const struct FVector& CallFunc_BreakHitResult_TraceEnd_4, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_12, const struct FTransform& K2Node_Select_Default_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class ACGSoldier* CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_4, bool CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_4, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FSt_col_InvestigationDescription_01& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_col_InvestigationDescriptionWithKey_01& K2Node_MakeStruct_st_col_InvestigationDescriptionWithKey_01, bool Temp_bool_Variable_5, int32 CallFunc_Array_Add_ReturnValue, class UWorld* K2Node_Event_InWorld, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_8, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_8, const struct FVector& CallFunc_GetForwardVector_ReturnValue_8, int32 Temp_int_Array_Index_Variable_4, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_16, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_17, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_13, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_17, int32 Temp_int_Array_Index_Variable_5, class FName CallFunc_Array_Get_Item_1, const struct FSt_col_CollectableObjectDescription_01& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FSt_col_CollectableObjectDescriptionWithKey_01& K2Node_MakeStruct_st_col_CollectableObjectDescriptionWithKey_01, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, int32 CallFunc_Array_Add_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable_5, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_5, bool CallFunc_LineTraceSingle_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_sw_LevelLoading_C* CallFunc_Create_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_5, bool CallFunc_BreakHitResult_bInitialOverlap_5, float CallFunc_BreakHitResult_Time_5, float CallFunc_BreakHitResult_Distance_5, const struct FVector& CallFunc_BreakHitResult_Location_5, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_5, const struct FVector& CallFunc_BreakHitResult_Normal_5, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_5, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_5, class AActor* CallFunc_BreakHitResult_HitActor_5, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_5, class FName CallFunc_BreakHitResult_HitBoneName_5, int32 CallFunc_BreakHitResult_HitItem_5, int32 CallFunc_BreakHitResult_FaceIndex_5, const struct FVector& CallFunc_BreakHitResult_TraceStart_5, const struct FVector& CallFunc_BreakHitResult_TraceEnd_5, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_14, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FTransform& K2Node_Select_Default_5, class ACGSoldier* CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_5, bool CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UCustomSaveGame* CallFunc_CreateSaveGameObject_ReturnValue, class FName K2Node_CustomEvent_LevelName_2, class FName K2Node_CustomEvent_LevelName_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, TArray<class ALevelStreamingManager*>& CallFunc_GetAllActorsOfClass_OutActors, class ALevelStreamingManager* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName K2Node_CustomEvent_LevelName, class ACGSquadManager* K2Node_Event_InSquad_1, class FName CallFunc_GetSquadName_ReturnValue, bool CallFunc_CheckIfSquadMembersHealthMeetsCritiera_ReturnValue, class FName K2Node_Event_Event, class FName K2Node_Event_Status, class ABackend* CallFunc_GetBackend_ReturnValue, class ACGSquadManager* K2Node_Event_InSquad, const struct FOuterEvent& CallFunc_GetOuterEventStructure_ReturnValue, TArray<class ACGSoldier*>& CallFunc_GetSquadMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class FName CallFunc_GetSquadName_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, TArray<class APatrolActor*>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, float K2Node_CustomEvent_AddedExp, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, float K2Node_CustomEvent_B, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_5, class ACGAICharacter* K2Node_Event_InAICharacter, class FName K2Node_Event_InItemName, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickableItem_AIHand_00_C* CallFunc_FinishSpawningActor_ReturnValue, enum class Enum_ItemNames CallFunc_NameIDToitemEnum_Output, TScriptInterface<class IInteractable> CallFunc_SetInteractionLocked_self_CastInput, const class FString& CallFunc_GetObjectName_ReturnValue, TArray<class ACGShadowTeleportingAreaBase*>& K2Node_MakeArray_Array_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class UClass* CallFunc_GetObjectClass_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, enum class EFPAnimSystemActivity K2Node_CustomEvent_InQueryActivity, TSubclassOf<class ACGActiveItem> K2Node_CustomEvent_InActiveItemClass, bool K2Node_CustomEvent_bInLastActivity, bool K2Node_CustomEvent_InActivitySuccesful, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class UWid_WaterMark_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Array_Length_ReturnValue_4, class UWid_WaterMark_C* CallFunc_Array_Get_Item_3, TArray<class UWid_SubtitleManager_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UWid_SubtitleManager_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UUserWidget* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable_6, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 Temp_int_Variable, bool CallFunc_IsLoadedSoundbank_ReturnValue, enum class EAkResult K2Node_CustomEvent_Result, int32 K2Node_CustomEvent_Number, int32 CallFunc_Add_IntInt_ReturnValue_8, class UWid_LoadingScreen_Flares_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, enum class EAchievementType K2Node_Event_AchievementType, float K2Node_Event_Progress, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, bool CallFunc_IsCompanionLoyaltyRevertPossible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FCompanionLoyaltyRevertInfo& CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_5, float CallFunc_Multiply_IntFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, float CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UWid_LoadingScreen_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable_1, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, const struct FActiveQuestInfo& CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class UWidget* K2Node_Event_InWidget_1, class AActor* K2Node_Event_InActor_1, class UWidget* K2Node_Event_InWidget, class AActor* K2Node_Event_InActor, class Aba_WidgetCurveAnimation_Parent_C* K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent, bool K2Node_DynamicCast_bSuccess, class Aba_WidgetCurveAnimation_Parent_C* K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Variable_1, TArray<class AActor*>& Temp_object_Variable_6, class FName K2Node_Event_QuestID, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_6, bool CallFunc_LineTraceSingle_ReturnValue_6, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_6, bool CallFunc_BreakHitResult_bInitialOverlap_6, float CallFunc_BreakHitResult_Time_6, float CallFunc_BreakHitResult_Distance_6, const struct FVector& CallFunc_BreakHitResult_Location_6, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_6, const struct FVector& CallFunc_BreakHitResult_Normal_6, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_6, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_6, class AActor* CallFunc_BreakHitResult_HitActor_6, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_6, class FName CallFunc_BreakHitResult_HitBoneName_6, int32 CallFunc_BreakHitResult_HitItem_6, int32 CallFunc_BreakHitResult_FaceIndex_6, const struct FVector& CallFunc_BreakHitResult_TraceStart_6, const struct FVector& CallFunc_BreakHitResult_TraceEnd_6, bool K2Node_Event_bShowMessage, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_15, const struct FTransform& K2Node_Select_Default_6, const class FString& CallFunc_MakeLiteralString_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class Enum_Buttons_PC CallFunc_KeyNameToEnum_Value, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class ACGDarkStalker* CallFunc_SpawnDarkStalkerEnemy_OutSpawnedDarkStalker, bool CallFunc_SpawnDarkStalkerEnemy_OutSpawnResult, bool Temp_bool_Variable_7, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, class UWid_Loading_ProgressBar_C* CallFunc_CreateLoadingBar_Widget, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, TArray<class AActor*>& Temp_object_Variable_7, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_7, bool CallFunc_LineTraceSingle_ReturnValue_7, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_7, bool CallFunc_BreakHitResult_bInitialOverlap_7, float CallFunc_BreakHitResult_Time_7, float CallFunc_BreakHitResult_Distance_7, const struct FVector& CallFunc_BreakHitResult_Location_7, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_7, const struct FVector& CallFunc_BreakHitResult_Normal_7, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_7, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_7, class AActor* CallFunc_BreakHitResult_HitActor_7, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_7, class FName CallFunc_BreakHitResult_HitBoneName_7, int32 CallFunc_BreakHitResult_HitItem_7, int32 CallFunc_BreakHitResult_FaceIndex_7, const struct FVector& CallFunc_BreakHitResult_TraceStart_7, const struct FVector& CallFunc_BreakHitResult_TraceEnd_7, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_16, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable_8, int32 CallFunc_FTrunc_ReturnValue, enum class EUDLSSMode CallFunc_GetAutoDLSSQualityBasedOnPixels_ReturnValue, const struct FTransform& K2Node_Select_Default_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, class ACGShadow* CallFunc_SpawnShadowEnemy_OutSpawnedShadow, bool CallFunc_SpawnShadowEnemy_OutSpawnResult, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, TArray<class AActor*>& Temp_object_Variable_8, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_8, bool CallFunc_LineTraceSingle_ReturnValue_8, bool CallFunc_BreakHitResult_bBlockingHit_8, bool CallFunc_BreakHitResult_bInitialOverlap_8, float CallFunc_BreakHitResult_Time_8, float CallFunc_BreakHitResult_Distance_8, const struct FVector& CallFunc_BreakHitResult_Location_8, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_8, const struct FVector& CallFunc_BreakHitResult_Normal_8, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_8, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_8, class AActor* CallFunc_BreakHitResult_HitActor_8, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_8, class FName CallFunc_BreakHitResult_HitBoneName_8, int32 CallFunc_BreakHitResult_HitItem_8, int32 CallFunc_BreakHitResult_FaceIndex_8, const struct FVector& CallFunc_BreakHitResult_TraceStart_8, const struct FVector& CallFunc_BreakHitResult_TraceEnd_8, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_17, int32 CallFunc_GetRTTranslucentReflections_ReturnValue, const struct FTransform& K2Node_Select_Default_8, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class APawn* CallFunc_SpawnAIFromSoftClass_ReturnValue, int32 CallFunc_GetRTReflections_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_GetRTReflectionsMaxBounces_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, bool CallFunc_GetRTGlobalIllumination_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, int32 CallFunc_GetRTReflections_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetRTTranslucentReflections_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, bool CallFunc_GetRTWaterCausticsAllowed_ReturnValue, int32 CallFunc_GetRTWaterCaustics_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, bool CallFunc_GetRTMeshCausticsAllowed_ReturnValue, int32 CallFunc_GetRTMeshCaustics_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, float CallFunc_GetRequiredExperiencePerLevel_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_GetRequiredExperiencePerLevel_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ExecuteUbergraph_CGGameInstance");

	Params::UCGGameInstance_C_ExecuteUbergraph_CGGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_1 = CallFunc_Multiply_VectorInt_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable = Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable;
	Parms.Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable_1 = Temp_bool_6691921A4D81FC935AB41E9AF0245687_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_1 = CallFunc_GetActorEyesViewPoint_OutLocation_1;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_1 = CallFunc_GetActorEyesViewPoint_OutRotation_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable = Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_2 = CallFunc_Multiply_VectorInt_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_1 = CallFunc_Conv_VectorToTransform_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_3 = CallFunc_Multiply_VectorInt_ReturnValue_3;
	Parms.Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable_1 = Temp_bool_2BDB8D6D48B9F0BD082A31A9915A2EFC_Variable_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_2 = CallFunc_GetActorEyesViewPoint_OutLocation_2;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_2 = CallFunc_GetActorEyesViewPoint_OutRotation_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_4 = CallFunc_Multiply_VectorInt_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_5 = CallFunc_Multiply_VectorInt_ReturnValue_5;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_2 = CallFunc_Conv_VectorToTransform_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_3 = CallFunc_GetActorEyesViewPoint_OutLocation_3;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_3 = CallFunc_GetActorEyesViewPoint_OutRotation_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_3 = CallFunc_GetForwardVector_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_6 = CallFunc_Multiply_VectorInt_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_7 = CallFunc_Multiply_VectorInt_ReturnValue_7;
	Parms.CallFunc_Add_VectorVector_ReturnValue_6 = CallFunc_Add_VectorVector_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_7 = CallFunc_Add_VectorVector_ReturnValue_7;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_3 = CallFunc_Conv_VectorToTransform_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_4 = CallFunc_GetActorEyesViewPoint_OutLocation_4;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_4 = CallFunc_GetActorEyesViewPoint_OutRotation_4;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_5 = CallFunc_GetActorEyesViewPoint_OutLocation_5;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_5 = CallFunc_GetActorEyesViewPoint_OutRotation_5;
	Parms.CallFunc_GetForwardVector_ReturnValue_4 = CallFunc_GetForwardVector_ReturnValue_4;
	Parms.CallFunc_GetForwardVector_ReturnValue_5 = CallFunc_GetForwardVector_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_8 = CallFunc_Multiply_VectorInt_ReturnValue_8;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_9 = CallFunc_Multiply_VectorInt_ReturnValue_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue_8 = CallFunc_Add_VectorVector_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_9 = CallFunc_Add_VectorVector_ReturnValue_9;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_4 = CallFunc_Conv_VectorToTransform_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_5 = CallFunc_Conv_VectorToTransform_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_10 = CallFunc_Multiply_VectorInt_ReturnValue_10;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_11 = CallFunc_Multiply_VectorInt_ReturnValue_11;
	Parms.CallFunc_Add_VectorVector_ReturnValue_10 = CallFunc_Add_VectorVector_ReturnValue_10;
	Parms.CallFunc_Add_VectorVector_ReturnValue_11 = CallFunc_Add_VectorVector_ReturnValue_11;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_6 = CallFunc_Conv_VectorToTransform_ReturnValue_6;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_7 = CallFunc_Conv_VectorToTransform_ReturnValue_7;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_1 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_1;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_1 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_6 = CallFunc_GetActorEyesViewPoint_OutLocation_6;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_6 = CallFunc_GetActorEyesViewPoint_OutRotation_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetForwardVector_ReturnValue_6 = CallFunc_GetForwardVector_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_12 = CallFunc_Multiply_VectorInt_ReturnValue_12;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_13 = CallFunc_Multiply_VectorInt_ReturnValue_13;
	Parms.CallFunc_Add_VectorVector_ReturnValue_12 = CallFunc_Add_VectorVector_ReturnValue_12;
	Parms.CallFunc_Add_VectorVector_ReturnValue_13 = CallFunc_Add_VectorVector_ReturnValue_13;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_8 = CallFunc_Conv_VectorToTransform_ReturnValue_8;
	Parms.CallFunc_LineTraceSingle_OutHit_2 = CallFunc_LineTraceSingle_OutHit_2;
	Parms.CallFunc_LineTraceSingle_ReturnValue_2 = CallFunc_LineTraceSingle_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_9 = CallFunc_Conv_VectorToTransform_ReturnValue_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_7 = CallFunc_GetActorEyesViewPoint_OutLocation_7;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_7 = CallFunc_GetActorEyesViewPoint_OutRotation_7;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_2 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_2;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_2 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_7 = CallFunc_GetForwardVector_ReturnValue_7;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_14 = CallFunc_Multiply_VectorInt_ReturnValue_14;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_15 = CallFunc_Multiply_VectorInt_ReturnValue_15;
	Parms.CallFunc_Add_VectorVector_ReturnValue_14 = CallFunc_Add_VectorVector_ReturnValue_14;
	Parms.CallFunc_Add_VectorVector_ReturnValue_15 = CallFunc_Add_VectorVector_ReturnValue_15;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_10 = CallFunc_Conv_VectorToTransform_ReturnValue_10;
	Parms.CallFunc_LineTraceSingle_OutHit_3 = CallFunc_LineTraceSingle_OutHit_3;
	Parms.CallFunc_LineTraceSingle_ReturnValue_3 = CallFunc_LineTraceSingle_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_3 = CallFunc_BreakHitResult_bBlockingHit_3;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_3 = CallFunc_BreakHitResult_bInitialOverlap_3;
	Parms.CallFunc_BreakHitResult_Time_3 = CallFunc_BreakHitResult_Time_3;
	Parms.CallFunc_BreakHitResult_Distance_3 = CallFunc_BreakHitResult_Distance_3;
	Parms.CallFunc_BreakHitResult_Location_3 = CallFunc_BreakHitResult_Location_3;
	Parms.CallFunc_BreakHitResult_ImpactPoint_3 = CallFunc_BreakHitResult_ImpactPoint_3;
	Parms.CallFunc_BreakHitResult_Normal_3 = CallFunc_BreakHitResult_Normal_3;
	Parms.CallFunc_BreakHitResult_ImpactNormal_3 = CallFunc_BreakHitResult_ImpactNormal_3;
	Parms.CallFunc_BreakHitResult_PhysMat_3 = CallFunc_BreakHitResult_PhysMat_3;
	Parms.CallFunc_BreakHitResult_HitActor_3 = CallFunc_BreakHitResult_HitActor_3;
	Parms.CallFunc_BreakHitResult_HitComponent_3 = CallFunc_BreakHitResult_HitComponent_3;
	Parms.CallFunc_BreakHitResult_HitBoneName_3 = CallFunc_BreakHitResult_HitBoneName_3;
	Parms.CallFunc_BreakHitResult_HitItem_3 = CallFunc_BreakHitResult_HitItem_3;
	Parms.CallFunc_BreakHitResult_FaceIndex_3 = CallFunc_BreakHitResult_FaceIndex_3;
	Parms.CallFunc_BreakHitResult_TraceStart_3 = CallFunc_BreakHitResult_TraceStart_3;
	Parms.CallFunc_BreakHitResult_TraceEnd_3 = CallFunc_BreakHitResult_TraceEnd_3;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_11 = CallFunc_Conv_VectorToTransform_ReturnValue_11;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_3 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_3;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_3 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit_4 = CallFunc_LineTraceSingle_OutHit_4;
	Parms.CallFunc_LineTraceSingle_ReturnValue_4 = CallFunc_LineTraceSingle_ReturnValue_4;
	Parms.CallFunc_BreakHitResult_bBlockingHit_4 = CallFunc_BreakHitResult_bBlockingHit_4;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_4 = CallFunc_BreakHitResult_bInitialOverlap_4;
	Parms.CallFunc_BreakHitResult_Time_4 = CallFunc_BreakHitResult_Time_4;
	Parms.CallFunc_BreakHitResult_Distance_4 = CallFunc_BreakHitResult_Distance_4;
	Parms.CallFunc_BreakHitResult_Location_4 = CallFunc_BreakHitResult_Location_4;
	Parms.CallFunc_BreakHitResult_ImpactPoint_4 = CallFunc_BreakHitResult_ImpactPoint_4;
	Parms.CallFunc_BreakHitResult_Normal_4 = CallFunc_BreakHitResult_Normal_4;
	Parms.CallFunc_BreakHitResult_ImpactNormal_4 = CallFunc_BreakHitResult_ImpactNormal_4;
	Parms.CallFunc_BreakHitResult_PhysMat_4 = CallFunc_BreakHitResult_PhysMat_4;
	Parms.CallFunc_BreakHitResult_HitActor_4 = CallFunc_BreakHitResult_HitActor_4;
	Parms.CallFunc_BreakHitResult_HitComponent_4 = CallFunc_BreakHitResult_HitComponent_4;
	Parms.CallFunc_BreakHitResult_HitBoneName_4 = CallFunc_BreakHitResult_HitBoneName_4;
	Parms.CallFunc_BreakHitResult_HitItem_4 = CallFunc_BreakHitResult_HitItem_4;
	Parms.CallFunc_BreakHitResult_FaceIndex_4 = CallFunc_BreakHitResult_FaceIndex_4;
	Parms.CallFunc_BreakHitResult_TraceStart_4 = CallFunc_BreakHitResult_TraceStart_4;
	Parms.CallFunc_BreakHitResult_TraceEnd_4 = CallFunc_BreakHitResult_TraceEnd_4;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_12 = CallFunc_Conv_VectorToTransform_ReturnValue_12;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_4 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_4;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_4 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_st_col_InvestigationDescriptionWithKey_01 = K2Node_MakeStruct_st_col_InvestigationDescriptionWithKey_01;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Event_InWorld = K2Node_Event_InWorld;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation_8 = CallFunc_GetActorEyesViewPoint_OutLocation_8;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation_8 = CallFunc_GetActorEyesViewPoint_OutRotation_8;
	Parms.CallFunc_GetForwardVector_ReturnValue_8 = CallFunc_GetForwardVector_ReturnValue_8;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_16 = CallFunc_Multiply_VectorInt_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_16 = CallFunc_Add_VectorVector_ReturnValue_16;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_17 = CallFunc_Multiply_VectorInt_ReturnValue_17;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_13 = CallFunc_Conv_VectorToTransform_ReturnValue_13;
	Parms.CallFunc_Add_VectorVector_ReturnValue_17 = CallFunc_Add_VectorVector_ReturnValue_17;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeStruct_st_col_CollectableObjectDescriptionWithKey_01 = K2Node_MakeStruct_st_col_CollectableObjectDescriptionWithKey_01;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.CallFunc_LineTraceSingle_OutHit_5 = CallFunc_LineTraceSingle_OutHit_5;
	Parms.CallFunc_LineTraceSingle_ReturnValue_5 = CallFunc_LineTraceSingle_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_5 = CallFunc_BreakHitResult_bBlockingHit_5;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_5 = CallFunc_BreakHitResult_bInitialOverlap_5;
	Parms.CallFunc_BreakHitResult_Time_5 = CallFunc_BreakHitResult_Time_5;
	Parms.CallFunc_BreakHitResult_Distance_5 = CallFunc_BreakHitResult_Distance_5;
	Parms.CallFunc_BreakHitResult_Location_5 = CallFunc_BreakHitResult_Location_5;
	Parms.CallFunc_BreakHitResult_ImpactPoint_5 = CallFunc_BreakHitResult_ImpactPoint_5;
	Parms.CallFunc_BreakHitResult_Normal_5 = CallFunc_BreakHitResult_Normal_5;
	Parms.CallFunc_BreakHitResult_ImpactNormal_5 = CallFunc_BreakHitResult_ImpactNormal_5;
	Parms.CallFunc_BreakHitResult_PhysMat_5 = CallFunc_BreakHitResult_PhysMat_5;
	Parms.CallFunc_BreakHitResult_HitActor_5 = CallFunc_BreakHitResult_HitActor_5;
	Parms.CallFunc_BreakHitResult_HitComponent_5 = CallFunc_BreakHitResult_HitComponent_5;
	Parms.CallFunc_BreakHitResult_HitBoneName_5 = CallFunc_BreakHitResult_HitBoneName_5;
	Parms.CallFunc_BreakHitResult_HitItem_5 = CallFunc_BreakHitResult_HitItem_5;
	Parms.CallFunc_BreakHitResult_FaceIndex_5 = CallFunc_BreakHitResult_FaceIndex_5;
	Parms.CallFunc_BreakHitResult_TraceStart_5 = CallFunc_BreakHitResult_TraceStart_5;
	Parms.CallFunc_BreakHitResult_TraceEnd_5 = CallFunc_BreakHitResult_TraceEnd_5;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_14 = CallFunc_Conv_VectorToTransform_ReturnValue_14;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_5 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnedPatroller_5;
	Parms.CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_5 = CallFunc_SpawnPatrollerEnemyFromSoftClass_OutSpawnResult_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_CustomEvent_LevelName_2 = K2Node_CustomEvent_LevelName_2;
	Parms.K2Node_CustomEvent_LevelName_1 = K2Node_CustomEvent_LevelName_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_LevelName = K2Node_CustomEvent_LevelName;
	Parms.K2Node_Event_InSquad_1 = K2Node_Event_InSquad_1;
	Parms.CallFunc_GetSquadName_ReturnValue = CallFunc_GetSquadName_ReturnValue;
	Parms.CallFunc_CheckIfSquadMembersHealthMeetsCritiera_ReturnValue = CallFunc_CheckIfSquadMembersHealthMeetsCritiera_ReturnValue;
	Parms.K2Node_Event_Event = K2Node_Event_Event;
	Parms.K2Node_Event_Status = K2Node_Event_Status;
	Parms.CallFunc_GetBackend_ReturnValue = CallFunc_GetBackend_ReturnValue;
	Parms.K2Node_Event_InSquad = K2Node_Event_InSquad;
	Parms.CallFunc_GetOuterEventStructure_ReturnValue = CallFunc_GetOuterEventStructure_ReturnValue;
	Parms.CallFunc_GetSquadMembers_ReturnValue = CallFunc_GetSquadMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetSquadName_ReturnValue_1 = CallFunc_GetSquadName_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.K2Node_CustomEvent_AddedExp = K2Node_CustomEvent_AddedExp;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.K2Node_CustomEvent_B = K2Node_CustomEvent_B;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_Event_InAICharacter = K2Node_Event_InAICharacter;
	Parms.K2Node_Event_InItemName = K2Node_Event_InItemName;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_NameIDToitemEnum_Output = CallFunc_NameIDToitemEnum_Output;
	Parms.CallFunc_SetInteractionLocked_self_CastInput = CallFunc_SetInteractionLocked_self_CastInput;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.K2Node_CustomEvent_InQueryActivity = K2Node_CustomEvent_InQueryActivity;
	Parms.K2Node_CustomEvent_InActiveItemClass = K2Node_CustomEvent_InActiveItemClass;
	Parms.K2Node_CustomEvent_bInLastActivity = K2Node_CustomEvent_bInLastActivity;
	Parms.K2Node_CustomEvent_InActivitySuccesful = K2Node_CustomEvent_InActivitySuccesful;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsLoadedSoundbank_ReturnValue = CallFunc_IsLoadedSoundbank_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Number = K2Node_CustomEvent_Number;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.K2Node_Event_AchievementType = K2Node_Event_AchievementType;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.CallFunc_IsCompanionLoyaltyRevertPossible_ReturnValue = CallFunc_IsCompanionLoyaltyRevertPossible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue = CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_Event_InWidget_1 = K2Node_Event_InWidget_1;
	Parms.K2Node_Event_InActor_1 = K2Node_Event_InActor_1;
	Parms.K2Node_Event_InWidget = K2Node_Event_InWidget;
	Parms.K2Node_Event_InActor = K2Node_Event_InActor;
	Parms.K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent = K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent_1 = K2Node_DynamicCast_AsBa_Widget_Curve_Animation_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Event_QuestID = K2Node_Event_QuestID;
	Parms.CallFunc_LineTraceSingle_OutHit_6 = CallFunc_LineTraceSingle_OutHit_6;
	Parms.CallFunc_LineTraceSingle_ReturnValue_6 = CallFunc_LineTraceSingle_ReturnValue_6;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_6 = CallFunc_BreakHitResult_bBlockingHit_6;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_6 = CallFunc_BreakHitResult_bInitialOverlap_6;
	Parms.CallFunc_BreakHitResult_Time_6 = CallFunc_BreakHitResult_Time_6;
	Parms.CallFunc_BreakHitResult_Distance_6 = CallFunc_BreakHitResult_Distance_6;
	Parms.CallFunc_BreakHitResult_Location_6 = CallFunc_BreakHitResult_Location_6;
	Parms.CallFunc_BreakHitResult_ImpactPoint_6 = CallFunc_BreakHitResult_ImpactPoint_6;
	Parms.CallFunc_BreakHitResult_Normal_6 = CallFunc_BreakHitResult_Normal_6;
	Parms.CallFunc_BreakHitResult_ImpactNormal_6 = CallFunc_BreakHitResult_ImpactNormal_6;
	Parms.CallFunc_BreakHitResult_PhysMat_6 = CallFunc_BreakHitResult_PhysMat_6;
	Parms.CallFunc_BreakHitResult_HitActor_6 = CallFunc_BreakHitResult_HitActor_6;
	Parms.CallFunc_BreakHitResult_HitComponent_6 = CallFunc_BreakHitResult_HitComponent_6;
	Parms.CallFunc_BreakHitResult_HitBoneName_6 = CallFunc_BreakHitResult_HitBoneName_6;
	Parms.CallFunc_BreakHitResult_HitItem_6 = CallFunc_BreakHitResult_HitItem_6;
	Parms.CallFunc_BreakHitResult_FaceIndex_6 = CallFunc_BreakHitResult_FaceIndex_6;
	Parms.CallFunc_BreakHitResult_TraceStart_6 = CallFunc_BreakHitResult_TraceStart_6;
	Parms.CallFunc_BreakHitResult_TraceEnd_6 = CallFunc_BreakHitResult_TraceEnd_6;
	Parms.K2Node_Event_bShowMessage = K2Node_Event_bShowMessage;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_15 = CallFunc_Conv_VectorToTransform_ReturnValue_15;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_KeyNameToEnum_Value = CallFunc_KeyNameToEnum_Value;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_SpawnDarkStalkerEnemy_OutSpawnedDarkStalker = CallFunc_SpawnDarkStalkerEnemy_OutSpawnedDarkStalker;
	Parms.CallFunc_SpawnDarkStalkerEnemy_OutSpawnResult = CallFunc_SpawnDarkStalkerEnemy_OutSpawnResult;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_CreateLoadingBar_Widget = CallFunc_CreateLoadingBar_Widget;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetDLSSMode_ReturnValue = CallFunc_GetDLSSMode_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_GetDLSSMode_ReturnValue_1 = CallFunc_GetDLSSMode_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_LineTraceSingle_OutHit_7 = CallFunc_LineTraceSingle_OutHit_7;
	Parms.CallFunc_LineTraceSingle_ReturnValue_7 = CallFunc_LineTraceSingle_ReturnValue_7;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_7 = CallFunc_BreakHitResult_bBlockingHit_7;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_7 = CallFunc_BreakHitResult_bInitialOverlap_7;
	Parms.CallFunc_BreakHitResult_Time_7 = CallFunc_BreakHitResult_Time_7;
	Parms.CallFunc_BreakHitResult_Distance_7 = CallFunc_BreakHitResult_Distance_7;
	Parms.CallFunc_BreakHitResult_Location_7 = CallFunc_BreakHitResult_Location_7;
	Parms.CallFunc_BreakHitResult_ImpactPoint_7 = CallFunc_BreakHitResult_ImpactPoint_7;
	Parms.CallFunc_BreakHitResult_Normal_7 = CallFunc_BreakHitResult_Normal_7;
	Parms.CallFunc_BreakHitResult_ImpactNormal_7 = CallFunc_BreakHitResult_ImpactNormal_7;
	Parms.CallFunc_BreakHitResult_PhysMat_7 = CallFunc_BreakHitResult_PhysMat_7;
	Parms.CallFunc_BreakHitResult_HitActor_7 = CallFunc_BreakHitResult_HitActor_7;
	Parms.CallFunc_BreakHitResult_HitComponent_7 = CallFunc_BreakHitResult_HitComponent_7;
	Parms.CallFunc_BreakHitResult_HitBoneName_7 = CallFunc_BreakHitResult_HitBoneName_7;
	Parms.CallFunc_BreakHitResult_HitItem_7 = CallFunc_BreakHitResult_HitItem_7;
	Parms.CallFunc_BreakHitResult_FaceIndex_7 = CallFunc_BreakHitResult_FaceIndex_7;
	Parms.CallFunc_BreakHitResult_TraceStart_7 = CallFunc_BreakHitResult_TraceStart_7;
	Parms.CallFunc_BreakHitResult_TraceEnd_7 = CallFunc_BreakHitResult_TraceEnd_7;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_16 = CallFunc_Conv_VectorToTransform_ReturnValue_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetAutoDLSSQualityBasedOnPixels_ReturnValue = CallFunc_GetAutoDLSSQualityBasedOnPixels_ReturnValue;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_SpawnShadowEnemy_OutSpawnedShadow = CallFunc_SpawnShadowEnemy_OutSpawnedShadow;
	Parms.CallFunc_SpawnShadowEnemy_OutSpawnResult = CallFunc_SpawnShadowEnemy_OutSpawnResult;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.CallFunc_LineTraceSingle_OutHit_8 = CallFunc_LineTraceSingle_OutHit_8;
	Parms.CallFunc_LineTraceSingle_ReturnValue_8 = CallFunc_LineTraceSingle_ReturnValue_8;
	Parms.CallFunc_BreakHitResult_bBlockingHit_8 = CallFunc_BreakHitResult_bBlockingHit_8;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_8 = CallFunc_BreakHitResult_bInitialOverlap_8;
	Parms.CallFunc_BreakHitResult_Time_8 = CallFunc_BreakHitResult_Time_8;
	Parms.CallFunc_BreakHitResult_Distance_8 = CallFunc_BreakHitResult_Distance_8;
	Parms.CallFunc_BreakHitResult_Location_8 = CallFunc_BreakHitResult_Location_8;
	Parms.CallFunc_BreakHitResult_ImpactPoint_8 = CallFunc_BreakHitResult_ImpactPoint_8;
	Parms.CallFunc_BreakHitResult_Normal_8 = CallFunc_BreakHitResult_Normal_8;
	Parms.CallFunc_BreakHitResult_ImpactNormal_8 = CallFunc_BreakHitResult_ImpactNormal_8;
	Parms.CallFunc_BreakHitResult_PhysMat_8 = CallFunc_BreakHitResult_PhysMat_8;
	Parms.CallFunc_BreakHitResult_HitActor_8 = CallFunc_BreakHitResult_HitActor_8;
	Parms.CallFunc_BreakHitResult_HitComponent_8 = CallFunc_BreakHitResult_HitComponent_8;
	Parms.CallFunc_BreakHitResult_HitBoneName_8 = CallFunc_BreakHitResult_HitBoneName_8;
	Parms.CallFunc_BreakHitResult_HitItem_8 = CallFunc_BreakHitResult_HitItem_8;
	Parms.CallFunc_BreakHitResult_FaceIndex_8 = CallFunc_BreakHitResult_FaceIndex_8;
	Parms.CallFunc_BreakHitResult_TraceStart_8 = CallFunc_BreakHitResult_TraceStart_8;
	Parms.CallFunc_BreakHitResult_TraceEnd_8 = CallFunc_BreakHitResult_TraceEnd_8;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_17 = CallFunc_Conv_VectorToTransform_ReturnValue_17;
	Parms.CallFunc_GetRTTranslucentReflections_ReturnValue = CallFunc_GetRTTranslucentReflections_ReturnValue;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_SpawnAIFromSoftClass_ReturnValue = CallFunc_SpawnAIFromSoftClass_ReturnValue;
	Parms.CallFunc_GetRTReflections_ReturnValue = CallFunc_GetRTReflections_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetRTReflectionsMaxBounces_ReturnValue = CallFunc_GetRTReflectionsMaxBounces_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetRTGlobalIllumination_ReturnValue = CallFunc_GetRTGlobalIllumination_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetRTReflections_ReturnValue_1 = CallFunc_GetRTReflections_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetRTTranslucentReflections_ReturnValue_1 = CallFunc_GetRTTranslucentReflections_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetRTWaterCausticsAllowed_ReturnValue = CallFunc_GetRTWaterCausticsAllowed_ReturnValue;
	Parms.CallFunc_GetRTWaterCaustics_ReturnValue = CallFunc_GetRTWaterCaustics_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetRTMeshCausticsAllowed_ReturnValue = CallFunc_GetRTMeshCausticsAllowed_ReturnValue;
	Parms.CallFunc_GetRTMeshCaustics_ReturnValue = CallFunc_GetRTMeshCaustics_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_8 = CallFunc_GetGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetRequiredExperiencePerLevel_ReturnValue = CallFunc_GetRequiredExperiencePerLevel_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_GetRequiredExperiencePerLevel_ReturnValue_1 = CallFunc_GetRequiredExperiencePerLevel_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnGlobalSkinChanged_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGlobalSkinType         SkinType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewSkin                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnGlobalSkinChanged_0__DelegateSignature(enum class EGlobalSkinType SkinType, class FName NewSkin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnGlobalSkinChanged_0__DelegateSignature");

	Params::UCGGameInstance_C_OnGlobalSkinChanged_0__DelegateSignature_Params Parms{};

	Parms.SkinType = SkinType;
	Parms.NewSkin = NewSkin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.TMP_DecorationChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::TMP_DecorationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "TMP_DecorationChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnItemCraftedFlourished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnItemCraftedFlourished__DelegateSignature(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnItemCraftedFlourished__DelegateSignature");

	Params::UCGGameInstance_C_OnItemCraftedFlourished__DelegateSignature_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnPauseMenuToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPaused                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGGameInstance_C::OnPauseMenuToggled__DelegateSignature(bool IsPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnPauseMenuToggled__DelegateSignature");

	Params::UCGGameInstance_C_OnPauseMenuToggled__DelegateSignature_Params Parms{};

	Parms.IsPaused = IsPaused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnSkillPointsModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnSkillPointsModified__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnSkillPointsModified__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnLoyalitySubstracted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPC_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnLoyalitySubstracted__DelegateSignature(class FName NPC_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnLoyalitySubstracted__DelegateSignature");

	Params::UCGGameInstance_C_OnLoyalitySubstracted__DelegateSignature_Params Parms{};

	Parms.NPC_Name = NPC_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnLoyalityAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPC_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnLoyalityAdded__DelegateSignature(class FName NPC_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnLoyalityAdded__DelegateSignature");

	Params::UCGGameInstance_C_OnLoyalityAdded__DelegateSignature_Params Parms{};

	Parms.NPC_Name = NPC_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnItemCrafted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnItemCrafted__DelegateSignature(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnItemCrafted__DelegateSignature");

	Params::UCGGameInstance_C_OnItemCrafted__DelegateSignature_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.VolumeLevelStreamingCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::VolumeLevelStreamingCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "VolumeLevelStreamingCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.BuildSystemInitiated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::BuildSystemInitiated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "BuildSystemInitiated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.NewNoteDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::NewNoteDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "NewNoteDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnCustomSceneFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnCustomSceneFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnCustomSceneFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnPlayerSpotted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGSquadManager*             InstigatingSquad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnPlayerSpotted__DelegateSignature(class ACGSquadManager* InstigatingSquad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnPlayerSpotted__DelegateSignature");

	Params::UCGGameInstance_C_OnPlayerSpotted__DelegateSignature_Params Parms{};

	Parms.InstigatingSquad = InstigatingSquad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.ShadowWorldEndedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SceneNumber                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxNumber                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::ShadowWorldEndedDispatcher__DelegateSignature(int32 SceneNumber, int32 MaxNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "ShadowWorldEndedDispatcher__DelegateSignature");

	Params::UCGGameInstance_C_ShadowWorldEndedDispatcher__DelegateSignature_Params Parms{};

	Parms.SceneNumber = SceneNumber;
	Parms.MaxNumber = MaxNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnLoadGameComplited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnLoadGameComplited__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnLoadGameComplited__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.OnCompanionsFed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCGGameInstance_C::OnCompanionsFed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnCompanionsFed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGGameInstance.CGGameInstance_C.FeedingDayPassed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_of_companions_penalized                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Food                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::FeedingDayPassed__DelegateSignature(int32 Number_of_companions_penalized, float Food)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "FeedingDayPassed__DelegateSignature");

	Params::UCGGameInstance_C_FeedingDayPassed__DelegateSignature_Params Parms{};

	Parms.Number_of_companions_penalized = Number_of_companions_penalized;
	Parms.Food = Food;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnInvestigationPointFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PointID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnInvestigationPointFound__DelegateSignature(class FName CollectableObjectID, class FName PointID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnInvestigationPointFound__DelegateSignature");

	Params::UCGGameInstance_C_OnInvestigationPointFound__DelegateSignature_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.PointID = PointID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnPointAnalyzeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PointID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_col_OptionActivationPrerequisite_01AnalyzeMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnPointAnalyzeFinished__DelegateSignature(class FName CollectableObjectID, class FName PointID, class FName OptionID, enum class Enum_col_OptionActivationPrerequisite_01 AnalyzeMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnPointAnalyzeFinished__DelegateSignature");

	Params::UCGGameInstance_C_OnPointAnalyzeFinished__DelegateSignature_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;
	Parms.PointID = PointID;
	Parms.OptionID = OptionID;
	Parms.AnalyzeMode = AnalyzeMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnCollectableObjectFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CollectableObjectID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnCollectableObjectFound__DelegateSignature(class FName CollectableObjectID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnCollectableObjectFound__DelegateSignature");

	Params::UCGGameInstance_C_OnCollectableObjectFound__DelegateSignature_Params Parms{};

	Parms.CollectableObjectID = CollectableObjectID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGGameInstance.CGGameInstance_C.OnInvestigationSolved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InvestigationID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGGameInstance_C::OnInvestigationSolved__DelegateSignature(class FName InvestigationID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGGameInstance_C", "OnInvestigationSolved__DelegateSignature");

	Params::UCGGameInstance_C_OnInvestigationSolved__DelegateSignature_Params Parms{};

	Parms.InvestigationID = InvestigationID;

	UObject::ProcessEvent(Func, &Parms);

}

}


