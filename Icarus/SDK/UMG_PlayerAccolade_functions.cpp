#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PlayerAccolade.UMG_PlayerAccolade_C
// (None)

class UClass* UUMG_PlayerAccolade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PlayerAccolade_C");

	return Clss;
}


// UMG_PlayerAccolade_C UMG_PlayerAccolade.Default__UMG_PlayerAccolade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PlayerAccolade_C* UUMG_PlayerAccolade_C::GetDefaultObj()
{
	static class UUMG_PlayerAccolade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PlayerAccolade_C*>(UUMG_PlayerAccolade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PlayerAccolade.UMG_PlayerAccolade_C.RefreshState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAccoladeTaskState>  TaskStates                                                       (Edit, BlueprintVisible)
// float                              Progress                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAccoladeTaskState>  CallFunc_GetAccoladeTaskStates_ReturnValue                       (ReferenceParm)
// bool                               CallFunc_IsTaskListAccolade_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAccoladeProgress_CurrentValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccoladeProgress_MaxValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetAccoladeProgress_TimeCompleted                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAccoladeProgress_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PlayerAccolade_C::RefreshState(const TArray<struct FAccoladeTaskState>& TaskStates, float Progress, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, TArray<struct FAccoladeTaskState>& CallFunc_GetAccoladeTaskStates_ReturnValue, bool CallFunc_IsTaskListAccolade_ReturnValue, int32 CallFunc_GetAccoladeProgress_CurrentValue, int32 CallFunc_GetAccoladeProgress_MaxValue, const struct FDateTime& CallFunc_GetAccoladeProgress_TimeCompleted, bool CallFunc_GetAccoladeProgress_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerAccolade_C", "RefreshState");

	Params::UUMG_PlayerAccolade_C_RefreshState_Params Parms{};

	Parms.TaskStates = TaskStates;
	Parms.Progress = Progress;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetAccoladeTaskStates_ReturnValue = CallFunc_GetAccoladeTaskStates_ReturnValue;
	Parms.CallFunc_IsTaskListAccolade_ReturnValue = CallFunc_IsTaskListAccolade_ReturnValue;
	Parms.CallFunc_GetAccoladeProgress_CurrentValue = CallFunc_GetAccoladeProgress_CurrentValue;
	Parms.CallFunc_GetAccoladeProgress_MaxValue = CallFunc_GetAccoladeProgress_MaxValue;
	Parms.CallFunc_GetAccoladeProgress_TimeCompleted = CallFunc_GetAccoladeProgress_TimeCompleted;
	Parms.CallFunc_GetAccoladeProgress_ReturnValue = CallFunc_GetAccoladeProgress_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerAccolade.UMG_PlayerAccolade_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladesRowHandle         Accolade                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_AccoladeTooltip_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAccoladeData               CallFunc_GetAccoladesStruct_Accolades                            (None)
// enum class EValid                  CallFunc_GetAccoladesStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_3                                          (UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_6                                          (UObjectWrapper, HasGetValueTypeHash)

void UUMG_PlayerAccolade_C::Init(const struct FAccoladesRowHandle& Accolade, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, bool Temp_bool_Variable_3, class UUMG_AccoladeTooltip_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_4, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_5, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_6, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, float K2Node_Select_Default_2, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_3, float K2Node_Select_Default_4, const struct FVector2D& K2Node_Select_Default_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerAccolade_C", "Init");

	Params::UUMG_PlayerAccolade_C_Init_Params Parms{};

	Parms.Accolade = Accolade;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetAccoladesStruct_Accolades = CallFunc_GetAccoladesStruct_Accolades;
	Parms.CallFunc_GetAccoladesStruct_Paths = CallFunc_GetAccoladesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_1 = CallFunc_EqualEqual_EnumEnum_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


