#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalController.ArsenalController_C
// (Actor, PlayerController)

class UClass* AArsenalController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalController_C");

	return Clss;
}


// ArsenalController_C ArsenalController.Default__ArsenalController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArsenalController_C* AArsenalController_C::GetDefaultObj()
{
	static class AArsenalController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArsenalController_C*>(AArsenalController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalController.ArsenalController_C.GetPauseMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* AArsenalController_C::GetPauseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "GetPauseMenu");

	Params::AArsenalController_C_GetPauseMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalController.ArsenalController_C.GetCameraControlComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTTLDefaultCameraControlComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTTLDefaultCameraControlComponent* AArsenalController_C::GetCameraControlComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "GetCameraControlComponent");

	Params::AArsenalController_C_GetCameraControlComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalController.ArsenalController_C.SetupSelfArsenalParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::SetupSelfArsenalParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "SetupSelfArsenalParameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.ChangeBaseCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      BaseCharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ChangeBaseCharacter_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AArsenalController_C::ChangeBaseCharacter(class AActor* BaseCharacter, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ChangeBaseCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ChangeBaseCharacter");

	Params::AArsenalController_C_ChangeBaseCharacter_Params Parms{};

	Parms.BaseCharacter = BaseCharacter;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ChangeBaseCharacter_ReturnValue = CallFunc_ChangeBaseCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalController.ArsenalController_C.ChangeArsenalHUDComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ArsenalActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangedArsenal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFirst                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ChangeArsenalHUDComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AArsenalController_C::ChangeArsenalHUDComponent(class AActor* ArsenalActor, bool IsChangedArsenal, bool IsFirst, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ChangeArsenalHUDComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ChangeArsenalHUDComponent");

	Params::AArsenalController_C_ChangeArsenalHUDComponent_Params Parms{};

	Parms.ArsenalActor = ArsenalActor;
	Parms.IsChangedArsenal = IsChangedArsenal;
	Parms.IsFirst = IsFirst;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ChangeArsenalHUDComponent_ReturnValue = CallFunc_ChangeArsenalHUDComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalController.ArsenalController_C.GetMainArsenal
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLCharacterCommon*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ATTLCharacterCommon* AArsenalController_C::GetMainArsenal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "GetMainArsenal");

	Params::AArsenalController_C_GetMainArsenal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalController.ArsenalController_C.SendArmAttackToServer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SendPacket                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckNotifyArmWeaponAttack_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::SendArmAttackToServer(bool IsLeft, bool IsPressed, bool* SendPacket, bool CallFunc_CheckNotifyArmWeaponAttack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "SendArmAttackToServer");

	Params::AArsenalController_C_SendArmAttackToServer_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.IsPressed = IsPressed;
	Parms.CallFunc_CheckNotifyArmWeaponAttack_ReturnValue = CallFunc_CheckNotifyArmWeaponAttack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SendPacket != nullptr)
		*SendPacket = Parms.SendPacket;

}


// Function ArsenalController.ArsenalController_C.PressAttackSupport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::PressAttackSupport(bool IsPressed, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "PressAttackSupport");

	Params::AArsenalController_C_PressAttackSupport_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.IsRequestedStartTrans
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Isrequested                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::IsRequestedStartTrans(bool* Isrequested)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "IsRequestedStartTrans");

	Params::AArsenalController_C_IsRequestedStartTrans_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Isrequested != nullptr)
		*Isrequested = Parms.Isrequested;

}


// Function ArsenalController.ArsenalController_C.IsWaitReceiveStartTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNowWait                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::IsWaitReceiveStartTransform(bool* IsNowWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "IsWaitReceiveStartTransform");

	Params::AArsenalController_C_IsWaitReceiveStartTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsNowWait != nullptr)
		*IsNowWait = Parms.IsNowWait;

}


// Function ArsenalController.ArsenalController_C.GetPlayerArsenalVPPercent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AArsenalController_C::GetPlayerArsenalVPPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "GetPlayerArsenalVPPercent");

	Params::AArsenalController_C_GetPlayerArsenalVPPercent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalController.ArsenalController_C.ProcessGetOnArsenalCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOuterCharacter_C*           SelfOuterCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         GetOnArsenalCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChange                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsChangeArsenal                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChangeArsenalHUDComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::ProcessGetOnArsenalCompleted(class AOuterCharacter_C* SelfOuterCharacter, class AArsenalCharacter_C* GetOnArsenalCharacter, bool* IsChange, bool IsChangeArsenal, bool CallFunc_IsLocalController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalController_ReturnValue1, bool CallFunc_IsLocalController_ReturnValue2, bool CallFunc_IsLocalController_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_ChangeArsenalHUDComponent_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ProcessGetOnArsenalCompleted");

	Params::AArsenalController_C_ProcessGetOnArsenalCompleted_Params Parms{};

	Parms.SelfOuterCharacter = SelfOuterCharacter;
	Parms.GetOnArsenalCharacter = GetOnArsenalCharacter;
	Parms.IsChangeArsenal = IsChangeArsenal;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocalController_ReturnValue1 = CallFunc_IsLocalController_ReturnValue1;
	Parms.CallFunc_IsLocalController_ReturnValue2 = CallFunc_IsLocalController_ReturnValue2;
	Parms.CallFunc_IsLocalController_ReturnValue3 = CallFunc_IsLocalController_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_ChangeArsenalHUDComponent_ReturnValue = CallFunc_ChangeArsenalHUDComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLGame_State = K2Node_DynamicCast_AsTTLGame_State;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsChange != nullptr)
		*IsChange = Parms.IsChange;

}


// Function ArsenalController.ArsenalController_C.FindGetOnArsenalCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalCharacter_C*         GetOnArsenalCharacter                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         FoundArsenalCharacter                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AArsenalCharacter_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCanGetOn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::FindGetOnArsenalCharacter(class AArsenalCharacter_C** GetOnArsenalCharacter, class AArsenalCharacter_C* FoundArsenalCharacter, float Distance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AArsenalCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AArsenalCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CheckCanGetOn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "FindGetOnArsenalCharacter");

	Params::AArsenalController_C_FindGetOnArsenalCharacter_Params Parms{};

	Parms.FoundArsenalCharacter = FoundArsenalCharacter;
	Parms.Distance = Distance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CheckCanGetOn_ReturnValue = CallFunc_CheckCanGetOn_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GetOnArsenalCharacter != nullptr)
		*GetOnArsenalCharacter = Parms.GetOnArsenalCharacter;

}


// Function ArsenalController.ArsenalController_C.GetUnusedPlayerStartTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  ReturnTransform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerStart*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class APlayerStart*                CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue1                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::GetUnusedPlayerStartTransform(struct FTransform* ReturnTransform, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item1, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "GetUnusedPlayerStartTransform");

	Params::AArsenalController_C_GetUnusedPlayerStartTransform_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue1 = CallFunc_GetTransform_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnTransform != nullptr)
		*ReturnTransform = std::move(Parms.ReturnTransform);

}


