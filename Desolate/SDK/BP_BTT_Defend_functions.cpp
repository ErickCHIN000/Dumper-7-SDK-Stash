#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BTT_Defend.BP_BTT_Defend_C
// (None)

class UClass* UBP_BTT_Defend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BTT_Defend_C");

	return Clss;
}


// BP_BTT_Defend_C BP_BTT_Defend.Default__BP_BTT_Defend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BTT_Defend_C* UBP_BTT_Defend_C::GetDefaultObj()
{
	static class UBP_BTT_Defend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BTT_Defend_C*>(UBP_BTT_Defend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BTT_Defend.BP_BTT_Defend_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BTT_Defend_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_Defend_C", "ReceiveExecuteAI");

	Params::UBP_BTT_Defend_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BTT_Defend.BP_BTT_Defend_C.ExecuteUbergraph_BP_BTT_Defend
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAiCharacter_C*          K2Node_DynamicCast_AsBase_Ai_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_Get_Reactive_Action_Montage_AnimMontage                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BTT_Defend_C::ExecuteUbergraph_BP_BTT_Defend(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_Get_Reactive_Action_Montage_AnimMontage, float CallFunc_GetPlayLength_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_Defend_C", "ExecuteUbergraph_BP_BTT_Defend");

	Params::UBP_BTT_Defend_C_ExecuteUbergraph_BP_BTT_Defend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBase_Ai_Character = K2Node_DynamicCast_AsBase_Ai_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Reactive_Action_Montage_AnimMontage = CallFunc_Get_Reactive_Action_Montage_AnimMontage;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


