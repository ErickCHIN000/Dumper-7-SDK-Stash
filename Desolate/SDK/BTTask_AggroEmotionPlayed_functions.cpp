#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_AggroEmotionPlayed.BTTask_AggroEmotionPlayed_C
// (None)

class UClass* UBTTask_AggroEmotionPlayed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AggroEmotionPlayed_C");

	return Clss;
}


// BTTask_AggroEmotionPlayed_C BTTask_AggroEmotionPlayed.Default__BTTask_AggroEmotionPlayed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_AggroEmotionPlayed_C* UBTTask_AggroEmotionPlayed_C::GetDefaultObj()
{
	static class UBTTask_AggroEmotionPlayed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AggroEmotionPlayed_C*>(UBTTask_AggroEmotionPlayed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_AggroEmotionPlayed.BTTask_AggroEmotionPlayed_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AggroEmotionPlayed_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AggroEmotionPlayed_C", "ReceiveTick");

	Params::UBTTask_AggroEmotionPlayed_C_ReceiveTick_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_AggroEmotionPlayed.BTTask_AggroEmotionPlayed_C.ExecuteUbergraph_BTTask_AggroEmotionPlayed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAiCharacter_C*          K2Node_DynamicCast_AsBase_Ai_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_AggroEmotionPlayed_C::ExecuteUbergraph_BTTask_AggroEmotionPlayed(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AggroEmotionPlayed_C", "ExecuteUbergraph_BTTask_AggroEmotionPlayed");

	Params::UBTTask_AggroEmotionPlayed_C_ExecuteUbergraph_BTTask_AggroEmotionPlayed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Ai_Character = K2Node_DynamicCast_AsBase_Ai_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