// Function ArsenalController.ArsenalController_C.InitializeBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            BaseCharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InitializeBP(class ABaseCharacter_C* BaseCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InitializeBP");

	Params::AArsenalController_C_InitializeBP_Params Parms{};

	Parms.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.CanActInputActionBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETTLEActionType         ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanAct                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidObjects_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsControllableMovement_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsControllableCriticalAction_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::CanActInputActionBP(enum class ETTLEActionType ActionType, bool* Result, bool CanAct, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidObjects_ReturnValue, bool CallFunc_IsControllableMovement_ReturnValue, bool CallFunc_IsControllableCriticalAction_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "CanActInputActionBP");

	Params::AArsenalController_C_CanActInputActionBP_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.CanAct = CanAct;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidObjects_ReturnValue = CallFunc_IsValidObjects_ReturnValue;
	Parms.CallFunc_IsControllableMovement_ReturnValue = CallFunc_IsControllableMovement_ReturnValue;
	Parms.CallFunc_IsControllableCriticalAction_ReturnValue = CallFunc_IsControllableCriticalAction_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalController.ArsenalController_C.CheckDoubleAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACloseRangeWeaponCommon_C*   CallFunc_GetCloseRangeWeapon_CloseRangeWeapon                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACloseRangeWeaponCommon_C*   CallFunc_GetCloseRangeWeapon_CloseRangeWeapon1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::CheckDoubleAttack(bool* Result, class ACloseRangeWeaponCommon_C* CallFunc_GetCloseRangeWeapon_CloseRangeWeapon, class ACloseRangeWeaponCommon_C* CallFunc_GetCloseRangeWeapon_CloseRangeWeapon1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "CheckDoubleAttack");

	Params::AArsenalController_C_CheckDoubleAttack_Params Parms{};

	Parms.CallFunc_GetCloseRangeWeapon_CloseRangeWeapon = CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;
	Parms.CallFunc_GetCloseRangeWeapon_CloseRangeWeapon1 = CallFunc_GetCloseRangeWeapon_CloseRangeWeapon1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue1 = CallFunc_NotEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalController.ArsenalController_C.ReleaseAttackRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACloseRangeWeaponCommon_C*   CallFunc_GetCloseRangeWeapon_CloseRangeWeapon                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::ReleaseAttackRight(class ACloseRangeWeaponCommon_C* CallFunc_GetCloseRangeWeapon_CloseRangeWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ReleaseAttackRight");

	Params::AArsenalController_C_ReleaseAttackRight_Params Parms{};

	Parms.CallFunc_GetCloseRangeWeapon_CloseRangeWeapon = CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.ReleaseAttackLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACloseRangeWeaponCommon_C*   CallFunc_GetCloseRangeWeapon_CloseRangeWeapon                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::ReleaseAttackLeft(class ACloseRangeWeaponCommon_C* CallFunc_GetCloseRangeWeapon_CloseRangeWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ReleaseAttackLeft");

	Params::AArsenalController_C_ReleaseAttackLeft_Params Parms{};

	Parms.CallFunc_GetCloseRangeWeapon_CloseRangeWeapon = CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.PressAttackRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryInputArsenalReload_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckDoubleAttack_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessFireInput_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessFireInput_Result1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSpinShoot_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentRightWeapon_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttackFlag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACloseRangeWeaponCommon_C*   CallFunc_GetCloseRangeWeapon_CloseRangeWeapon                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::PressAttackRight(bool CallFunc_TryInputArsenalReload_ReturnValue, bool CallFunc_CheckDoubleAttack_Result, bool CallFunc_ProcessFireInput_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_ProcessFireInput_Result1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_CanSpinShoot_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class ATTLWeaponBase* CallFunc_GetCurrentRightWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_GetAttackFlag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, class ACloseRangeWeaponCommon_C* CallFunc_GetCloseRangeWeapon_CloseRangeWeapon, bool CallFunc_IsCompletelyDestroyed_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "PressAttackRight");

	Params::AArsenalController_C_PressAttackRight_Params Parms{};

	Parms.CallFunc_TryInputArsenalReload_ReturnValue = CallFunc_TryInputArsenalReload_ReturnValue;
	Parms.CallFunc_CheckDoubleAttack_Result = CallFunc_CheckDoubleAttack_Result;
	Parms.CallFunc_ProcessFireInput_Result = CallFunc_ProcessFireInput_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_ProcessFireInput_Result1 = CallFunc_ProcessFireInput_Result1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_CanSpinShoot_ReturnValue = CallFunc_CanSpinShoot_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentRightWeapon_ReturnValue = CallFunc_GetCurrentRightWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetAttackFlag_ReturnValue = CallFunc_GetAttackFlag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetCloseRangeWeapon_CloseRangeWeapon = CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue = CallFunc_IsCompletelyDestroyed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.PressAttackLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryInputArsenalReload_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLArsenalCloseRangeAttackTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLArsenalCloseRangeAttackTypeTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckDoubleAttack_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessFireInput_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessFireInput_Result1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSpinShoot_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACloseRangeWeaponCommon_C*   CallFunc_GetCloseRangeWeapon_CloseRangeWeapon                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttackFlag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLArsenalCloseRangeAttackTypeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_GetCurrentLeftWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::PressAttackLeft(bool CallFunc_TryInputArsenalReload_ReturnValue, enum class ETTLArsenalCloseRangeAttackType Temp_byte_Variable, enum class ETTLArsenalCloseRangeAttackType Temp_byte_Variable1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckDoubleAttack_Result, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_ProcessFireInput_Result, bool CallFunc_ProcessFireInput_Result1, bool CallFunc_CanSpinShoot_ReturnValue, bool Temp_bool_Variable, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class ACloseRangeWeaponCommon_C* CallFunc_GetCloseRangeWeapon_CloseRangeWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetAttackFlag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, enum class ETTLArsenalCloseRangeAttackType K2Node_Select_Default, class ATTLWeaponBase* CallFunc_GetCurrentLeftWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsCompletelyDestroyed_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "PressAttackLeft");

	Params::AArsenalController_C_PressAttackLeft_Params Parms{};

	Parms.CallFunc_TryInputArsenalReload_ReturnValue = CallFunc_TryInputArsenalReload_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CheckDoubleAttack_Result = CallFunc_CheckDoubleAttack_Result;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_ProcessFireInput_Result = CallFunc_ProcessFireInput_Result;
	Parms.CallFunc_ProcessFireInput_Result1 = CallFunc_ProcessFireInput_Result1;
	Parms.CallFunc_CanSpinShoot_ReturnValue = CallFunc_CanSpinShoot_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCloseRangeWeapon_CloseRangeWeapon = CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAttackFlag_ReturnValue = CallFunc_GetAttackFlag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentLeftWeapon_ReturnValue = CallFunc_GetCurrentLeftWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue = CallFunc_IsCompletelyDestroyed_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputArsenalJump
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalJump(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalJump");

	Params::AArsenalController_C_InputArsenalJump_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalQuickBoost
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalQuickBoost(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalQuickBoost");

	Params::AArsenalController_C_InputArsenalQuickBoost_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputLongArsenalGetOff
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InputLongArsenalGetOff(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputLongArsenalGetOff");

	Params::AArsenalController_C_InputLongArsenalGetOff_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentSwitch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEquipmentSwitch(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEquipmentSwitch");

	Params::AArsenalController_C_InputArsenalEquipmentSwitch_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentPrev
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEquipmentPrev(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEquipmentPrev");

	Params::AArsenalController_C_InputArsenalEquipmentPrev_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentNext
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEquipmentNext(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEquipmentNext");

	Params::AArsenalController_C_InputArsenalEquipmentNext_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerArsenalJump
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerArsenalJump(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerArsenalJump");

	Params::AArsenalController_C_RunOnServerArsenalJump_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerQuickBoost
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerQuickBoost(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerQuickBoost");

	Params::AArsenalController_C_RunOnServerQuickBoost_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEquipmentRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEquipmentRight");

	Params::AArsenalController_C_InputArsenalEquipmentRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEquipmentLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEquipmentLeft");

	Params::AArsenalController_C_InputArsenalEquipmentLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEquipmentDown(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEquipmentDown");

	Params::AArsenalController_C_InputArsenalEquipmentDown_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalPurgeRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalPurgeRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalPurgeRight");

	Params::AArsenalController_C_InputArsenalPurgeRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalPurgeLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalPurgeLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalPurgeLeft");

	Params::AArsenalController_C_InputArsenalPurgeLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerArsenalGetOff
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEHumanGenderType    HumanGenderType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    HumanCustomInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// uint8                              WeaponRemainBits                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FemtoValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::RunOnServerArsenalGetOff(enum class ETTLEHumanGenderType HumanGenderType, const struct FTTLHumanCustomPartsInfo& HumanCustomInfo, uint8 WeaponRemainBits, float FemtoValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerArsenalGetOff");

	Params::AArsenalController_C_RunOnServerArsenalGetOff_Params Parms{};

	Parms.HumanGenderType = HumanGenderType;
	Parms.HumanCustomInfo = HumanCustomInfo;
	Parms.WeaponRemainBits = WeaponRemainBits;
	Parms.FemtoValue = FemtoValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnArsenalGetOffFromOuter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnArsenalGetOffFromOuter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnArsenalGetOffFromOuter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputArsenalGetOff
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalGetOff(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalGetOff");

	Params::AArsenalController_C_InputArsenalGetOff_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalEject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalEject(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalEject");

	Params::AArsenalController_C_InputArsenalEject_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OuterEjectEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OuterEjectEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OuterEjectEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.RunOnServerEjectStart
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEHumanGenderType    GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    CustomInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::RunOnServerEjectStart(enum class ETTLEHumanGenderType GenderType, const struct FTTLHumanCustomPartsInfo& CustomInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerEjectStart");

	Params::AArsenalController_C_RunOnServerEjectStart_Params Parms{};

	Parms.GenderType = GenderType;
	Parms.CustomInfo = CustomInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnClientEjectStartAfterOuterSpawn
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::RunOnClientEjectStartAfterOuterSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnClientEjectStartAfterOuterSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputLongArsenalPurge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InputLongArsenalPurge(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputLongArsenalPurge");

	Params::AArsenalController_C_InputLongArsenalPurge_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnStartArsenalGetOffFromCharaBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnStartArsenalGetOffFromCharaBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnStartArsenalGetOffFromCharaBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.OnArsenalGetOffFromOuterBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnArsenalGetOffFromOuterBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnArsenalGetOffFromOuterBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.OnArsenalGetOffAfterCameraChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnArsenalGetOffAfterCameraChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnArsenalGetOffAfterCameraChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.OuterEjectEndBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OuterEjectEndBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OuterEjectEndBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.RunOnServerOuterDash
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerOuterDash(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerOuterDash");

	Params::AArsenalController_C_RunOnServerOuterDash_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AArsenalController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.OnArsenalGetOnCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalCharacter_C*         TargetArsenal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           OuterChara                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::OnArsenalGetOnCompleted(class AArsenalCharacter_C* TargetArsenal, class AOuterCharacter_C* OuterChara)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnArsenalGetOnCompleted");

	Params::AArsenalController_C_OnArsenalGetOnCompleted_Params Parms{};

	Parms.TargetArsenal = TargetArsenal;
	Parms.OuterChara = OuterChara;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnClientArsenalGetOnDisable
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::RunOnClientArsenalGetOnDisable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnClientArsenalGetOnDisable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputHumanGetOn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanGetOn(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanGetOn");

	Params::AArsenalController_C_InputHumanGetOn_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerOuterJump
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerOuterJump(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerOuterJump");

	Params::AArsenalController_C_RunOnServerOuterJump_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnLevelStarted_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnLevelStarted______0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnLevelStarted_¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.OnLevelFinished_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnLevelFinished______0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnLevelFinished_¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputArsenalThrowCatch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalThrowCatch(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalThrowCatch");

	Params::AArsenalController_C_InputArsenalThrowCatch_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalBoostOff
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalBoostOff(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalBoostOff");

	Params::AArsenalController_C_InputArsenalBoostOff_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalGuard
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalGuard(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalGuard");

	Params::AArsenalController_C_InputArsenalGuard_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalThrowRelease
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalThrowRelease(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalThrowRelease");

	Params::AArsenalController_C_InputArsenalThrowRelease_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalThrowAimCancel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalThrowAimCancel(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalThrowAimCancel");

	Params::AArsenalController_C_InputArsenalThrowAimCancel_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalCameraLock
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalCameraLock(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalCameraLock");

	Params::AArsenalController_C_InputArsenalCameraLock_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanCameraLock
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanCameraLock(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanCameraLock");

	Params::AArsenalController_C_InputHumanCameraLock_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuOk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputMenuOk(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuOk");

	Params::AArsenalController_C_InputMenuOk_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuCancel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputMenuCancel(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuCancel");

	Params::AArsenalController_C_InputMenuCancel_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalAttackShoulder
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalAttackShoulder(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalAttackShoulder");

	Params::AArsenalController_C_InputArsenalAttackShoulder_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalAttackRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalAttackRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalAttackRight");

	Params::AArsenalController_C_InputArsenalAttackRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanAttackRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanAttackRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanAttackRight");

	Params::AArsenalController_C_InputHumanAttackRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalAttackLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalAttackLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalAttackLeft");

	Params::AArsenalController_C_InputArsenalAttackLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanAttackLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanAttackLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanAttackLeft");

	Params::AArsenalController_C_InputHumanAttackLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalMirage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalMirage(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalMirage");

	Params::AArsenalController_C_InputArsenalMirage_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerArsenalGetOn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalCharacter_C*         TargetArsenal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::RunOnServerArsenalGetOn(class AArsenalCharacter_C* TargetArsenal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerArsenalGetOn");

	Params::AArsenalController_C_RunOnServerArsenalGetOn_Params Parms{};

	Parms.TargetArsenal = TargetArsenal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerArsenalBoostOFF
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerArsenalBoostOFF(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerArsenalBoostOFF");

	Params::AArsenalController_C_RunOnServerArsenalBoostOFF_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerArsenalAttackLeft
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerArsenalAttackLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerArsenalAttackLeft");

	Params::AArsenalController_C_RunOnServerArsenalAttackLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerArsenalAttackRight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnServerArsenalAttackRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerArsenalAttackRight");

	Params::AArsenalController_C_RunOnServerArsenalAttackRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputMenuStart(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuStart");

	Params::AArsenalController_C_InputMenuStart_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanTouch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanTouch(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanTouch");

	Params::AArsenalController_C_InputHumanTouch_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalAttackSpecial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalAttackSpecial(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalAttackSpecial");

	Params::AArsenalController_C_InputArsenalAttackSpecial_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalThrowExecRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalThrowExecRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalThrowExecRight");

	Params::AArsenalController_C_InputArsenalThrowExecRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalThrowExecLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalThrowExecLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalThrowExecLeft");

	Params::AArsenalController_C_InputArsenalThrowExecLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputMenuUp(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuUp");

	Params::AArsenalController_C_InputMenuUp_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputMenuDown(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuDown");

	Params::AArsenalController_C_InputMenuDown_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuAnalogLDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InputMenuAnalogLDown(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuAnalogLDown");

	Params::AArsenalController_C_InputMenuAnalogLDown_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputMenuAnalogLUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InputMenuAnalogLUp(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuAnalogLUp");

	Params::AArsenalController_C_InputMenuAnalogLUp_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnPauseMenuBaseExit_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnPauseMenuBaseExit______0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnPauseMenuBaseExit_¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.ClientPostLogin
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::ClientPostLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ClientPostLogin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.SpawnArsenalCharacter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLArsenalPartsInfoList    PartsList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        PaintInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeSpawnType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::SpawnArsenalCharacter(const struct FTTLArsenalPartsInfoList& PartsList, TArray<class FName>& SkillList, const struct FTTLArsenalPaintInfo& PaintInfo, enum class ETTLECharacterCommonSpawnType SpawnType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "SpawnArsenalCharacter");

	Params::AArsenalController_C_SpawnArsenalCharacter_Params Parms{};

	Parms.PartsList = PartsList;
	Parms.SkillList = SkillList;
	Parms.PaintInfo = PaintInfo;
	Parms.SpawnType = SpawnType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerSetPlayerStartTransform
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::RunOnServerSetPlayerStartTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerSetPlayerStartTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.RunOnServerDestroyArsenalCharacter
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalController_C*        Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::RunOnServerDestroyArsenalCharacter(class AArsenalController_C* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerDestroyArsenalCharacter");

	Params::AArsenalController_C_RunOnServerDestroyArsenalCharacter_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanAttackSpecial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanAttackSpecial(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanAttackSpecial");

	Params::AArsenalController_C_InputHumanAttackSpecial_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnTalkMessageEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnTalkMessageEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnTalkMessageEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.ExecSpawnArsenalCharacter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalController_C*        Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    PartsList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        PaintInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeSpawnType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    HumanGenderType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    HumanCustomPartsInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsJoinRoomFromFriendList                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        VoiceCharaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::ExecSpawnArsenalCharacter(class AArsenalController_C* Controller, const struct FTTLArsenalPartsInfoList& PartsList, TArray<class FName>& SkillList, const struct FTTLArsenalPaintInfo& PaintInfo, enum class ETTLECharacterCommonSpawnType SpawnType, enum class ETTLEHumanGenderType HumanGenderType, const struct FTTLHumanCustomPartsInfo& HumanCustomPartsInfo, bool IsJoinRoomFromFriendList, class FName VoiceCharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ExecSpawnArsenalCharacter");

	Params::AArsenalController_C_ExecSpawnArsenalCharacter_Params Parms{};

	Parms.Controller = Controller;
	Parms.PartsList = PartsList;
	Parms.SkillList = SkillList;
	Parms.PaintInfo = PaintInfo;
	Parms.SpawnType = SpawnType;
	Parms.HumanGenderType = HumanGenderType;
	Parms.HumanCustomPartsInfo = HumanCustomPartsInfo;
	Parms.IsJoinRoomFromFriendList = IsJoinRoomFromFriendList;
	Parms.VoiceCharaID = VoiceCharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanAttackShoulder
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanAttackShoulder(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanAttackShoulder");

	Params::AArsenalController_C_InputHumanAttackShoulder_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RequestServerStartTransform
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::RequestServerStartTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RequestServerStartTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.RunOnClientSetPlayerStartTransform
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  StartTrans                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AArsenalController_C::RunOnClientSetPlayerStartTransform(const struct FTransform& StartTrans)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnClientSetPlayerStartTransform");

	Params::AArsenalController_C_RunOnClientSetPlayerStartTransform_Params Parms{};

	Parms.StartTrans = StartTrans;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.ClearRequestStartTrans
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::ClearRequestStartTrans()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ClearRequestStartTrans");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.SetReceiveStartTransform
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::SetReceiveStartTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "SetReceiveStartTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputHumanDash
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanDash(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanDash");

	Params::AArsenalController_C_InputHumanDash_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalController_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputArsenalPutDownExecLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalPutDownExecLeft(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalPutDownExecLeft");

	Params::AArsenalController_C_InputArsenalPutDownExecLeft_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputArsenalPutDownExecRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputArsenalPutDownExecRight(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputArsenalPutDownExecRight");

	Params::AArsenalController_C_InputArsenalPutDownExecRight_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.TractorBeam_StartCaptureWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::TractorBeam_StartCaptureWeapon(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "TractorBeam_StartCaptureWeapon");

	Params::AArsenalController_C_TractorBeam_StartCaptureWeapon_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputLongHumanGetOn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InputLongHumanGetOn(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputLongHumanGetOn");

	Params::AArsenalController_C_InputLongHumanGetOn_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputHumanJump
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputHumanJump(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputHumanJump");

	Params::AArsenalController_C_InputHumanJump_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputSpectatorChangeR
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputSpectatorChangeR(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputSpectatorChangeR");

	Params::AArsenalController_C_InputSpectatorChangeR_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InputSpectatorChangeL
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputSpectatorChangeL(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputSpectatorChangeL");

	Params::AArsenalController_C_InputSpectatorChangeL_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.InitializeControlledCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::InitializeControlledCharacter(class APawn* ControlledCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InitializeControlledCharacter");

	Params::AArsenalController_C_InitializeControlledCharacter_Params Parms{};

	Parms.ControlledCharacter = ControlledCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnClientDebugChangePlayerToAi
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnClientDebugChangePlayerToAi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnClientDebugChangePlayerToAi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.OnMissingMainArsenalBP
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnMissingMainArsenalBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnMissingMainArsenalBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.RunOnServerSpawnArsenalCharacter
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalController_C*        Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    PartsList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        PaintInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeSpawnType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    HumanGenderType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    HumanCustomPartsInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsJoinRoomFromFriendList                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        VoiceCharaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::RunOnServerSpawnArsenalCharacter(class AArsenalController_C* Controller, const struct FTTLArsenalPartsInfoList& PartsList, TArray<class FName>& SkillList, const struct FTTLArsenalPaintInfo& PaintInfo, enum class ETTLECharacterCommonSpawnType SpawnType, enum class ETTLEHumanGenderType HumanGenderType, const struct FTTLHumanCustomPartsInfo& HumanCustomPartsInfo, bool IsJoinRoomFromFriendList, class FName VoiceCharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerSpawnArsenalCharacter");

	Params::AArsenalController_C_RunOnServerSpawnArsenalCharacter_Params Parms{};

	Parms.Controller = Controller;
	Parms.PartsList = PartsList;
	Parms.SkillList = SkillList;
	Parms.PaintInfo = PaintInfo;
	Parms.SpawnType = SpawnType;
	Parms.HumanGenderType = HumanGenderType;
	Parms.HumanCustomPartsInfo = HumanCustomPartsInfo;
	Parms.IsJoinRoomFromFriendList = IsJoinRoomFromFriendList;
	Parms.VoiceCharaID = VoiceCharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.RunOnServerSpawnAsAndNpc
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArsenalController_C*        Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    PartsList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FName>                SkillList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        PaintInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeSpawnType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    HumanGenderType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    HumanCustomPartsInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsJoinRoomFromFriendList                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        MyNpcId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        VoiceCharaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArsenalController_C::RunOnServerSpawnAsAndNpc(class AArsenalController_C* Controller, const struct FTTLArsenalPartsInfoList& PartsList, TArray<class FName>& SkillList, const struct FTTLArsenalPaintInfo& PaintInfo, enum class ETTLECharacterCommonSpawnType SpawnType, enum class ETTLEHumanGenderType HumanGenderType, const struct FTTLHumanCustomPartsInfo& HumanCustomPartsInfo, bool IsJoinRoomFromFriendList, class FName MyNpcId, class FName VoiceCharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "RunOnServerSpawnAsAndNpc");

	Params::AArsenalController_C_RunOnServerSpawnAsAndNpc_Params Parms{};

	Parms.Controller = Controller;
	Parms.PartsList = PartsList;
	Parms.SkillList = SkillList;
	Parms.PaintInfo = PaintInfo;
	Parms.SpawnType = SpawnType;
	Parms.HumanGenderType = HumanGenderType;
	Parms.HumanCustomPartsInfo = HumanCustomPartsInfo;
	Parms.IsJoinRoomFromFriendList = IsJoinRoomFromFriendList;
	Parms.MyNpcId = MyNpcId;
	Parms.VoiceCharaID = VoiceCharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.DestoryControlledCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::DestoryControlledCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "DestoryControlledCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.InputMenuX
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::InputMenuX(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "InputMenuX");

	Params::AArsenalController_C_InputMenuX_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalController.ArsenalController_C.OnServerDebugChangePlayerToAi
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AArsenalController_C::OnServerDebugChangePlayerToAi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "OnServerDebugChangePlayerToAi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.DebugSetPlayerStartTransform
// (Event, Public, BlueprintEvent)
// Parameters:

void AArsenalController_C::DebugSetPlayerStartTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "DebugSetPlayerStartTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalController.ArsenalController_C.ExecuteUbergraph_ArsenalController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplaySurvivalMision_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryUIHideDetail_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed43                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAI_NPC_Barrett_009_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPressed42                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Duration2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed41                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed40                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed39                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPressed4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPressed3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActInputActionBP_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnableQuickMove_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnableQuickMove_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed38                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed37                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed36                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed35                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed34                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTMPOverHeat_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEHumanGenderType    K2Node_CustomEvent_HumanGenderType3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    K2Node_CustomEvent_HumanCustomInfo                               (NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_WeaponRemainBits                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FemtoValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLBasicStatusComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChaseAutoRunning_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBodyMeshID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHatchMeshForGetOnOff_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPressed33                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCancelCatchMotion_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCancelCatchMotion_EnableOtherAction                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEHumanGenderType    CallFunc_GetCurrentOuterCustomParts_GenderType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    CallFunc_GetCurrentOuterCustomParts_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPressed32                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEHumanGenderType    CallFunc_GetCurrentOuterCustomParts_GenderType1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    CallFunc_GetCurrentOuterCustomParts_ReturnValue1                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipModeEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue1                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue1                                (IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBodyMeshID_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHatchMeshForGetOnOff_ReturnValue1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           CallFunc_FinishSpawningActor_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    K2Node_CustomEvent_GenderType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    K2Node_CustomEvent_CustomInfo                                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Duration1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartChangeEquipMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartChangeEquipMode_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipModeEnabled_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SwitchRisePressed_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SwitchRisePressed_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsKnockBackDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetAllWeaponBulletRemainBits_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLPlayerState*             K2Node_DynamicCast_AsTTLPlayer_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRestFemtoValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanGetOffAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanQuickMoveForPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSniperModeRestriction_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCancelCloseRangeAttack_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Pressed1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInMissionPlay_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLOuterStorageInfo        CallFunc_GetOuterStorageInfoBP_outInfo                           (NoDestructor)
// struct FTTLOuterStorageInfo        CallFunc_GetOuterStorageInfoBP_outInfo1                          (NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipModeEnabled_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryStartAim_isStartAim                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReload_Result                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReload_Result1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_CustomEvent_TargetArsenal1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_CustomEvent_OuterChara                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue2                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartCatchActor_isSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryReadyCatch_result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIsInBaseCamp_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SpawnMirage_SuccessMirage                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed31                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCanUseFemto_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessMirageInput_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCanUseFemto_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryAddTsubazeriaiScore_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRespawningTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartRespawnTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryPickUpParts_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Pressed                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed30                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed29                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed28                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed27                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed26                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed25                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed24                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed23                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed22                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed21                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed20                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendArmAttackToServer_SendPacket                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed19                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed18                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendArmAttackToServer_SendPacket1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed17                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed16                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_CustomEvent_TargetArsenal                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPressed2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPressed1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPressed                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         CallFunc_FindGetOnArsenalCharacter_GetOnArsenalCharacter         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeSniperMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CaptureWeapon_InAction_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed15                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenPauseMenu_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIsInBaseCamp_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed14                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed13                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed12                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed11                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCatchingGrenadeCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed10                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed9                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AxisValue1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLPauseMenuBase*           K2Node_DynamicCast_AsTTLPause_Menu_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_AxisValue                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsInfoList    K2Node_CustomEvent_PartsList3                                    (HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_SkillList3                                    (ConstParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        K2Node_CustomEvent_PaintInfo3                                    (NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeK2Node_CustomEvent_SpawnType3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        K2Node_CustomEvent_Controller3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPressed8                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalController_C*        K2Node_CustomEvent_Controller2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    K2Node_CustomEvent_PartsList2                                    (HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_SkillList2                                    (ConstParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        K2Node_CustomEvent_PaintInfo2                                    (NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeK2Node_CustomEvent_SpawnType2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    K2Node_CustomEvent_HumanGenderType2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    K2Node_CustomEvent_HumanCustomPartsInfo2                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsJoinRoomFromFriendList2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_VoiceCharaID2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue4                              (IsPlainOldData, NoDestructor)
// enum class ETTLEStatusType         CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEStatusType         CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         CallFunc_FinishSpawningActor_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnableBoost_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnableFlying_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsInfoList    CallFunc_ChangePartsInfoListForMissionInfo_ReturnValue           (HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    CallFunc_ChangePartsInfoListNoWeapon_ReturnValue                 (HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed7                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCatchingGrenadeCPP_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEMissionPlayerStartTypeCallFunc_GetMissionPlayerStartType_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanConsumeStamina_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnableQuickMove_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnableQuickMove_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_StartTrans                                    (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue2                                (IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed6                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_SelectTransform_ReturnValue                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           CallFunc_FinishSpawningActor_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SwitchRisePressed_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActInputActionBP_Result1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetControllerPlayerBaseCampArsenalPos_ReturnValue       (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         CallFunc_FinishSpawningActor_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPressed5                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed4                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCatchMovement_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsPressed1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetEmptyBaseCampPlayerStartTransform_ReturnValue        (IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_Event_ControlledCharacter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHandWeaponAutoMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHandWeaponAutoMode_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOuter_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLGameInstance*            K2Node_DynamicCast_AsTTLGame_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsInfoList    CallFunc_TryGetPrevArsenalPartsInfo_partsInfo                    (HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        CallFunc_TryGetPrevArsenalPartsInfo_paintInfo                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentMissionContinuos_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalController_C*        K2Node_CustomEvent_Controller1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    K2Node_CustomEvent_PartsList1                                    (HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_SkillList1                                    (ConstParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        K2Node_CustomEvent_PaintInfo1                                    (NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeK2Node_CustomEvent_SpawnType1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    K2Node_CustomEvent_HumanGenderType1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    K2Node_CustomEvent_HumanCustomPartsInfo1                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsJoinRoomFromFriendList1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_VoiceCharaID1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        K2Node_CustomEvent_Controller                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfoList    K2Node_CustomEvent_PartsList                                     (HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_SkillList                                     (ConstParm, ZeroConstructor, ReferenceParm)
// struct FTTLArsenalPaintInfo        K2Node_CustomEvent_PaintInfo                                     (NoDestructor, HasGetValueTypeHash)
// enum class ETTLECharacterCommonSpawnTypeK2Node_CustomEvent_SpawnType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEHumanGenderType    K2Node_CustomEvent_HumanGenderType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLHumanCustomPartsInfo    K2Node_CustomEvent_HumanCustomPartsInfo                          (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsJoinRoomFromFriendList                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_MyNpcId                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_VoiceCharaID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         CallFunc_SpawnMyNpc_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_SetUpPlayerStartToMission_ReturnValue                   (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CaptureWeapon_InAction_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryReadyCatch_result1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPressed                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLGameInstance*            K2Node_DynamicCast_AsTTLGame_Instance1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess13                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsInfoList    CallFunc_TryGetPrevArsenalPartsInfo_partsInfo1                   (HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        CallFunc_TryGetPrevArsenalPartsInfo_paintInfo1                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentMissionContinuos_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsInfoList    CallFunc_TryGetContinuousArsenalInfo_partsInfo                   (HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        CallFunc_TryGetContinuousArsenalInfo_paintInfo                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContinuousArsenalInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLGameInstance*            K2Node_DynamicCast_AsTTLGame_Instance2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess14                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLSurvivalSpawnType   CallFunc_GetSurvaivalSpawnType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerStartExist4_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArsenalController_C::ExecuteUbergraph_ArsenalController(int32 EntryPoint, bool CallFunc_IsMultiplaySurvivalMision_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_TryUIHideDetail_ReturnValue, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool K2Node_Event_IsPressed43, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAI_NPC_Barrett_009_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_Event_IsPressed42, float K2Node_Event_Duration2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool K2Node_Event_IsPressed41, bool K2Node_Event_IsPressed40, bool K2Node_Event_IsPressed39, bool K2Node_CustomEvent_IsPressed4, bool K2Node_CustomEvent_IsPressed3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_CanActInputActionBP_Result, bool CallFunc_SetEnableQuickMove_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SetEnableQuickMove_ReturnValue1, bool K2Node_Event_IsPressed38, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_HasAuthority_ReturnValue1, bool K2Node_Event_IsPressed37, bool K2Node_Event_IsPressed36, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsPressed35, bool CallFunc_BooleanAND_ReturnValue1, bool K2Node_Event_IsPressed34, bool CallFunc_IsTMPOverHeat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_IsValid_ReturnValue13, enum class ETTLEHumanGenderType K2Node_CustomEvent_HumanGenderType3, const struct FTTLHumanCustomPartsInfo& K2Node_CustomEvent_HumanCustomInfo, uint8 K2Node_CustomEvent_WeaponRemainBits, float K2Node_CustomEvent_FemtoValue, bool CallFunc_HasAuthority_ReturnValue3, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_IsValid_ReturnValue15, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue1, bool CallFunc_IsChaseAutoRunning_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_K2_SetActorRotation_ReturnValue, class FName CallFunc_GetBodyMeshID_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHatchMeshForGetOnOff_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool K2Node_Event_IsPressed33, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class AOuterCharacter_C* CallFunc_FinishSpawningActor_ReturnValue1, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue2, bool CallFunc_TryCancelCatchMotion_Result, bool CallFunc_TryCancelCatchMotion_EnableOtherAction, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, bool CallFunc_IsValid_ReturnValue16, enum class ETTLEHumanGenderType CallFunc_GetCurrentOuterCustomParts_GenderType, const struct FTTLHumanCustomPartsInfo& CallFunc_GetCurrentOuterCustomParts_ReturnValue, bool K2Node_Event_IsPressed32, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue3, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result1, bool CallFunc_IsValid_ReturnValue17, enum class ETTLEHumanGenderType CallFunc_GetCurrentOuterCustomParts_GenderType1, const struct FTTLHumanCustomPartsInfo& CallFunc_GetCurrentOuterCustomParts_ReturnValue1, bool CallFunc_IsValid_ReturnValue18, bool CallFunc_IsValid_ReturnValue19, bool CallFunc_IsEquipModeEnabled_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue1, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_MakeLiteralBool_ReturnValue1, class FName CallFunc_GetBodyMeshID_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetHatchMeshForGetOnOff_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class AOuterCharacter_C* CallFunc_FinishSpawningActor_ReturnValue2, enum class ETTLEHumanGenderType K2Node_CustomEvent_GenderType, const struct FTTLHumanCustomPartsInfo& K2Node_CustomEvent_CustomInfo, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsValid_ReturnValue20, bool CallFunc_HasAuthority_ReturnValue4, bool CallFunc_IsValid_ReturnValue21, float K2Node_Event_Duration1, bool CallFunc_IsValid_ReturnValue22, bool CallFunc_TryStartChangeEquipMode_ReturnValue, bool CallFunc_TryStartChangeEquipMode_ReturnValue1, bool CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue, bool CallFunc_IsEquipModeEnabled_ReturnValue1, bool CallFunc_SwitchRisePressed_ReturnValue, bool CallFunc_SwitchRisePressed_ReturnValue1, bool CallFunc_IsLocalController_ReturnValue1, bool CallFunc_IsKnockBackDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue23, uint8 CallFunc_GetAllWeaponBulletRemainBits_ReturnValue, class ATTLPlayerState* K2Node_DynamicCast_AsTTLPlayer_State, bool K2Node_DynamicCast_bSuccess3, float CallFunc_GetRestFemtoValue_ReturnValue, bool CallFunc_CanGetOffAction_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue6, bool CallFunc_IsLocalController_ReturnValue2, bool CallFunc_CanQuickMoveForPlayerController_ReturnValue, bool CallFunc_IsSniperModeRestriction_ReturnValue, bool CallFunc_CanCancelCloseRangeAttack_ReturnValue, bool K2Node_CustomEvent_Pressed1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsLocalController_ReturnValue3, bool CallFunc_IsValid_ReturnValue24, bool CallFunc_IsValid_ReturnValue25, bool CallFunc_IsInMissionPlay_ReturnValue, const struct FTTLOuterStorageInfo& CallFunc_GetOuterStorageInfoBP_outInfo, const struct FTTLOuterStorageInfo& CallFunc_GetOuterStorageInfoBP_outInfo1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue26, bool CallFunc_IsValid_ReturnValue27, bool CallFunc_IsValid_ReturnValue28, bool CallFunc_IsValid_ReturnValue29, bool CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue1, bool CallFunc_IsEquipModeEnabled_ReturnValue2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_TryStartAim_isStartAim, bool CallFunc_IsReload_Result, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsReload_Result1, bool CallFunc_Not_PreBool_ReturnValue3, class AArsenalCharacter_C* K2Node_CustomEvent_TargetArsenal1, class AOuterCharacter_C* K2Node_CustomEvent_OuterChara, bool CallFunc_BooleanAND_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue8, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue2, bool CallFunc_K2_SetActorRotation_ReturnValue1, bool CallFunc_TryStartCatchActor_isSuccess, bool CallFunc_TryReadyCatch_result, bool CallFunc_CheckIsInBaseCamp_ReturnValue, bool CallFunc_SpawnMirage_SuccessMirage, bool CallFunc_Not_PreBool_ReturnValue4, bool K2Node_Event_IsPressed31, bool CallFunc_HasAuthority_ReturnValue5, bool CallFunc_IsCanUseFemto_ReturnValue, bool CallFunc_ProcessMirageInput_ReturnValue, bool CallFunc_IsCanUseFemto_ReturnValue1, bool CallFunc_TryAddTsubazeriaiScore_ReturnValue, bool CallFunc_IsRespawningTarget_ReturnValue, bool CallFunc_TryStartRespawnTarget_ReturnValue, bool CallFunc_TryPickUpParts_ReturnValue, bool K2Node_CustomEvent_Pressed, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess4, bool K2Node_Event_IsPressed30, bool K2Node_Event_IsPressed29, bool K2Node_Event_IsPressed28, bool K2Node_Event_IsPressed27, bool K2Node_Event_IsPressed26, bool K2Node_Event_IsPressed25, bool K2Node_Event_IsPressed24, bool K2Node_Event_IsPressed23, bool K2Node_Event_IsPressed22, bool K2Node_Event_IsPressed21, bool K2Node_Event_IsPressed20, bool CallFunc_SendArmAttackToServer_SendPacket, bool K2Node_Event_IsPressed19, bool K2Node_Event_IsPressed18, bool CallFunc_SendArmAttackToServer_SendPacket1, bool K2Node_Event_IsPressed17, bool K2Node_Event_IsPressed16, class AArsenalCharacter_C* K2Node_CustomEvent_TargetArsenal, bool CallFunc_IsValid_ReturnValue30, bool CallFunc_IsValid_ReturnValue31, bool CallFunc_IsValid_ReturnValue32, bool K2Node_CustomEvent_IsPressed2, bool K2Node_CustomEvent_IsPressed1, bool K2Node_CustomEvent_IsPressed, class AArsenalCharacter_C* CallFunc_FindGetOnArsenalCharacter_GetOnArsenalCharacter, bool CallFunc_IsValid_ReturnValue33, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_CanChangeSniperMode_ReturnValue, bool CallFunc_CaptureWeapon_InAction_ReturnValue, bool K2Node_Event_IsPressed15, bool CallFunc_OpenPauseMenu_ReturnValue, bool CallFunc_CheckIsInBaseCamp_ReturnValue1, bool K2Node_Event_IsPressed14, bool CallFunc_IsValid_ReturnValue34, bool CallFunc_IsValid_ReturnValue35, bool K2Node_Event_IsPressed13, bool K2Node_Event_IsPressed12, bool K2Node_Event_IsPressed11, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, bool CallFunc_IsValid_ReturnValue36, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result2, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, bool K2Node_Event_IsPressed10, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Event_IsPressed9, class UClass* K2Node_Select_Default, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, float K2Node_Event_AxisValue1, class AActor* CallFunc_FinishSpawningActor_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue1, class ATTLPauseMenuBase* K2Node_DynamicCast_AsTTLPause_Menu_Base, bool K2Node_DynamicCast_bSuccess5, float K2Node_Event_AxisValue, bool CallFunc_HasAuthority_ReturnValue6, bool CallFunc_Greater_FloatFloat_ReturnValue2, const struct FTTLArsenalPartsInfoList& K2Node_CustomEvent_PartsList3, TArray<class FName>& K2Node_CustomEvent_SkillList3, const struct FTTLArsenalPaintInfo& K2Node_CustomEvent_PaintInfo3, enum class ETTLECharacterCommonSpawnType K2Node_CustomEvent_SpawnType3, class AArsenalController_C* K2Node_CustomEvent_Controller3, bool K2Node_Event_IsPressed8, class AArsenalController_C* K2Node_CustomEvent_Controller2, const struct FTTLArsenalPartsInfoList& K2Node_CustomEvent_PartsList2, TArray<class FName>& K2Node_CustomEvent_SkillList2, const struct FTTLArsenalPaintInfo& K2Node_CustomEvent_PaintInfo2, enum class ETTLECharacterCommonSpawnType K2Node_CustomEvent_SpawnType2, enum class ETTLEHumanGenderType K2Node_CustomEvent_HumanGenderType2, const struct FTTLHumanCustomPartsInfo& K2Node_CustomEvent_HumanCustomPartsInfo2, bool K2Node_CustomEvent_IsJoinRoomFromFriendList2, class FName K2Node_CustomEvent_VoiceCharaID2, const struct FTransform& CallFunc_MakeTransform_ReturnValue4, enum class ETTLEStatusType CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4, enum class ETTLEStatusType CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue1, class AArsenalCharacter_C* CallFunc_FinishSpawningActor_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetEnableBoost_ReturnValue, bool CallFunc_SetEnableFlying_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, const struct FTTLArsenalPartsInfoList& CallFunc_ChangePartsInfoListForMissionInfo_ReturnValue, const struct FTTLArsenalPartsInfoList& CallFunc_ChangePartsInfoListNoWeapon_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue2, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess6, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character3, bool K2Node_DynamicCast_bSuccess7, bool K2Node_Event_IsPressed7, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character1, bool K2Node_DynamicCast_bSuccess8, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character2, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_IsValid_ReturnValue37, bool CallFunc_HasAuthority_ReturnValue7, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue1, bool CallFunc_IsValid_ReturnValue38, bool CallFunc_IsValid_ReturnValue39, enum class ETTLEMissionPlayerStartType CallFunc_GetMissionPlayerStartType_ReturnValue, bool CallFunc_IsLocalController_ReturnValue4, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue40, bool CallFunc_CanConsumeStamina_ReturnValue, bool CallFunc_SetEnableQuickMove_ReturnValue2, bool CallFunc_SetEnableQuickMove_ReturnValue3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue1, bool CallFunc_IsFalling_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue9, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FTransform& K2Node_CustomEvent_StartTrans, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, bool K2Node_Event_IsPressed6, const struct FTransform& CallFunc_SelectTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5, class AOuterCharacter_C* CallFunc_FinishSpawningActor_ReturnValue5, bool CallFunc_MakeLiteralBool_ReturnValue3, bool CallFunc_SwitchRisePressed_ReturnValue2, bool CallFunc_CanActInputActionBP_Result1, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result3, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result4, const struct FTransform& CallFunc_GetControllerPlayerBaseCampArsenalPos_ReturnValue, bool CallFunc_IsInSession_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue10, class AArsenalCharacter_C* CallFunc_FinishSpawningActor_ReturnValue6, bool CallFunc_MakeLiteralBool_ReturnValue4, class AController* CallFunc_GetController_ReturnValue, bool K2Node_Event_IsPressed5, bool K2Node_Event_IsPressed4, int32 K2Node_Event_Type, float K2Node_Event_Duration, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_Event_IsPressed3, bool CallFunc_CanCatchMovement_ReturnValue, bool CallFunc_BooleanAND_ReturnValue11, bool K2Node_Event_IsPressed2, bool K2Node_Event_IsPressed1, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State1, bool K2Node_DynamicCast_bSuccess10, const struct FTransform& CallFunc_GetEmptyBaseCampPlayerStartTransform_ReturnValue, class APawn* K2Node_Event_ControlledCharacter, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess11, bool CallFunc_IsHandWeaponAutoMode_ReturnValue, bool CallFunc_IsHandWeaponAutoMode_ReturnValue1, bool CallFunc_IsOuter_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue41, class UTTLGameInstance* K2Node_DynamicCast_AsTTLGame_Instance, bool K2Node_DynamicCast_bSuccess12, const struct FTTLArsenalPartsInfoList& CallFunc_TryGetPrevArsenalPartsInfo_partsInfo, const struct FTTLArsenalPaintInfo& CallFunc_TryGetPrevArsenalPartsInfo_paintInfo, bool CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue, bool CallFunc_IsCurrentMissionContinuos_ReturnValue, class AArsenalController_C* K2Node_CustomEvent_Controller1, const struct FTTLArsenalPartsInfoList& K2Node_CustomEvent_PartsList1, TArray<class FName>& K2Node_CustomEvent_SkillList1, const struct FTTLArsenalPaintInfo& K2Node_CustomEvent_PaintInfo1, enum class ETTLECharacterCommonSpawnType K2Node_CustomEvent_SpawnType1, enum class ETTLEHumanGenderType K2Node_CustomEvent_HumanGenderType1, const struct FTTLHumanCustomPartsInfo& K2Node_CustomEvent_HumanCustomPartsInfo1, bool K2Node_CustomEvent_IsJoinRoomFromFriendList1, class FName K2Node_CustomEvent_VoiceCharaID1, class AArsenalController_C* K2Node_CustomEvent_Controller, const struct FTTLArsenalPartsInfoList& K2Node_CustomEvent_PartsList, TArray<class FName>& K2Node_CustomEvent_SkillList, const struct FTTLArsenalPaintInfo& K2Node_CustomEvent_PaintInfo, enum class ETTLECharacterCommonSpawnType K2Node_CustomEvent_SpawnType, enum class ETTLEHumanGenderType K2Node_CustomEvent_HumanGenderType, const struct FTTLHumanCustomPartsInfo& K2Node_CustomEvent_HumanCustomPartsInfo, bool K2Node_CustomEvent_IsJoinRoomFromFriendList, class FName K2Node_CustomEvent_MyNpcId, class FName K2Node_CustomEvent_VoiceCharaID, class ATTLCharacterCommon* CallFunc_SpawnMyNpc_ReturnValue, const struct FTransform& CallFunc_SetUpPlayerStartToMission_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue7, bool CallFunc_CaptureWeapon_InAction_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_TryReadyCatch_result1, bool CallFunc_IsValid_ReturnValue42, bool CallFunc_IsValid_ReturnValue43, bool CallFunc_IsValid_ReturnValue44, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_Event_IsPressed, uint8 CallFunc_MakeLiteralByte_ReturnValue1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue1, uint8 CallFunc_MakeLiteralByte_ReturnValue2, class UTTLGameInstance* K2Node_DynamicCast_AsTTLGame_Instance1, bool K2Node_DynamicCast_bSuccess13, const struct FTTLArsenalPartsInfoList& CallFunc_TryGetPrevArsenalPartsInfo_partsInfo1, const struct FTTLArsenalPaintInfo& CallFunc_TryGetPrevArsenalPartsInfo_paintInfo1, bool CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue1, bool CallFunc_IsCurrentMissionContinuos_ReturnValue1, const struct FTTLArsenalPartsInfoList& CallFunc_TryGetContinuousArsenalInfo_partsInfo, const struct FTTLArsenalPaintInfo& CallFunc_TryGetContinuousArsenalInfo_paintInfo, bool CallFunc_TryGetContinuousArsenalInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue13, bool CallFunc_IsValid_ReturnValue45, bool CallFunc_IsValid_ReturnValue46, class UGameInstance* CallFunc_GetGameInstance_ReturnValue2, class UTTLGameInstance* K2Node_DynamicCast_AsTTLGame_Instance2, bool K2Node_DynamicCast_bSuccess14, enum class ETTLSurvivalSpawnType CallFunc_GetSurvaivalSpawnType_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsPlayerStartExist4_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalController_C", "ExecuteUbergraph_ArsenalController");

	Params::AArsenalController_C_ExecuteUbergraph_ArsenalController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMultiplaySurvivalMision_ReturnValue = CallFunc_IsMultiplaySurvivalMision_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_TryUIHideDetail_ReturnValue = CallFunc_TryUIHideDetail_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Event_IsPressed43 = K2Node_Event_IsPressed43;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Event_IsPressed42 = K2Node_Event_IsPressed42;
	Parms.K2Node_Event_Duration2 = K2Node_Event_Duration2;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_IsPressed41 = K2Node_Event_IsPressed41;
	Parms.K2Node_Event_IsPressed40 = K2Node_Event_IsPressed40;
	Parms.K2Node_Event_IsPressed39 = K2Node_Event_IsPressed39;
	Parms.K2Node_CustomEvent_IsPressed4 = K2Node_CustomEvent_IsPressed4;
	Parms.K2Node_CustomEvent_IsPressed3 = K2Node_CustomEvent_IsPressed3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_CanActInputActionBP_Result = CallFunc_CanActInputActionBP_Result;
	Parms.CallFunc_SetEnableQuickMove_ReturnValue = CallFunc_SetEnableQuickMove_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SetEnableQuickMove_ReturnValue1 = CallFunc_SetEnableQuickMove_ReturnValue1;
	Parms.K2Node_Event_IsPressed38 = K2Node_Event_IsPressed38;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.K2Node_Event_IsPressed37 = K2Node_Event_IsPressed37;
	Parms.K2Node_Event_IsPressed36 = K2Node_Event_IsPressed36;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsPressed35 = K2Node_Event_IsPressed35;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Event_IsPressed34 = K2Node_Event_IsPressed34;
	Parms.CallFunc_IsTMPOverHeat_ReturnValue = CallFunc_IsTMPOverHeat_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.K2Node_CustomEvent_HumanGenderType3 = K2Node_CustomEvent_HumanGenderType3;
	Parms.K2Node_CustomEvent_HumanCustomInfo = K2Node_CustomEvent_HumanCustomInfo;
	Parms.K2Node_CustomEvent_WeaponRemainBits = K2Node_CustomEvent_WeaponRemainBits;
	Parms.K2Node_CustomEvent_FemtoValue = K2Node_CustomEvent_FemtoValue;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue1 = CallFunc_IsLocallyControlled_ReturnValue1;
	Parms.CallFunc_IsChaseAutoRunning_ReturnValue = CallFunc_IsChaseAutoRunning_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character1 = K2Node_DynamicCast_AsArsenal_Character1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetBodyMeshID_ReturnValue = CallFunc_GetBodyMeshID_ReturnValue;
	Parms.CallFunc_GetHatchMeshForGetOnOff_ReturnValue = CallFunc_GetHatchMeshForGetOnOff_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_Event_IsPressed33 = K2Node_Event_IsPressed33;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue2 = CallFunc_IsLocallyControlled_ReturnValue2;
	Parms.CallFunc_TryCancelCatchMotion_Result = CallFunc_TryCancelCatchMotion_Result;
	Parms.CallFunc_TryCancelCatchMotion_EnableOtherAction = CallFunc_TryCancelCatchMotion_EnableOtherAction;
	Parms.CallFunc_GetGameInstance_Result = CallFunc_GetGameInstance_Result;
	Parms.CallFunc_IsValid_ReturnValue16 = CallFunc_IsValid_ReturnValue16;
	Parms.CallFunc_GetCurrentOuterCustomParts_GenderType = CallFunc_GetCurrentOuterCustomParts_GenderType;
	Parms.CallFunc_GetCurrentOuterCustomParts_ReturnValue = CallFunc_GetCurrentOuterCustomParts_ReturnValue;
	Parms.K2Node_Event_IsPressed32 = K2Node_Event_IsPressed32;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetGameInstance_Result1 = CallFunc_GetGameInstance_Result1;
	Parms.CallFunc_IsValid_ReturnValue17 = CallFunc_IsValid_ReturnValue17;
	Parms.CallFunc_GetCurrentOuterCustomParts_GenderType1 = CallFunc_GetCurrentOuterCustomParts_GenderType1;
	Parms.CallFunc_GetCurrentOuterCustomParts_ReturnValue1 = CallFunc_GetCurrentOuterCustomParts_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue18 = CallFunc_IsValid_ReturnValue18;
	Parms.CallFunc_IsValid_ReturnValue19 = CallFunc_IsValid_ReturnValue19;
	Parms.CallFunc_IsEquipModeEnabled_ReturnValue = CallFunc_IsEquipModeEnabled_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue1 = CallFunc_K2_GetActorRotation_ReturnValue1;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_MakeRotator_ReturnValue1 = CallFunc_MakeRotator_ReturnValue1;
	Parms.K2Node_DynamicCast_AsArsenal_Character2 = K2Node_DynamicCast_AsArsenal_Character2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_MakeLiteralBool_ReturnValue1 = CallFunc_MakeLiteralBool_ReturnValue1;
	Parms.CallFunc_GetBodyMeshID_ReturnValue1 = CallFunc_GetBodyMeshID_ReturnValue1;
	Parms.CallFunc_GetHatchMeshForGetOnOff_ReturnValue1 = CallFunc_GetHatchMeshForGetOnOff_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue1 = CallFunc_GetSocketLocation_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue2 = CallFunc_FinishSpawningActor_ReturnValue2;
	Parms.K2Node_CustomEvent_GenderType = K2Node_CustomEvent_GenderType;
	Parms.K2Node_CustomEvent_CustomInfo = K2Node_CustomEvent_CustomInfo;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue20 = CallFunc_IsValid_ReturnValue20;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue21 = CallFunc_IsValid_ReturnValue21;
	Parms.K2Node_Event_Duration1 = K2Node_Event_Duration1;
	Parms.CallFunc_IsValid_ReturnValue22 = CallFunc_IsValid_ReturnValue22;
	Parms.CallFunc_TryStartChangeEquipMode_ReturnValue = CallFunc_TryStartChangeEquipMode_ReturnValue;
	Parms.CallFunc_TryStartChangeEquipMode_ReturnValue1 = CallFunc_TryStartChangeEquipMode_ReturnValue1;
	Parms.CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue = CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue;
	Parms.CallFunc_IsEquipModeEnabled_ReturnValue1 = CallFunc_IsEquipModeEnabled_ReturnValue1;
	Parms.CallFunc_SwitchRisePressed_ReturnValue = CallFunc_SwitchRisePressed_ReturnValue;
	Parms.CallFunc_SwitchRisePressed_ReturnValue1 = CallFunc_SwitchRisePressed_ReturnValue1;
	Parms.CallFunc_IsLocalController_ReturnValue1 = CallFunc_IsLocalController_ReturnValue1;
	Parms.CallFunc_IsKnockBackDamage_ReturnValue = CallFunc_IsKnockBackDamage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue23 = CallFunc_IsValid_ReturnValue23;
	Parms.CallFunc_GetAllWeaponBulletRemainBits_ReturnValue = CallFunc_GetAllWeaponBulletRemainBits_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLPlayer_State = K2Node_DynamicCast_AsTTLPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetRestFemtoValue_ReturnValue = CallFunc_GetRestFemtoValue_ReturnValue;
	Parms.CallFunc_CanGetOffAction_ReturnValue = CallFunc_CanGetOffAction_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;
	Parms.CallFunc_IsLocalController_ReturnValue2 = CallFunc_IsLocalController_ReturnValue2;
	Parms.CallFunc_CanQuickMoveForPlayerController_ReturnValue = CallFunc_CanQuickMoveForPlayerController_ReturnValue;
	Parms.CallFunc_IsSniperModeRestriction_ReturnValue = CallFunc_IsSniperModeRestriction_ReturnValue;
	Parms.CallFunc_CanCancelCloseRangeAttack_ReturnValue = CallFunc_CanCancelCloseRangeAttack_ReturnValue;
	Parms.K2Node_CustomEvent_Pressed1 = K2Node_CustomEvent_Pressed1;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_IsLocalController_ReturnValue3 = CallFunc_IsLocalController_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue24 = CallFunc_IsValid_ReturnValue24;
	Parms.CallFunc_IsValid_ReturnValue25 = CallFunc_IsValid_ReturnValue25;
	Parms.CallFunc_IsInMissionPlay_ReturnValue = CallFunc_IsInMissionPlay_ReturnValue;
	Parms.CallFunc_GetOuterStorageInfoBP_outInfo = CallFunc_GetOuterStorageInfoBP_outInfo;
	Parms.CallFunc_GetOuterStorageInfoBP_outInfo1 = CallFunc_GetOuterStorageInfoBP_outInfo1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue26 = CallFunc_IsValid_ReturnValue26;
	Parms.CallFunc_IsValid_ReturnValue27 = CallFunc_IsValid_ReturnValue27;
	Parms.CallFunc_IsValid_ReturnValue28 = CallFunc_IsValid_ReturnValue28;
	Parms.CallFunc_IsValid_ReturnValue29 = CallFunc_IsValid_ReturnValue29;
	Parms.CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue1 = CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue1;
	Parms.CallFunc_IsEquipModeEnabled_ReturnValue2 = CallFunc_IsEquipModeEnabled_ReturnValue2;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_TryStartAim_isStartAim = CallFunc_TryStartAim_isStartAim;
	Parms.CallFunc_IsReload_Result = CallFunc_IsReload_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsReload_Result1 = CallFunc_IsReload_Result1;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.K2Node_CustomEvent_TargetArsenal1 = K2Node_CustomEvent_TargetArsenal1;
	Parms.K2Node_CustomEvent_OuterChara = K2Node_CustomEvent_OuterChara;
	Parms.CallFunc_BooleanAND_ReturnValue7 = CallFunc_BooleanAND_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue8 = CallFunc_BooleanAND_ReturnValue8;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue2 = CallFunc_K2_GetActorRotation_ReturnValue2;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue1 = CallFunc_K2_SetActorRotation_ReturnValue1;
	Parms.CallFunc_TryStartCatchActor_isSuccess = CallFunc_TryStartCatchActor_isSuccess;
	Parms.CallFunc_TryReadyCatch_result = CallFunc_TryReadyCatch_result;
	Parms.CallFunc_CheckIsInBaseCamp_ReturnValue = CallFunc_CheckIsInBaseCamp_ReturnValue;
	Parms.CallFunc_SpawnMirage_SuccessMirage = CallFunc_SpawnMirage_SuccessMirage;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.K2Node_Event_IsPressed31 = K2Node_Event_IsPressed31;
	Parms.CallFunc_HasAuthority_ReturnValue5 = CallFunc_HasAuthority_ReturnValue5;
	Parms.CallFunc_IsCanUseFemto_ReturnValue = CallFunc_IsCanUseFemto_ReturnValue;
	Parms.CallFunc_ProcessMirageInput_ReturnValue = CallFunc_ProcessMirageInput_ReturnValue;
	Parms.CallFunc_IsCanUseFemto_ReturnValue1 = CallFunc_IsCanUseFemto_ReturnValue1;
	Parms.CallFunc_TryAddTsubazeriaiScore_ReturnValue = CallFunc_TryAddTsubazeriaiScore_ReturnValue;
	Parms.CallFunc_IsRespawningTarget_ReturnValue = CallFunc_IsRespawningTarget_ReturnValue;
	Parms.CallFunc_TryStartRespawnTarget_ReturnValue = CallFunc_TryStartRespawnTarget_ReturnValue;
	Parms.CallFunc_TryPickUpParts_ReturnValue = CallFunc_TryPickUpParts_ReturnValue;
	Parms.K2Node_CustomEvent_Pressed = K2Node_CustomEvent_Pressed;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLGame_State = K2Node_DynamicCast_AsTTLGame_State;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_Event_IsPressed30 = K2Node_Event_IsPressed30;
	Parms.K2Node_Event_IsPressed29 = K2Node_Event_IsPressed29;
	Parms.K2Node_Event_IsPressed28 = K2Node_Event_IsPressed28;
	Parms.K2Node_Event_IsPressed27 = K2Node_Event_IsPressed27;
	Parms.K2Node_Event_IsPressed26 = K2Node_Event_IsPressed26;
	Parms.K2Node_Event_IsPressed25 = K2Node_Event_IsPressed25;
	Parms.K2Node_Event_IsPressed24 = K2Node_Event_IsPressed24;
	Parms.K2Node_Event_IsPressed23 = K2Node_Event_IsPressed23;
	Parms.K2Node_Event_IsPressed22 = K2Node_Event_IsPressed22;
	Parms.K2Node_Event_IsPressed21 = K2Node_Event_IsPressed21;
	Parms.K2Node_Event_IsPressed20 = K2Node_Event_IsPressed20;
	Parms.CallFunc_SendArmAttackToServer_SendPacket = CallFunc_SendArmAttackToServer_SendPacket;
	Parms.K2Node_Event_IsPressed19 = K2Node_Event_IsPressed19;
	Parms.K2Node_Event_IsPressed18 = K2Node_Event_IsPressed18;
	Parms.CallFunc_SendArmAttackToServer_SendPacket1 = CallFunc_SendArmAttackToServer_SendPacket1;
	Parms.K2Node_Event_IsPressed17 = K2Node_Event_IsPressed17;
	Parms.K2Node_Event_IsPressed16 = K2Node_Event_IsPressed16;
	Parms.K2Node_CustomEvent_TargetArsenal = K2Node_CustomEvent_TargetArsenal;
	Parms.CallFunc_IsValid_ReturnValue30 = CallFunc_IsValid_ReturnValue30;
	Parms.CallFunc_IsValid_ReturnValue31 = CallFunc_IsValid_ReturnValue31;
	Parms.CallFunc_IsValid_ReturnValue32 = CallFunc_IsValid_ReturnValue32;
	Parms.K2Node_CustomEvent_IsPressed2 = K2Node_CustomEvent_IsPressed2;
	Parms.K2Node_CustomEvent_IsPressed1 = K2Node_CustomEvent_IsPressed1;
	Parms.K2Node_CustomEvent_IsPressed = K2Node_CustomEvent_IsPressed;
	Parms.CallFunc_FindGetOnArsenalCharacter_GetOnArsenalCharacter = CallFunc_FindGetOnArsenalCharacter_GetOnArsenalCharacter;
	Parms.CallFunc_IsValid_ReturnValue33 = CallFunc_IsValid_ReturnValue33;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.CallFunc_CanChangeSniperMode_ReturnValue = CallFunc_CanChangeSniperMode_ReturnValue;
	Parms.CallFunc_CaptureWeapon_InAction_ReturnValue = CallFunc_CaptureWeapon_InAction_ReturnValue;
	Parms.K2Node_Event_IsPressed15 = K2Node_Event_IsPressed15;
	Parms.CallFunc_OpenPauseMenu_ReturnValue = CallFunc_OpenPauseMenu_ReturnValue;
	Parms.CallFunc_CheckIsInBaseCamp_ReturnValue1 = CallFunc_CheckIsInBaseCamp_ReturnValue1;
	Parms.K2Node_Event_IsPressed14 = K2Node_Event_IsPressed14;
	Parms.CallFunc_IsValid_ReturnValue34 = CallFunc_IsValid_ReturnValue34;
	Parms.CallFunc_IsValid_ReturnValue35 = CallFunc_IsValid_ReturnValue35;
	Parms.K2Node_Event_IsPressed13 = K2Node_Event_IsPressed13;
	Parms.K2Node_Event_IsPressed12 = K2Node_Event_IsPressed12;
	Parms.K2Node_Event_IsPressed11 = K2Node_Event_IsPressed11;
	Parms.CallFunc_IsCatchingGrenadeCPP_ReturnValue = CallFunc_IsCatchingGrenadeCPP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue36 = CallFunc_IsValid_ReturnValue36;
	Parms.CallFunc_GetGameInstance_Result2 = CallFunc_GetGameInstance_Result2;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.K2Node_Event_IsPressed10 = K2Node_Event_IsPressed10;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_IsPressed9 = K2Node_Event_IsPressed9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3;
	Parms.K2Node_Event_AxisValue1 = K2Node_Event_AxisValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue3 = CallFunc_FinishSpawningActor_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTTLPause_Menu_Base = K2Node_DynamicCast_AsTTLPause_Menu_Base;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_Event_AxisValue = K2Node_Event_AxisValue;
	Parms.CallFunc_HasAuthority_ReturnValue6 = CallFunc_HasAuthority_ReturnValue6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.K2Node_CustomEvent_PartsList3 = K2Node_CustomEvent_PartsList3;
	Parms.K2Node_CustomEvent_SkillList3 = K2Node_CustomEvent_SkillList3;
	Parms.K2Node_CustomEvent_PaintInfo3 = K2Node_CustomEvent_PaintInfo3;
	Parms.K2Node_CustomEvent_SpawnType3 = K2Node_CustomEvent_SpawnType3;
	Parms.K2Node_CustomEvent_Controller3 = K2Node_CustomEvent_Controller3;
	Parms.K2Node_Event_IsPressed8 = K2Node_Event_IsPressed8;
	Parms.K2Node_CustomEvent_Controller2 = K2Node_CustomEvent_Controller2;
	Parms.K2Node_CustomEvent_PartsList2 = K2Node_CustomEvent_PartsList2;
	Parms.K2Node_CustomEvent_SkillList2 = K2Node_CustomEvent_SkillList2;
	Parms.K2Node_CustomEvent_PaintInfo2 = K2Node_CustomEvent_PaintInfo2;
	Parms.K2Node_CustomEvent_SpawnType2 = K2Node_CustomEvent_SpawnType2;
	Parms.K2Node_CustomEvent_HumanGenderType2 = K2Node_CustomEvent_HumanGenderType2;
	Parms.K2Node_CustomEvent_HumanCustomPartsInfo2 = K2Node_CustomEvent_HumanCustomPartsInfo2;
	Parms.K2Node_CustomEvent_IsJoinRoomFromFriendList2 = K2Node_CustomEvent_IsJoinRoomFromFriendList2;
	Parms.K2Node_CustomEvent_VoiceCharaID2 = K2Node_CustomEvent_VoiceCharaID2;
	Parms.CallFunc_MakeTransform_ReturnValue4 = CallFunc_MakeTransform_ReturnValue4;
	Parms.CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue = CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4;
	Parms.CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue1 = CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue4 = CallFunc_FinishSpawningActor_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetEnableBoost_ReturnValue = CallFunc_SetEnableBoost_ReturnValue;
	Parms.CallFunc_SetEnableFlying_ReturnValue = CallFunc_SetEnableFlying_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_ChangePartsInfoListForMissionInfo_ReturnValue = CallFunc_ChangePartsInfoListForMissionInfo_ReturnValue;
	Parms.CallFunc_ChangePartsInfoListNoWeapon_ReturnValue = CallFunc_ChangePartsInfoListNoWeapon_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue2 = CallFunc_MakeLiteralBool_ReturnValue2;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsArsenal_Character3 = K2Node_DynamicCast_AsArsenal_Character3;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_Event_IsPressed7 = K2Node_Event_IsPressed7;
	Parms.K2Node_DynamicCast_AsOuter_Character1 = K2Node_DynamicCast_AsOuter_Character1;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsOuter_Character2 = K2Node_DynamicCast_AsOuter_Character2;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_IsValid_ReturnValue37 = CallFunc_IsValid_ReturnValue37;
	Parms.CallFunc_HasAuthority_ReturnValue7 = CallFunc_HasAuthority_ReturnValue7;
	Parms.CallFunc_IsCatchingGrenadeCPP_ReturnValue1 = CallFunc_IsCatchingGrenadeCPP_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue38 = CallFunc_IsValid_ReturnValue38;
	Parms.CallFunc_IsValid_ReturnValue39 = CallFunc_IsValid_ReturnValue39;
	Parms.CallFunc_GetMissionPlayerStartType_ReturnValue = CallFunc_GetMissionPlayerStartType_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue4 = CallFunc_IsLocalController_ReturnValue4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue40 = CallFunc_IsValid_ReturnValue40;
	Parms.CallFunc_CanConsumeStamina_ReturnValue = CallFunc_CanConsumeStamina_ReturnValue;
	Parms.CallFunc_SetEnableQuickMove_ReturnValue2 = CallFunc_SetEnableQuickMove_ReturnValue2;
	Parms.CallFunc_SetEnableQuickMove_ReturnValue3 = CallFunc_SetEnableQuickMove_ReturnValue3;
	Parms.CallFunc_GetActorForwardVector_ReturnValue1 = CallFunc_GetActorForwardVector_ReturnValue1;
	Parms.CallFunc_IsFalling_ReturnValue1 = CallFunc_IsFalling_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue6 = CallFunc_Not_PreBool_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue9 = CallFunc_BooleanAND_ReturnValue9;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.K2Node_CustomEvent_StartTrans = K2Node_CustomEvent_StartTrans;
	Parms.CallFunc_BreakRotator_Roll2 = CallFunc_BreakRotator_Roll2;
	Parms.CallFunc_BreakRotator_Pitch2 = CallFunc_BreakRotator_Pitch2;
	Parms.CallFunc_BreakRotator_Yaw2 = CallFunc_BreakRotator_Yaw2;
	Parms.CallFunc_MakeRotator_ReturnValue2 = CallFunc_MakeRotator_ReturnValue2;
	Parms.K2Node_Event_IsPressed6 = K2Node_Event_IsPressed6;
	Parms.CallFunc_SelectTransform_ReturnValue = CallFunc_SelectTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue5 = CallFunc_FinishSpawningActor_ReturnValue5;
	Parms.CallFunc_MakeLiteralBool_ReturnValue3 = CallFunc_MakeLiteralBool_ReturnValue3;
	Parms.CallFunc_SwitchRisePressed_ReturnValue2 = CallFunc_SwitchRisePressed_ReturnValue2;
	Parms.CallFunc_CanActInputActionBP_Result1 = CallFunc_CanActInputActionBP_Result1;
	Parms.CallFunc_GetGameInstance_Result3 = CallFunc_GetGameInstance_Result3;
	Parms.CallFunc_GetGameInstance_Result4 = CallFunc_GetGameInstance_Result4;
	Parms.CallFunc_GetControllerPlayerBaseCampArsenalPos_ReturnValue = CallFunc_GetControllerPlayerBaseCampArsenalPos_ReturnValue;
	Parms.CallFunc_IsInSession_ReturnValue = CallFunc_IsInSession_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue10 = CallFunc_BooleanAND_ReturnValue10;
	Parms.CallFunc_FinishSpawningActor_ReturnValue6 = CallFunc_FinishSpawningActor_ReturnValue6;
	Parms.CallFunc_MakeLiteralBool_ReturnValue4 = CallFunc_MakeLiteralBool_ReturnValue4;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_Event_IsPressed5 = K2Node_Event_IsPressed5;
	Parms.K2Node_Event_IsPressed4 = K2Node_Event_IsPressed4;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Event_IsPressed3 = K2Node_Event_IsPressed3;
	Parms.CallFunc_CanCatchMovement_ReturnValue = CallFunc_CanCatchMovement_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue11 = CallFunc_BooleanAND_ReturnValue11;
	Parms.K2Node_Event_IsPressed2 = K2Node_Event_IsPressed2;
	Parms.K2Node_Event_IsPressed1 = K2Node_Event_IsPressed1;
	Parms.CallFunc_GetGameState_ReturnValue1 = CallFunc_GetGameState_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTTLGame_State1 = K2Node_DynamicCast_AsTTLGame_State1;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.CallFunc_GetEmptyBaseCampPlayerStartTransform_ReturnValue = CallFunc_GetEmptyBaseCampPlayerStartTransform_ReturnValue;
	Parms.K2Node_Event_ControlledCharacter = K2Node_Event_ControlledCharacter;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.CallFunc_IsHandWeaponAutoMode_ReturnValue = CallFunc_IsHandWeaponAutoMode_ReturnValue;
	Parms.CallFunc_IsHandWeaponAutoMode_ReturnValue1 = CallFunc_IsHandWeaponAutoMode_ReturnValue1;
	Parms.CallFunc_IsOuter_ReturnValue = CallFunc_IsOuter_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue41 = CallFunc_IsValid_ReturnValue41;
	Parms.K2Node_DynamicCast_AsTTLGame_Instance = K2Node_DynamicCast_AsTTLGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_TryGetPrevArsenalPartsInfo_partsInfo = CallFunc_TryGetPrevArsenalPartsInfo_partsInfo;
	Parms.CallFunc_TryGetPrevArsenalPartsInfo_paintInfo = CallFunc_TryGetPrevArsenalPartsInfo_paintInfo;
	Parms.CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue = CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue;
	Parms.CallFunc_IsCurrentMissionContinuos_ReturnValue = CallFunc_IsCurrentMissionContinuos_ReturnValue;
	Parms.K2Node_CustomEvent_Controller1 = K2Node_CustomEvent_Controller1;
	Parms.K2Node_CustomEvent_PartsList1 = K2Node_CustomEvent_PartsList1;
	Parms.K2Node_CustomEvent_SkillList1 = K2Node_CustomEvent_SkillList1;
	Parms.K2Node_CustomEvent_PaintInfo1 = K2Node_CustomEvent_PaintInfo1;
	Parms.K2Node_CustomEvent_SpawnType1 = K2Node_CustomEvent_SpawnType1;
	Parms.K2Node_CustomEvent_HumanGenderType1 = K2Node_CustomEvent_HumanGenderType1;
	Parms.K2Node_CustomEvent_HumanCustomPartsInfo1 = K2Node_CustomEvent_HumanCustomPartsInfo1;
	Parms.K2Node_CustomEvent_IsJoinRoomFromFriendList1 = K2Node_CustomEvent_IsJoinRoomFromFriendList1;
	Parms.K2Node_CustomEvent_VoiceCharaID1 = K2Node_CustomEvent_VoiceCharaID1;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.K2Node_CustomEvent_PartsList = K2Node_CustomEvent_PartsList;
	Parms.K2Node_CustomEvent_SkillList = K2Node_CustomEvent_SkillList;
	Parms.K2Node_CustomEvent_PaintInfo = K2Node_CustomEvent_PaintInfo;
	Parms.K2Node_CustomEvent_SpawnType = K2Node_CustomEvent_SpawnType;
	Parms.K2Node_CustomEvent_HumanGenderType = K2Node_CustomEvent_HumanGenderType;
	Parms.K2Node_CustomEvent_HumanCustomPartsInfo = K2Node_CustomEvent_HumanCustomPartsInfo;
	Parms.K2Node_CustomEvent_IsJoinRoomFromFriendList = K2Node_CustomEvent_IsJoinRoomFromFriendList;
	Parms.K2Node_CustomEvent_MyNpcId = K2Node_CustomEvent_MyNpcId;
	Parms.K2Node_CustomEvent_VoiceCharaID = K2Node_CustomEvent_VoiceCharaID;
	Parms.CallFunc_SpawnMyNpc_ReturnValue = CallFunc_SpawnMyNpc_ReturnValue;
	Parms.CallFunc_SetUpPlayerStartToMission_ReturnValue = CallFunc_SetUpPlayerStartToMission_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue7 = CallFunc_Not_PreBool_ReturnValue7;
	Parms.CallFunc_CaptureWeapon_InAction_ReturnValue1 = CallFunc_CaptureWeapon_InAction_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;
	Parms.CallFunc_TryReadyCatch_result1 = CallFunc_TryReadyCatch_result1;
	Parms.CallFunc_IsValid_ReturnValue42 = CallFunc_IsValid_ReturnValue42;
	Parms.CallFunc_IsValid_ReturnValue43 = CallFunc_IsValid_ReturnValue43;
	Parms.CallFunc_IsValid_ReturnValue44 = CallFunc_IsValid_ReturnValue44;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_Event_IsPressed = K2Node_Event_IsPressed;
	Parms.CallFunc_MakeLiteralByte_ReturnValue1 = CallFunc_MakeLiteralByte_ReturnValue1;
	Parms.CallFunc_GetGameInstance_ReturnValue1 = CallFunc_GetGameInstance_ReturnValue1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue2 = CallFunc_MakeLiteralByte_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTTLGame_Instance1 = K2Node_DynamicCast_AsTTLGame_Instance1;
	Parms.K2Node_DynamicCast_bSuccess13 = K2Node_DynamicCast_bSuccess13;
	Parms.CallFunc_TryGetPrevArsenalPartsInfo_partsInfo1 = CallFunc_TryGetPrevArsenalPartsInfo_partsInfo1;
	Parms.CallFunc_TryGetPrevArsenalPartsInfo_paintInfo1 = CallFunc_TryGetPrevArsenalPartsInfo_paintInfo1;
	Parms.CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue1 = CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue1;
	Parms.CallFunc_IsCurrentMissionContinuos_ReturnValue1 = CallFunc_IsCurrentMissionContinuos_ReturnValue1;
	Parms.CallFunc_TryGetContinuousArsenalInfo_partsInfo = CallFunc_TryGetContinuousArsenalInfo_partsInfo;
	Parms.CallFunc_TryGetContinuousArsenalInfo_paintInfo = CallFunc_TryGetContinuousArsenalInfo_paintInfo;
	Parms.CallFunc_TryGetContinuousArsenalInfo_ReturnValue = CallFunc_TryGetContinuousArsenalInfo_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue13 = CallFunc_BooleanAND_ReturnValue13;
	Parms.CallFunc_IsValid_ReturnValue45 = CallFunc_IsValid_ReturnValue45;
	Parms.CallFunc_IsValid_ReturnValue46 = CallFunc_IsValid_ReturnValue46;
	Parms.CallFunc_GetGameInstance_ReturnValue2 = CallFunc_GetGameInstance_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTTLGame_Instance2 = K2Node_DynamicCast_AsTTLGame_Instance2;
	Parms.K2Node_DynamicCast_bSuccess14 = K2Node_DynamicCast_bSuccess14;
	Parms.CallFunc_GetSurvaivalSpawnType_ReturnValue = CallFunc_GetSurvaivalSpawnType_ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_IsPlayerStartExist4_ReturnValue = CallFunc_IsPlayerStartExist4_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


