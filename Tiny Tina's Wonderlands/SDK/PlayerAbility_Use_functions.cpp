#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Use.PlayerAbility_Use_C
// (None)

class UClass* UPlayerAbility_Use_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Use_C");

	return Clss;
}


// PlayerAbility_Use_C PlayerAbility_Use.Default__PlayerAbility_Use_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Use_C* UPlayerAbility_Use_C::GetDefaultObj()
{
	static class UPlayerAbility_Use_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Use_C*>(UPlayerAbility_Use_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StopGiveUpInner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFightForYourLifeComponent*  CallFunc_GetFFYLComponent_Res                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::StopGiveUpInner(class UFightForYourLifeComponent* CallFunc_GetFFYLComponent_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "StopGiveUpInner");

	Params::UPlayerAbility_Use_C_StopGiveUpInner_Params Parms{};

	Parms.CallFunc_GetFFYLComponent_Res = CallFunc_GetFFYLComponent_Res;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StartGiveUpInner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFightForYourLifeComponent*  CallFunc_GetFFYLComponent_Res                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::StartGiveUpInner(class UFightForYourLifeComponent* CallFunc_GetFFYLComponent_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "StartGiveUpInner");

	Params::UPlayerAbility_Use_C_StartGiveUpInner_Params Parms{};

	Parms.CallFunc_GetFFYLComponent_Res = CallFunc_GetFFYLComponent_Res;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GetFFYLComponent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFightForYourLifeComponent*  Res                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GetFFYLComponent(class UFightForYourLifeComponent** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GetFFYLComponent");

	Params::UPlayerAbility_Use_C_GetFFYLComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.FlushLatentUses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerAbility_Use_C::FlushLatentUses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "FlushLatentUses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GetUseComponent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUseComponent*               Res                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUseComponent*               CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Use_C::GetUseComponent(class UUseComponent** Res, class UUseComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GetUseComponent");

	Params::UPlayerAbility_Use_C_GetUseComponent_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StopUseInner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUsabilityType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUseComponent*               CallFunc_GetUseComponent_Res                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Use_C::StopUseInner(enum class EUsabilityType Type, class UUseComponent* CallFunc_GetUseComponent_Res, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "StopUseInner");

	Params::UPlayerAbility_Use_C_StopUseInner_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetUseComponent_Res = CallFunc_GetUseComponent_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StartUseInner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUsabilityType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUseComponent*               CallFunc_GetUseComponent_Res                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Use_C::StartUseInner(enum class EUsabilityType Type, class UUseComponent* CallFunc_GetUseComponent_Res, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "StartUseInner");

	Params::UPlayerAbility_Use_C_StartUseInner_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetUseComponent_Res = CallFunc_GetUseComponent_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_13
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_13(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_13");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_13_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_12
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_12(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_12");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_12_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_11
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_11(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_11");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_11_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_10
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_10(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_10");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_10_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_9
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_9(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_9");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_9_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_8
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_8(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_8");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_8_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_exit_seat_K2Node_GbxInputActionEvent_Discrete_7
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::GbxInpActEvt_exit_seat_K2Node_GbxInputActionEvent_Discrete_7(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "GbxInpActEvt_exit_seat_K2Node_GbxInputActionEvent_Discrete_7");

	Params::UPlayerAbility_Use_C_GbxInpActEvt_exit_seat_K2Node_GbxInputActionEvent_Discrete_7_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerAbility_Use_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerAbility_Use.PlayerAbility_Use_C.ExecuteUbergraph_PlayerAbility_Use
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnAttachSlotComponent*    CallFunc_FindPawnAttachSlotComponent_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Use_C::ExecuteUbergraph_PlayerAbility_Use(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action4, class UPawnAttachSlotComponent* CallFunc_FindPawnAttachSlotComponent_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action3, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action2, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName Temp_name_Variable1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable2, class FName K2Node_GbxInputActionEvent_Discrete_Action5, class FName K2Node_GbxInputActionEvent_Discrete_Action6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Use_C", "ExecuteUbergraph_PlayerAbility_Use");

	Params::UPlayerAbility_Use_C_ExecuteUbergraph_PlayerAbility_Use_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action4 = K2Node_GbxInputActionEvent_Discrete_Action4;
	Parms.CallFunc_FindPawnAttachSlotComponent_ReturnValue = CallFunc_FindPawnAttachSlotComponent_ReturnValue;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action3 = K2Node_GbxInputActionEvent_Discrete_Action3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action2 = K2Node_GbxInputActionEvent_Discrete_Action2;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action5 = K2Node_GbxInputActionEvent_Discrete_Action5;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action6 = K2Node_GbxInputActionEvent_Discrete_Action6;

	UObject::ProcessEvent(Func, &Parms);

}

}


