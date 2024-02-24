#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_RemoveModifierStateOfType.BTTask_RemoveModifierStateOfType_C
// (None)

class UClass* UBTTask_RemoveModifierStateOfType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_RemoveModifierStateOfType_C");

	return Clss;
}


// BTTask_RemoveModifierStateOfType_C BTTask_RemoveModifierStateOfType.Default__BTTask_RemoveModifierStateOfType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_RemoveModifierStateOfType_C* UBTTask_RemoveModifierStateOfType_C::GetDefaultObj()
{
	static class UBTTask_RemoveModifierStateOfType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_RemoveModifierStateOfType_C*>(UBTTask_RemoveModifierStateOfType_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_RemoveModifierStateOfType.BTTask_RemoveModifierStateOfType_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_RemoveModifierStateOfType_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_RemoveModifierStateOfType_C", "ReceiveExecuteAI");

	Params::UBTTask_RemoveModifierStateOfType_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_RemoveModifierStateOfType.BTTask_RemoveModifierStateOfType_C.ExecuteUbergraph_BTTask_RemoveModifierStateOfType
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_RemoveModifierStateOfType_C::ExecuteUbergraph_BTTask_RemoveModifierStateOfType(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_RemoveModifierStateOfType_C", "ExecuteUbergraph_BTTask_RemoveModifierStateOfType");

	Params::UBTTask_RemoveModifierStateOfType_C_ExecuteUbergraph_BTTask_RemoveModifierStateOfType_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


