#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DialogueManager.BP_DialogueManager_C
// (Actor)

class UClass* ABP_DialogueManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DialogueManager_C");

	return Clss;
}


// BP_DialogueManager_C BP_DialogueManager.Default__BP_DialogueManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DialogueManager_C* ABP_DialogueManager_C::GetDefaultObj()
{
	static class ABP_DialogueManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DialogueManager_C*>(ABP_DialogueManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DialogueManager.BP_DialogueManager_C.GetDialogueWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Dialogue_C*             DialogueWidget                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Dialogue_C*             CallFunc_GetDialogue_Dialogue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueManager_C::GetDialogueWidget(class UUMG_Dialogue_C** DialogueWidget, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_Dialogue_C* CallFunc_GetDialogue_Dialogue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueManager_C", "GetDialogueWidget");

	Params::ABP_DialogueManager_C_GetDialogueWidget_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetDialogue_Dialogue = CallFunc_GetDialogue_Dialogue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogueWidget != nullptr)
		*DialogueWidget = Parms.DialogueWidget;

}


// Function BP_DialogueManager.BP_DialogueManager_C.OnDialoguePlayed
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FDialogueRowHandle          Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueManager_C::OnDialoguePlayed(const struct FDialogueRowHandle& Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueManager_C", "OnDialoguePlayed");

	Params::ABP_DialogueManager_C_OnDialoguePlayed_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueManager.BP_DialogueManager_C.OnDialogueCleared
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DialogueManager_C::OnDialogueCleared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueManager_C", "OnDialogueCleared");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueManager.BP_DialogueManager_C.ExecuteUbergraph_BP_DialogueManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Dialogue_C*             CallFunc_GetDialogueWidget_DialogueWidget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogueRowHandle          K2Node_Event_Dialogue                                            (NoDestructor, HasGetValueTypeHash)
// struct FDialogue                   CallFunc_GetDialogueStruct_Dialogue                              (None)
// enum class EValid                  CallFunc_GetDialogueStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Dialogue_C*             CallFunc_GetDialogueWidget_DialogueWidget_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueManager_C::ExecuteUbergraph_BP_DialogueManager(int32 EntryPoint, class UUMG_Dialogue_C* CallFunc_GetDialogueWidget_DialogueWidget, bool CallFunc_IsValid_ReturnValue, const struct FDialogueRowHandle& K2Node_Event_Dialogue, const struct FDialogue& CallFunc_GetDialogueStruct_Dialogue, enum class EValid CallFunc_GetDialogueStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_Dialogue_C* CallFunc_GetDialogueWidget_DialogueWidget_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueManager_C", "ExecuteUbergraph_BP_DialogueManager");

	Params::ABP_DialogueManager_C_ExecuteUbergraph_BP_DialogueManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDialogueWidget_DialogueWidget = CallFunc_GetDialogueWidget_DialogueWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Dialogue = K2Node_Event_Dialogue;
	Parms.CallFunc_GetDialogueStruct_Dialogue = CallFunc_GetDialogueStruct_Dialogue;
	Parms.CallFunc_GetDialogueStruct_Paths = CallFunc_GetDialogueStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDialogueWidget_DialogueWidget_1 = CallFunc_GetDialogueWidget_DialogueWidget_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


