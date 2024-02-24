#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6F (0x10F - 0xA0)
// BlueprintGeneratedClass BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C
class UBP_AbilityZoneVisualizationComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Sequential;                                        // 0xA8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          RefreshTimer;                                      // 0xB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RefreshInterval;                                   // 0xB8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SequenceItr;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CreatureAbilityZoneDefinition> ZoneDefinitions;                                   // 0xC8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FLinearColor>                  ZoneColorArray;                                    // 0xD8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	double                                       ZoneDebugRange;                                    // 0xE8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ZoneSegments;                                      // 0xF0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ZoneLabelArray;                                    // 0xF8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int32                                        PointDensity;                                      // 0x108(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawZones;                                         // 0x10C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawCloud;                                         // 0x10D(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VisActive;                                         // 0x10E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AbilityZoneVisualizationComponent_C* GetDefaultObj();

	void FindRandomPointInZone(class AActor* Reference, const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, double MinRange, double MaxRange, struct FVector* PointInZone, class FName LSocket, double LMaxDistance, double LMinDistance, double LPitchRange, double LPitchOffset, double LYawRange, double LYawOffset, enum class Enum_ZoneDefinitionType LZoneType, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Get_Zone_Reference_Info_ZoneOrigin, const struct FVector& CallFunc_Get_Zone_Reference_Info_ReferenceForward, const struct FVector2D& CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, double K2Node_VariableSet_LYawOffset_ImplicitCast, double K2Node_VariableSet_LYawRange_ImplicitCast, double K2Node_VariableSet_LPitchOffset_ImplicitCast, double K2Node_VariableSet_LPitchRange_ImplicitCast, double K2Node_VariableSet_LMinDistance_ImplicitCast, double K2Node_VariableSet_LMaxDistance_ImplicitCast);
	void PrintZoneVisualization(class AActor* Reference, const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, const class FString& ZoneLabel, const struct FLinearColor& ZoneColour, double ZoneDuration, double ZoneDebugRange, int32 ZoneSegments, double ZoneOpacity, double LZoneOpacity, const struct FVector2D& LZoneDirectionXY, const struct FVector& LReferenceForward, const struct FVector& LZoneOrigin, class FName LSocket, double LMaxDistance, double LMinDistance, double LPitchRange, double LPitch, double LYawRange, double LYaw, enum class Enum_ZoneDefinitionType LZoneType, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Get_Zone_Reference_Info_ZoneOrigin, const struct FVector& CallFunc_Get_Zone_Reference_Info_ReferenceForward, const struct FVector2D& CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_DrawDebugCircle_Duration_ImplicitCast, float CallFunc_DrawDebugString_Duration_ImplicitCast, double K2Node_VariableSet_LYaw_ImplicitCast, double K2Node_VariableSet_LYawRange_ImplicitCast, double K2Node_VariableSet_LPitch_ImplicitCast, double K2Node_VariableSet_LPitchRange_ImplicitCast, double K2Node_VariableSet_LMinDistance_ImplicitCast, double K2Node_VariableSet_LMaxDistance_ImplicitCast, float CallFunc_DrawDebugCircle_Radius_ImplicitCast, float CallFunc_DrawDebugCircle_Radius_ImplicitCast_1, float CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Length_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Duration_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Thickness_ImplicitCast, float CallFunc_DrawDebugCircle_Duration_ImplicitCast_1);
	void PrintAIARNames(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PrintCommands(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10);
	void GeneratePointCloud(const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, int32 PointDensity, const struct FLinearColor& PointColor, double Duration, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_FindRandomPointInZone_PointInZone, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_DrawDebugPoint_Duration_ImplicitCast);
	void RandomizeZoneColors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast);
	void PrintSpecificZone(const class FString& AIARName, double Duration, const struct FLinearColor& LZoneColor, const class FString& LZoneLabel, const struct FS_CreatureAbilityZoneDefinition& LZoneDefinition, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void PrintAllZones(const struct FS_CreatureAbilityZoneDefinition& LZoneDefinition, const struct FLinearColor& LZoneColor, const class FString& LZoneLabel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FS_CreatureAbilityZoneDefinition& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void StopVisAllZones(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1);
	void StartVisAllZones(const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsServer_ReturnValue);
	void AddDefinition(struct FS_CreatureAbilityZoneDefinition& ZoneDefintion, const class FString& ZoneLabel, const struct FLinearColor& ZoneColor, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RemoveDefintion(struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ClearDefinitions(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void StopPrintAll();
	void ZoneDebugSequential(bool IsSequential);
	void ZoneDebugSetRange(double DebugRange);
	void ZoneDebugShapeDensity(int32 Segments);
	void ZoneDebugDestroy();
	void ReceiveTick(float DeltaSeconds);
	void ZoneDebugStartAllClient();
	void ZoneDebugStopAllClient();
	void ZoneDebugPointDensity(int32 Density);
	void ZoneDebugSpecific(const class FString& AIAR, double Duration);
	void StartPrintTimer();
	void ZoneDebugColours();
	void ZoneDebugCommands();
	void ZoneDebugCloud();
	void ZoneDebugZones();
	void ZoneDebugStopAllServer();
	void ZoneDebugStartAllServer();
	void ExecuteUbergraph_BP_AbilityZoneVisualizationComponent(int32 EntryPoint, bool CallFunc_IsShippingBuild_ReturnValue, bool K2Node_CustomEvent_IsSequential, double K2Node_CustomEvent_DebugRange, int32 K2Node_CustomEvent_Segments, int32 CallFunc_Clamp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, int32 K2Node_CustomEvent_Density, const class FString& K2Node_CustomEvent_AIAR, double K2Node_CustomEvent_Duration, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsShippingBuild_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


