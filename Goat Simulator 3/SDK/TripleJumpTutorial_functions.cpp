#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TripleJumpTutorial.TripleJumpTutorial_C
// (Actor)

class UClass* ATripleJumpTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TripleJumpTutorial_C");

	return Clss;
}


// TripleJumpTutorial_C TripleJumpTutorial.Default__TripleJumpTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATripleJumpTutorial_C* ATripleJumpTutorial_C::GetDefaultObj()
{
	static class ATripleJumpTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATripleJumpTutorial_C*>(ATripleJumpTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TripleJumpTutorial.TripleJumpTutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATripleJumpTutorial_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TripleJumpTutorial_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TripleJumpTutorial.TripleJumpTutorial_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATripleJumpTutorial_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TripleJumpTutorial_C", "ReceiveEndPlay");

	Params::ATripleJumpTutorial_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TripleJumpTutorial.TripleJumpTutorial_C.OnGoatBouncyJump_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatJumping                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JumpCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATripleJumpTutorial_C::OnGoatBouncyJump_Event(class AGGGoat* GoatJumping, int32 JumpCount, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TripleJumpTutorial_C", "OnGoatBouncyJump_Event");

	Params::ATripleJumpTutorial_C_OnGoatBouncyJump_Event_Params Parms{};

	Parms.GoatJumping = GoatJumping;
	Parms.JumpCount = JumpCount;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TripleJumpTutorial.TripleJumpTutorial_C.ExecuteUbergraph_TripleJumpTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatJumping                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_JumpCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatMovementComponent*    CallFunc_GetGoatMovementComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatMovementComponent*    CallFunc_GetGoatMovementComponent_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATripleJumpTutorial_C::ExecuteUbergraph_TripleJumpTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatJumping, int32 K2Node_CustomEvent_JumpCount, const struct FVector& K2Node_CustomEvent_Location, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class UGGGoatMovementComponent* CallFunc_GetGoatMovementComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UGGGoatMovementComponent* CallFunc_GetGoatMovementComponent_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TripleJumpTutorial_C", "ExecuteUbergraph_TripleJumpTutorial");

	Params::ATripleJumpTutorial_C_ExecuteUbergraph_TripleJumpTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GoatJumping = K2Node_CustomEvent_GoatJumping;
	Parms.K2Node_CustomEvent_JumpCount = K2Node_CustomEvent_JumpCount;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetGoatMovementComponent_ReturnValue = CallFunc_GetGoatMovementComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetGoatMovementComponent_ReturnValue_1 = CallFunc_GetGoatMovementComponent_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


