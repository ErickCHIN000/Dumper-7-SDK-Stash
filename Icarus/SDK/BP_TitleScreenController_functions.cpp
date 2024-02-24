#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TitleScreenController.BP_TitleScreenController_C
// (Actor, PlayerController)

class UClass* ABP_TitleScreenController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TitleScreenController_C");

	return Clss;
}


// BP_TitleScreenController_C BP_TitleScreenController.Default__BP_TitleScreenController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TitleScreenController_C* ABP_TitleScreenController_C::GetDefaultObj()
{
	static class ABP_TitleScreenController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TitleScreenController_C*>(ABP_TitleScreenController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TitleScreenController.BP_TitleScreenController_C.GetUserInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUMG_UserInterface_Base_C*   UserInterface                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleScreenController_C::GetUserInterface(class UUMG_UserInterface_Base_C** UserInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "GetUserInterface");

	Params::ABP_TitleScreenController_C_GetUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UserInterface != nullptr)
		*UserInterface = Parms.UserInterface;

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_TitleScreenController_C::InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1");

	Params::ABP_TitleScreenController_C_InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.InpActEvt_Escape_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_TitleScreenController_C::InpActEvt_Escape_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "InpActEvt_Escape_K2Node_InputActionEvent_0");

	Params::ABP_TitleScreenController_C_InpActEvt_Escape_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.SetConnectingUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TitleScreenController_C::SetConnectingUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "SetConnectingUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.CreateUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TitleScreenController_C::CreateUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "CreateUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TitleScreenController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.OnEndRetryJoinServer
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_TitleScreenController_C::OnEndRetryJoinServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "OnEndRetryJoinServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.OnBeginRetryJoinServer
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              JoinAttempt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxAttempts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleScreenController_C::OnBeginRetryJoinServer(int32 JoinAttempt, int32 MaxAttempts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "OnBeginRetryJoinServer");

	Params::ABP_TitleScreenController_C_OnBeginRetryJoinServer_Params Parms{};

	Parms.JoinAttempt = JoinAttempt;
	Parms.MaxAttempts = MaxAttempts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TitleScreenController.BP_TitleScreenController_C.ExecuteUbergraph_BP_TitleScreenController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_JoinAttempt                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_MaxAttempts                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_TitleScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpaceMenuCamera_C*       CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)

void ABP_TitleScreenController_C::ExecuteUbergraph_BP_TitleScreenController(int32 EntryPoint, int32 K2Node_Event_JoinAttempt, int32 K2Node_Event_MaxAttempts, bool CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMG_UserInterface_TitleScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_1, class ABP_SpaceMenuCamera_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenController_C", "ExecuteUbergraph_BP_TitleScreenController");

	Params::ABP_TitleScreenController_C_ExecuteUbergraph_BP_TitleScreenController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_JoinAttempt = K2Node_Event_JoinAttempt;
	Parms.K2Node_Event_MaxAttempts = K2Node_Event_MaxAttempts;
	Parms.CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue = CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_1 = CallFunc_IsLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;

	UObject::ProcessEvent(Func, &Parms);

}

}


