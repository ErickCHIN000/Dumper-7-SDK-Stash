#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x188 - 0xA0)
// BlueprintGeneratedClass TimeOfDay_Audio.TimeOfDay_Audio_C
class UTimeOfDay_Audio_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       AudioTimeOfDayTickRate;                            // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambience_Manager_C*                AmbienceManager;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeHandle;                                        // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_TimeOfDayManager_C*                TimeOfDayManager;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       OverallMood;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FogAmount;                                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Season;                                            // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FogImportance;                                     // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SeasonImportance;                                  // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CloudCover;                                        // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CloudCoverImportance;                              // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDebugInfo;                                     // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CurveSeason;                                       // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Fog_Density_Inherit;                               // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fog_Height_Inherit;                                // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Primary_Function_Override;                         // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Visual_Environment_Preset_Override;                // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CE2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Visual_Environment_Preset;                         // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Realm_Minus_Cloud;                                 // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Realm_Minus_Season;                                // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAtmosphere_Master                Visual_Environmet_Preset;                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGloomRealm;                                      // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRealmPlacementRequirement            GloomRealmCard;                                    // 0x138(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTimeOfDay_Audio_C* GetDefaultObj();

	void CheckRealmCard(const struct FRealmPlacementRequirement& RealmCard, bool* RealmCardActive, class UObject* Temp_object_Variable, bool CallFunc_DoesRealmMeetRequirement_RequirementMet);
	void LogDebugInfo(float CallFunc_GetPrecipitationAmount_ReturnValue, float CallFunc_GetTimeOfDay_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetWindSpeed_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void GetInterpolationTime(double RealValue, double CachedValue, int32* InterpolationTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue);
	void UpdateClouds(const TArray<double>& Cloud_Coverage_Min_Array, const TArray<class UDataTable*>& Cloud_Categories, double MaxCloudCover, double MinCloudCover, TArray<class UDataTable*>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateOverallMood(double MoodCache, bool Temp_bool_Variable, double Temp_real_Variable, int32 CallFunc_GetInterpolationTime_InterpolationTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void UpdateAudioSeason(const TArray<double>& Season_Array_Expanded, const TArray<double>& Season_Array, TArray<double>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Conv_ByteToDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_SetSeason_Value_ImplicitCast, float CallFunc_SetSeason_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
	void UpdateAudioFog(double Fog_Density_Inherit, double Fog_Height_Inherit, const TArray<class UDataTable*>& Fog_Intensity_Categories, double FogAmountCache, double MaxFogDensityValue, double MinFogDensityValue, double MaxFogHeightValue, double MinFogHeightValue, TArray<class UDataTable*>& K2Node_MakeArray_Array, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue_1, int32 CallFunc_GetInterpolationTime_InterpolationTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void UpdateAudioTOD(double AdjustedTime, int32 TimeOfDayInterpolationTime, double TimeOfDayCache, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetNormalizedVisualTime_VisualTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetInterpolationTime_InterpolationTime, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetTimeOfDay_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void GetManagers(bool* Success, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, class UBP_Ambience_Manager_C* K2Node_DynamicCast_AsBP_Ambience_Manager, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess_1);
	void UpdateAudioDynamic(bool CallFunc_IsValid_ReturnValue);
	void UpdateAudioStatic();
	void ReceiveBeginPlay();
	void InitializeAudio();
	void ShowAmbienceMood(bool ShowAmbienceDebug);
	void Setup_references(bool Primary_Function_Override, bool Visual_Environment_Preset_Override, int32 Visual_Environment_Preset, int32 Realm_Minus_Cloud, int32 Realm_Minus_Season, enum class EAtmosphere_Master Visual_Environmet_Preset);
	void ExecuteUbergraph_TimeOfDay_Audio(int32 EntryPoint, bool CallFunc_CheckRealmCard_RealmCardActive, bool CallFunc_GetManagers_Success, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_CustomEvent_ShowAmbienceDebug, bool K2Node_CustomEvent_Primary_Function_Override, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, int32 K2Node_CustomEvent_Visual_Environment_Preset, int32 K2Node_CustomEvent_Realm___Cloud, int32 K2Node_CustomEvent_Realm___Season, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environmet_Preset, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


