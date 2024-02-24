#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TargetArrow.TargetArrow_C
// (None)

class UClass* UTargetArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetArrow_C");

	return Clss;
}


// TargetArrow_C TargetArrow.Default__TargetArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTargetArrow_C* UTargetArrow_C::GetDefaultObj()
{
	static class UTargetArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetArrow_C*>(UTargetArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TargetArrow.TargetArrow_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EnemyCommon_GetHealth_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EnemyCommon_GetHealth_MaxHealth                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::SetHealth(class UObject* Enemy, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "SetHealth");

	Params::UTargetArrow_C_SetHealth_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EnemyCommon_GetHealth_Health = CallFunc_EnemyCommon_GetHealth_Health;
	Parms.CallFunc_EnemyCommon_GetHealth_MaxHealth = CallFunc_EnemyCommon_GetHealth_MaxHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.UpdateDamageNumbersState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetArrow_C::UpdateDamageNumbersState(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "UpdateDamageNumbersState");

	Params::UTargetArrow_C_UpdateDamageNumbersState_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetArrow_C::GetDamageNumbers(bool* Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "GetDamageNumbers");

	Params::UTargetArrow_C_GetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function TargetArrow.TargetArrow_C.ResetTextDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::ResetTextDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "ResetTextDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.SetTextDamageOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::SetTextDamageOpacity(float DeltaTime, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "SetTextDamageOpacity");

	Params::UTargetArrow_C_SetTextDamageOpacity_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.SetHPRenderOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::SetHPRenderOpacity(float DeltaTime, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "SetHPRenderOpacity");

	Params::UTargetArrow_C_SetHPRenderOpacity_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.OpacityLevels
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_EnemyHPOpacity     Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::OpacityLevels(enum class Enum_EnemyHPOpacity Enum, float* Value, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OpacityLevels");

	Params::UTargetArrow_C_OpacityLevels_Params Parms{};

	Parms.Enum = Enum;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function TargetArrow.TargetArrow_C.OpacityBasedOnDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_OpacityLevels_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::OpacityBasedOnDistance(float Distance, float* Opacity, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class Enum_EnemyHPOpacity Temp_byte_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float CallFunc_OpacityLevels_Value, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OpacityBasedOnDistance");

	Params::UTargetArrow_C_OpacityBasedOnDistance_Params Parms{};

	Parms.Distance = Distance;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.CallFunc_OpacityLevels_Value = CallFunc_OpacityLevels_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function TargetArrow.TargetArrow_C.ResetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::ResetOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "ResetOpacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.GetHPState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::GetHPState(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "GetHPState");

	Params::UTargetArrow_C_GetHPState_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.GetIsBossEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTargetArrow_C::GetIsBossEnemy(bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "GetIsBossEnemy");

	Params::UTargetArrow_C_GetIsBossEnemy_Params Parms{};

	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TargetArrow.TargetArrow_C.SetHPOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_OpacityLevels_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_OpacityBasedOnDistance_Opacity                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::SetHPOpacity(float CallFunc_OpacityLevels_Value, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_OpacityBasedOnDistance_Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "SetHPOpacity");

	Params::UTargetArrow_C_SetHPOpacity_Params Parms{};

	Parms.CallFunc_OpacityLevels_Value = CallFunc_OpacityLevels_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OpacityBasedOnDistance_Opacity = CallFunc_OpacityBasedOnDistance_Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.CreateMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::CreateMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "CreateMIDs");

	Params::UTargetArrow_C_CreateMIDs_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.GetCurrentFloor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentFloor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::GetCurrentFloor(int32* CurrentFloor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "GetCurrentFloor");

	Params::UTargetArrow_C_GetCurrentFloor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFloor != nullptr)
		*CurrentFloor = Parms.CurrentFloor;

}


// Function TargetArrow.TargetArrow_C.GetShowEnemyHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowHP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetArrow_C::GetShowEnemyHP(bool* ShowHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "GetShowEnemyHP");

	Params::UTargetArrow_C_GetShowEnemyHP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowHP != nullptr)
		*ShowHP = Parms.ShowHP;

}


