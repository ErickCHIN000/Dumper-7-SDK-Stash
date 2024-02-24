#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BTT_SetWalkSpeed.BP_BTT_SetWalkSpeed_C
// (None)

class UClass* UBP_BTT_SetWalkSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BTT_SetWalkSpeed_C");

	return Clss;
}


// BP_BTT_SetWalkSpeed_C BP_BTT_SetWalkSpeed.Default__BP_BTT_SetWalkSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BTT_SetWalkSpeed_C* UBP_BTT_SetWalkSpeed_C::GetDefaultObj()
{
	static class UBP_BTT_SetWalkSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BTT_SetWalkSpeed_C*>(UBP_BTT_SetWalkSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BTT_SetWalkSpeed.BP_BTT_SetWalkSpeed_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BTT_SetWalkSpeed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_SetWalkSpeed_C", "ReceiveExecuteAI");

	Params::UBP_BTT_SetWalkSpeed_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BTT_SetWalkSpeed.BP_BTT_SetWalkSpeed_C.ExecuteUbergraph_BP_BTT_SetWalkSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAiCharacter_C*          K2Node_DynamicCast_AsBase_Ai_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BTT_SetWalkSpeed_C::ExecuteUbergraph_BP_BTT_SetWalkSpeed(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_SetWalkSpeed_C", "ExecuteUbergraph_BP_BTT_SetWalkSpeed");

	Params::UBP_BTT_SetWalkSpeed_C_ExecuteUbergraph_BP_BTT_SetWalkSpeed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBase_Ai_Character = K2Node_DynamicCast_AsBase_Ai_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


