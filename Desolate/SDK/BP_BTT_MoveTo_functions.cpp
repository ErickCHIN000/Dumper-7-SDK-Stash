#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BTT_MoveTo.BP_BTT_MoveTo_C
// (None)

class UClass* UBP_BTT_MoveTo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BTT_MoveTo_C");

	return Clss;
}


// BP_BTT_MoveTo_C BP_BTT_MoveTo.Default__BP_BTT_MoveTo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BTT_MoveTo_C* UBP_BTT_MoveTo_C::GetDefaultObj()
{
	static class UBP_BTT_MoveTo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BTT_MoveTo_C*>(UBP_BTT_MoveTo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BTT_MoveTo.BP_BTT_MoveTo_C.OnMoveFinished_980BDF964F6B3C59ABD03EB3DC001E56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BTT_MoveTo_C::OnMoveFinished_980BDF964F6B3C59ABD03EB3DC001E56(enum class EPathFollowingResult Result, class AAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_MoveTo_C", "OnMoveFinished_980BDF964F6B3C59ABD03EB3DC001E56");

	Params::UBP_BTT_MoveTo_C_OnMoveFinished_980BDF964F6B3C59ABD03EB3DC001E56_Params Parms{};

	Parms.Result = Result;
	Parms.AIController = AIController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BTT_MoveTo.BP_BTT_MoveTo_C.OnRequestFailed_980BDF964F6B3C59ABD03EB3DC001E56
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BTT_MoveTo_C::OnRequestFailed_980BDF964F6B3C59ABD03EB3DC001E56()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_MoveTo_C", "OnRequestFailed_980BDF964F6B3C59ABD03EB3DC001E56");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BTT_MoveTo.BP_BTT_MoveTo_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BTT_MoveTo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_MoveTo_C", "ReceiveExecuteAI");

	Params::UBP_BTT_MoveTo_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BTT_MoveTo.BP_BTT_MoveTo_C.ExecuteUbergraph_BP_BTT_MoveTo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_CustomEvent_AIController                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAiCharacter_C*          K2Node_DynamicCast_AsBase_Ai_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAITask_MoveTo*              CallFunc_AIMoveTo_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BTT_MoveTo_C::ExecuteUbergraph_BP_BTT_MoveTo(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UAITask_MoveTo* CallFunc_AIMoveTo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BTT_MoveTo_C", "ExecuteUbergraph_BP_BTT_MoveTo");

	Params::UBP_BTT_MoveTo_C_ExecuteUbergraph_BP_BTT_MoveTo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_AIController = K2Node_CustomEvent_AIController;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBase_Ai_Character = K2Node_DynamicCast_AsBase_Ai_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_AIMoveTo_ReturnValue = CallFunc_AIMoveTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