// Function TargetArrow.TargetArrow_C.HPBarVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsBossEnemy_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetArrow_C::HPBarVisibilityChanged(class ABaseCharacter_C* Enemy, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsBossEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "HPBarVisibilityChanged");

	Params::UTargetArrow_C_HPBarVisibilityChanged_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsBossEnemy_ReturnValue = CallFunc_GetIsBossEnemy_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.SetHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentHealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::SetHealthBar(float CurrentHealth, float MaxHealth, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "SetHealthBar");

	Params::UTargetArrow_C_SetHealthBar_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.MaxHealth = MaxHealth;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.GetTargetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GameplayPC_IsInTutorial_IsInTutorial                    (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UTargetArrow_C::GetTargetVisibility(enum class ESlateVisibility Local_Visibility, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GameplayPC_IsInTutorial_IsInTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "GetTargetVisibility");

	Params::UTargetArrow_C_GetTargetVisibility_Params Parms{};

	Parms.Local_Visibility = Local_Visibility;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GameplayPC_IsInTutorial_IsInTutorial = CallFunc_GameplayPC_IsInTutorial_IsInTutorial;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TargetArrow.TargetArrow_C.SetTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentHealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UTargetArrow_C::SetTint(float CurrentHealth, float MaxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "SetTint");

	Params::UTargetArrow_C_SetTint_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.MaxHealth = MaxHealth;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTargetArrow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.OnTakeAnyDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OnTakeAnyDamage_Event");

	Params::UTargetArrow_C_OnTakeAnyDamage_Event_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.OnEnemyHPVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::OnEnemyHPVisibilityChanged(enum class Enum_EnemyHPVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OnEnemyHPVisibilityChanged");

	Params::UTargetArrow_C_OnEnemyHPVisibilityChanged_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.OnEnemyTargeted_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            TargetedEnemy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::OnEnemyTargeted_Event_0(class ABaseCharacter_C* TargetedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OnEnemyTargeted_Event_0");

	Params::UTargetArrow_C_OnEnemyTargeted_Event_0_Params Parms{};

	Parms.TargetedEnemy = TargetedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                OwningChar                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::Setup(class AZero_Base_C* OwningChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "Setup");

	Params::UTargetArrow_C_Setup_Params Parms{};

	Parms.OwningChar = OwningChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.OnEnemyHPOpacityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::OnEnemyHPOpacityChanged(enum class Enum_EnemyHPOpacity Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OnEnemyHPOpacityChanged");

	Params::UTargetArrow_C_OnEnemyHPOpacityChanged_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.HealthTimer_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::HealthTimer_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "HealthTimer_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.HealthTimer_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::HealthTimer_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "HealthTimer_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "Tick");

	Params::UTargetArrow_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.DamageText_Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetArrow_C::DamageText_Update(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "DamageText_Update");

	Params::UTargetArrow_C_DamageText_Update_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTargetArrow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.DamageText_Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::DamageText_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "DamageText_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.OnDamageNumbersChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetArrow_C::OnDamageNumbersChanged(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "OnDamageNumbersChanged");

	Params::UTargetArrow_C_OnDamageNumbersChanged_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetArrow.TargetArrow_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTargetArrow_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetArrow.TargetArrow_C.ExecuteUbergraph_TargetArrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPVisibility  K2Node_CustomEvent_Visibility                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_CustomEvent_TargetedEnemy                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_CustomEvent_OwningChar                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     K2Node_CustomEvent_Opacity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsBossEnemy_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsBossEnemy_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UTargetArrow_C::ExecuteUbergraph_TargetArrow(int32 EntryPoint, enum class Enum_EnemyHPVisibility K2Node_CustomEvent_Visibility, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage_1, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_DoesImplementInterface_ReturnValue, class ABaseCharacter_C* K2Node_CustomEvent_TargetedEnemy, class AZero_Base_C* K2Node_CustomEvent_OwningChar, enum class Enum_EnemyHPOpacity K2Node_CustomEvent_Opacity, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsBossEnemy_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GetIsBossEnemy_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_Show, class FText CallFunc_Conv_FloatToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetArrow_C", "ExecuteUbergraph_TargetArrow");

	Params::UTargetArrow_C_ExecuteUbergraph_TargetArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Visibility = K2Node_CustomEvent_Visibility;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_CustomEvent_TargetedEnemy = K2Node_CustomEvent_TargetedEnemy;
	Parms.K2Node_CustomEvent_OwningChar = K2Node_CustomEvent_OwningChar;
	Parms.K2Node_CustomEvent_Opacity = K2Node_CustomEvent_Opacity;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIsBossEnemy_ReturnValue = CallFunc_GetIsBossEnemy_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetIsBossEnemy_ReturnValue_1 = CallFunc_GetIsBossEnemy_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


