#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThirdPersonCharacter.ThirdPersonCharacter_C
// (Actor, Pawn)

class UClass* AThirdPersonCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThirdPersonCharacter_C");

	return Clss;
}


// ThirdPersonCharacter_C ThirdPersonCharacter.Default__ThirdPersonCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AThirdPersonCharacter_C* AThirdPersonCharacter_C::GetDefaultObj()
{
	static class AThirdPersonCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AThirdPersonCharacter_C*>(AThirdPersonCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpActEvt_Jump_K2Node_InputActionEvent_2");

	Params::AThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpActEvt_Jump_K2Node_InputActionEvent_1");

	Params::AThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpActEvt_AtkPrimary_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpActEvt_AtkPrimary_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpActEvt_AtkPrimary_K2Node_InputActionEvent_0");

	Params::AThirdPersonCharacter_C_InpActEvt_AtkPrimary_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_40(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpAxisEvt_LookUp_K2Node_InputAxisEvent_40");

	Params::AThirdPersonCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_40_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90");

	Params::AThirdPersonCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79");

	Params::AThirdPersonCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38");

	Params::AThirdPersonCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53");

	Params::AThirdPersonCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.ServerMeleeAtk
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BoolVal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AThirdPersonCharacter_C::ServerMeleeAtk(bool BoolVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "ServerMeleeAtk");

	Params::AThirdPersonCharacter_C_ServerMeleeAtk_Params Parms{};

	Parms.BoolVal = BoolVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AThirdPersonCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_47
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_47(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "InpAxisEvt_Turn_K2Node_InputAxisEvent_47");

	Params::AThirdPersonCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_47_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPersonCharacter.ThirdPersonCharacter_C.ExecuteUbergraph_ThirdPersonCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_BoolVal                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThirdPersonCharacter_C::ExecuteUbergraph_ThirdPersonCharacter(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float K2Node_InputAxisEvent_AxisValue_5, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float K2Node_InputAxisEvent_AxisValue_4, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool K2Node_CustomEvent_BoolVal, float K2Node_InputAxisEvent_AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonCharacter_C", "ExecuteUbergraph_ThirdPersonCharacter");

	Params::AThirdPersonCharacter_C_ExecuteUbergraph_ThirdPersonCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.K2Node_InputAxisEvent_AxisValue_5 = K2Node_InputAxisEvent_AxisValue_5;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.K2Node_InputAxisEvent_AxisValue_4 = K2Node_InputAxisEvent_AxisValue_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputAxisEvent_AxisValue_3 = K2Node_InputAxisEvent_AxisValue_3;
	Parms.K2Node_InputAxisEvent_AxisValue_2 = K2Node_InputAxisEvent_AxisValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_CustomEvent_BoolVal = K2Node_CustomEvent_BoolVal;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


