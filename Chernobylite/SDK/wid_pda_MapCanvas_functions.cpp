#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_MapCanvas.wid_pda_MapCanvas_C
// (None)

class UClass* UWid_pda_MapCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_MapCanvas_C");

	return Clss;
}


// wid_pda_MapCanvas_C wid_pda_MapCanvas.Default__wid_pda_MapCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_MapCanvas_C* UWid_pda_MapCanvas_C::GetDefaultObj()
{
	static class UWid_pda_MapCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_MapCanvas_C*>(UWid_pda_MapCanvas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.SetMinMaxForMissingMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::SetMinMaxForMissingMap(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "SetMinMaxForMissingMap");

	Params::UWid_pda_MapCanvas_C_SetMinMaxForMissingMap_Params Parms{};

	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.FlushTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::FlushTexture(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "FlushTexture");

	Params::UWid_pda_MapCanvas_C_FlushTexture_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.SetTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      MapInformation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_8                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_9                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_10                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FStruct_MapInformation>Temp_byte_Variable_11                                            (None)
// enum class EEventMap               Temp_byte_Variable_12                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_13                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Temp_byte_Variable_14                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_3                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_4                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_5                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_5          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_24                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_25                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_26                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_27                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_6                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_6          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_28                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_29                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_30                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_31                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_30                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_31                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_7          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_7                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_8                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_32                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_33                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_32                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_33                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_34                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_35                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_34                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_35                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_8          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_36                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_36                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_37                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_37                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_38                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_38                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_39                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_39                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_9                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_9          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_40                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_41                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_40                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_41                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_42                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_43                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_42                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_43                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_10         (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_10                                       (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_11                                       (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_44                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_45                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_44                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_45                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_46                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_47                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_46                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_47                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_47                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_11         (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_48                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_48                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_48                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_49                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_49                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_49                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_50                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_50                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_50                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_51                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_51                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_51                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_12                                       (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_12         (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_52                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_53                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_52                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_52                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_53                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_53                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_54                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_55                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_54                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_54                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_55                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_55                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_13         (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_13                                       (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_56                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_56                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_56                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_14         (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_57                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_57                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_57                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_58                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_58                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_58                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_59                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_59                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_59                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_MapCanvas_C::SetTexture(class UClass* MapInformation, enum class EEventMap Temp_byte_Variable, enum class EEventMap Temp_byte_Variable_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_3, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_3, bool K2Node_DynamicCast_bSuccess_3, enum class EEventMap Temp_byte_Variable_2, float CallFunc_Conv_BoolToFloat_ReturnValue, enum class EEventMap Temp_byte_Variable_3, bool CallFunc_Array_Contains_ReturnValue, enum class EEventMap Temp_byte_Variable_4, enum class EEventMap Temp_byte_Variable_5, enum class EEventMap Temp_byte_Variable_6, enum class EEventMap Temp_byte_Variable_7, enum class EEventMap Temp_byte_Variable_8, enum class EEventMap Temp_byte_Variable_9, enum class EEventMap Temp_byte_Variable_10, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable_11, enum class EEventMap Temp_byte_Variable_12, enum class EEventMap Temp_byte_Variable_13, enum class EEventMap Temp_byte_Variable_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_4, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_4, bool K2Node_DynamicCast_bSuccess_4, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_5, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_5, bool K2Node_DynamicCast_bSuccess_5, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_6, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_6, bool K2Node_DynamicCast_bSuccess_6, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_7, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_7, bool K2Node_DynamicCast_bSuccess_7, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_8, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_9, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_8, bool K2Node_DynamicCast_bSuccess_8, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_9, bool K2Node_DynamicCast_bSuccess_9, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_10, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_11, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_10, bool K2Node_DynamicCast_bSuccess_10, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_11, bool K2Node_DynamicCast_bSuccess_11, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_12, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_12, bool K2Node_DynamicCast_bSuccess_12, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_13, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_13, bool K2Node_DynamicCast_bSuccess_13, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_14, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_14, bool K2Node_DynamicCast_bSuccess_14, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_15, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_15, bool K2Node_DynamicCast_bSuccess_15, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue_4, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_16, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_17, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_16, bool K2Node_DynamicCast_bSuccess_16, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_17, bool K2Node_DynamicCast_bSuccess_17, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_18, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_19, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_18, bool K2Node_DynamicCast_bSuccess_18, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_19, bool K2Node_DynamicCast_bSuccess_19, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_4, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, float CallFunc_Conv_BoolToFloat_ReturnValue_5, float CallFunc_Conv_BoolToFloat_ReturnValue_6, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_20, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_21, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_20, bool K2Node_DynamicCast_bSuccess_20, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_21, bool K2Node_DynamicCast_bSuccess_21, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_22, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_23, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_22, bool K2Node_DynamicCast_bSuccess_22, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_23, bool K2Node_DynamicCast_bSuccess_23, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_5, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_24, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_24, bool K2Node_DynamicCast_bSuccess_24, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_25, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_25, bool K2Node_DynamicCast_bSuccess_25, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_26, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_26, bool K2Node_DynamicCast_bSuccess_26, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_27, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_27, bool K2Node_DynamicCast_bSuccess_27, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_6, bool CallFunc_Array_Contains_ReturnValue_6, float CallFunc_Conv_BoolToFloat_ReturnValue_7, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_28, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_29, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_28, bool K2Node_DynamicCast_bSuccess_28, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_29, bool K2Node_DynamicCast_bSuccess_29, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_30, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_31, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_30, bool K2Node_DynamicCast_bSuccess_30, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_31, bool K2Node_DynamicCast_bSuccess_31, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_7, bool CallFunc_Array_Contains_ReturnValue_7, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_7, bool CallFunc_Map_Find_ReturnValue_7, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_8, bool CallFunc_Map_Find_ReturnValue_8, float CallFunc_Conv_BoolToFloat_ReturnValue_8, float CallFunc_Conv_BoolToFloat_ReturnValue_9, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_32, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_33, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_32, bool K2Node_DynamicCast_bSuccess_32, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_33, bool K2Node_DynamicCast_bSuccess_33, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_34, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_35, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_34, bool K2Node_DynamicCast_bSuccess_34, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_35, bool K2Node_DynamicCast_bSuccess_35, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_8, bool CallFunc_Array_Contains_ReturnValue_8, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_36, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_36, bool K2Node_DynamicCast_bSuccess_36, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_37, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_37, bool K2Node_DynamicCast_bSuccess_37, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_38, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_38, bool K2Node_DynamicCast_bSuccess_38, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_39, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_39, bool K2Node_DynamicCast_bSuccess_39, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_9, bool CallFunc_Map_Find_ReturnValue_9, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_9, bool CallFunc_Array_Contains_ReturnValue_9, float CallFunc_Conv_BoolToFloat_ReturnValue_10, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_40, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_41, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_40, bool K2Node_DynamicCast_bSuccess_40, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_41, bool K2Node_DynamicCast_bSuccess_41, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_42, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_43, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_42, bool K2Node_DynamicCast_bSuccess_42, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_43, bool K2Node_DynamicCast_bSuccess_43, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_10, bool CallFunc_Array_Contains_ReturnValue_10, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_10, bool CallFunc_Map_Find_ReturnValue_10, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_11, bool CallFunc_Map_Find_ReturnValue_11, float CallFunc_Conv_BoolToFloat_ReturnValue_11, float CallFunc_Conv_BoolToFloat_ReturnValue_12, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_44, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_45, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_44, bool K2Node_DynamicCast_bSuccess_44, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_45, bool K2Node_DynamicCast_bSuccess_45, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_46, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_47, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_46, bool K2Node_DynamicCast_bSuccess_46, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_47, bool K2Node_DynamicCast_bSuccess_47, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_11, bool CallFunc_Array_Contains_ReturnValue_11, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_48, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_48, bool K2Node_DynamicCast_bSuccess_48, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_49, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_49, bool K2Node_DynamicCast_bSuccess_49, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_50, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_50, bool K2Node_DynamicCast_bSuccess_50, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_51, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_51, bool K2Node_DynamicCast_bSuccess_51, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_12, bool CallFunc_Map_Find_ReturnValue_12, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_12, bool CallFunc_Array_Contains_ReturnValue_12, float CallFunc_Conv_BoolToFloat_ReturnValue_13, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_52, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_53, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_52, bool K2Node_DynamicCast_bSuccess_52, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_53, bool K2Node_DynamicCast_bSuccess_53, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_54, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_55, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_54, bool K2Node_DynamicCast_bSuccess_54, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_55, bool K2Node_DynamicCast_bSuccess_55, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_13, bool CallFunc_Array_Contains_ReturnValue_13, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_13, bool CallFunc_Map_Find_ReturnValue_13, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_56, float CallFunc_Conv_BoolToFloat_ReturnValue_14, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_56, bool K2Node_DynamicCast_bSuccess_56, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_14, bool CallFunc_Array_Contains_ReturnValue_14, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_57, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_57, bool K2Node_DynamicCast_bSuccess_57, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_58, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_58, bool K2Node_DynamicCast_bSuccess_58, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_59, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_59, bool K2Node_DynamicCast_bSuccess_59)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "SetTexture");

	Params::UWid_pda_MapCanvas_C_SetTexture_Params Parms{};

	Parms.MapInformation = MapInformation;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_2 = CallFunc_LoadAsset_Blocking_ReturnValue_2;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_3 = CallFunc_LoadAsset_Blocking_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsTexture_2D_2 = K2Node_DynamicCast_AsTexture_2D_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsTexture_2D_3 = K2Node_DynamicCast_AsTexture_2D_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_4 = CallFunc_LoadAsset_Blocking_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsTexture_2D_4 = K2Node_DynamicCast_AsTexture_2D_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_5 = CallFunc_LoadAsset_Blocking_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsTexture_2D_5 = K2Node_DynamicCast_AsTexture_2D_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_6 = CallFunc_LoadAsset_Blocking_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsTexture_2D_6 = K2Node_DynamicCast_AsTexture_2D_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_7 = CallFunc_LoadAsset_Blocking_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsTexture_2D_7 = K2Node_DynamicCast_AsTexture_2D_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_3 = CallFunc_Conv_BoolToFloat_ReturnValue_3;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_8 = CallFunc_LoadAsset_Blocking_ReturnValue_8;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_9 = CallFunc_LoadAsset_Blocking_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsTexture_2D_8 = K2Node_DynamicCast_AsTexture_2D_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsTexture_2D_9 = K2Node_DynamicCast_AsTexture_2D_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_10 = CallFunc_LoadAsset_Blocking_ReturnValue_10;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_11 = CallFunc_LoadAsset_Blocking_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsTexture_2D_10 = K2Node_DynamicCast_AsTexture_2D_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsTexture_2D_11 = K2Node_DynamicCast_AsTexture_2D_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_12 = CallFunc_LoadAsset_Blocking_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsTexture_2D_12 = K2Node_DynamicCast_AsTexture_2D_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_13 = CallFunc_LoadAsset_Blocking_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsTexture_2D_13 = K2Node_DynamicCast_AsTexture_2D_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_14 = CallFunc_LoadAsset_Blocking_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsTexture_2D_14 = K2Node_DynamicCast_AsTexture_2D_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_15 = CallFunc_LoadAsset_Blocking_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsTexture_2D_15 = K2Node_DynamicCast_AsTexture_2D_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_4 = CallFunc_Conv_BoolToFloat_ReturnValue_4;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_16 = CallFunc_LoadAsset_Blocking_ReturnValue_16;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_17 = CallFunc_LoadAsset_Blocking_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsTexture_2D_16 = K2Node_DynamicCast_AsTexture_2D_16;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_DynamicCast_AsTexture_2D_17 = K2Node_DynamicCast_AsTexture_2D_17;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_18 = CallFunc_LoadAsset_Blocking_ReturnValue_18;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_19 = CallFunc_LoadAsset_Blocking_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsTexture_2D_18 = K2Node_DynamicCast_AsTexture_2D_18;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.K2Node_DynamicCast_AsTexture_2D_19 = K2Node_DynamicCast_AsTexture_2D_19;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_5 = CallFunc_Conv_BoolToFloat_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_6 = CallFunc_Conv_BoolToFloat_ReturnValue_6;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_20 = CallFunc_LoadAsset_Blocking_ReturnValue_20;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_21 = CallFunc_LoadAsset_Blocking_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsTexture_2D_20 = K2Node_DynamicCast_AsTexture_2D_20;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.K2Node_DynamicCast_AsTexture_2D_21 = K2Node_DynamicCast_AsTexture_2D_21;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_22 = CallFunc_LoadAsset_Blocking_ReturnValue_22;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_23 = CallFunc_LoadAsset_Blocking_ReturnValue_23;
	Parms.K2Node_DynamicCast_AsTexture_2D_22 = K2Node_DynamicCast_AsTexture_2D_22;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.K2Node_DynamicCast_AsTexture_2D_23 = K2Node_DynamicCast_AsTexture_2D_23;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_5 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_5;
	Parms.CallFunc_Array_Contains_ReturnValue_5 = CallFunc_Array_Contains_ReturnValue_5;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_24 = CallFunc_LoadAsset_Blocking_ReturnValue_24;
	Parms.K2Node_DynamicCast_AsTexture_2D_24 = K2Node_DynamicCast_AsTexture_2D_24;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_25 = CallFunc_LoadAsset_Blocking_ReturnValue_25;
	Parms.K2Node_DynamicCast_AsTexture_2D_25 = K2Node_DynamicCast_AsTexture_2D_25;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_26 = CallFunc_LoadAsset_Blocking_ReturnValue_26;
	Parms.K2Node_DynamicCast_AsTexture_2D_26 = K2Node_DynamicCast_AsTexture_2D_26;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_27 = CallFunc_LoadAsset_Blocking_ReturnValue_27;
	Parms.K2Node_DynamicCast_AsTexture_2D_27 = K2Node_DynamicCast_AsTexture_2D_27;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_Map_Find_Value_6 = CallFunc_Map_Find_Value_6;
	Parms.CallFunc_Map_Find_ReturnValue_6 = CallFunc_Map_Find_ReturnValue_6;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_6 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_6;
	Parms.CallFunc_Array_Contains_ReturnValue_6 = CallFunc_Array_Contains_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_7 = CallFunc_Conv_BoolToFloat_ReturnValue_7;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_28 = CallFunc_LoadAsset_Blocking_ReturnValue_28;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_29 = CallFunc_LoadAsset_Blocking_ReturnValue_29;
	Parms.K2Node_DynamicCast_AsTexture_2D_28 = K2Node_DynamicCast_AsTexture_2D_28;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.K2Node_DynamicCast_AsTexture_2D_29 = K2Node_DynamicCast_AsTexture_2D_29;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_30 = CallFunc_LoadAsset_Blocking_ReturnValue_30;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_31 = CallFunc_LoadAsset_Blocking_ReturnValue_31;
	Parms.K2Node_DynamicCast_AsTexture_2D_30 = K2Node_DynamicCast_AsTexture_2D_30;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.K2Node_DynamicCast_AsTexture_2D_31 = K2Node_DynamicCast_AsTexture_2D_31;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_7 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_7;
	Parms.CallFunc_Array_Contains_ReturnValue_7 = CallFunc_Array_Contains_ReturnValue_7;
	Parms.CallFunc_Map_Find_Value_7 = CallFunc_Map_Find_Value_7;
	Parms.CallFunc_Map_Find_ReturnValue_7 = CallFunc_Map_Find_ReturnValue_7;
	Parms.CallFunc_Map_Find_Value_8 = CallFunc_Map_Find_Value_8;
	Parms.CallFunc_Map_Find_ReturnValue_8 = CallFunc_Map_Find_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_8 = CallFunc_Conv_BoolToFloat_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_9 = CallFunc_Conv_BoolToFloat_ReturnValue_9;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_32 = CallFunc_LoadAsset_Blocking_ReturnValue_32;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_33 = CallFunc_LoadAsset_Blocking_ReturnValue_33;
	Parms.K2Node_DynamicCast_AsTexture_2D_32 = K2Node_DynamicCast_AsTexture_2D_32;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.K2Node_DynamicCast_AsTexture_2D_33 = K2Node_DynamicCast_AsTexture_2D_33;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_34 = CallFunc_LoadAsset_Blocking_ReturnValue_34;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_35 = CallFunc_LoadAsset_Blocking_ReturnValue_35;
	Parms.K2Node_DynamicCast_AsTexture_2D_34 = K2Node_DynamicCast_AsTexture_2D_34;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.K2Node_DynamicCast_AsTexture_2D_35 = K2Node_DynamicCast_AsTexture_2D_35;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_8 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_8;
	Parms.CallFunc_Array_Contains_ReturnValue_8 = CallFunc_Array_Contains_ReturnValue_8;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_36 = CallFunc_LoadAsset_Blocking_ReturnValue_36;
	Parms.K2Node_DynamicCast_AsTexture_2D_36 = K2Node_DynamicCast_AsTexture_2D_36;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_37 = CallFunc_LoadAsset_Blocking_ReturnValue_37;
	Parms.K2Node_DynamicCast_AsTexture_2D_37 = K2Node_DynamicCast_AsTexture_2D_37;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_38 = CallFunc_LoadAsset_Blocking_ReturnValue_38;
	Parms.K2Node_DynamicCast_AsTexture_2D_38 = K2Node_DynamicCast_AsTexture_2D_38;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_39 = CallFunc_LoadAsset_Blocking_ReturnValue_39;
	Parms.K2Node_DynamicCast_AsTexture_2D_39 = K2Node_DynamicCast_AsTexture_2D_39;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.CallFunc_Map_Find_Value_9 = CallFunc_Map_Find_Value_9;
	Parms.CallFunc_Map_Find_ReturnValue_9 = CallFunc_Map_Find_ReturnValue_9;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_9 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_9;
	Parms.CallFunc_Array_Contains_ReturnValue_9 = CallFunc_Array_Contains_ReturnValue_9;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_10 = CallFunc_Conv_BoolToFloat_ReturnValue_10;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_40 = CallFunc_LoadAsset_Blocking_ReturnValue_40;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_41 = CallFunc_LoadAsset_Blocking_ReturnValue_41;
	Parms.K2Node_DynamicCast_AsTexture_2D_40 = K2Node_DynamicCast_AsTexture_2D_40;
	Parms.K2Node_DynamicCast_bSuccess_40 = K2Node_DynamicCast_bSuccess_40;
	Parms.K2Node_DynamicCast_AsTexture_2D_41 = K2Node_DynamicCast_AsTexture_2D_41;
	Parms.K2Node_DynamicCast_bSuccess_41 = K2Node_DynamicCast_bSuccess_41;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_42 = CallFunc_LoadAsset_Blocking_ReturnValue_42;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_43 = CallFunc_LoadAsset_Blocking_ReturnValue_43;
	Parms.K2Node_DynamicCast_AsTexture_2D_42 = K2Node_DynamicCast_AsTexture_2D_42;
	Parms.K2Node_DynamicCast_bSuccess_42 = K2Node_DynamicCast_bSuccess_42;
	Parms.K2Node_DynamicCast_AsTexture_2D_43 = K2Node_DynamicCast_AsTexture_2D_43;
	Parms.K2Node_DynamicCast_bSuccess_43 = K2Node_DynamicCast_bSuccess_43;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_10 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_10;
	Parms.CallFunc_Array_Contains_ReturnValue_10 = CallFunc_Array_Contains_ReturnValue_10;
	Parms.CallFunc_Map_Find_Value_10 = CallFunc_Map_Find_Value_10;
	Parms.CallFunc_Map_Find_ReturnValue_10 = CallFunc_Map_Find_ReturnValue_10;
	Parms.CallFunc_Map_Find_Value_11 = CallFunc_Map_Find_Value_11;
	Parms.CallFunc_Map_Find_ReturnValue_11 = CallFunc_Map_Find_ReturnValue_11;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_11 = CallFunc_Conv_BoolToFloat_ReturnValue_11;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_12 = CallFunc_Conv_BoolToFloat_ReturnValue_12;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_44 = CallFunc_LoadAsset_Blocking_ReturnValue_44;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_45 = CallFunc_LoadAsset_Blocking_ReturnValue_45;
	Parms.K2Node_DynamicCast_AsTexture_2D_44 = K2Node_DynamicCast_AsTexture_2D_44;
	Parms.K2Node_DynamicCast_bSuccess_44 = K2Node_DynamicCast_bSuccess_44;
	Parms.K2Node_DynamicCast_AsTexture_2D_45 = K2Node_DynamicCast_AsTexture_2D_45;
	Parms.K2Node_DynamicCast_bSuccess_45 = K2Node_DynamicCast_bSuccess_45;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_46 = CallFunc_LoadAsset_Blocking_ReturnValue_46;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_47 = CallFunc_LoadAsset_Blocking_ReturnValue_47;
	Parms.K2Node_DynamicCast_AsTexture_2D_46 = K2Node_DynamicCast_AsTexture_2D_46;
	Parms.K2Node_DynamicCast_bSuccess_46 = K2Node_DynamicCast_bSuccess_46;
	Parms.K2Node_DynamicCast_AsTexture_2D_47 = K2Node_DynamicCast_AsTexture_2D_47;
	Parms.K2Node_DynamicCast_bSuccess_47 = K2Node_DynamicCast_bSuccess_47;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_11 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_11;
	Parms.CallFunc_Array_Contains_ReturnValue_11 = CallFunc_Array_Contains_ReturnValue_11;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_48 = CallFunc_LoadAsset_Blocking_ReturnValue_48;
	Parms.K2Node_DynamicCast_AsTexture_2D_48 = K2Node_DynamicCast_AsTexture_2D_48;
	Parms.K2Node_DynamicCast_bSuccess_48 = K2Node_DynamicCast_bSuccess_48;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_49 = CallFunc_LoadAsset_Blocking_ReturnValue_49;
	Parms.K2Node_DynamicCast_AsTexture_2D_49 = K2Node_DynamicCast_AsTexture_2D_49;
	Parms.K2Node_DynamicCast_bSuccess_49 = K2Node_DynamicCast_bSuccess_49;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_50 = CallFunc_LoadAsset_Blocking_ReturnValue_50;
	Parms.K2Node_DynamicCast_AsTexture_2D_50 = K2Node_DynamicCast_AsTexture_2D_50;
	Parms.K2Node_DynamicCast_bSuccess_50 = K2Node_DynamicCast_bSuccess_50;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_51 = CallFunc_LoadAsset_Blocking_ReturnValue_51;
	Parms.K2Node_DynamicCast_AsTexture_2D_51 = K2Node_DynamicCast_AsTexture_2D_51;
	Parms.K2Node_DynamicCast_bSuccess_51 = K2Node_DynamicCast_bSuccess_51;
	Parms.CallFunc_Map_Find_Value_12 = CallFunc_Map_Find_Value_12;
	Parms.CallFunc_Map_Find_ReturnValue_12 = CallFunc_Map_Find_ReturnValue_12;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_12 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_12;
	Parms.CallFunc_Array_Contains_ReturnValue_12 = CallFunc_Array_Contains_ReturnValue_12;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_13 = CallFunc_Conv_BoolToFloat_ReturnValue_13;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_52 = CallFunc_LoadAsset_Blocking_ReturnValue_52;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_53 = CallFunc_LoadAsset_Blocking_ReturnValue_53;
	Parms.K2Node_DynamicCast_AsTexture_2D_52 = K2Node_DynamicCast_AsTexture_2D_52;
	Parms.K2Node_DynamicCast_bSuccess_52 = K2Node_DynamicCast_bSuccess_52;
	Parms.K2Node_DynamicCast_AsTexture_2D_53 = K2Node_DynamicCast_AsTexture_2D_53;
	Parms.K2Node_DynamicCast_bSuccess_53 = K2Node_DynamicCast_bSuccess_53;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_54 = CallFunc_LoadAsset_Blocking_ReturnValue_54;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_55 = CallFunc_LoadAsset_Blocking_ReturnValue_55;
	Parms.K2Node_DynamicCast_AsTexture_2D_54 = K2Node_DynamicCast_AsTexture_2D_54;
	Parms.K2Node_DynamicCast_bSuccess_54 = K2Node_DynamicCast_bSuccess_54;
	Parms.K2Node_DynamicCast_AsTexture_2D_55 = K2Node_DynamicCast_AsTexture_2D_55;
	Parms.K2Node_DynamicCast_bSuccess_55 = K2Node_DynamicCast_bSuccess_55;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_13 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_13;
	Parms.CallFunc_Array_Contains_ReturnValue_13 = CallFunc_Array_Contains_ReturnValue_13;
	Parms.CallFunc_Map_Find_Value_13 = CallFunc_Map_Find_Value_13;
	Parms.CallFunc_Map_Find_ReturnValue_13 = CallFunc_Map_Find_ReturnValue_13;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_56 = CallFunc_LoadAsset_Blocking_ReturnValue_56;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_14 = CallFunc_Conv_BoolToFloat_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsTexture_2D_56 = K2Node_DynamicCast_AsTexture_2D_56;
	Parms.K2Node_DynamicCast_bSuccess_56 = K2Node_DynamicCast_bSuccess_56;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_14 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_14;
	Parms.CallFunc_Array_Contains_ReturnValue_14 = CallFunc_Array_Contains_ReturnValue_14;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_57 = CallFunc_LoadAsset_Blocking_ReturnValue_57;
	Parms.K2Node_DynamicCast_AsTexture_2D_57 = K2Node_DynamicCast_AsTexture_2D_57;
	Parms.K2Node_DynamicCast_bSuccess_57 = K2Node_DynamicCast_bSuccess_57;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_58 = CallFunc_LoadAsset_Blocking_ReturnValue_58;
	Parms.K2Node_DynamicCast_AsTexture_2D_58 = K2Node_DynamicCast_AsTexture_2D_58;
	Parms.K2Node_DynamicCast_bSuccess_58 = K2Node_DynamicCast_bSuccess_58;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_59 = CallFunc_LoadAsset_Blocking_ReturnValue_59;
	Parms.K2Node_DynamicCast_AsTexture_2D_59 = K2Node_DynamicCast_AsTexture_2D_59;
	Parms.K2Node_DynamicCast_bSuccess_59 = K2Node_DynamicCast_bSuccess_59;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.GetCenterTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PrioritizeCustomMark                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_pda_CanvasEntry_C*      TagAtCenter                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_pda_CanvasEntry_C*      Tag                                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_pda_CanvasEntry_C*>CallFunc_GetCurrentTags_Tags                                     (ReferenceParm, ContainsInstancedReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_pda_CanvasEntry_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PointInsideCircle2D_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_MapCanvas_C::GetCenterTag(bool PrioritizeCustomMark, class UWid_pda_CanvasEntry_C** TagAtCenter, class UWid_pda_CanvasEntry_C* Tag, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector2D& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue_1, TArray<class UWid_pda_CanvasEntry_C*>& CallFunc_GetCurrentTags_Tags, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWid_pda_CanvasEntry_C* CallFunc_Array_Get_Item, const struct FVector2D& K2Node_Select_Default, bool CallFunc_PointInsideCircle2D_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "GetCenterTag");

	Params::UWid_pda_MapCanvas_C_GetCenterTag_Params Parms{};

	Parms.PrioritizeCustomMark = PrioritizeCustomMark;
	Parms.Tag = Tag;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue_1 = CallFunc_NormalizeToRange_ReturnValue_1;
	Parms.CallFunc_GetCurrentTags_Tags = CallFunc_GetCurrentTags_Tags;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PointInsideCircle2D_ReturnValue = CallFunc_PointInsideCircle2D_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TagAtCenter != nullptr)
		*TagAtCenter = Parms.TagAtCenter;

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.SetDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_MapCanvas_C::SetDesc(class FText InText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "SetDesc");

	Params::UWid_pda_MapCanvas_C_SetDesc_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.ClearDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_MapCanvas_C::ClearDesc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "ClearDesc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.GetCurrentTags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWid_pda_CanvasEntry_C*>Tags                                                             (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWid_pda_CanvasEntry_C*>CurrentTags                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_pda_CanvasEntry_C*      K2Node_DynamicCast_AsWid_Pda_Canvas_Entry                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::GetCurrentTags(TArray<class UWid_pda_CanvasEntry_C*>* Tags, const TArray<class UWid_pda_CanvasEntry_C*>& CurrentTags, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_pda_CanvasEntry_C* K2Node_DynamicCast_AsWid_Pda_Canvas_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "GetCurrentTags");

	Params::UWid_pda_MapCanvas_C_GetCurrentTags_Params Parms{};

	Parms.CurrentTags = CurrentTags;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Pda_Canvas_Entry = K2Node_DynamicCast_AsWid_Pda_Canvas_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Tags != nullptr)
		*Tags = std::move(Parms.Tags);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.AddTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSt_MinimapInfo             Desc                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class Aba_Minimap_C*               Minimap                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CurrentMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CurrentMax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_pda_CanvasEntry_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::AddTag(const struct FSt_MinimapInfo& Desc, class Aba_Minimap_C* Minimap, const struct FVector2D& CurrentMin, const struct FVector2D& CurrentMax, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UWid_pda_CanvasEntry_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "AddTag");

	Params::UWid_pda_MapCanvas_C_AddTag_Params Parms{};

	Parms.Desc = Desc;
	Parms.Minimap = Minimap;
	Parms.CurrentMin = CurrentMin;
	Parms.CurrentMax = CurrentMax;
	Parms.CallFunc_GetViewportScale_ReturnValue = CallFunc_GetViewportScale_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetViewportScale_ReturnValue_1 = CallFunc_GetViewportScale_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_1 = CallFunc_Divide_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_MapCanvas_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::Update(const struct FVector2D& Min, const struct FVector2D& Max, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "Update");

	Params::UWid_pda_MapCanvas_C_Update_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "Tick");

	Params::UWid_pda_MapCanvas_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_MapCanvas_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "PreConstruct");

	Params::UWid_pda_MapCanvas_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_MapCanvas.wid_pda_MapCanvas_C.ExecuteUbergraph_wid_pda_MapCanvas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMousePosition_LocationX_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_MapCanvas_C::ExecuteUbergraph_wid_pda_MapCanvas(int32 EntryPoint, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetViewportScale_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_GetViewportScale_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, float CallFunc_GetMousePosition_LocationX_1, float CallFunc_GetMousePosition_LocationY_1, bool CallFunc_GetMousePosition_ReturnValue_1, float CallFunc_GetMousePosition_LocationX_2, float CallFunc_GetMousePosition_LocationY_2, bool CallFunc_GetMousePosition_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, float CallFunc_VSize2D_ReturnValue, float CallFunc_GetMousePosition_LocationX_3, float CallFunc_GetMousePosition_LocationY_3, bool CallFunc_GetMousePosition_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_6, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_Subtract_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_MapCanvas_C", "ExecuteUbergraph_wid_pda_MapCanvas");

	Params::UWid_pda_MapCanvas_C_ExecuteUbergraph_wid_pda_MapCanvas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_GetViewportScale_ReturnValue = CallFunc_GetViewportScale_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_GetViewportScale_ReturnValue_1 = CallFunc_GetViewportScale_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetViewportSize_ReturnValue_2 = CallFunc_GetViewportSize_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_GetViewportSize_ReturnValue_3 = CallFunc_GetViewportSize_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetViewportScale_ReturnValue_2 = CallFunc_GetViewportScale_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetMousePosition_LocationX_1 = CallFunc_GetMousePosition_LocationX_1;
	Parms.CallFunc_GetMousePosition_LocationY_1 = CallFunc_GetMousePosition_LocationY_1;
	Parms.CallFunc_GetMousePosition_ReturnValue_1 = CallFunc_GetMousePosition_ReturnValue_1;
	Parms.CallFunc_GetMousePosition_LocationX_2 = CallFunc_GetMousePosition_LocationX_2;
	Parms.CallFunc_GetMousePosition_LocationY_2 = CallFunc_GetMousePosition_LocationY_2;
	Parms.CallFunc_GetMousePosition_ReturnValue_2 = CallFunc_GetMousePosition_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX_3 = CallFunc_GetMousePosition_LocationX_3;
	Parms.CallFunc_GetMousePosition_LocationY_3 = CallFunc_GetMousePosition_LocationY_3;
	Parms.CallFunc_GetMousePosition_ReturnValue_3 = CallFunc_GetMousePosition_ReturnValue_3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue_5 = CallFunc_MakeVector2D_ReturnValue_5;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = CallFunc_SlotAsCanvasSlot_ReturnValue_2;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue = CallFunc_Add_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue_1 = CallFunc_Add_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_3 = CallFunc_SlotAsCanvasSlot_ReturnValue_3;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_1 = CallFunc_Divide_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_GetPosition_ReturnValue_1 = CallFunc_GetPosition_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_4 = CallFunc_Subtract_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_5 = CallFunc_Subtract_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_6 = CallFunc_MakeVector2D_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


