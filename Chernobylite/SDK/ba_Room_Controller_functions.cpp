#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_Room_Controller.ba_Room_Controller_C
// (Actor)

class UClass* Aba_Room_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_Room_Controller_C");

	return Clss;
}


// ba_Room_Controller_C ba_Room_Controller.Default__ba_Room_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_Room_Controller_C* Aba_Room_Controller_C::GetDefaultObj()
{
	static class Aba_Room_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_Room_Controller_C*>(Aba_Room_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_Room_Controller.ba_Room_Controller_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_Room_Controller_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "GetObjectsToSave");

	Params::Aba_Room_Controller_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_Room_Controller.ba_Room_Controller_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_Room_Controller_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "HasObjectsToSave");

	Params::Aba_Room_Controller_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_Room_Controller.ba_Room_Controller_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_Room_Controller_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_Room_Controller_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_Room_Controller.ba_Room_Controller_C.MaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_Room_Controller_C::MaxInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "MaxInteractionDistance");

	Params::Aba_Room_Controller_C_MaxInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_Room_Controller.ba_Room_Controller_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InNewActive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_Room_Controller_C::SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "SetActive");

	Params::Aba_Room_Controller_C_SetActive_Params Parms{};

	Parms.InNewActive = InNewActive;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.OnPlayerFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_Controller_C::OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "OnPlayerFocusGainedComponent");

	Params::Aba_Room_Controller_C_OnPlayerFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.OnPlayerFocusLostComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_Controller_C::OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "OnPlayerFocusLostComponent");

	Params::Aba_Room_Controller_C_OnPlayerFocusLostComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_Controller_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "OnInteractionPressedComponent");

	Params::Aba_Room_Controller_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.InternalOnInteractionLockedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::InternalOnInteractionLockedStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "InternalOnInteractionLockedStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.Delete Room
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RoomID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_Controller_C::Delete_Room(class FName RoomID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "Delete Room");

	Params::Aba_Room_Controller_C_Delete_Room_Params Parms{};

	Parms.RoomID = RoomID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.Add New Room
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RoomID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      SkillTree                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_RoomWidgetController_C*>Controllers                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        RoomDataKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoomDescKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_Controller_C::Add_New_Room(class FName RoomID, class UClass* SkillTree, TArray<class Abp_RoomWidgetController_C*>& Controllers, class FName RoomDataKey, class FName RoomDescKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "Add New Room");

	Params::Aba_Room_Controller_C_Add_New_Room_Params Parms{};

	Parms.RoomID = RoomID;
	Parms.SkillTree = SkillTree;
	Parms.Controllers = Controllers;
	Parms.RoomDataKey = RoomDataKey;
	Parms.RoomDescKey = RoomDescKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.RefreshDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::RefreshDoors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "RefreshDoors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.Hide Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::Hide_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "Hide Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.Show Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::Show_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "Show Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.TutorialEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::TutorialEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "TutorialEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.ExecuteUbergraph_ba_Room_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_RoomID_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_RoomID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_SkillTree                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_RoomWidgetController_C*>K2Node_CustomEvent_Controllers                                   (ConstParm, ReferenceParm)
// class FName                        K2Node_CustomEvent_RoomDataKey                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_RoomDescKey                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveValidLevel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_Controller_C::ExecuteUbergraph_ba_Room_Controller(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class FName K2Node_CustomEvent_RoomID_1, class FName K2Node_CustomEvent_RoomID, class UClass* K2Node_CustomEvent_SkillTree, TArray<class Abp_RoomWidgetController_C*>& K2Node_CustomEvent_Controllers, class FName K2Node_CustomEvent_RoomDataKey, class FName K2Node_CustomEvent_RoomDescKey, bool CallFunc_HaveValidLevel_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "ExecuteUbergraph_ba_Room_Controller");

	Params::Aba_Room_Controller_C_ExecuteUbergraph_ba_Room_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_PlayerPawn_2 = K2Node_Event_PlayerPawn_2;
	Parms.K2Node_Event_ComponentHit_2 = K2Node_Event_ComponentHit_2;
	Parms.K2Node_Event_PlayerPawn_1 = K2Node_Event_PlayerPawn_1;
	Parms.K2Node_Event_ComponentHit_1 = K2Node_Event_ComponentHit_1;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.K2Node_CustomEvent_RoomID_1 = K2Node_CustomEvent_RoomID_1;
	Parms.K2Node_CustomEvent_RoomID = K2Node_CustomEvent_RoomID;
	Parms.K2Node_CustomEvent_SkillTree = K2Node_CustomEvent_SkillTree;
	Parms.K2Node_CustomEvent_Controllers = K2Node_CustomEvent_Controllers;
	Parms.K2Node_CustomEvent_RoomDataKey = K2Node_CustomEvent_RoomDataKey;
	Parms.K2Node_CustomEvent_RoomDescKey = K2Node_CustomEvent_RoomDescKey;
	Parms.CallFunc_HaveValidLevel_ReturnValue = CallFunc_HaveValidLevel_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_Controller.ba_Room_Controller_C.OnShowTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::OnShowTutorial__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "OnShowTutorial__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.OnRoomBuild__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::OnRoomBuild__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "OnRoomBuild__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_Controller.ba_Room_Controller_C.OnInteractionWith__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_Controller_C::OnInteractionWith__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_Controller_C", "OnInteractionWith__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


