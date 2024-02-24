#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DHBlueprintFunctionLib.DHBlueprintFunctionLib_C
// (None)

class UClass* UDHBlueprintFunctionLib_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHBlueprintFunctionLib_C");

	return Clss;
}


// DHBlueprintFunctionLib_C DHBlueprintFunctionLib.Default__DHBlueprintFunctionLib_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDHBlueprintFunctionLib_C* UDHBlueprintFunctionLib_C::GetDefaultObj()
{
	static class UDHBlueprintFunctionLib_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHBlueprintFunctionLib_C*>(UDHBlueprintFunctionLib_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.Barbarous_StopBCamera
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendExp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionBlendFunction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionLocal_BlendFunction                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_BlendExp                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_BlendTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FOV                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::Barbarous_StopBCamera(float BlendTime, float BlendExp, enum class EViewTargetBlendFunction BlendFunction, float FOV, class AActor* Char, class UObject* __WorldContext, enum class EViewTargetBlendFunction Local_BlendFunction, float Local_BlendExp, float Local_BlendTime, float Local_FOV, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "Barbarous_StopBCamera");

	Params::UDHBlueprintFunctionLib_C_Barbarous_StopBCamera_Params Parms{};

	Parms.BlendTime = BlendTime;
	Parms.BlendExp = BlendExp;
	Parms.BlendFunction = BlendFunction;
	Parms.FOV = FOV;
	Parms.Char = Char;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_BlendFunction = Local_BlendFunction;
	Parms.Local_BlendExp = Local_BlendExp;
	Parms.Local_BlendTime = Local_BlendTime;
	Parms.Local_FOV = Local_FOV;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.Barbarous_UpdateBCamera
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::Barbarous_UpdateBCamera(class AActor* Char, class UObject* __WorldContext, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "Barbarous_UpdateBCamera");

	Params::UDHBlueprintFunctionLib_C_Barbarous_UpdateBCamera_Params Parms{};

	Parms.Char = Char;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.Barbarous_SwitchToBCamera
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendInTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendExp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionBlendFuncton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FOV                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_BlendExp                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_BlendTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionLocal_BlendFunction                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::Barbarous_SwitchToBCamera(float BlendInTime, float BlendExp, enum class EViewTargetBlendFunction BlendFuncton, float FOV, class AActor* Char, class UObject* __WorldContext, float Local_FOV, float Local_BlendExp, float Local_BlendTime, enum class EViewTargetBlendFunction Local_BlendFunction, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "Barbarous_SwitchToBCamera");

	Params::UDHBlueprintFunctionLib_C_Barbarous_SwitchToBCamera_Params Parms{};

	Parms.BlendInTime = BlendInTime;
	Parms.BlendExp = BlendExp;
	Parms.BlendFuncton = BlendFuncton;
	Parms.FOV = FOV;
	Parms.Char = Char;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_FOV = Local_FOV;
	Parms.Local_BlendExp = Local_BlendExp;
	Parms.Local_BlendTime = Local_BlendTime;
	Parms.Local_BlendFunction = Local_BlendFunction;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.AddItemToInventory_NoNotify
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::AddItemToInventory_NoNotify(class FName RowName, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "AddItemToInventory_NoNotify");

	Params::UDHBlueprintFunctionLib_C_AddItemToInventory_NoNotify_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsPlayerAtMaxFamiliarity_FromSave
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FServerSaveFile             SaveFile                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_FromSave_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_C::IsPlayerAtMaxFamiliarity_FromSave(const struct FServerSaveFile& SaveFile, class FName ItemId, class UObject* __WorldContext, int32 CallFunc_GetItemFamiliarity_FromSave_Value, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsPlayerAtMaxFamiliarity_FromSave");

	Params::UDHBlueprintFunctionLib_C_IsPlayerAtMaxFamiliarity_FromSave_Params Parms{};

	Parms.SaveFile = SaveFile;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemFamiliarity_FromSave_Value = CallFunc_GetItemFamiliarity_FromSave_Value;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.CreateItemEffectDescription_FromSave
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FServerSaveFile             SaveFile                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              TimesUsedToUnlockEffectDescription                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        EffectDescription                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        EffectDescriptionWithFamiliarity                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_LongDesc                                                   (Edit, BlueprintVisible)
// class FText                        Local_Desc                                                       (Edit, BlueprintVisible)
// int32                              Local_TimesUsed                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FServerSaveFile             Local_SaveFile                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity_FromSave_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_FromSave_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_3                                          (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_C::CreateItemEffectDescription_FromSave(const struct FServerSaveFile& SaveFile, int32 TimesUsedToUnlockEffectDescription, class FText& EffectDescription, class FText& EffectDescriptionWithFamiliarity, class FName ItemId, class UObject* __WorldContext, class FName Local_ID, class FText Local_LongDesc, class FText Local_Desc, int32 Local_TimesUsed, const struct FServerSaveFile& Local_SaveFile, const class FString& Temp_string_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_IsPlayerAtMaxFamiliarity_FromSave_ReturnValue, const class FString& K2Node_Select_Default_1, const class FString& K2Node_Select_Default_2, int32 CallFunc_GetItemFamiliarity_FromSave_Value, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "CreateItemEffectDescription_FromSave");

	Params::UDHBlueprintFunctionLib_C_CreateItemEffectDescription_FromSave_Params Parms{};

	Parms.SaveFile = SaveFile;
	Parms.TimesUsedToUnlockEffectDescription = TimesUsedToUnlockEffectDescription;
	Parms.EffectDescription = EffectDescription;
	Parms.EffectDescriptionWithFamiliarity = EffectDescriptionWithFamiliarity;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_ID = Local_ID;
	Parms.Local_LongDesc = Local_LongDesc;
	Parms.Local_Desc = Local_Desc;
	Parms.Local_TimesUsed = Local_TimesUsed;
	Parms.Local_SaveFile = Local_SaveFile;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity_FromSave_ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity_FromSave_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetItemFamiliarity_FromSave_Value = CallFunc_GetItemFamiliarity_FromSave_Value;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemFamiliarity_FromSave
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FServerSaveFile             SaveFile                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetItemFamiliarity_FromSave(const struct FServerSaveFile& SaveFile, class FName& ItemId, class UObject* __WorldContext, int32* Value, int32 Local_Value, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemFamiliarity_FromSave");

	Params::UDHBlueprintFunctionLib_C_GetItemFamiliarity_FromSave_Params Parms{};

	Parms.SaveFile = SaveFile;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemDiscovered_FromSave
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FServerSaveFile             SaveFile                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Empty_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                ItemDiscovered                                                   (Parm, OutParm, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetItemDiscovered_FromSave(const struct FServerSaveFile& SaveFile, class UObject* __WorldContext, bool* Empty_, TArray<class FName>* ItemDiscovered, int32 Local_Value, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemDiscovered_FromSave");

	Params::UDHBlueprintFunctionLib_C_GetItemDiscovered_FromSave_Params Parms{};

	Parms.SaveFile = SaveFile;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Empty_ != nullptr)
		*Empty_ = Parms.Empty_;

	if (ItemDiscovered != nullptr)
		*ItemDiscovered = std::move(Parms.ItemDiscovered);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsHadernContentEnabled
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UObject*                     Local_HadernAssetRef                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_HadernAssetValid                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_HadernShellEnabled                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_C::IsHadernContentEnabled(class UObject* __WorldContext, class UObject* Local_HadernAssetRef, bool Local_HadernAssetValid, bool Local_HadernShellEnabled, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsHadernContentEnabled");

	Params::UDHBlueprintFunctionLib_C_IsHadernContentEnabled_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_HadernAssetRef = Local_HadernAssetRef;
	Parms.Local_HadernAssetValid = Local_HadernAssetValid;
	Parms.Local_HadernShellEnabled = Local_HadernShellEnabled;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsHalloweenTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Today_ReturnValue                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMonth_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_C::IsHalloweenTime(class UObject* __WorldContext, const struct FDateTime& CallFunc_Today_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetMonth_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsHalloweenTime");

	Params::UDHBlueprintFunctionLib_C_IsHalloweenTime_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Today_ReturnValue = CallFunc_Today_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetMonth_ReturnValue = CallFunc_GetMonth_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue_1 = CallFunc_InRange_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsHalloweenSeasonalContentEnabled
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Today_ReturnValue                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMonth_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::IsHalloweenSeasonalContentEnabled(class UObject* __WorldContext, bool* Return, const struct FDateTime& CallFunc_Today_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetMonth_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsHalloweenSeasonalContentEnabled");

	Params::UDHBlueprintFunctionLib_C_IsHalloweenSeasonalContentEnabled_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Today_ReturnValue = CallFunc_Today_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetMonth_ReturnValue = CallFunc_GetMonth_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue_1 = CallFunc_InRange_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SetShellSkeletalMeshAndDye
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*       Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               NewMesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReinitPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             ArmorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideDye                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CustomDyeValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Foundling_NoDye_TwitchDrop_Mat                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Hadern_Shade_3_Mat                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Tiel_Shade_3_Mat                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Eredrim_Shade_3_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Solomon_Shade_3_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Harros_Shade_3_Mat                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Hadern_Shade_2_Mat                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Hadern_Shade_1_Mat                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Hadern_NoDye_Mat                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_OverrideDye                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  Tiel_Shade_2_Mat                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Tiel_Shade_1_Mat                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Tiel_NoDye_Mat                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Eredrim_Shade_2_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Eredrim_Shade_1_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Eredrim_NoDye_Mat                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Solomon_Shade_2_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Solomon_Shade_1_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Solomon_NoDye_Mat                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Harros_Shade_2_Mat                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Harros_Shade_1_Mat                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Harros_NoDye_Mat                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Foundling_Shade_2_Mat                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Foundling_Shade_1_Mat                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Foundling_Obsidian_Mat                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Foundling_NoDye_Mat                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FStruct_ShellDyes           Local_Dyes                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Local_ArmorType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ReinitPose                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               Local_SkeletalMesh                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*       Local_MeshComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FStruct_ShellDyes           K2Node_MakeStruct_Struct_ShellDyes                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_7                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_8                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_9                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_10                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_11                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_12                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_13                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_14                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_15                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_16                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_17                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_18                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_19                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_20                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_21                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_22                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_23                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array_24                                        (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_1                                          (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_2                                          (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_3                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Temp_object_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_4                                          (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_5                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_6                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_7                                          (ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  K2Node_Select_Default_8                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_GetHasRenouncedShell_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::SetShellSkeletalMeshAndDye(class USkinnedMeshComponent* Target, class USkeletalMesh* NewMesh, bool bReinitPose, enum class EArmorTypes ArmorType, bool OverrideDye, enum class Enum_ShellDye CustomDyeValue, class UObject* __WorldContext, const TArray<class UMaterialInterface*>& Foundling_NoDye_TwitchDrop_Mat, const TArray<class UMaterialInterface*>& Hadern_Shade_3_Mat, const TArray<class UMaterialInterface*>& Tiel_Shade_3_Mat, const TArray<class UMaterialInterface*>& Eredrim_Shade_3_Mat, const TArray<class UMaterialInterface*>& Solomon_Shade_3_Mat, const TArray<class UMaterialInterface*>& Harros_Shade_3_Mat, const TArray<class UMaterialInterface*>& Hadern_Shade_2_Mat, const TArray<class UMaterialInterface*>& Hadern_Shade_1_Mat, const TArray<class UMaterialInterface*>& Hadern_NoDye_Mat, bool Local_OverrideDye, const TArray<class UMaterialInterface*>& Tiel_Shade_2_Mat, const TArray<class UMaterialInterface*>& Tiel_Shade_1_Mat, const TArray<class UMaterialInterface*>& Tiel_NoDye_Mat, const TArray<class UMaterialInterface*>& Eredrim_Shade_2_Mat, const TArray<class UMaterialInterface*>& Eredrim_Shade_1_Mat, const TArray<class UMaterialInterface*>& Eredrim_NoDye_Mat, const TArray<class UMaterialInterface*>& Solomon_Shade_2_Mat, const TArray<class UMaterialInterface*>& Solomon_Shade_1_Mat, const TArray<class UMaterialInterface*>& Solomon_NoDye_Mat, const TArray<class UMaterialInterface*>& Harros_Shade_2_Mat, const TArray<class UMaterialInterface*>& Harros_Shade_1_Mat, const TArray<class UMaterialInterface*>& Harros_NoDye_Mat, const TArray<class UMaterialInterface*>& Foundling_Shade_2_Mat, const TArray<class UMaterialInterface*>& Foundling_Shade_1_Mat, const TArray<class UMaterialInterface*>& Foundling_Obsidian_Mat, const TArray<class UMaterialInterface*>& Foundling_NoDye_Mat, const struct FStruct_ShellDyes& Local_Dyes, enum class EArmorTypes Local_ArmorType, bool Local_ReinitPose, class USkeletalMesh* Local_SkeletalMesh, class USkinnedMeshComponent* Local_MeshComponent, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array, const struct FStruct_ShellDyes& K2Node_MakeStruct_Struct_ShellDyes, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_1, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_2, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_3, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_4, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_5, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_6, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_7, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_8, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_9, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_10, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_11, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_12, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_13, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_14, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_15, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_16, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_17, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_18, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_19, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_20, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_21, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_22, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_23, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array_24, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, enum class Enum_ShellDye Temp_byte_Variable, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes, bool CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes_1, enum class Enum_ShellDye Temp_byte_Variable_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class UMaterialInterface*>& K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_6, enum class Enum_ShellDye Temp_byte_Variable_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, enum class Enum_ShellDye Temp_byte_Variable_3, enum class Enum_ShellDye Temp_byte_Variable_4, enum class Enum_ShellDye Temp_byte_Variable_5, TArray<class UMaterialInterface*>& K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, bool Temp_bool_Variable, TArray<class UMaterialInterface*>& K2Node_Select_Default_2, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UMaterialInterface*>& K2Node_Select_Default_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UMaterialInterface* CallFunc_Array_Get_Item_1, TArray<class UMaterialInterface*>& Temp_object_Variable, TArray<class UMaterialInterface*>& K2Node_Select_Default_4, int32 CallFunc_Array_Length_ReturnValue_3, class UMaterialInterface* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_3, enum class Enum_ShellDye Temp_byte_Variable_6, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class UMaterialInterface*>& K2Node_Select_Default_5, bool CallFunc_Less_IntInt_ReturnValue_4, class UMaterialInterface* CallFunc_Array_Get_Item_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Array_Length_ReturnValue_5, class UMaterialInterface* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, TArray<class UMaterialInterface*>& K2Node_Select_Default_6, bool CallFunc_Less_IntInt_ReturnValue_6, class UMaterialInterface* CallFunc_Array_Get_Item_5, const class FString& CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class UMaterialInterface*>& K2Node_Select_Default_7, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TArray<class UMaterialInterface*>& K2Node_Select_Default_8, bool CallFunc_GetHasRenouncedShell_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_6, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SetShellSkeletalMeshAndDye");

	Params::UDHBlueprintFunctionLib_C_SetShellSkeletalMeshAndDye_Params Parms{};

	Parms.Target = Target;
	Parms.NewMesh = NewMesh;
	Parms.bReinitPose = bReinitPose;
	Parms.ArmorType = ArmorType;
	Parms.OverrideDye = OverrideDye;
	Parms.CustomDyeValue = CustomDyeValue;
	Parms.__WorldContext = __WorldContext;
	Parms.Foundling_NoDye_TwitchDrop_Mat = Foundling_NoDye_TwitchDrop_Mat;
	Parms.Hadern_Shade_3_Mat = Hadern_Shade_3_Mat;
	Parms.Tiel_Shade_3_Mat = Tiel_Shade_3_Mat;
	Parms.Eredrim_Shade_3_Mat = Eredrim_Shade_3_Mat;
	Parms.Solomon_Shade_3_Mat = Solomon_Shade_3_Mat;
	Parms.Harros_Shade_3_Mat = Harros_Shade_3_Mat;
	Parms.Hadern_Shade_2_Mat = Hadern_Shade_2_Mat;
	Parms.Hadern_Shade_1_Mat = Hadern_Shade_1_Mat;
	Parms.Hadern_NoDye_Mat = Hadern_NoDye_Mat;
	Parms.Local_OverrideDye = Local_OverrideDye;
	Parms.Tiel_Shade_2_Mat = Tiel_Shade_2_Mat;
	Parms.Tiel_Shade_1_Mat = Tiel_Shade_1_Mat;
	Parms.Tiel_NoDye_Mat = Tiel_NoDye_Mat;
	Parms.Eredrim_Shade_2_Mat = Eredrim_Shade_2_Mat;
	Parms.Eredrim_Shade_1_Mat = Eredrim_Shade_1_Mat;
	Parms.Eredrim_NoDye_Mat = Eredrim_NoDye_Mat;
	Parms.Solomon_Shade_2_Mat = Solomon_Shade_2_Mat;
	Parms.Solomon_Shade_1_Mat = Solomon_Shade_1_Mat;
	Parms.Solomon_NoDye_Mat = Solomon_NoDye_Mat;
	Parms.Harros_Shade_2_Mat = Harros_Shade_2_Mat;
	Parms.Harros_Shade_1_Mat = Harros_Shade_1_Mat;
	Parms.Harros_NoDye_Mat = Harros_NoDye_Mat;
	Parms.Foundling_Shade_2_Mat = Foundling_Shade_2_Mat;
	Parms.Foundling_Shade_1_Mat = Foundling_Shade_1_Mat;
	Parms.Foundling_Obsidian_Mat = Foundling_Obsidian_Mat;
	Parms.Foundling_NoDye_Mat = Foundling_NoDye_Mat;
	Parms.Local_Dyes = Local_Dyes;
	Parms.Local_ArmorType = Local_ArmorType;
	Parms.Local_ReinitPose = Local_ReinitPose;
	Parms.Local_SkeletalMesh = Local_SkeletalMesh;
	Parms.Local_MeshComponent = Local_MeshComponent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_Struct_ShellDyes = K2Node_MakeStruct_Struct_ShellDyes;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.K2Node_MakeArray_Array_16 = K2Node_MakeArray_Array_16;
	Parms.K2Node_MakeArray_Array_17 = K2Node_MakeArray_Array_17;
	Parms.K2Node_MakeArray_Array_18 = K2Node_MakeArray_Array_18;
	Parms.K2Node_MakeArray_Array_19 = K2Node_MakeArray_Array_19;
	Parms.K2Node_MakeArray_Array_20 = K2Node_MakeArray_Array_20;
	Parms.K2Node_MakeArray_Array_21 = K2Node_MakeArray_Array_21;
	Parms.K2Node_MakeArray_Array_22 = K2Node_MakeArray_Array_22;
	Parms.K2Node_MakeArray_Array_23 = K2Node_MakeArray_Array_23;
	Parms.K2Node_MakeArray_Array_24 = K2Node_MakeArray_Array_24;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes = CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes;
	Parms.CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes_1 = CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetHasRenouncedShell_ReturnValue = CallFunc_GetHasRenouncedShell_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.PCGetNamedName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::PCGetNamedName(class FName Key, class UObject* __WorldContext, class FName* Value, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "PCGetNamedName");

	Params::UDHBlueprintFunctionLib_C_PCGetNamedName_Params Parms{};

	Parms.Key = Key;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.RemoveItemFromInventory
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::RemoveItemFromInventory(class FName RowName, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "RemoveItemFromInventory");

	Params::UDHBlueprintFunctionLib_C_RemoveItemFromInventory_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.AddNGLevelToID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        I                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        O                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::AddNGLevelToID(class FName I, class UObject* __WorldContext, class FName* O, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "AddNGLevelToID");

	Params::UDHBlueprintFunctionLib_C_AddNGLevelToID_Params Parms{};

	Parms.I = I;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (O != nullptr)
		*O = Parms.O;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.AddItemToInventory
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::AddItemToInventory(class FName RowName, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "AddItemToInventory");

	Params::UDHBlueprintFunctionLib_C_AddItemToInventory_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetCharacterWeaponMeshFromEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EComboTypes             WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               WeaponMesh                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::GetCharacterWeaponMeshFromEnum(enum class EComboTypes WeaponType, class UObject* __WorldContext, class USkeletalMesh** WeaponMesh, enum class EComboTypes Temp_byte_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, class USkeletalMesh* Temp_object_Variable_3, class USkeletalMesh* Temp_object_Variable_4, class USkeletalMesh* Temp_object_Variable_5, class USkeletalMesh* Temp_object_Variable_6, class USkeletalMesh* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetCharacterWeaponMeshFromEnum");

	Params::UDHBlueprintFunctionLib_C_GetCharacterWeaponMeshFromEnum_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponMesh != nullptr)
		*WeaponMesh = Parms.WeaponMesh;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SequencerSetWeaponMesh
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*          SkMeshActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetCharacterWeaponMeshFromEnum_WeaponMesh               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::SequencerSetWeaponMesh(class ASkeletalMeshActor* SkMeshActor, class UObject* __WorldContext, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class USkeletalMesh* CallFunc_GetCharacterWeaponMeshFromEnum_WeaponMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SequencerSetWeaponMesh");

	Params::UDHBlueprintFunctionLib_C_SequencerSetWeaponMesh_Params Parms{};

	Parms.SkMeshActor = SkMeshActor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterWeaponMeshFromEnum_WeaponMesh = CallFunc_GetCharacterWeaponMeshFromEnum_WeaponMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.PCSetNamedInt
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::PCSetNamedInt(class FName Key, int32& Value, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "PCSetNamedInt");

	Params::UDHBlueprintFunctionLib_C_PCSetNamedInt_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.PCSetNamedName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::PCSetNamedName(class FName Key, class FName Value, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "PCSetNamedName");

	Params::UDHBlueprintFunctionLib_C_PCSetNamedName_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetLocalizedEmissiveMinDistName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UDHBlueprintFunctionLib_C::GetLocalizedEmissiveMinDistName(int32 Index, class UObject* __WorldContext, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetLocalizedEmissiveMinDistName");

	Params::UDHBlueprintFunctionLib_C_GetLocalizedEmissiveMinDistName_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetLocalizedEmissiveMaxDistName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UDHBlueprintFunctionLib_C::GetLocalizedEmissiveMaxDistName(int32 Index, class UObject* __WorldContext, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetLocalizedEmissiveMaxDistName");

	Params::UDHBlueprintFunctionLib_C_GetLocalizedEmissiveMaxDistName_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetLocalizedEmissiveSourceName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UDHBlueprintFunctionLib_C::GetLocalizedEmissiveSourceName(int32 Index, class UObject* __WorldContext, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetLocalizedEmissiveSourceName");

	Params::UDHBlueprintFunctionLib_C_GetLocalizedEmissiveSourceName_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SequencerSetMeshForTakeShell
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*          SkMeshActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::SequencerSetMeshForTakeShell(class ASkeletalMeshActor* SkMeshActor, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SequencerSetMeshForTakeShell");

	Params::UDHBlueprintFunctionLib_C_SequencerSetMeshForTakeShell_Params Parms{};

	Parms.SkMeshActor = SkMeshActor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.RemoveArbNameFromChangedSet
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInSet                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful(ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::RemoveArbNameFromChangedSet(class FName Name, class UObject* __WorldContext, bool* bIsInSet, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "RemoveArbNameFromChangedSet");

	Params::UDHBlueprintFunctionLib_C_RemoveArbNameFromChangedSet_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful = CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInSet != nullptr)
		*bIsInSet = Parms.bIsInSet;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SequencerSetMeshForLarvaScene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*          SkMeshActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::SequencerSetMeshForLarvaScene(class ASkeletalMeshActor* SkMeshActor, class UObject* __WorldContext, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SequencerSetMeshForLarvaScene");

	Params::UDHBlueprintFunctionLib_C_SequencerSetMeshForLarvaScene_Params Parms{};

	Parms.SkMeshActor = SkMeshActor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetAverageFamiliarity
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UDHBlueprintFunctionLib_C::GetAverageFamiliarity(int32 Familiarity, int32 MaxFamiliarity, class UObject* __WorldContext, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetAverageFamiliarity");

	Params::UDHBlueprintFunctionLib_C_GetAverageFamiliarity_Params Parms{};

	Parms.Familiarity = Familiarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.CreateExtendedDescription
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ExtendedDescription                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               OutputPin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Local_ExtendedDescription                                        (Edit, BlueprintVisible)
// int32                              Local_MaxFamiliarity                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Familiarity                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_C::CreateExtendedDescription(int32 Familiarity, int32 MaxFamiliarity, class FText& ExtendedDescription, class UObject* __WorldContext, bool* OutputPin, class FText Local_ExtendedDescription, int32 Local_MaxFamiliarity, int32 Local_Familiarity, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "CreateExtendedDescription");

	Params::UDHBlueprintFunctionLib_C_CreateExtendedDescription_Params Parms{};

	Parms.Familiarity = Familiarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ExtendedDescription = ExtendedDescription;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_ExtendedDescription = Local_ExtendedDescription;
	Parms.Local_MaxFamiliarity = Local_MaxFamiliarity;
	Parms.Local_Familiarity = Local_Familiarity;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.CreateItemEffectDescription
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TimesUsedToUnlockEffectDescription                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        EffectDescription                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        EffectDescriptionWithFamiliarity                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_3                                          (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_C::CreateItemEffectDescription(int32 TimesUsedToUnlockEffectDescription, class FText& EffectDescription, class FText& EffectDescriptionWithFamiliarity, class FName ItemId, class UObject* __WorldContext, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable_2, const class FString& Temp_string_Variable_2, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool Temp_bool_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& K2Node_Select_Default, bool CallFunc_EqualEqual_TextText_ReturnValue_1, const class FString& K2Node_Select_Default_1, const class FString& K2Node_Select_Default_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "CreateItemEffectDescription");

	Params::UDHBlueprintFunctionLib_C_CreateItemEffectDescription_Params Parms{};

	Parms.TimesUsedToUnlockEffectDescription = TimesUsedToUnlockEffectDescription;
	Parms.EffectDescription = EffectDescription;
	Parms.EffectDescriptionWithFamiliarity = EffectDescriptionWithFamiliarity;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SetArbNameInChangedSet
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::SetArbNameInChangedSet(class FName Name, class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SetArbNameInChangedSet");

	Params::UDHBlueprintFunctionLib_C_SetArbNameInChangedSet_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_1 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetLocationNameFromMapName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Location                                                         (Parm, OutParm)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetLocationNameFromMapName(class FName MapName, class UObject* __WorldContext, class FText* Location, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetLocationNameFromMapName");

	Params::UDHBlueprintFunctionLib_C_GetLocationNameFromMapName_Params Parms{};

	Parms.MapName = MapName;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = Parms.Location;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SpawnFadeToBlackWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefFadeToBlack_C*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefFadeToBlack_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBriefFadeToBlack_C* UDHBlueprintFunctionLib_C::SpawnFadeToBlackWidget(class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SpawnFadeToBlackWidget");

	Params::UDHBlueprintFunctionLib_C_SpawnFadeToBlackWidget_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.CheckPlayerInventoryForItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasGland_                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::CheckPlayerInventoryForItem(class FName ItemId, class UObject* __WorldContext, bool* Success, bool HasGland_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "CheckPlayerInventoryForItem");

	Params::UDHBlueprintFunctionLib_C_CheckPlayerInventoryForItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.HasGland_ = HasGland_;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.CheckPlayerInventoryForGland
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               HasGland_                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_C::CheckPlayerInventoryForGland(class UObject* __WorldContext, bool HasGland_, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_CheckPlayerInventoryForItem_Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_CheckPlayerInventoryForItem_Success_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "CheckPlayerInventoryForGland");

	Params::UDHBlueprintFunctionLib_C_CheckPlayerInventoryForGland_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.HasGland_ = HasGland_;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_1 = CallFunc_CheckPlayerInventoryForItem_Success_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_2 = CallFunc_CheckPlayerInventoryForItem_Success_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetArbNameInChangedSetPure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInSet                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetArbNameInChangedSetPure(class FName Name, class UObject* __WorldContext, bool* bIsInSet, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetArbNameInChangedSetPure");

	Params::UDHBlueprintFunctionLib_C_GetArbNameInChangedSetPure_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet = CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInSet != nullptr)
		*bIsInSet = Parms.bIsInSet;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsPlayerAtMaxFamiliarity?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_C::IsPlayerAtMaxFamiliarity_(class FName ItemId, class UObject* __WorldContext, int32 CallFunc_GetItemFamiliarity_Value, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsPlayerAtMaxFamiliarity?");

	Params::UDHBlueprintFunctionLib_C_IsPlayerAtMaxFamiliarity__Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemFamiliarity
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetItemFamiliarity(class FName ItemId, class UObject* __WorldContext, int32* Value, int32 Local_Value, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemFamiliarity");

	Params::UDHBlueprintFunctionLib_C_GetItemFamiliarity_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemMaxFamiliarity
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetItemMaxFamiliarity(class FName ItemId, class UObject* __WorldContext, int32* MaxFamiliarity, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemMaxFamiliarity");

	Params::UDHBlueprintFunctionLib_C_GetItemMaxFamiliarity_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxFamiliarity != nullptr)
		*MaxFamiliarity = Parms.MaxFamiliarity;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsExtendedItemDescUnlocked
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryItem              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnlocked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::IsExtendedItemDescUnlocked(const struct FInventoryItem& ItemId, class UObject* __WorldContext, bool* bUnlocked, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsExtendedItemDescUnlocked");

	Params::UDHBlueprintFunctionLib_C_IsExtendedItemDescUnlocked_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bUnlocked != nullptr)
		*bUnlocked = Parms.bUnlocked;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.ShowLargeItemGainedPopup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::ShowLargeItemGainedPopup(const struct FInventoryItem& InventoryItem, class UObject* __WorldContext, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "ShowLargeItemGainedPopup");

	Params::UDHBlueprintFunctionLib_C_ShowLargeItemGainedPopup_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemDesc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryItem              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UDHBlueprintFunctionLib_C::GetItemDesc(const struct FInventoryItem& ItemId, class UObject* __WorldContext, class FText* Description, bool Temp_bool_Variable, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemDesc");

	Params::UDHBlueprintFunctionLib_C_GetItemDesc_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemDescFromID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetItemDesc_Description                                 (None)

void UDHBlueprintFunctionLib_C::GetItemDescFromID(class FName ItemId, class UObject* __WorldContext, class FText* Description, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_GetItemDesc_Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemDescFromID");

	Params::UDHBlueprintFunctionLib_C_GetItemDescFromID_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetItemDesc_Description = CallFunc_GetItemDesc_Description;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetMousePosFromCenterOfScreen
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMousePositionOnViewport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::GetMousePosFromCenterOfScreen(class UObject* __WorldContext, struct FVector2D* Position, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetMousePosFromCenterOfScreen");

	Params::UDHBlueprintFunctionLib_C_GetMousePosFromCenterOfScreen_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetMousePositionOnViewport_ReturnValue = CallFunc_GetMousePositionOnViewport_ReturnValue;
	Parms.CallFunc_GetViewportScale_ReturnValue = CallFunc_GetViewportScale_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetWeaponNameFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        WeaponName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetWeaponNameFromID(int32 ID, class UObject* __WorldContext, class FName* WeaponName, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetWeaponNameFromID");

	Params::UDHBlueprintFunctionLib_C_GetWeaponNameFromID_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponName != nullptr)
		*WeaponName = Parms.WeaponName;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.IsReactiveWaterDisabled
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDisabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::IsReactiveWaterDisabled(class UObject* __WorldContext, bool* bDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "IsReactiveWaterDisabled");

	Params::UDHBlueprintFunctionLib_C_IsReactiveWaterDisabled_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (bDisabled != nullptr)
		*bDisabled = Parms.bDisabled;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.SetSkeletalMeshFixed
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*       Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               NewMesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReinitPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSkeletalMaterial           CallFunc_Array_Get_Item                                          (NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::SetSkeletalMeshFixed(class USkinnedMeshComponent* Target, class USkeletalMesh* NewMesh, bool bReinitPose, class UObject* __WorldContext, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const struct FSkeletalMaterial& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "SetSkeletalMeshFixed");

	Params::UDHBlueprintFunctionLib_C_SetSkeletalMeshFixed_Params Parms{};

	Parms.Target = Target;
	Parms.NewMesh = NewMesh;
	Parms.bReinitPose = bReinitPose;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetMeshForArmorType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMesh* UDHBlueprintFunctionLib_C::GetMeshForArmorType(enum class EArmorTypes Index, class UObject* __WorldContext, enum class EArmorTypes Temp_byte_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, class USkeletalMesh* Temp_object_Variable_3, class USkeletalMesh* Temp_object_Variable_4, class USkeletalMesh* Temp_object_Variable_5, class USkeletalMesh* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetMeshForArmorType");

	Params::UDHBlueprintFunctionLib_C_GetMeshForArmorType_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetCharacterWeaponEnumFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        WeaponID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Weapon                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::GetCharacterWeaponEnumFromID(class FName& WeaponID, class UObject* __WorldContext, enum class EComboTypes* Weapon, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_Array_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetCharacterWeaponEnumFromID");

	Params::UDHBlueprintFunctionLib_C_GetCharacterWeaponEnumFromID_Params Parms{};

	Parms.WeaponID = WeaponID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetCharacterWeaponIDFromEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::GetCharacterWeaponIDFromEnum(enum class EComboTypes Weapon, class UObject* __WorldContext, class FName* ID, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetCharacterWeaponIDFromEnum");

	Params::UDHBlueprintFunctionLib_C_GetCharacterWeaponIDFromEnum_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetItemFromID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Item                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetItemFromID(class FName RowName, class UObject* __WorldContext, struct FInventoryItem* Item, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetItemFromID");

	Params::UDHBlueprintFunctionLib_C_GetItemFromID_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetMainHandWeapon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              EquippedMainHandWeapon                                           (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_GetMainHandWeaponItemIndex_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::GetMainHandWeapon(class UObject* __WorldContext, struct FInventoryItem* EquippedMainHandWeapon, int32 CallFunc_GetMainHandWeaponItemIndex_Index, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetMainHandWeapon");

	Params::UDHBlueprintFunctionLib_C_GetMainHandWeapon_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetMainHandWeaponItemIndex_Index = CallFunc_GetMainHandWeaponItemIndex_Index;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;

	UObject::ProcessEvent(Func, &Parms);

	if (EquippedMainHandWeapon != nullptr)
		*EquippedMainHandWeapon = std::move(Parms.EquippedMainHandWeapon);

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetMainHandWeaponItemIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_C::GetMainHandWeaponItemIndex(class UObject* __WorldContext, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetMainHandWeaponItemIndex");

	Params::UDHBlueprintFunctionLib_C_GetMainHandWeaponItemIndex_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetCharacterAsBarbarous
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                AsBarbarous                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetCharacterAsBarbarous(class UObject* __WorldContext, class ABarbarous_C** AsBarbarous, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_1, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetCharacterAsBarbarous");

	Params::UDHBlueprintFunctionLib_C_GetCharacterAsBarbarous_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBarbarous_1 = K2Node_DynamicCast_AsBarbarous_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBarbarous != nullptr)
		*AsBarbarous = Parms.AsBarbarous;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetCharacterAs0_Base
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                As0_Base                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetCharacterAs0_Base(class UObject* __WorldContext, class AZero_Base_C** As0_Base, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetCharacterAs0_Base");

	Params::UDHBlueprintFunctionLib_C_GetCharacterAs0_Base_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (As0_Base != nullptr)
		*As0_Base = Parms.As0_Base;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetGameStateAsGameplayGameState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        AsGamePlayGameState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetGameStateAsGameplayGameState(class UObject* __WorldContext, class AGamePlayGameState_C** AsGamePlayGameState, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetGameStateAsGameplayGameState");

	Params::UDHBlueprintFunctionLib_C_GetGameStateAsGameplayGameState_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsGamePlayGameState != nullptr)
		*AsGamePlayGameState = Parms.AsGamePlayGameState;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetGameModeAsGameplayGM
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               AsGameplay_GM                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetGameModeAsGameplayGM(class UObject* __WorldContext, class AGameplayGM_C** AsGameplay_GM, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetGameModeAsGameplayGM");

	Params::UDHBlueprintFunctionLib_C_GetGameModeAsGameplayGM_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsGameplay_GM != nullptr)
		*AsGameplay_GM = Parms.AsGameplay_GM;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetControllerAsGameplayPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               AsGameplay_PC                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetControllerAsGameplayPC(class UObject* __WorldContext, class AGameplayPC_C** AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetControllerAsGameplayPC");

	Params::UDHBlueprintFunctionLib_C_GetControllerAsGameplayPC_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsGameplay_PC != nullptr)
		*AsGameplay_PC = Parms.AsGameplay_PC;

}


// Function DHBlueprintFunctionLib.DHBlueprintFunctionLib_C.GetGameInstanceAsGameInfoInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         AsGame_Info_Instance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_C::GetGameInstanceAsGameInfoInstance(class UObject* __WorldContext, class UGameInfoInstance_C** AsGame_Info_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_C", "GetGameInstanceAsGameInfoInstance");

	Params::UDHBlueprintFunctionLib_C_GetGameInstanceAsGameInfoInstance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsGame_Info_Instance != nullptr)
		*AsGame_Info_Instance = Parms.AsGame_Info_Instance;

}

}


