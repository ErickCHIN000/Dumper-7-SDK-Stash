#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterCreation.UMG_CharacterCreation_C
// (None)

class UClass* UUMG_CharacterCreation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterCreation_C");

	return Clss;
}


// UMG_CharacterCreation_C UMG_CharacterCreation.Default__UMG_CharacterCreation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterCreation_C* UUMG_CharacterCreation_C::GetDefaultObj()
{
	static class UUMG_CharacterCreation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterCreation_C*>(UUMG_CharacterCreation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCameraFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreviewCameraSettingsEnum  CameraFocus                                                      (Parm, OutParm, HasGetValueTypeHash)

void UUMG_CharacterCreation_C::GetCameraFocus(struct FPreviewCameraSettingsEnum* CameraFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GetCameraFocus");

	Params::UUMG_CharacterCreation_C_GetCameraFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CameraFocus != nullptr)
		*CameraFocus = std::move(Parms.CameraFocus);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCosmeticData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CosmeticData                                                     (Parm, OutParm, NoDestructor)
// struct FReqCreateCharacter         CallFunc_GetCharacterResult_ReturnValue                          (None)

void UUMG_CharacterCreation_C::GetCosmeticData(struct FCharacterCosmetics* CosmeticData, const struct FReqCreateCharacter& CallFunc_GetCharacterResult_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GetCosmeticData");

	Params::UUMG_CharacterCreation_C_GetCosmeticData_Params Parms{};

	Parms.CallFunc_GetCharacterResult_ReturnValue = CallFunc_GetCharacterResult_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CosmeticData != nullptr)
		*CosmeticData = std::move(Parms.CosmeticData);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SetInitialCosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         InitialCosmetics                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_CharacterCreation_C::SetInitialCosmetics(const struct FCharacterCosmetics& InitialCosmetics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "SetInitialCosmetics");

	Params::UUMG_CharacterCreation_C_SetInitialCosmetics_Params Parms{};

	Parms.InitialCosmetics = InitialCosmetics;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetInitialCosmeticsForCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECharacterOptionCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCosmeticDataRow                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterOptionCategoryTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue                   (NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterCreation_C::GetInitialCosmeticsForCategory(enum class ECharacterOptionCategory CategoryType, struct FCharacterCreationDataRowHandle* CosmeticDataRow, enum class ECharacterOptionCategory Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, class FName CallFunc_HashToName_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GetInitialCosmeticsForCategory");

	Params::UUMG_CharacterCreation_C_GetInitialCosmeticsForCategory_Params Parms{};

	Parms.CategoryType = CategoryType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue = CallFunc_MakeCharacterCreationData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CosmeticDataRow != nullptr)
		*CosmeticDataRow = std::move(Parms.CosmeticDataRow);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetSettingsWidgetForCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECharacterOptionCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterSetting_Base_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class ECharacterOptionCategoryTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterSetting_Base_C*Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UUMG_CharacterSetting_Base_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

class UUMG_CharacterSetting_Base_C* UUMG_CharacterCreation_C::GetSettingsWidgetForCategory(enum class ECharacterOptionCategory CategoryType, enum class ECharacterOptionCategory Temp_byte_Variable, class UUMG_CharacterSetting_Base_C* Temp_object_Variable, class UUMG_CharacterSetting_Base_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GetSettingsWidgetForCategory");

	Params::UUMG_CharacterCreation_C_GetSettingsWidgetForCategory_Params Parms{};

	Parms.CategoryType = CategoryType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.UpdateDefaultSelections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow          (NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_GetToggleButtonAtIndex_Button                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToggleButtonAtIndex_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_GetToggleButtonAtIndex_Button_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToggleButtonAtIndex_Success_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_GetToggleButtonAtIndex_Button_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToggleButtonAtIndex_Success_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_2        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_GetToggleButtonAtIndex_Button_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToggleButtonAtIndex_Success_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_3        (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_4        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRowHandle                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterCreationDataRowHandle_Paths              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_CastToCharacterCreationDataRowHandle_ReturnValue        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::UpdateDefaultSelections(int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow, class UUMG_ToggleButton_ColorSelect_C* CallFunc_GetToggleButtonAtIndex_Button, bool CallFunc_GetToggleButtonAtIndex_Success, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UUMG_ToggleButton_ColorSelect_C* CallFunc_GetToggleButtonAtIndex_Button_1, bool CallFunc_GetToggleButtonAtIndex_Success_1, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1, bool CallFunc_IsRowHandleValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UUMG_ToggleButton_ColorSelect_C* CallFunc_GetToggleButtonAtIndex_Button_2, bool CallFunc_GetToggleButtonAtIndex_Success_2, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_2, bool CallFunc_IsRowHandleValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class UUMG_ToggleButton_ColorSelect_C* CallFunc_GetToggleButtonAtIndex_Button_3, bool CallFunc_GetToggleButtonAtIndex_Success_3, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_3, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_4, bool CallFunc_IsRowHandleValid_ReturnValue_3, bool CallFunc_IsRowHandleValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FRowHandle& CallFunc_Array_Get_Item, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "UpdateDefaultSelections");

	Params::UUMG_CharacterCreation_C_UpdateDefaultSelections_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow;
	Parms.CallFunc_GetToggleButtonAtIndex_Button = CallFunc_GetToggleButtonAtIndex_Button;
	Parms.CallFunc_GetToggleButtonAtIndex_Success = CallFunc_GetToggleButtonAtIndex_Success;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetToggleButtonAtIndex_Button_1 = CallFunc_GetToggleButtonAtIndex_Button_1;
	Parms.CallFunc_GetToggleButtonAtIndex_Success_1 = CallFunc_GetToggleButtonAtIndex_Success_1;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1 = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetToggleButtonAtIndex_Button_2 = CallFunc_GetToggleButtonAtIndex_Button_2;
	Parms.CallFunc_GetToggleButtonAtIndex_Success_2 = CallFunc_GetToggleButtonAtIndex_Success_2;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_2 = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_2;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_2 = CallFunc_IsRowHandleValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetToggleButtonAtIndex_Button_3 = CallFunc_GetToggleButtonAtIndex_Button_3;
	Parms.CallFunc_GetToggleButtonAtIndex_Success_3 = CallFunc_GetToggleButtonAtIndex_Success_3;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_3 = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_3;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_4 = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_4;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_3 = CallFunc_IsRowHandleValid_ReturnValue_3;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_4 = CallFunc_IsRowHandleValid_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_Paths = CallFunc_CastToCharacterCreationDataRowHandle_Paths;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue = CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.OnCharacterCosmeticsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     UpdatedCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterCreation_C::OnCharacterCosmeticsUpdated(bool Success, const struct FOnlineProfileCharacter& UpdatedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "OnCharacterCosmeticsUpdated");

	Params::UUMG_CharacterCreation_C_OnCharacterCosmeticsUpdated_Params Parms{};

	Parms.Success = Success;
	Parms.UpdatedCharacter = UpdatedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SendCosmeticUpdateRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReqCreateCharacter         CallFunc_GetCharacterResult_ReturnValue                          (None)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          K2Node_DynamicCast_AsIcarus_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// struct FReqUpdateCosmetics         K2Node_MakeStruct_ReqUpdateCosmetics                             (None)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::SendCosmeticUpdateRequest(const struct FReqCreateCharacter& CallFunc_GetCharacterResult_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetUserID_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, const struct FReqUpdateCosmetics& K2Node_MakeStruct_ReqUpdateCosmetics, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "SendCosmeticUpdateRequest");

	Params::UUMG_CharacterCreation_C_SendCosmeticUpdateRequest_Params Parms{};

	Parms.CallFunc_GetCharacterResult_ReturnValue = CallFunc_GetCharacterResult_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_State = K2Node_DynamicCast_AsIcarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.K2Node_MakeStruct_ReqUpdateCosmetics = K2Node_MakeStruct_ReqUpdateCosmetics;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.VerifyCustomisationOptionContexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUMG_CharacterSetting_TextBase_C*>CallFunc_GetChildWidgetsOfClass_ChildWidgets                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterSetting_TextBase_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::VerifyCustomisationOptionContexts(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool Temp_wildcard_Variable, TArray<class UUMG_CharacterSetting_TextBase_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUMG_CharacterSetting_TextBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "VerifyCustomisationOptionContexts");

	Params::UUMG_CharacterCreation_C_VerifyCustomisationOptionContexts_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetChildWidgetsOfClass_ChildWidgets = CallFunc_GetChildWidgetsOfClass_ChildWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetSelectedColorFromPanel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UUMG_CharacterCreation_C::GetSelectedColorFromPanel(class UPanelWidget* Target, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UUMG_ToggleButton_ColorSelect_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GetSelectedColorFromPanel");

	Params::UUMG_CharacterCreation_C_GetSelectedColorFromPanel_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select = K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GenerateCustomisationOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCreationDataRowHandleNewItem                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterOptionCategoryCosmeticCategory                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataEnum  CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow          (NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterSetting_Base_C*CallFunc_GetSettingsWidgetForCategory_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UUMG_CharacterSetting_GridBase_C*K2Node_DynamicCast_AsUMG_Character_Setting_Grid_Base             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddOption_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_GetToggleButtonAtIndex_Button                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToggleButtonAtIndex_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoicesRowHandle   CallFunc_MakeCharacterVoices_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_CharacterSetting_Base_C*CallFunc_GetSettingsWidgetForCategory_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddOption_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDLCPackageInstalled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::GenerateCustomisationOptions(const struct FCharacterCreationDataRowHandle& NewItem, enum class ECharacterOptionCategory CosmeticCategory, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FCharacterCreationDataEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow, class UUMG_CharacterSetting_Base_C* CallFunc_GetSettingsWidgetForCategory_ReturnValue, class UUMG_CharacterSetting_GridBase_C* K2Node_DynamicCast_AsUMG_Character_Setting_Grid_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue, int32 CallFunc_AddOption_Index, class UUMG_ToggleButton_ColorSelect_C* CallFunc_GetToggleButtonAtIndex_Button, bool CallFunc_GetToggleButtonAtIndex_Success, class FName CallFunc_HashToName_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_MakeCharacterVoices_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1, bool CallFunc_IsRowHandleValid_ReturnValue, class UUMG_CharacterSetting_Base_C* CallFunc_GetSettingsWidgetForCategory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_AddOption_Index_1, bool CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_NumRows_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsDLCPackageInstalled_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, bool CallFunc_IsRowHandleValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GenerateCustomisationOptions");

	Params::UUMG_CharacterCreation_C_GenerateCustomisationOptions_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.CosmeticCategory = CosmeticCategory;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow;
	Parms.CallFunc_GetSettingsWidgetForCategory_ReturnValue = CallFunc_GetSettingsWidgetForCategory_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Character_Setting_Grid_Base = K2Node_DynamicCast_AsUMG_Character_Setting_Grid_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue = CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue;
	Parms.CallFunc_AddOption_Index = CallFunc_AddOption_Index;
	Parms.CallFunc_GetToggleButtonAtIndex_Button = CallFunc_GetToggleButtonAtIndex_Button;
	Parms.CallFunc_GetToggleButtonAtIndex_Success = CallFunc_GetToggleButtonAtIndex_Success;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.CallFunc_MakeCharacterVoices_ReturnValue = CallFunc_MakeCharacterVoices_ReturnValue;
	Parms.CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1 = CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetSettingsWidgetForCategory_ReturnValue_1 = CallFunc_GetSettingsWidgetForCategory_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddOption_Index_1 = CallFunc_AddOption_Index_1;
	Parms.CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsDLCPackageInstalled_ReturnValue = CallFunc_IsDLCPackageInstalled_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_2 = CallFunc_IsRowHandleValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.UpdateBodyType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterBodyType      NewBodyType                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow                           (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterCreationDataRowHandle_Paths              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_CastToCharacterCreationDataRowHandle_ReturnValue        (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::UpdateBodyType(enum class ECharacterBodyType NewBodyType, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "UpdateBodyType");

	Params::UUMG_CharacterCreation_C_UpdateBodyType_Params Parms{};

	Parms.NewBodyType = NewBodyType;
	Parms.CallFunc_GetSelectedOption_SelectedRow = CallFunc_GetSelectedOption_SelectedRow;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_Paths = CallFunc_CastToCharacterCreationDataRowHandle_Paths;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue = CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SelectionUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPreviewCameraSettingsEnum  NewFocus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReqCreateCharacter         CallFunc_GetCharacterResult_ReturnValue                          (None)

void UUMG_CharacterCreation_C::SelectionUpdated(int32 Index, const struct FPreviewCameraSettingsEnum& NewFocus, bool CallFunc_NotEqual_EnumEnum_ReturnValue, const struct FReqCreateCharacter& CallFunc_GetCharacterResult_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "SelectionUpdated");

	Params::UUMG_CharacterCreation_C_SelectionUpdated_Params Parms{};

	Parms.Index = Index;
	Parms.NewFocus = NewFocus;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue = CallFunc_NotEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_GetCharacterResult_ReturnValue = CallFunc_GetCharacterResult_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GridSelectionUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReqCreateCharacter         CallFunc_GetCharacterResult_ReturnValue                          (None)
// class UUMG_ToggleButton_ColorSelect_C*K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::GridSelectionUpdated(class UUMG_ToggleButtonBase_C* ToggleButton, const struct FReqCreateCharacter& CallFunc_GetCharacterResult_ReturnValue, class UUMG_ToggleButton_ColorSelect_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GridSelectionUpdated");

	Params::UUMG_CharacterCreation_C_GridSelectionUpdated_Params Parms{};

	Parms.ToggleButton = ToggleButton;
	Parms.CallFunc_GetCharacterResult_ReturnValue = CallFunc_GetCharacterResult_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select = K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCharacterResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FReqCreateCharacter         ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               IsMale                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleSelectedFace                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow                           (NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_1                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_2                         (NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_3                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_4                         (NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_5                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_6                         (NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_7                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_8                         (NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_9                         (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterCreationDataRowHandle_Paths              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_CastToCharacterCreationDataRowHandle_ReturnValue        (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_10                        (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// int32                              CallFunc_NameToHash_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_11                        (NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow_12                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCosmetics         K2Node_MakeStruct_CharacterCosmetics                             (NoDestructor)
// struct FReqCreateCharacter         K2Node_MakeStruct_ReqCreateCharacter                             (None)

struct FReqCreateCharacter UUMG_CharacterCreation_C::GetCharacterResult(bool IsMale, const struct FCharacterCreationDataRowHandle& SelectedFace, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_1, int32 CallFunc_NameToHash_ReturnValue, int32 CallFunc_NameToHash_ReturnValue_1, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_2, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_3, int32 CallFunc_NameToHash_ReturnValue_2, int32 CallFunc_NameToHash_ReturnValue_3, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_4, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_5, int32 CallFunc_NameToHash_ReturnValue_4, int32 CallFunc_NameToHash_ReturnValue_5, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_6, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_7, int32 CallFunc_NameToHash_ReturnValue_6, int32 CallFunc_NameToHash_ReturnValue_7, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_8, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_9, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, int32 CallFunc_NameToHash_ReturnValue_8, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_10, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_NameToHash_ReturnValue_9, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_11, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow_12, int32 CallFunc_NameToHash_ReturnValue_10, int32 CallFunc_NameToHash_ReturnValue_11, const struct FCharacterCosmetics& K2Node_MakeStruct_CharacterCosmetics, const struct FReqCreateCharacter& K2Node_MakeStruct_ReqCreateCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "GetCharacterResult");

	Params::UUMG_CharacterCreation_C_GetCharacterResult_Params Parms{};

	Parms.IsMale = IsMale;
	Parms.SelectedFace = SelectedFace;
	Parms.CallFunc_GetSelectedOption_SelectedRow = CallFunc_GetSelectedOption_SelectedRow;
	Parms.CallFunc_GetSelectedOption_SelectedRow_1 = CallFunc_GetSelectedOption_SelectedRow_1;
	Parms.CallFunc_NameToHash_ReturnValue = CallFunc_NameToHash_ReturnValue;
	Parms.CallFunc_NameToHash_ReturnValue_1 = CallFunc_NameToHash_ReturnValue_1;
	Parms.CallFunc_GetSelectedOption_SelectedRow_2 = CallFunc_GetSelectedOption_SelectedRow_2;
	Parms.CallFunc_GetSelectedOption_SelectedRow_3 = CallFunc_GetSelectedOption_SelectedRow_3;
	Parms.CallFunc_NameToHash_ReturnValue_2 = CallFunc_NameToHash_ReturnValue_2;
	Parms.CallFunc_NameToHash_ReturnValue_3 = CallFunc_NameToHash_ReturnValue_3;
	Parms.CallFunc_GetSelectedOption_SelectedRow_4 = CallFunc_GetSelectedOption_SelectedRow_4;
	Parms.CallFunc_GetSelectedOption_SelectedRow_5 = CallFunc_GetSelectedOption_SelectedRow_5;
	Parms.CallFunc_NameToHash_ReturnValue_4 = CallFunc_NameToHash_ReturnValue_4;
	Parms.CallFunc_NameToHash_ReturnValue_5 = CallFunc_NameToHash_ReturnValue_5;
	Parms.CallFunc_GetSelectedOption_SelectedRow_6 = CallFunc_GetSelectedOption_SelectedRow_6;
	Parms.CallFunc_GetSelectedOption_SelectedRow_7 = CallFunc_GetSelectedOption_SelectedRow_7;
	Parms.CallFunc_NameToHash_ReturnValue_6 = CallFunc_NameToHash_ReturnValue_6;
	Parms.CallFunc_NameToHash_ReturnValue_7 = CallFunc_NameToHash_ReturnValue_7;
	Parms.CallFunc_GetSelectedOption_SelectedRow_8 = CallFunc_GetSelectedOption_SelectedRow_8;
	Parms.CallFunc_GetSelectedOption_SelectedRow_9 = CallFunc_GetSelectedOption_SelectedRow_9;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_Paths = CallFunc_CastToCharacterCreationDataRowHandle_Paths;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue = CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.CallFunc_NameToHash_ReturnValue_8 = CallFunc_NameToHash_ReturnValue_8;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSelectedOption_SelectedRow_10 = CallFunc_GetSelectedOption_SelectedRow_10;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_NameToHash_ReturnValue_9 = CallFunc_NameToHash_ReturnValue_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetSelectedOption_SelectedRow_11 = CallFunc_GetSelectedOption_SelectedRow_11;
	Parms.CallFunc_GetSelectedOption_SelectedRow_12 = CallFunc_GetSelectedOption_SelectedRow_12;
	Parms.CallFunc_NameToHash_ReturnValue_10 = CallFunc_NameToHash_ReturnValue_10;
	Parms.CallFunc_NameToHash_ReturnValue_11 = CallFunc_NameToHash_ReturnValue_11;
	Parms.K2Node_MakeStruct_CharacterCosmetics = K2Node_MakeStruct_CharacterCosmetics;
	Parms.K2Node_MakeStruct_ReqCreateCharacter = K2Node_MakeStruct_ReqCreateCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CreateCharacterResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::CreateCharacterResult(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "CreateCharacterResult");

	Params::UUMG_CharacterCreation_C_CreateCharacterResult_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SendCharacterCreationRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReqCreateCharacter         CallFunc_GetCharacterResult_ReturnValue                          (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::SendCharacterCreationRequest(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FReqCreateCharacter& CallFunc_GetCharacterResult_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "SendCharacterCreationRequest");

	Params::UUMG_CharacterCreation_C_SendCharacterCreationRequest_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_GetCharacterResult_ReturnValue = CallFunc_GetCharacterResult_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "PreConstruct");

	Params::UUMG_CharacterCreation_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CharacterCreation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterCreation_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_CharacterCreation_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.NameChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterCreation_C::NameChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "NameChanged");

	Params::UUMG_CharacterCreation_C_NameChanged_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.ExecuteUbergraph_UMG_CharacterCreation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_CharacterCreation_C::ExecuteUbergraph_UMG_CharacterCreation(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class FText K2Node_CustomEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "ExecuteUbergraph_UMG_CharacterCreation");

	Params::UUMG_CharacterCreation_C_ExecuteUbergraph_UMG_CharacterCreation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.RequestCosmeticsUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReqUpdateCosmetics         Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Retries                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterCreation_C::RequestCosmeticsUpdate__DelegateSignature(const struct FReqUpdateCosmetics& Request, int32 Retries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "RequestCosmeticsUpdate__DelegateSignature");

	Params::UUMG_CharacterCreation_C_RequestCosmeticsUpdate__DelegateSignature_Params Parms{};

	Parms.Request = Request;
	Parms.Retries = Retries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CharacterCreationRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReqCreateCharacter         CharacterResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              NumRetries                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SelectNewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterCreation_C::CharacterCreationRequest__DelegateSignature(const struct FReqCreateCharacter& CharacterResult, int32 NumRetries, bool SelectNewCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "CharacterCreationRequest__DelegateSignature");

	Params::UUMG_CharacterCreation_C_CharacterCreationRequest__DelegateSignature_Params Parms{};

	Parms.CharacterResult = CharacterResult;
	Parms.NumRetries = NumRetries;
	Parms.SelectNewCharacter = SelectNewCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CustomisationCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     NewCharacterInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterCreation_C::CustomisationCompleted__DelegateSignature(bool Success, const struct FOnlineProfileCharacter& NewCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "CustomisationCompleted__DelegateSignature");

	Params::UUMG_CharacterCreation_C_CustomisationCompleted__DelegateSignature_Params Parms{};

	Parms.Success = Success;
	Parms.NewCharacterInfo = NewCharacterInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CharacterCustomizationUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_CharacterCreation_C::CharacterCustomizationUpdated__DelegateSignature(const struct FCharacterCosmetics& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterCreation_C", "CharacterCustomizationUpdated__DelegateSignature");

	Params::UUMG_CharacterCreation_C_CharacterCustomizationUpdated__DelegateSignature_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}

}


