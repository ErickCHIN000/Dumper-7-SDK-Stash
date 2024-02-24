#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C
// (None)

class UClass* UArsenalRaderHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalRaderHUDComponent_C");

	return Clss;
}


// ArsenalRaderHUDComponent_C ArsenalRaderHUDComponent.Default__ArsenalRaderHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalRaderHUDComponent_C* UArsenalRaderHUDComponent_C::GetDefaultObj()
{
	static class UArsenalRaderHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalRaderHUDComponent_C*>(UArsenalRaderHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.IsExistRaderTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsExist                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindRaderInfo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalRaderHUDComponent_C::IsExistRaderTarget(class AActor* TargetActor, bool* IsExist, int32 CallFunc_FindRaderInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "IsExistRaderTarget");

	Params::UArsenalRaderHUDComponent_C_IsExistRaderTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_FindRaderInfo_ReturnValue = CallFunc_FindRaderInfo_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;

}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.AddTo3DDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalDirectionMarker_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLRader3DInfo             K2Node_MakeStruct_TTLRader3DInfo                                 (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalRaderHUDComponent_C::AddTo3DDirection(class UClass* Class, class AActor* TargetActor, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AArsenalDirectionMarker_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTTLRader3DInfo& K2Node_MakeStruct_TTLRader3DInfo, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "AddTo3DDirection");

	Params::UArsenalRaderHUDComponent_C_AddTo3DDirection_Params Parms{};

	Parms.Class = Class;
	Parms.TargetActor = TargetActor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_MakeStruct_TTLRader3DInfo = K2Node_MakeStruct_TTLRader3DInfo;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.AddToDirectionBPMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckLocallyAndPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindRader3DInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalRaderHUDComponent_C::AddToDirectionBPMain(class AActor* Actor, bool CheckLocallyAndPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FindRader3DInfo_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "AddToDirectionBPMain");

	Params::UArsenalRaderHUDComponent_C_AddToDirectionBPMain_Params Parms{};

	Parms.Actor = Actor;
	Parms.CheckLocallyAndPlayer = CheckLocallyAndPlayer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindRader3DInfo_ReturnValue = CallFunc_FindRader3DInfo_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.RemoveWidgetFromHUDMission
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalRaderHUDComponent_C::RemoveWidgetFromHUDMission(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "RemoveWidgetFromHUDMission");

	Params::UArsenalRaderHUDComponent_C_RemoveWidgetFromHUDMission_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.AddWidgetToHUDMissionBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalRaderHUDComponent_C::AddWidgetToHUDMissionBP(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "AddWidgetToHUDMissionBP");

	Params::UArsenalRaderHUDComponent_C_AddWidgetToHUDMissionBP_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.AddHighlightBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckLocallyAndPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalRaderHUDComponent_C::AddHighlightBP(class AActor* TargetActor, bool CheckLocallyAndPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "AddHighlightBP");

	Params::UArsenalRaderHUDComponent_C_AddHighlightBP_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CheckLocallyAndPlayer = CheckLocallyAndPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C.ExecuteUbergraph_ArsenalRaderHUDComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_targetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_checkLocallyAndPlayer                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUDMission_C*               K2Node_DynamicCast_AsHUDMission                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUDMission_C*               K2Node_DynamicCast_AsHUDMission1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_userWidget                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalRaderHUDComponent_C::ExecuteUbergraph_ArsenalRaderHUDComponent(int32 EntryPoint, class AActor* K2Node_Event_targetActor, bool K2Node_Event_checkLocallyAndPlayer, class UUserWidget* K2Node_Event_Widget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess, class AHUD* CallFunc_GetHUD_ReturnValue1, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission1, bool K2Node_DynamicCast_bSuccess1, class UUserWidget* K2Node_Event_userWidget, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalRaderHUDComponent_C", "ExecuteUbergraph_ArsenalRaderHUDComponent");

	Params::UArsenalRaderHUDComponent_C_ExecuteUbergraph_ArsenalRaderHUDComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_targetActor = K2Node_Event_targetActor;
	Parms.K2Node_Event_checkLocallyAndPlayer = K2Node_Event_checkLocallyAndPlayer;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUDMission = K2Node_DynamicCast_AsHUDMission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHUD_ReturnValue1 = CallFunc_GetHUD_ReturnValue1;
	Parms.K2Node_DynamicCast_AsHUDMission1 = K2Node_DynamicCast_AsHUDMission1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_userWidget = K2Node_Event_userWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


