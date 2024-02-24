#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass btask_customSequence.btask_customSequence_C
// (None)

class UClass* Ubtask_customSequence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("btask_customSequence_C");

	return Clss;
}


// btask_customSequence_C btask_customSequence.Default__btask_customSequence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubtask_customSequence_C* Ubtask_customSequence_C::GetDefaultObj()
{
	static class Ubtask_customSequence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubtask_customSequence_C*>(Ubtask_customSequence_C::StaticClass()->DefaultObject);

	return Default;
}


// Function btask_customSequence.btask_customSequence_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubtask_customSequence_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_customSequence_C", "ReceiveAbortAI");

	Params::Ubtask_customSequence_C_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function btask_customSequence.btask_customSequence_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubtask_customSequence_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_customSequence_C", "ReceiveExecuteAI");

	Params::Ubtask_customSequence_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function btask_customSequence.btask_customSequence_C.ExecuteUbergraph_btask_customSequence
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBlackboardValueAsFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_DynamicCast_AsAnim_Sequence_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubtask_customSequence_C::ExecuteUbergraph_btask_customSequence(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class UAnimSequenceBase* K2Node_DynamicCast_AsAnim_Sequence_Base, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, float CallFunc_GetPlayLength_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_customSequence_C", "ExecuteUbergraph_btask_customSequence");

	Params::Ubtask_customSequence_C_ExecuteUbergraph_btask_customSequence_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsFloat_ReturnValue = CallFunc_GetBlackboardValueAsFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Sequence_Base = K2Node_DynamicCast_AsAnim_Sequence_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


