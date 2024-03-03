#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MovementAction_NotifyState.MovementAction_NotifyState_C
// (None)

class UClass* UMovementAction_NotifyState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovementAction_NotifyState_C");

	return Clss;
}


// MovementAction_NotifyState_C MovementAction_NotifyState.Default__MovementAction_NotifyState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMovementAction_NotifyState_C* UMovementAction_NotifyState_C::GetDefaultObj()
{
	static class UMovementAction_NotifyState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovementAction_NotifyState_C*>(UMovementAction_NotifyState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MovementAction_NotifyState.MovementAction_NotifyState_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

class FString UMovementAction_NotifyState_C::GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementAction_NotifyState_C", "GetNotifyName");

	Params::UMovementAction_NotifyState_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MovementAction_NotifyState.MovementAction_NotifyState_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           CallFunc_BPI_Get_CurrentStates_PawnMovementMode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_MovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_PrevMovementState                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementAction     CallFunc_BPI_Get_CurrentStates_MovementAction                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_RotationMode       CallFunc_BPI_Get_CurrentStates_RotationMode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Gait               CallFunc_BPI_Get_CurrentStates_ActualGait                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Stance             CallFunc_BPI_Get_CurrentStates_ActualStance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_ViewMode           CallFunc_BPI_Get_CurrentStates_ViewMode                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_OverlayState       CallFunc_BPI_Get_CurrentStates_OverlayState                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMovementAction_NotifyState_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_1, bool K2Node_DynamicCast_bSuccess_1, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementAction_NotifyState_C", "Received_NotifyEnd");

	Params::UMovementAction_NotifyState_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI = K2Node_DynamicCast_AsALS_Character_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI_1 = K2Node_DynamicCast_AsALS_Character_BPI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BPI_Get_CurrentStates_PawnMovementMode = CallFunc_BPI_Get_CurrentStates_PawnMovementMode;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementState = CallFunc_BPI_Get_CurrentStates_MovementState;
	Parms.CallFunc_BPI_Get_CurrentStates_PrevMovementState = CallFunc_BPI_Get_CurrentStates_PrevMovementState;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementAction = CallFunc_BPI_Get_CurrentStates_MovementAction;
	Parms.CallFunc_BPI_Get_CurrentStates_RotationMode = CallFunc_BPI_Get_CurrentStates_RotationMode;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualGait = CallFunc_BPI_Get_CurrentStates_ActualGait;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualStance = CallFunc_BPI_Get_CurrentStates_ActualStance;
	Parms.CallFunc_BPI_Get_CurrentStates_ViewMode = CallFunc_BPI_Get_CurrentStates_ViewMode;
	Parms.CallFunc_BPI_Get_CurrentStates_OverlayState = CallFunc_BPI_Get_CurrentStates_OverlayState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MovementAction_NotifyState.MovementAction_NotifyState_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMovementAction_NotifyState_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementAction_NotifyState_C", "Received_NotifyBegin");

	Params::UMovementAction_NotifyState_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI = K2Node_DynamicCast_AsALS_Character_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


