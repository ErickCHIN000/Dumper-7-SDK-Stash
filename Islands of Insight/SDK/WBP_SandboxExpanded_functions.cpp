#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SandboxExpanded.WBP_SandboxExpanded_C
// (None)

class UClass* UWBP_SandboxExpanded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SandboxExpanded_C");

	return Clss;
}


// WBP_SandboxExpanded_C WBP_SandboxExpanded.Default__WBP_SandboxExpanded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SandboxExpanded_C* UWBP_SandboxExpanded_C::GetDefaultObj()
{
	static class UWBP_SandboxExpanded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SandboxExpanded_C*>(UWBP_SandboxExpanded_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.OpenSandboxCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxExpanded_C::OpenSandboxCategory(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "OpenSandboxCategory");

	Params::UWBP_SandboxExpanded_C_OpenSandboxCategory_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.DisplayZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneDataEntry*              Zone_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueOrbSourceDataForBP>AllBlueOrbSourceData                                             (Edit, BlueprintVisible)
// TArray<bool>                       BlueOrbData                                                      (Edit, BlueprintVisible)
// class UZoneDataEntry*              ZoneData                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_MapStyleInfo_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoreFragmentUnobtained_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoreFragmentObtained_C* CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueOrbSourceDataForBP     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SandboxExpandedTab_C*   CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             CallFunc_GetPuzzleDatabase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPuzzleTypesInZone_OutNames                           (ReferenceParm)
// TArray<enum class EPuzzleCategory> CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue   (ReferenceParm)
// enum class EPuzzleCategory         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueOrbSourceDataForBP>CallFunc_GetAllBlueOrbSourceData_ReturnValue                     (ReferenceParm)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_PickupNumerator                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_PickupDenominator                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_SandboxNumerator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_SandboxDenominator                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLoreUnlockCounts_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainNumerator                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainDenominator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalNumerator                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalDenominator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDungeonCounts_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UZoneDataEntry*              CallFunc_ZoneIndex_to_Zone_ReturnValue                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainNumerator_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainDenominator_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalNumerator_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalDenominator_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDungeonCounts_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLoreUnlockCounts_PickupNumerator_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_PickupDenominator_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_SandboxNumerator_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_SandboxDenominator_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLoreUnlockCounts_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_CampaignNumerator                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_CampaignDenominator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_SideQuestNumerator                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_SideQuestDenominator                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_PuzzleNumerator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_PuzzleDenominator                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlueOrbCounts_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNumberedZoneName_ReturnValue                         (None)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       CallFunc_GetZoneUnlockStateByIndex_ReturnValue                   (ReferenceParm)
// bool                               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SandboxExpanded_C::DisplayZone(class UZoneDataEntry* Zone_Data, const TArray<struct FBlueOrbSourceDataForBP>& AllBlueOrbSourceData, const TArray<bool>& BlueOrbData, class UZoneDataEntry* ZoneData, bool Temp_bool_Variable, class UWBP_MapStyleInfo_C* CallFunc_Create_ReturnValue, class UWBP_LoreFragmentUnobtained_C* CallFunc_Create_ReturnValue_1, class UWBP_LoreFragmentObtained_C* CallFunc_Create_ReturnValue_2, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_2, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FBlueOrbSourceDataForBP& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_SandboxExpandedTab_C* CallFunc_Create_ReturnValue_3, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, TArray<class FString>& CallFunc_GetPuzzleTypesInZone_OutNames, TArray<enum class EPuzzleCategory>& CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue, enum class EPuzzleCategory CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TArray<struct FBlueOrbSourceDataForBP>& CallFunc_GetAllBlueOrbSourceData_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue, int32 CallFunc_GetLoreUnlockCounts_PickupNumerator, int32 CallFunc_GetLoreUnlockCounts_PickupDenominator, int32 CallFunc_GetLoreUnlockCounts_SandboxNumerator, int32 CallFunc_GetLoreUnlockCounts_SandboxDenominator, bool CallFunc_GetLoreUnlockCounts_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_1, class UTexture2D* K2Node_Select_Default, int32 CallFunc_GetDungeonCounts_MainNumerator, int32 CallFunc_GetDungeonCounts_MainDenominator, int32 CallFunc_GetDungeonCounts_OptionalNumerator, int32 CallFunc_GetDungeonCounts_OptionalDenominator, bool CallFunc_GetDungeonCounts_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UTexture2D* K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, class UZoneData* CallFunc_GetZoneData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_3, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_3, bool K2Node_DynamicCast_bSuccess_3, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_2, int32 CallFunc_GetDungeonCounts_MainNumerator_1, int32 CallFunc_GetDungeonCounts_MainDenominator_1, int32 CallFunc_GetDungeonCounts_OptionalNumerator_1, int32 CallFunc_GetDungeonCounts_OptionalDenominator_1, bool CallFunc_GetDungeonCounts_ReturnValue_1, int32 CallFunc_GetLoreUnlockCounts_PickupNumerator_1, int32 CallFunc_GetLoreUnlockCounts_PickupDenominator_1, int32 CallFunc_GetLoreUnlockCounts_SandboxNumerator_1, int32 CallFunc_GetLoreUnlockCounts_SandboxDenominator_1, bool CallFunc_GetLoreUnlockCounts_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_8, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_GetBlueOrbCounts_CampaignNumerator, int32 CallFunc_GetBlueOrbCounts_CampaignDenominator, int32 CallFunc_GetBlueOrbCounts_SideQuestNumerator, int32 CallFunc_GetBlueOrbCounts_SideQuestDenominator, int32 CallFunc_GetBlueOrbCounts_PuzzleNumerator, int32 CallFunc_GetBlueOrbCounts_PuzzleDenominator, bool CallFunc_GetBlueOrbCounts_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_13, class FText CallFunc_GetNumberedZoneName_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_4, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_4, bool K2Node_DynamicCast_bSuccess_4, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_3, TArray<bool>& CallFunc_GetZoneUnlockStateByIndex_ReturnValue, bool CallFunc_Array_Get_Item_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "DisplayZone");

	Params::UWBP_SandboxExpanded_C_DisplayZone_Params Parms{};

	Parms.Zone_Data = Zone_Data;
	Parms.AllBlueOrbSourceData = AllBlueOrbSourceData;
	Parms.BlueOrbData = BlueOrbData;
	Parms.ZoneData = ZoneData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;
	Parms.CallFunc_GetPuzzleDatabase_ReturnValue = CallFunc_GetPuzzleDatabase_ReturnValue;
	Parms.CallFunc_GetPuzzleTypesInZone_OutNames = CallFunc_GetPuzzleTypesInZone_OutNames;
	Parms.CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue = CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue_1 = CallFunc_AddChildToWrapBox_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetAllBlueOrbSourceData_ReturnValue = CallFunc_GetAllBlueOrbSourceData_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Character_1 = K2Node_DynamicCast_AsSophia_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMapComponent_ReturnValue = CallFunc_GetMapComponent_ReturnValue;
	Parms.CallFunc_GetLoreUnlockCounts_PickupNumerator = CallFunc_GetLoreUnlockCounts_PickupNumerator;
	Parms.CallFunc_GetLoreUnlockCounts_PickupDenominator = CallFunc_GetLoreUnlockCounts_PickupDenominator;
	Parms.CallFunc_GetLoreUnlockCounts_SandboxNumerator = CallFunc_GetLoreUnlockCounts_SandboxNumerator;
	Parms.CallFunc_GetLoreUnlockCounts_SandboxDenominator = CallFunc_GetLoreUnlockCounts_SandboxDenominator;
	Parms.CallFunc_GetLoreUnlockCounts_ReturnValue = CallFunc_GetLoreUnlockCounts_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_2 = CallFunc_GetOwningPlayerPawn_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character_2 = K2Node_DynamicCast_AsSophia_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetMapComponent_ReturnValue_1 = CallFunc_GetMapComponent_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDungeonCounts_MainNumerator = CallFunc_GetDungeonCounts_MainNumerator;
	Parms.CallFunc_GetDungeonCounts_MainDenominator = CallFunc_GetDungeonCounts_MainDenominator;
	Parms.CallFunc_GetDungeonCounts_OptionalNumerator = CallFunc_GetDungeonCounts_OptionalNumerator;
	Parms.CallFunc_GetDungeonCounts_OptionalDenominator = CallFunc_GetDungeonCounts_OptionalDenominator;
	Parms.CallFunc_GetDungeonCounts_ReturnValue = CallFunc_GetDungeonCounts_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetZoneData_ReturnValue = CallFunc_GetZoneData_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ZoneIndex_to_Zone_ReturnValue = CallFunc_ZoneIndex_to_Zone_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_3 = CallFunc_GetOwningPlayerPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSophia_Character_3 = K2Node_DynamicCast_AsSophia_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetMapComponent_ReturnValue_2 = CallFunc_GetMapComponent_ReturnValue_2;
	Parms.CallFunc_GetDungeonCounts_MainNumerator_1 = CallFunc_GetDungeonCounts_MainNumerator_1;
	Parms.CallFunc_GetDungeonCounts_MainDenominator_1 = CallFunc_GetDungeonCounts_MainDenominator_1;
	Parms.CallFunc_GetDungeonCounts_OptionalNumerator_1 = CallFunc_GetDungeonCounts_OptionalNumerator_1;
	Parms.CallFunc_GetDungeonCounts_OptionalDenominator_1 = CallFunc_GetDungeonCounts_OptionalDenominator_1;
	Parms.CallFunc_GetDungeonCounts_ReturnValue_1 = CallFunc_GetDungeonCounts_ReturnValue_1;
	Parms.CallFunc_GetLoreUnlockCounts_PickupNumerator_1 = CallFunc_GetLoreUnlockCounts_PickupNumerator_1;
	Parms.CallFunc_GetLoreUnlockCounts_PickupDenominator_1 = CallFunc_GetLoreUnlockCounts_PickupDenominator_1;
	Parms.CallFunc_GetLoreUnlockCounts_SandboxNumerator_1 = CallFunc_GetLoreUnlockCounts_SandboxNumerator_1;
	Parms.CallFunc_GetLoreUnlockCounts_SandboxDenominator_1 = CallFunc_GetLoreUnlockCounts_SandboxDenominator_1;
	Parms.CallFunc_GetLoreUnlockCounts_ReturnValue_1 = CallFunc_GetLoreUnlockCounts_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_GetBlueOrbCounts_CampaignNumerator = CallFunc_GetBlueOrbCounts_CampaignNumerator;
	Parms.CallFunc_GetBlueOrbCounts_CampaignDenominator = CallFunc_GetBlueOrbCounts_CampaignDenominator;
	Parms.CallFunc_GetBlueOrbCounts_SideQuestNumerator = CallFunc_GetBlueOrbCounts_SideQuestNumerator;
	Parms.CallFunc_GetBlueOrbCounts_SideQuestDenominator = CallFunc_GetBlueOrbCounts_SideQuestDenominator;
	Parms.CallFunc_GetBlueOrbCounts_PuzzleNumerator = CallFunc_GetBlueOrbCounts_PuzzleNumerator;
	Parms.CallFunc_GetBlueOrbCounts_PuzzleDenominator = CallFunc_GetBlueOrbCounts_PuzzleDenominator;
	Parms.CallFunc_GetBlueOrbCounts_ReturnValue = CallFunc_GetBlueOrbCounts_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_GetNumberedZoneName_ReturnValue = CallFunc_GetNumberedZoneName_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_4 = CallFunc_GetOwningPlayerPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsSophia_Character_4 = K2Node_DynamicCast_AsSophia_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetMapComponent_ReturnValue_3 = CallFunc_GetMapComponent_ReturnValue_3;
	Parms.CallFunc_GetZoneUnlockStateByIndex_ReturnValue = CallFunc_GetZoneUnlockStateByIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.BndEvt__WBP_SandboxExpanded_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxExpanded_C::BndEvt__WBP_SandboxExpanded_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "BndEvt__WBP_SandboxExpanded_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.BndEvt__WBP_SandboxExpanded_WBP_ArrowsRight_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxExpanded_C::BndEvt__WBP_SandboxExpanded_WBP_ArrowsRight_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "BndEvt__WBP_SandboxExpanded_WBP_ArrowsRight_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.BndEvt__WBP_SandboxExpanded_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxExpanded_C::BndEvt__WBP_SandboxExpanded_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "BndEvt__WBP_SandboxExpanded_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.ExecuteUbergraph_WBP_SandboxExpanded
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxExpanded_C::ExecuteUbergraph_WBP_SandboxExpanded(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "ExecuteUbergraph_WBP_SandboxExpanded");

	Params::UWBP_SandboxExpanded_C_ExecuteUbergraph_WBP_SandboxExpanded_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.SandboxCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxExpanded_C::SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "SandboxCategoryClicked__DelegateSignature");

	Params::UWBP_SandboxExpanded_C_SandboxCategoryClicked__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.NextZoneClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxExpanded_C::NextZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "NextZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.PreviousZoneClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxExpanded_C::PreviousZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "PreviousZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxExpanded.WBP_SandboxExpanded_C.CollapseClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxExpanded_C::CollapseClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxExpanded_C", "CollapseClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


