#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Land_High_Armed.Action_Land_High_Armed_C
// (None)

class UClass* UAction_Land_High_Armed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Land_High_Armed_C");

	return Clss;
}


// Action_Land_High_Armed_C Action_Land_High_Armed.Default__Action_Land_High_Armed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Land_High_Armed_C* UAction_Land_High_Armed_C::GetDefaultObj()
{
	static class UAction_Land_High_Armed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Land_High_Armed_C*>(UAction_Land_High_Armed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Land_High_Armed.Action_Land_High_Armed_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Land_High_Armed_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Land_High_Armed_C", "OnBegin");

	Params::UAction_Land_High_Armed_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Land_High_Armed.Action_Land_High_Armed_C.ExecuteUbergraph_Action_Land_High_Armed
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_K2_GetWeapon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZoomed_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Land_High_Armed_C::ExecuteUbergraph_Action_Land_High_Armed(int32 EntryPoint, class AActor* K2Node_Event_Actor, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_IsZoomed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Land_High_Armed_C", "ExecuteUbergraph_Action_Land_High_Armed");

	Params::UAction_Land_High_Armed_C_ExecuteUbergraph_Action_Land_High_Armed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetWeapon_ReturnValue = CallFunc_K2_GetWeapon_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_IsZoomed_ReturnValue = CallFunc_IsZoomed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


