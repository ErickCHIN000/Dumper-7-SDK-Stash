#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C
// (None)

class UClass* UBP_ActionableBehaviour_DropGItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_DropGItem_C");

	return Clss;
}


// BP_ActionableBehaviour_DropGItem_C BP_ActionableBehaviour_DropGItem.Default__BP_ActionableBehaviour_DropGItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_DropGItem_C* UBP_ActionableBehaviour_DropGItem_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_DropGItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_DropGItem_C*>(UBP_ActionableBehaviour_DropGItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_DropGItem_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_DropGItem_C", "PerformAction");

	Params::UBP_ActionableBehaviour_DropGItem_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C.DropItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EActionableEventType    ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_DropGItem_C::DropItem(enum class EActionableEventType ActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_DropGItem_C", "DropItem");

	Params::UBP_ActionableBehaviour_DropGItem_C_DropItem_Params Parms{};

	Parms.ActionType = ActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C.CancelDrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_DropGItem_C::CancelDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_DropGItem_C", "CancelDrop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C.ExecuteUbergraph_BP_ActionableBehaviour_DropGItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EActionableEventType    K2Node_CustomEvent_ActionType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionData                 CallFunc_GetActionData_OutData                                   (None)
// bool                               CallFunc_GetActionData_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHold_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_DropGItem_C::ExecuteUbergraph_BP_ActionableBehaviour_DropGItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EActionableEventType K2Node_CustomEvent_ActionType, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, const struct FActionData& CallFunc_GetActionData_OutData, bool CallFunc_GetActionData_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CanHold_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_DropGItem_C", "ExecuteUbergraph_BP_ActionableBehaviour_DropGItem");

	Params::UBP_ActionableBehaviour_DropGItem_C_ExecuteUbergraph_BP_ActionableBehaviour_DropGItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_ActionType = K2Node_CustomEvent_ActionType;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetActionData_OutData = CallFunc_GetActionData_OutData;
	Parms.CallFunc_GetActionData_ReturnValue = CallFunc_GetActionData_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CanHold_ReturnValue = CallFunc_CanHold_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


