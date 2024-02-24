#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C
// (None)

class UClass* UBP_ConditionBehaviour_Item_EquippedToBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Item_EquippedToBody_C");

	return Clss;
}


// BP_ConditionBehaviour_Item_EquippedToBody_C BP_ConditionBehaviour_Item_EquippedToBody.Default__BP_ConditionBehaviour_Item_EquippedToBody_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Item_EquippedToBody_C* UBP_ConditionBehaviour_Item_EquippedToBody_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Item_EquippedToBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Item_EquippedToBody_C*>(UBP_ConditionBehaviour_Item_EquippedToBody_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C.CheckSlotUpdate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        SlotType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_Traits        LCheckItems                                                      (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintMatchData    CallFunc_IsItemConstraintMet_OutMatchData                        (NoDestructor)
// enum class EGetResult              CallFunc_IsItemConstraintMet_OutBranch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidConstraint_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    CallFunc_MakeConditionPersistentDataFromBool_ReturnValue         (NoDestructor)
// bool                               CallFunc_IsComplete_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1       (NoDestructor)

void UBP_ConditionBehaviour_Item_EquippedToBody_C::CheckSlotUpdate(enum class ELoadoutSlotType SlotType, class AEquippableItem* Item, const struct FInstanceData_Traits& LCheckItems, bool CallFunc_IsValid_ReturnValue, const struct FItemConstraintMatchData& CallFunc_IsItemConstraintMet_OutMatchData, enum class EGetResult CallFunc_IsItemConstraintMet_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidConstraint_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, bool CallFunc_IsComplete_ReturnValue, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_EquippedToBody_C", "CheckSlotUpdate");

	Params::UBP_ConditionBehaviour_Item_EquippedToBody_C_CheckSlotUpdate_Params Parms{};

	Parms.SlotType = SlotType;
	Parms.Item = Item;
	Parms.LCheckItems = LCheckItems;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsItemConstraintMet_OutMatchData = CallFunc_IsItemConstraintMet_OutMatchData;
	Parms.CallFunc_IsItemConstraintMet_OutBranch = CallFunc_IsItemConstraintMet_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidConstraint_ReturnValue = CallFunc_IsValidConstraint_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeConditionPersistentDataFromBool_ReturnValue = CallFunc_MakeConditionPersistentDataFromBool_ReturnValue;
	Parms.CallFunc_IsComplete_ReturnValue = CallFunc_IsComplete_ReturnValue;
	Parms.CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1 = CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Item_EquippedToBody_C::GetDebugText(class FText* Description, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_EquippedToBody_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Item_EquippedToBody_C_GetDebugText_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_EquippedToBody_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_EquippedToBody_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_EquippedToBody_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_EquippedToBody_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C.CompleteIfSatisfiedOnSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_EquippedToBody_C::CompleteIfSatisfiedOnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_EquippedToBody_C", "CompleteIfSatisfiedOnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C.ExecuteUbergraph_BP_ConditionBehaviour_Item_EquippedToBody
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutComponentBase*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutSlot                CallFunc_GetSlotByType_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_EquippedToBody_C::ExecuteUbergraph_BP_ConditionBehaviour_Item_EquippedToBody(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ULoadoutComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FLoadoutSlot& CallFunc_GetSlotByType_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_EquippedToBody_C", "ExecuteUbergraph_BP_ConditionBehaviour_Item_EquippedToBody");

	Params::UBP_ConditionBehaviour_Item_EquippedToBody_C_ExecuteUbergraph_BP_ConditionBehaviour_Item_EquippedToBody_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetSlotByType_ReturnValue = CallFunc_GetSlotByType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


