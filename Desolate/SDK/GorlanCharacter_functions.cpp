#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GorlanCharacter.GorlanCharacter_C
// (Actor, Pawn)

class UClass* AGorlanCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GorlanCharacter_C");

	return Clss;
}


// GorlanCharacter_C GorlanCharacter.Default__GorlanCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlanCharacter_C* AGorlanCharacter_C::GetDefaultObj()
{
	static class AGorlanCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlanCharacter_C*>(AGorlanCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GorlanCharacter.GorlanCharacter_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGorlan_AnimBP_C*            K2Node_DynamicCast_AsGorlan_Anim_BP                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGorlanCharacter_C::AB_SyncState(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UGorlan_AnimBP_C* K2Node_DynamicCast_AsGorlan_Anim_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanCharacter_C", "AB_SyncState");

	Params::AGorlanCharacter_C_AB_SyncState_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGorlan_Anim_BP = K2Node_DynamicCast_AsGorlan_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GorlanCharacter.GorlanCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGorlanCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GorlanCharacter.GorlanCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGorlanCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanCharacter_C", "ReceiveTick");

	Params::AGorlanCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GorlanCharacter.GorlanCharacter_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGorlanCharacter_C::CustomEvent(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanCharacter_C", "CustomEvent");

	Params::AGorlanCharacter_C_CustomEvent_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GorlanCharacter.GorlanCharacter_C.ExecuteUbergraph_GorlanCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetHeadRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGorlanCharacter_C::ExecuteUbergraph_GorlanCharacter(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanCharacter_C", "ExecuteUbergraph_GorlanCharacter");

	Params::AGorlanCharacter_C_ExecuteUbergraph_GorlanCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds_1 = K2Node_Event_DeltaSeconds_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetHeadRotation_ReturnValue = CallFunc_GetHeadRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


