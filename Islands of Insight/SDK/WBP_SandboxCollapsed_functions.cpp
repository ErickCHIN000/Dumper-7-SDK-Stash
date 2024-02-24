#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SandboxCollapsed.WBP_SandboxCollapsed_C
// (None)

class UClass* UWBP_SandboxCollapsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SandboxCollapsed_C");

	return Clss;
}


// WBP_SandboxCollapsed_C WBP_SandboxCollapsed.Default__WBP_SandboxCollapsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SandboxCollapsed_C* UWBP_SandboxCollapsed_C::GetDefaultObj()
{
	static class UWBP_SandboxCollapsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SandboxCollapsed_C*>(UWBP_SandboxCollapsed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.OpenSandboxCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxCollapsed_C::OpenSandboxCategory(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "OpenSandboxCategory");

	Params::UWBP_SandboxCollapsed_C_OpenSandboxCategory_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.DisplayZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneDataEntry*              Zone_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneDataEntry*              ZoneData                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainNumerator                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainDenominator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalNumerator                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalDenominator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDungeonCounts_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UZoneDataEntry*              CallFunc_ZoneIndex_to_Zone_ReturnValue                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SandboxCollapsedTab_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             CallFunc_GetPuzzleDatabase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPuzzleTypesInZone_OutNames                           (ReferenceParm)
// TArray<enum class EPuzzleCategory> CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue   (ReferenceParm)
// enum class EPuzzleCategory         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainNumerator_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_MainDenominator_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalNumerator_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDungeonCounts_OptionalDenominator_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDungeonCounts_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLoreUnlockCounts_PickupNumerator                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_PickupDenominator                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_SandboxNumerator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoreUnlockCounts_SandboxDenominator                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLoreUnlockCounts_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_CampaignNumerator                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_CampaignDenominator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_SideQuestNumerator                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_SideQuestDenominator                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_PuzzleNumerator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlueOrbCounts_PuzzleDenominator                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlueOrbCounts_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNumberedZoneName_ReturnValue                         (None)
// class FText                        CallFunc_GetNumberedZoneName_ReturnValue_1                       (None)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       CallFunc_GetZoneUnlockStateByIndex_ReturnValue                   (ReferenceParm)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SandboxCollapsed_C::DisplayZone(class UZoneDataEntry* Zone_Data, class UZoneDataEntry* ZoneData, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_3, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, class UZoneData* CallFunc_GetZoneData_ReturnValue, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue, int32 CallFunc_GetDungeonCounts_MainNumerator, int32 CallFunc_GetDungeonCounts_MainDenominator, int32 CallFunc_GetDungeonCounts_OptionalNumerator, int32 CallFunc_GetDungeonCounts_OptionalDenominator, bool CallFunc_GetDungeonCounts_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWBP_SandboxCollapsedTab_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, TArray<class FString>& CallFunc_GetPuzzleTypesInZone_OutNames, TArray<enum class EPuzzleCategory>& CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue, enum class EPuzzleCategory CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_1, int32 CallFunc_GetDungeonCounts_MainNumerator_1, int32 CallFunc_GetDungeonCounts_MainDenominator_1, int32 CallFunc_GetDungeonCounts_OptionalNumerator_1, int32 CallFunc_GetDungeonCounts_OptionalDenominator_1, bool CallFunc_GetDungeonCounts_ReturnValue_1, int32 CallFunc_GetLoreUnlockCounts_PickupNumerator, int32 CallFunc_GetLoreUnlockCounts_PickupDenominator, int32 CallFunc_GetLoreUnlockCounts_SandboxNumerator, int32 CallFunc_GetLoreUnlockCounts_SandboxDenominator, bool CallFunc_GetLoreUnlockCounts_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_GetBlueOrbCounts_CampaignNumerator, int32 CallFunc_GetBlueOrbCounts_CampaignDenominator, int32 CallFunc_GetBlueOrbCounts_SideQuestNumerator, int32 CallFunc_GetBlueOrbCounts_SideQuestDenominator, int32 CallFunc_GetBlueOrbCounts_PuzzleNumerator, int32 CallFunc_GetBlueOrbCounts_PuzzleDenominator, bool CallFunc_GetBlueOrbCounts_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, class FText CallFunc_GetNumberedZoneName_ReturnValue, class FText CallFunc_GetNumberedZoneName_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_2, TArray<bool>& CallFunc_GetZoneUnlockStateByIndex_ReturnValue, bool CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "DisplayZone");

	Params::UWBP_SandboxCollapsed_C_DisplayZone_Params Parms{};

	Parms.Zone_Data = Zone_Data;
	Parms.ZoneData = ZoneData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetZoneData_ReturnValue = CallFunc_GetZoneData_ReturnValue;
	Parms.CallFunc_GetMapComponent_ReturnValue = CallFunc_GetMapComponent_ReturnValue;
	Parms.CallFunc_GetDungeonCounts_MainNumerator = CallFunc_GetDungeonCounts_MainNumerator;
	Parms.CallFunc_GetDungeonCounts_MainDenominator = CallFunc_GetDungeonCounts_MainDenominator;
	Parms.CallFunc_GetDungeonCounts_OptionalNumerator = CallFunc_GetDungeonCounts_OptionalNumerator;
	Parms.CallFunc_GetDungeonCounts_OptionalDenominator = CallFunc_GetDungeonCounts_OptionalDenominator;
	Parms.CallFunc_GetDungeonCounts_ReturnValue = CallFunc_GetDungeonCounts_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ZoneIndex_to_Zone_ReturnValue = CallFunc_ZoneIndex_to_Zone_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPuzzleDatabase_ReturnValue = CallFunc_GetPuzzleDatabase_ReturnValue;
	Parms.CallFunc_GetPuzzleTypesInZone_OutNames = CallFunc_GetPuzzleTypesInZone_OutNames;
	Parms.CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue = CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Character_1 = K2Node_DynamicCast_AsSophia_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMapComponent_ReturnValue_1 = CallFunc_GetMapComponent_ReturnValue_1;
	Parms.CallFunc_GetDungeonCounts_MainNumerator_1 = CallFunc_GetDungeonCounts_MainNumerator_1;
	Parms.CallFunc_GetDungeonCounts_MainDenominator_1 = CallFunc_GetDungeonCounts_MainDenominator_1;
	Parms.CallFunc_GetDungeonCounts_OptionalNumerator_1 = CallFunc_GetDungeonCounts_OptionalNumerator_1;
	Parms.CallFunc_GetDungeonCounts_OptionalDenominator_1 = CallFunc_GetDungeonCounts_OptionalDenominator_1;
	Parms.CallFunc_GetDungeonCounts_ReturnValue_1 = CallFunc_GetDungeonCounts_ReturnValue_1;
	Parms.CallFunc_GetLoreUnlockCounts_PickupNumerator = CallFunc_GetLoreUnlockCounts_PickupNumerator;
	Parms.CallFunc_GetLoreUnlockCounts_PickupDenominator = CallFunc_GetLoreUnlockCounts_PickupDenominator;
	Parms.CallFunc_GetLoreUnlockCounts_SandboxNumerator = CallFunc_GetLoreUnlockCounts_SandboxNumerator;
	Parms.CallFunc_GetLoreUnlockCounts_SandboxDenominator = CallFunc_GetLoreUnlockCounts_SandboxDenominator;
	Parms.CallFunc_GetLoreUnlockCounts_ReturnValue = CallFunc_GetLoreUnlockCounts_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetBlueOrbCounts_CampaignNumerator = CallFunc_GetBlueOrbCounts_CampaignNumerator;
	Parms.CallFunc_GetBlueOrbCounts_CampaignDenominator = CallFunc_GetBlueOrbCounts_CampaignDenominator;
	Parms.CallFunc_GetBlueOrbCounts_SideQuestNumerator = CallFunc_GetBlueOrbCounts_SideQuestNumerator;
	Parms.CallFunc_GetBlueOrbCounts_SideQuestDenominator = CallFunc_GetBlueOrbCounts_SideQuestDenominator;
	Parms.CallFunc_GetBlueOrbCounts_PuzzleNumerator = CallFunc_GetBlueOrbCounts_PuzzleNumerator;
	Parms.CallFunc_GetBlueOrbCounts_PuzzleDenominator = CallFunc_GetBlueOrbCounts_PuzzleDenominator;
	Parms.CallFunc_GetBlueOrbCounts_ReturnValue = CallFunc_GetBlueOrbCounts_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_GetNumberedZoneName_ReturnValue = CallFunc_GetNumberedZoneName_ReturnValue;
	Parms.CallFunc_GetNumberedZoneName_ReturnValue_1 = CallFunc_GetNumberedZoneName_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_2 = CallFunc_GetOwningPlayerPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSophia_Character_2 = K2Node_DynamicCast_AsSophia_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetMapComponent_ReturnValue_2 = CallFunc_GetMapComponent_ReturnValue_2;
	Parms.CallFunc_GetZoneUnlockStateByIndex_ReturnValue = CallFunc_GetZoneUnlockStateByIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.BndEvt__WBP_SandboxCollapsed_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsed_C::BndEvt__WBP_SandboxCollapsed_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "BndEvt__WBP_SandboxCollapsed_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.BndEvt__WBP_SandboxCollapsed_WBP_ArrowsRight_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsed_C::BndEvt__WBP_SandboxCollapsed_WBP_ArrowsRight_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "BndEvt__WBP_SandboxCollapsed_WBP_ArrowsRight_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.BndEvt__WBP_SandboxCollapsed_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsed_C::BndEvt__WBP_SandboxCollapsed_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "BndEvt__WBP_SandboxCollapsed_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.ExecuteUbergraph_WBP_SandboxCollapsed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxCollapsed_C::ExecuteUbergraph_WBP_SandboxCollapsed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "ExecuteUbergraph_WBP_SandboxCollapsed");

	Params::UWBP_SandboxCollapsed_C_ExecuteUbergraph_WBP_SandboxCollapsed_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.SandboxCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxCollapsed_C::SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "SandboxCategoryClicked__DelegateSignature");

	Params::UWBP_SandboxCollapsed_C_SandboxCategoryClicked__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.ExpandClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsed_C::ExpandClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "ExpandClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.NextZoneClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsed_C::NextZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "NextZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsed.WBP_SandboxCollapsed_C.PreviousZoneClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsed_C::PreviousZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsed_C", "PreviousZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


