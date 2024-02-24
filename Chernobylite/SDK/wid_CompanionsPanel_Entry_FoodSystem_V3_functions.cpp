#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C
// (None)

class UClass* UWid_CompanionsPanel_Entry_FoodSystem_V3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionsPanel_Entry_FoodSystem_V3_C");

	return Clss;
}


// wid_CompanionsPanel_Entry_FoodSystem_V3_C wid_CompanionsPanel_Entry_FoodSystem_V3.Default__wid_CompanionsPanel_Entry_FoodSystem_V3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionsPanel_Entry_FoodSystem_V3_C* UWid_CompanionsPanel_Entry_FoodSystem_V3_C::GetDefaultObj()
{
	static class UWid_CompanionsPanel_Entry_FoodSystem_V3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionsPanel_Entry_FoodSystem_V3_C*>(UWid_CompanionsPanel_Entry_FoodSystem_V3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::UpdateSize(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue_6, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "UpdateSize");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_UpdateSize_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.GetEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EffectsListNeutral                                               (Edit, BlueprintVisible)
// TArray<class FName>                ListOfBeds                                                       (Edit, BlueprintVisible)
// int32                              NumberOfBeds                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              EffectsListPositive                                              (Edit, BlueprintVisible)
// TArray<class FString>              EffectsListNegative                                              (Edit, BlueprintVisible)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue_1                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default                                            (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default_1                                          (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_FindDislikedBuildEntities_ReturnValue                   (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_FindFavouriteBuildEntities_ReturnValue                  (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_7                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default_8                                          (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesCompanionWantToLeaveAPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReportRequiredInformationCallFunc_Array_Get_Item_3                                        (None)
// TArray<class FString>              K2Node_Select_Default_13                                         (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConflict                   CallFunc_GetConflictForCurrentDay_ReturnValue                    (NoDestructor)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_14                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_15                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_16                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_10                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_12                        (ZeroConstructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_17                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_11                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_18                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow_12                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_13                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetGlobalStatValue_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_14                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default_19                                         (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Select_Default_20                                         (ReferenceParm)
// int32                              CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default_21                                         (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::GetEffects(const TArray<class FString>& EffectsListNeutral, const TArray<class FName>& ListOfBeds, int32 NumberOfBeds, const TArray<class FString>& EffectsListPositive, const TArray<class FString>& EffectsListNegative, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, enum class EBuildSystemStatTier Temp_byte_Variable, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, enum class EBuildSystemStatTier Temp_byte_Variable_1, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class FName Temp_name_Variable_14, bool Temp_bool_Variable_4, class FName Temp_name_Variable_15, bool Temp_bool_Variable_5, class FName Temp_name_Variable_16, bool Temp_bool_Variable_6, class FName Temp_name_Variable_17, class FName Temp_name_Variable_18, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, class FName Temp_name_Variable_19, bool Temp_bool_Variable_9, class FName Temp_name_Variable_20, bool Temp_bool_Variable_10, class FName Temp_name_Variable_21, bool Temp_bool_Variable_11, class FName Temp_name_Variable_22, class FName Temp_name_Variable_23, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable_24, enum class EBuildSystemStatTier Temp_byte_Variable_2, bool Temp_bool_Variable_14, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable_25, class FName Temp_name_Variable_26, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class FName Temp_name_Variable_27, class FName CallFunc_Array_Get_Item, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName Temp_name_Variable_28, int32 Temp_int_Loop_Counter_Variable, class FName Temp_name_Variable_29, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName Temp_name_Variable_30, bool Temp_bool_Variable_15, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class EBuildSystemStatTier Temp_byte_Variable_3, class FName Temp_name_Variable_31, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class FString>& K2Node_Select_Default_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_2, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, class FName K2Node_Select_Default_4, class FName K2Node_Select_Default_5, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class FName Temp_name_Variable_32, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_2, bool K2Node_DynamicCast_bSuccess_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, TArray<class FName>& CallFunc_FindDislikedBuildEntities_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_4, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, TArray<class FName>& CallFunc_FindFavouriteBuildEntities_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue_4, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_16, class FName K2Node_Select_Default_6, class FName K2Node_Select_Default_7, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_3, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, TArray<class FString>& K2Node_Select_Default_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, class FName K2Node_Select_Default_9, bool CallFunc_DoesCompanionWantToLeaveAPlayer_ReturnValue, class FName K2Node_Select_Default_10, class FName K2Node_Select_Default_11, class FName K2Node_Select_Default_12, int32 Temp_int_Loop_Counter_Variable_2, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_3, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_Variable_17, int32 Temp_int_Array_Index_Variable_3, const struct FMissionReportRequiredInformation& CallFunc_Array_Get_Item_3, TArray<class FString>& K2Node_Select_Default_13, int32 CallFunc_Array_Add_ReturnValue_8, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, const struct FConflict& CallFunc_GetConflictForCurrentDay_ReturnValue, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FName K2Node_Select_Default_14, bool CallFunc_EqualEqual_NameName_ReturnValue_4, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_10, bool CallFunc_EqualEqual_NameName_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_3, class FName K2Node_Select_Default_15, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_11, class FName K2Node_Select_Default_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_10, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_12, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3, class FName K2Node_Select_Default_17, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, class FName K2Node_Select_Default_18, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, const class FString& CallFunc_Conv_TextToString_ReturnValue_13, int32 CallFunc_BuildSystemGetGlobalStatValue_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_14, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, TArray<class FString>& K2Node_Select_Default_19, int32 CallFunc_Array_Add_ReturnValue_11, TArray<class FString>& K2Node_Select_Default_20, int32 CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_12, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, TArray<class FString>& K2Node_Select_Default_21, int32 CallFunc_Array_Add_ReturnValue_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "GetEffects");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_GetEffects_Params Parms{};

	Parms.EffectsListNeutral = EffectsListNeutral;
	Parms.ListOfBeds = ListOfBeds;
	Parms.NumberOfBeds = NumberOfBeds;
	Parms.EffectsListPositive = EffectsListPositive;
	Parms.EffectsListNegative = EffectsListNegative;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.Temp_name_Variable_11 = Temp_name_Variable_11;
	Parms.Temp_name_Variable_12 = Temp_name_Variable_12;
	Parms.Temp_name_Variable_13 = Temp_name_Variable_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_name_Variable_14 = Temp_name_Variable_14;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_name_Variable_15 = Temp_name_Variable_15;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_name_Variable_16 = Temp_name_Variable_16;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_name_Variable_17 = Temp_name_Variable_17;
	Parms.Temp_name_Variable_18 = Temp_name_Variable_18;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_name_Variable_19 = Temp_name_Variable_19;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_name_Variable_20 = Temp_name_Variable_20;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_name_Variable_21 = Temp_name_Variable_21;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_name_Variable_22 = Temp_name_Variable_22;
	Parms.Temp_name_Variable_23 = Temp_name_Variable_23;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable_24 = Temp_name_Variable_24;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable_25 = Temp_name_Variable_25;
	Parms.Temp_name_Variable_26 = Temp_name_Variable_26;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue_1 = CallFunc_GetAvailableCompanions_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.Temp_name_Variable_27 = Temp_name_Variable_27;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_1 = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_name_Variable_28 = Temp_name_Variable_28;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_name_Variable_29 = Temp_name_Variable_29;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_name_Variable_30 = Temp_name_Variable_30;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_name_Variable_31 = Temp_name_Variable_31;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1 = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.Temp_name_Variable_32 = Temp_name_Variable_32;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_2 = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_FindDislikedBuildEntities_ReturnValue = CallFunc_FindDislikedBuildEntities_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_2 = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_FindFavouriteBuildEntities_ReturnValue = CallFunc_FindFavouriteBuildEntities_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_3 = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_6 = CallFunc_Conv_TextToString_ReturnValue_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_GetChildAt_ReturnValue_3 = CallFunc_GetChildAt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_3 = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_7 = CallFunc_Conv_TextToString_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_8 = CallFunc_EqualEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_DoesCompanionWantToLeaveAPlayer_ReturnValue = CallFunc_DoesCompanionWantToLeaveAPlayer_ReturnValue;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_8 = CallFunc_Conv_TextToString_ReturnValue_8;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_9 = CallFunc_Conv_TextToString_ReturnValue_9;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_GetConflictForCurrentDay_ReturnValue = CallFunc_GetConflictForCurrentDay_ReturnValue;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_10 = CallFunc_Conv_TextToString_ReturnValue_10;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_11 = CallFunc_Conv_TextToString_ReturnValue_11;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_12 = CallFunc_Conv_TextToString_ReturnValue_12;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.K2Node_Select_Default_18 = K2Node_Select_Default_18;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.CallFunc_Conv_TextToString_ReturnValue_13 = CallFunc_Conv_TextToString_ReturnValue_13;
	Parms.CallFunc_BuildSystemGetGlobalStatValue_ReturnValue = CallFunc_BuildSystemGetGlobalStatValue_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_14 = CallFunc_Conv_TextToString_ReturnValue_14;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_1 = CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_19 = K2Node_Select_Default_19;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.K2Node_Select_Default_20 = K2Node_Select_Default_20;
	Parms.CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_2 = CallFunc_BuildSystemGetGlobalStatValue_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_21 = K2Node_Select_Default_21;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.SetEffectsVals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ValsPos                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>              ValsNeg                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>              Neutral                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      TargetTExt                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_LeftChop_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::SetEffectsVals(TArray<class FString>& ValsPos, TArray<class FString>& ValsNeg, TArray<class FString>& Neutral, const class FString& TargetTExt, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_LeftChop_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "SetEffectsVals");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_SetEffectsVals_Params Parms{};

	Parms.ValsPos = ValsPos;
	Parms.ValsNeg = ValsNeg;
	Parms.Neutral = Neutral;
	Parms.TargetTExt = TargetTExt;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_LeftChop_ReturnValue = CallFunc_LeftChop_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.SetArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PsycheNewID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PsycheOldID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HealthNewID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HealthOldID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::SetArrow(int32 PsycheNewID, int32 PsycheOldID, int32 HealthNewID, int32 HealthOldID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "SetArrow");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_SetArrow_Params Parms{};

	Parms.PsycheNewID = PsycheNewID;
	Parms.PsycheOldID = PsycheOldID;
	Parms.HealthNewID = HealthNewID;
	Parms.HealthOldID = HealthOldID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.UpdatePercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrEventID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::UpdatePercentage(class FName CurrEventID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "UpdatePercentage");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_UpdatePercentage_Params Parms{};

	Parms.CurrEventID = CurrEventID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.SetEventAndMap2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Locaton                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::SetEventAndMap2(const class FString& Mission, const class FString& Locaton, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "SetEventAndMap2");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_SetEventAndMap2_Params Parms{};

	Parms.Mission = Mission;
	Parms.Locaton = Locaton;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.GetBuffString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuffGroup              CurrentGroup                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstSet                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EBuffType>       HightestBuffType                                                 (Edit, BlueprintVisible)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBuffGroup>      K2Node_MakeArray_Array                                           (ReferenceParm)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHealthPhase            CallFunc_GetCurrentHealthPhase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffGroup              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCompanionsModifiers_ReturnValue                      (ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::GetBuffString(enum class EBuffGroup CurrentGroup, bool FirstSet, const TArray<enum class EBuffType>& HightestBuffType, class FName Temp_name_Variable, class FName Temp_name_Variable_1, TArray<enum class EBuffGroup>& K2Node_MakeArray_Array, class FName Temp_name_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Array_Index_Variable, uint8 Temp_byte_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName K2Node_Select_Default, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EHealthPhase CallFunc_GetCurrentHealthPhase_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 Temp_int_Variable, enum class EBuffGroup CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "GetBuffString");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_GetBuffString_Params Parms{};

	Parms.CurrentGroup = CurrentGroup;
	Parms.FirstSet = FirstSet;
	Parms.HightestBuffType = HightestBuffType;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentHealthPhase_ReturnValue = CallFunc_GetCurrentHealthPhase_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCompanionsModifiers_ReturnValue = CallFunc_GetCompanionsModifiers_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.GetCanBeSend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               CanBeSend                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::GetCanBeSend(bool* CanBeSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "GetCanBeSend");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_GetCanBeSend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanBeSend != nullptr)
		*CanBeSend = Parms.CanBeSend;

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.SetEventAndMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EvID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 Local                                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FStruct_MapInformation>Temp_byte_Variable                                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GenerateBriefReportFromEvent_Brief                      (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::SetEventAndMap(class FName EvID, const struct FInnerEvent& Local, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GenerateBriefReportFromEvent_Brief, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInnerEvent& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "SetEventAndMap");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_SetEventAndMap_Params Parms{};

	Parms.EvID = EvID;
	Parms.Local = Local;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GenerateBriefReportFromEvent_Brief = CallFunc_GenerateBriefReportFromEvent_Brief;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::Select(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "Select");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_Select_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.ShowInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      BackgroundColor                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::ShowInfo(bool Show, const struct FColor& BackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "ShowInfo");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_ShowInfo_Params Parms{};

	Parms.Show = Show;
	Parms.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::Init(class UTexture2D* Image, class FText NewName, class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "Init");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_Init_Params Parms{};

	Parms.Image = Image;
	Parms.NewName = NewName;
	Parms.NameID = NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "PreConstruct");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_FoodSystem_V3.wid_CompanionsPanel_Entry_FoodSystem_V3_C.ExecuteUbergraph_wid_CompanionsPanel_Entry_FoodSystem_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UTexture2D*                  K2Node_CustomEvent_Image                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewName                                       (None)
// class FName                        K2Node_CustomEvent_NameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCompanionsModifiers_ReturnValue                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWid_CompanionsPanel_Entry_FoodSystem_V3_C::ExecuteUbergraph_wid_CompanionsPanel_Entry_FoodSystem_V3(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UTexture2D* K2Node_CustomEvent_Image, class FText K2Node_CustomEvent_NewName, class FName K2Node_CustomEvent_NameID, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_FoodSystem_V3_C", "ExecuteUbergraph_wid_CompanionsPanel_Entry_FoodSystem_V3");

	Params::UWid_CompanionsPanel_Entry_FoodSystem_V3_C_ExecuteUbergraph_wid_CompanionsPanel_Entry_FoodSystem_V3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_NewName = K2Node_CustomEvent_NewName;
	Parms.K2Node_CustomEvent_NameID = K2Node_CustomEvent_NameID;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCompanionsModifiers_ReturnValue = CallFunc_GetCompanionsModifiers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


