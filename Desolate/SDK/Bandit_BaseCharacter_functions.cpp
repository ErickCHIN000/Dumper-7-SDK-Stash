#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_BaseCharacter.Bandit_BaseCharacter_C
// (Actor, Pawn)

class UClass* ABandit_BaseCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_BaseCharacter_C");

	return Clss;
}


// Bandit_BaseCharacter_C Bandit_BaseCharacter.Default__Bandit_BaseCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_BaseCharacter_C* ABandit_BaseCharacter_C::GetDefaultObj()
{
	static class ABandit_BaseCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_BaseCharacter_C*>(ABandit_BaseCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bandit_BaseCharacter.Bandit_BaseCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABandit_BaseCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_BaseCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_BaseCharacter.Bandit_BaseCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABandit_BaseCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_BaseCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_BaseCharacter.Bandit_BaseCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_BaseCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_BaseCharacter_C", "ReceiveTick");

	Params::ABandit_BaseCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bandit_BaseCharacter.Bandit_BaseCharacter_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_BaseCharacter_C::CustomEvent(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_BaseCharacter_C", "CustomEvent");

	Params::ABandit_BaseCharacter_C_CustomEvent_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bandit_BaseCharacter.Bandit_BaseCharacter_C.OnApplyCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABandit_BaseCharacter_C::OnApplyCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_BaseCharacter_C", "OnApplyCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_BaseCharacter.Bandit_BaseCharacter_C.ExecuteUbergraph_Bandit_BaseCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetHeadRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_BaseCharacter_C::ExecuteUbergraph_Bandit_BaseCharacter(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_BaseCharacter_C", "ExecuteUbergraph_Bandit_BaseCharacter");

	Params::ABandit_BaseCharacter_C_ExecuteUbergraph_Bandit_BaseCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds_1 = K2Node_Event_DeltaSeconds_1;
	Parms.CallFunc_GetHeadRotation_ReturnValue = CallFunc_GetHeadRotation_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


