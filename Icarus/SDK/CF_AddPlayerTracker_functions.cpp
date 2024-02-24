#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_AddPlayerTracker.CF_AddPlayerTracker_C
// (None)

class UClass* UCF_AddPlayerTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_AddPlayerTracker_C");

	return Clss;
}


// CF_AddPlayerTracker_C CF_AddPlayerTracker.Default__CF_AddPlayerTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_AddPlayerTracker_C* UCF_AddPlayerTracker_C::GetDefaultObj()
{
	static class UCF_AddPlayerTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_AddPlayerTracker_C*>(UCF_AddPlayerTracker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.OnConstruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerTrackersEnum         CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerTrackersRowHandle    CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UPlayerTrackerComboRow_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_AddPlayerTracker_C::OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FPlayerTrackersEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPlayerTrackersRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UPlayerTrackerComboRow_C* CallFunc_Create_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddPlayerTracker_C", "OnConstruction");

	Params::UCF_AddPlayerTracker_C_OnConstruction_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_AddPlayerTracker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddPlayerTracker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.Handle Execute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_AddPlayerTracker_C::Handle_Execute(class UUserWidget* Widget, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddPlayerTracker_C", "Handle Execute");

	Params::UCF_AddPlayerTracker_C_Handle_Execute_Params Parms{};

	Parms.Widget = Widget;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.Handle On Item Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_AddPlayerTracker_C::Handle_On_Item_Set(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddPlayerTracker_C", "Handle On Item Set");

	Params::UCF_AddPlayerTracker_C_Handle_On_Item_Set_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.ExecuteUbergraph_CF_AddPlayerTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerTrackerComboRow_C*    K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerTrackerComboRow_C*    K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerTrackersRowHandle    CallFunc_MakePlayerTrackers_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// class UPlayerTrackerSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_AddPlayerTracker_C::ExecuteUbergraph_CF_AddPlayerTracker(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, class UUserWidget* K2Node_Event_Widget, class UPlayerTrackerComboRow_C* K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row, bool K2Node_DynamicCast_bSuccess, class UPlayerTrackerComboRow_C* K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row_1, bool K2Node_DynamicCast_bSuccess_1, const struct FPlayerTrackersRowHandle& CallFunc_MakePlayerTrackers_ReturnValue, class UPlayerTrackerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddPlayerTracker_C", "ExecuteUbergraph_CF_AddPlayerTracker");

	Params::UCF_AddPlayerTracker_C_ExecuteUbergraph_CF_AddPlayerTracker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row = K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row_1 = K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakePlayerTrackers_ReturnValue = CallFunc_MakePlayerTrackers_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


