#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DialogueBase.WBP_DialogueBase_C
// (None)

class UClass* UWBP_DialogueBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DialogueBase_C");

	return Clss;
}


// WBP_DialogueBase_C WBP_DialogueBase.Default__WBP_DialogueBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DialogueBase_C* UWBP_DialogueBase_C::GetDefaultObj()
{
	static class UWBP_DialogueBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DialogueBase_C*>(UWBP_DialogueBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DialogueBase.WBP_DialogueBase_C.CREATEDELEGATE_PROXYFUNCTION_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationView           ConversationView                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DialogueBase_C::CREATEDELEGATE_PROXYFUNCTION_4(struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "CREATEDELEGATE_PROXYFUNCTION_4");

	Params::UWBP_DialogueBase_C_CREATEDELEGATE_PROXYFUNCTION_4_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.ConversationView = ConversationView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.CREATEDELEGATE_PROXYFUNCTION_3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::CREATEDELEGATE_PROXYFUNCTION_3(struct FGuid& ConversationInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_DialogueBase_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.CREATEDELEGATE_PROXYFUNCTION_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationView           ConversationView                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsCorrection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::CREATEDELEGATE_PROXYFUNCTION_2(struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView, bool bIsCorrection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_DialogueBase_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.ConversationView = ConversationView;
	Parms.bIsCorrection = bIsCorrection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.CREATEDELEGATE_PROXYFUNCTION_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::CREATEDELEGATE_PROXYFUNCTION_1(struct FGuid& ConversationInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_DialogueBase_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationView           ConversationView                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsCorrection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::CREATEDELEGATE_PROXYFUNCTION_0(struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView, bool bIsCorrection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_DialogueBase_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.ConversationView = ConversationView;
	Parms.bIsCorrection = bIsCorrection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.AppendAnyPendingPlayerResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringWithOutMarkUp_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::AppendAnyPendingPlayerResponse(class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "AppendAnyPendingPlayerResponse");

	Params::UWBP_DialogueBase_C_AppendAnyPendingPlayerResponse_Params Parms{};

	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetStringWithOutMarkUp_ReturnValue = CallFunc_GetStringWithOutMarkUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnItemTurnInConfirmed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ContractReturn_ItemSelect_C*ItemSelectWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntryIdAndQuantity>CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities          (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnItemTurnInConfirmed(class UWBP_ContractReturn_ItemSelect_C* ItemSelectWidget, TArray<struct FInventoryEntryIdAndQuantity>& CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnItemTurnInConfirmed");

	Params::UWBP_DialogueBase_C_OnItemTurnInConfirmed_Params Parms{};

	Parms.ItemSelectWidget = ItemSelectWidget;
	Parms.CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities = CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnCloseItemTurnIn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_C*K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnCloseItemTurnIn(class UNWXCommonWindowWidget* Window, class UWBP_ContractReturn_ItemSelect_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnCloseItemTurnIn");

	Params::UWBP_DialogueBase_C_OnCloseItemTurnIn_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select = K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.HandleQuestSessionEnd
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::HandleQuestSessionEnd(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "HandleQuestSessionEnd");

	Params::UWBP_DialogueBase_C_HandleQuestSessionEnd_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnRequestItemTurnIn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnRequestItemTurnIn(struct FOngoingTaskProgress& TaskProgress, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_ContractReturn_ItemSelect_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnRequestItemTurnIn");

	Params::UWBP_DialogueBase_C_OnRequestItemTurnIn_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.HandleQuestSetup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByInterface_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::HandleQuestSetup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "HandleQuestSetup");

	Params::UWBP_DialogueBase_C_HandleQuestSetup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentsByInterface_ReturnValue = CallFunc_GetComponentsByInterface_ReturnValue;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.HideReplies
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  CallFunc_GetRepliesScroll_RepliesScroll                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetRepliesScroll_RepliesScroll_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::HideReplies(class UScrollBox* CallFunc_GetRepliesScroll_RepliesScroll, class UScrollBox* CallFunc_GetRepliesScroll_RepliesScroll_1, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "HideReplies");

	Params::UWBP_DialogueBase_C_HideReplies_Params Parms{};

	Parms.CallFunc_GetRepliesScroll_RepliesScroll = CallFunc_GetRepliesScroll_RepliesScroll;
	Parms.CallFunc_GetRepliesScroll_RepliesScroll_1 = CallFunc_GetRepliesScroll_RepliesScroll_1;
	Parms.CallFunc_GetReply_Box_Reply_Box = CallFunc_GetReply_Box_Reply_Box;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.Play Speech
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioDialogueSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::Play_Speech(class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ Temp_delegate_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "Play Speech");

	Params::UWBP_DialogueBase_C_Play_Speech_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.Cache Audio Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponentAggregatorComponent*Audio_Component_Aggregator                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::Cache_Audio_Component(class UAudioComponentAggregatorComponent* Audio_Component_Aggregator, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, class UAudioComponentAggregatorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "Cache Audio Component");

	Params::UWBP_DialogueBase_C_Cache_Audio_Component_Params Parms{};

	Parms.Audio_Component_Aggregator = Audio_Component_Aggregator;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetTxt_SpeakerName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  Txt_SpeakerName                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetTxt_SpeakerName(class UTextBlock** Txt_SpeakerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetTxt_SpeakerName");

	Params::UWBP_DialogueBase_C_GetTxt_SpeakerName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Txt_SpeakerName != nullptr)
		*Txt_SpeakerName = Parms.Txt_SpeakerName;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ShowSubMenuOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Dialogue_Reply_C*       ReplyWidget                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ValidSubMenuList                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_Reply_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_Reply_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_GoToNextNode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Common_Button_Base_C*   CallFunc_GetBU_Next_BU_Next                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBorder*                     CallFunc_GetBorder_Reply_Border_Reply                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Common_Button_Base_C*   CallFunc_GetBU_Return_BU_Return                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::ShowSubMenuOptions(class UWBP_Dialogue_Reply_C* ReplyWidget, bool ValidSubMenuList, class UWBP_Dialogue_Reply_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, class UWBP_Dialogue_Reply_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_GoToNextNode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Next_BU_Next, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_1, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UBorder* CallFunc_GetBorder_Reply_Border_Reply, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Return_BU_Return, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FS_NPCMenu_Content& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ShowSubMenuOptions");

	Params::UWBP_DialogueBase_C_ShowSubMenuOptions_Params Parms{};

	Parms.ReplyWidget = ReplyWidget;
	Parms.ValidSubMenuList = ValidSubMenuList;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GoToNextNode_ReturnValue = CallFunc_GoToNextNode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBU_Next_BU_Next = CallFunc_GetBU_Next_BU_Next;
	Parms.CallFunc_GetReply_Box_Reply_Box = CallFunc_GetReply_Box_Reply_Box;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetReply_Box_Reply_Box_1 = CallFunc_GetReply_Box_Reply_Box_1;
	Parms.CallFunc_GetReply_Box_Reply_Box_2 = CallFunc_GetReply_Box_Reply_Box_2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_GetBorder_Reply_Border_Reply = CallFunc_GetBorder_Reply_Border_Reply;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;
	Parms.CallFunc_GetBU_Return_BU_Return = CallFunc_GetBU_Return_BU_Return;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ShowDialogue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ui_NPCMenus           NPC_Menu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Menu_Text                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_Common_Button_Base_C*   CallFunc_GetBU_Return_BU_Return                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::ShowDialogue(enum class E_ui_NPCMenus NPC_Menu, class FText Menu_Text, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Return_BU_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ShowDialogue");

	Params::UWBP_DialogueBase_C_ShowDialogue_Params Parms{};

	Parms.NPC_Menu = NPC_Menu;
	Parms.Menu_Text = Menu_Text;
	Parms.CallFunc_GetBU_Return_BU_Return = CallFunc_GetBU_Return_BU_Return;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetReply_Box
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*                Reply_Box                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetReply_Box(class UVerticalBox** Reply_Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetReply_Box");

	Params::UWBP_DialogueBase_C_GetReply_Box_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Reply_Box != nullptr)
		*Reply_Box = Parms.Reply_Box;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetRepliesScroll
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*                  RepliesScroll                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetRepliesScroll(class UScrollBox** RepliesScroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetRepliesScroll");

	Params::UWBP_DialogueBase_C_GetRepliesScroll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RepliesScroll != nullptr)
		*RepliesScroll = Parms.RepliesScroll;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetFade_JustReplies
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            Fade_JustReplies                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetFade_JustReplies(class UWidgetAnimation** Fade_JustReplies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetFade_JustReplies");

	Params::UWBP_DialogueBase_C_GetFade_JustReplies_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fade_JustReplies != nullptr)
		*Fade_JustReplies = Parms.Fade_JustReplies;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetFade_EntireReplyArea
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            Fade_EntireReplyArea                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetFade_EntireReplyArea(class UWidgetAnimation** Fade_EntireReplyArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetFade_EntireReplyArea");

	Params::UWBP_DialogueBase_C_GetFade_EntireReplyArea_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fade_EntireReplyArea != nullptr)
		*Fade_EntireReplyArea = Parms.Fade_EntireReplyArea;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetFade_Dialogue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            Fade_Dialogue                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetFade_Dialogue(class UWidgetAnimation** Fade_Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetFade_Dialogue");

	Params::UWBP_DialogueBase_C_GetFade_Dialogue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fade_Dialogue != nullptr)
		*Fade_Dialogue = Parms.Fade_Dialogue;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetDialogue_AnimatedText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_Dialogue_AnimatedText_C*Dialogue_AnimatedText                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetDialogue_AnimatedText(class UWBP_Dialogue_AnimatedText_C** Dialogue_AnimatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetDialogue_AnimatedText");

	Params::UWBP_DialogueBase_C_GetDialogue_AnimatedText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dialogue_AnimatedText != nullptr)
		*Dialogue_AnimatedText = Parms.Dialogue_AnimatedText;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetBU_Return
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_Common_Button_Base_C*   BU_Return                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetBU_Return(class UWBP_Common_Button_Base_C** BU_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetBU_Return");

	Params::UWBP_DialogueBase_C_GetBU_Return_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BU_Return != nullptr)
		*BU_Return = Parms.BU_Return;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetBU_Next
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_Common_Button_Base_C*   BU_Next                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetBU_Next(class UWBP_Common_Button_Base_C** BU_Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetBU_Next");

	Params::UWBP_DialogueBase_C_GetBU_Next_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BU_Next != nullptr)
		*BU_Next = Parms.BU_Next;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GetBorder_Reply
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBorder*                     Border_Reply                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GetBorder_Reply(class UBorder** Border_Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GetBorder_Reply");

	Params::UWBP_DialogueBase_C_GetBorder_Reply_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Border_Reply != nullptr)
		*Border_Reply = Parms.Border_Reply;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ToNpcReply
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDoRefresh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRequiresWait                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationView           NewView                                                          (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GoToNextNode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::ToNpcReply(bool bDoRefresh, bool* bRequiresWait, const struct FConversationView& NewView, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GoToNextNode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ToNpcReply");

	Params::UWBP_DialogueBase_C_ToNpcReply_Params Parms{};

	Parms.bDoRefresh = bDoRefresh;
	Parms.NewView = NewView;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GoToNextNode_ReturnValue = CallFunc_GoToNextNode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bRequiresWait != nullptr)
		*bRequiresWait = Parms.bRequiresWait;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnLineFinishedAnimating
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnLineFinishedAnimating(class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnLineFinishedAnimating");

	Params::UWBP_DialogueBase_C_OnLineFinishedAnimating_Params Parms{};

	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnalogValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_DialogueBase_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_2, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnAnalogValueChanged");

	Params::UWBP_DialogueBase_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue_1 = CallFunc_GetAnalogValue_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ReverseDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::ReverseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ReverseDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnConversationWaitFinished
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationView           ConversationView                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_ToNpcReply_bRequiresWait                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnConversationWaitFinished(struct FGuid& ConversationInstanceId, const struct FConversationView& ConversationView, bool CallFunc_ToNpcReply_bRequiresWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnConversationWaitFinished");

	Params::UWBP_DialogueBase_C_OnConversationWaitFinished_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.ConversationView = ConversationView;
	Parms.CallFunc_ToNpcReply_bRequiresWait = CallFunc_ToNpcReply_bRequiresWait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnConversationUpdated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationView           ConversationView                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsCorrection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnConversationUpdated(const struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView, bool bIsCorrection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnConversationUpdated");

	Params::UWBP_DialogueBase_C_OnConversationUpdated_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.ConversationView = ConversationView;
	Parms.bIsCorrection = bIsCorrection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnConversationStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnConversationStarted(const struct FGuid& ConversationInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnConversationStarted");

	Params::UWBP_DialogueBase_C_OnConversationStarted_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnConstruct
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UConversationHostComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IConversationHostInterface>K2Node_DynamicCast_AsConversation_Host_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnConstruct(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UConversationHostComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IConversationHostInterface> K2Node_DynamicCast_AsConversation_Host_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnConstruct");

	Params::UWBP_DialogueBase_C_OnConstruct_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsConversation_Host_Interface = K2Node_DynamicCast_AsConversation_Host_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.GoToNpcReplyTimer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ToNpcReply_bRequiresWait                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::GoToNpcReplyTimer(bool CallFunc_ToNpcReply_bRequiresWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "GoToNpcReplyTimer");

	Params::UWBP_DialogueBase_C_GoToNpcReplyTimer_Params Parms{};

	Parms.CallFunc_ToNpcReply_bRequiresWait = CallFunc_ToNpcReply_bRequiresWait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.Close Dialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IConversationHostInterface>K2Node_DynamicCast_AsConversation_Host_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::Close_Dialogue(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IConversationHostInterface> K2Node_DynamicCast_AsConversation_Host_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "Close Dialogue");

	Params::UWBP_DialogueBase_C_Close_Dialogue_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsConversation_Host_Interface = K2Node_DynamicCast_AsConversation_Host_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.AdvanceDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::AdvanceDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "AdvanceDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.SetDefaultFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_Reply_C*       K2Node_DynamicCast_AsWBP_Dialogue_Reply                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::SetDefaultFocus(class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "SetDefaultFocus");

	Params::UWBP_DialogueBase_C_SetDefaultFocus_Params Parms{};

	Parms.CallFunc_GetReply_Box_Reply_Box = CallFunc_GetReply_Box_Reply_Box;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Dialogue_Reply = K2Node_DynamicCast_AsWBP_Dialogue_Reply;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ScrollDialogBox
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ScrollDown                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  DialogueScrollBox                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             NewScrollOffset                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::ScrollDialogBox(bool ScrollDown, class UScrollBox* DialogueScrollBox, double NewScrollOffset, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, float CallFunc_GetScrollOffset_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ScrollDialogBox");

	Params::UWBP_DialogueBase_C_ScrollDialogBox_Params Parms{};

	Parms.ScrollDown = ScrollDown;
	Parms.DialogueScrollBox = DialogueScrollBox;
	Parms.NewScrollOffset = NewScrollOffset;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;
	Parms.CallFunc_GetScrollOffset_ReturnValue_1 = CallFunc_GetScrollOffset_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1 = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnSubMenuEntryClicked
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ui_NPCMenus           NPC_Menu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Menu_Text                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_NPCMenu_Content          MenuToOpen                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               FoundMenu                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Common_Button_Base_C*   CallFunc_GetBU_Return_BU_Return                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnSubMenuEntryClicked(enum class E_ui_NPCMenus NPC_Menu, class FText Menu_Text, const struct FS_NPCMenu_Content& MenuToOpen, bool FoundMenu, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Return_BU_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnSubMenuEntryClicked");

	Params::UWBP_DialogueBase_C_OnSubMenuEntryClicked_Params Parms{};

	Parms.NPC_Menu = NPC_Menu;
	Parms.Menu_Text = Menu_Text;
	Parms.MenuToOpen = MenuToOpen;
	Parms.FoundMenu = FoundMenu;
	Parms.CallFunc_GetBU_Return_BU_Return = CallFunc_GetBU_Return_BU_Return;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnNextButtonClicked
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToNpcReply_bRequiresWait                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnNextButtonClicked(class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1, bool CallFunc_ToNpcReply_bRequiresWait, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnNextButtonClicked");

	Params::UWBP_DialogueBase_C_OnNextButtonClicked_Params Parms{};

	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1 = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1;
	Parms.CallFunc_ToNpcReply_bRequiresWait = CallFunc_ToNpcReply_bRequiresWait;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.RefreshDialogueMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  CallFunc_GetTxt_SpeakerName_Txt_SpeakerName                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_GetTxt_SpeakerName_Txt_SpeakerName_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCNameText_NPCName                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::RefreshDialogueMenu(class UTextBlock* CallFunc_GetTxt_SpeakerName_Txt_SpeakerName, class UTextBlock* CallFunc_GetTxt_SpeakerName_Txt_SpeakerName_1, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1, class FText CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetNPCNameText_NPCName, bool CallFunc_Array_IsValidIndex_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "RefreshDialogueMenu");

	Params::UWBP_DialogueBase_C_RefreshDialogueMenu_Params Parms{};

	Parms.CallFunc_GetTxt_SpeakerName_Txt_SpeakerName = CallFunc_GetTxt_SpeakerName_Txt_SpeakerName;
	Parms.CallFunc_GetTxt_SpeakerName_Txt_SpeakerName_1 = CallFunc_GetTxt_SpeakerName_Txt_SpeakerName_1;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1 = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNPCNameText_NPCName = CallFunc_GetNPCNameText_NPCName;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.RefreshDialogue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ToNpcReply_bRequiresWait                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::RefreshDialogue(bool CallFunc_ToNpcReply_bRequiresWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "RefreshDialogue");

	Params::UWBP_DialogueBase_C_RefreshDialogue_Params Parms{};

	Parms.CallFunc_ToNpcReply_bRequiresWait = CallFunc_ToNpcReply_bRequiresWait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.DisplayNpcNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConversationView           NpcView                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowReplies                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Common_Button_Base_C*   CallFunc_GetBU_Next_BU_Next                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_AnimatedText_C*CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::DisplayNpcNode(const struct FConversationView& NpcView, bool ShowReplies, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Next_BU_Next, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "DisplayNpcNode");

	Params::UWBP_DialogueBase_C_DisplayNpcNode_Params Parms{};

	Parms.NpcView = NpcView;
	Parms.ShowReplies = ShowReplies;
	Parms.CallFunc_GetBU_Next_BU_Next = CallFunc_GetBU_Next_BU_Next;
	Parms.CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText = CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.PlayPlayerReply
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueNodeBase*           CurrentPlayerNode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FConversationOption         CallFunc_Array_Get_Item                                          (NoDestructor)
// TScriptInterface<class IConversationHostInterface>K2Node_DynamicCast_AsConversation_Host_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AdvanceConversation_bIsWaiting                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AdvanceConversation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToNpcReply_bRequiresWait                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::PlayPlayerReply(class UDialogueNodeBase* CurrentPlayerNode, const struct FConversationOption& CallFunc_Array_Get_Item, TScriptInterface<class IConversationHostInterface> K2Node_DynamicCast_AsConversation_Host_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AdvanceConversation_bIsWaiting, bool CallFunc_AdvanceConversation_ReturnValue, bool CallFunc_ToNpcReply_bRequiresWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "PlayPlayerReply");

	Params::UWBP_DialogueBase_C_PlayPlayerReply_Params Parms{};

	Parms.CurrentPlayerNode = CurrentPlayerNode;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsConversation_Host_Interface = K2Node_DynamicCast_AsConversation_Host_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AdvanceConversation_bIsWaiting = CallFunc_AdvanceConversation_bIsWaiting;
	Parms.CallFunc_AdvanceConversation_ReturnValue = CallFunc_AdvanceConversation_ReturnValue;
	Parms.CallFunc_ToNpcReply_bRequiresWait = CallFunc_ToNpcReply_bRequiresWait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.LineFinishedAnimating_ShowContent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GoToNextNode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::LineFinishedAnimating_ShowContent(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GoToNextNode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "LineFinishedAnimating_ShowContent");

	Params::UWBP_DialogueBase_C_LineFinishedAnimating_ShowContent_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GoToNextNode_ReturnValue = CallFunc_GoToNextNode_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.DisplayReplies
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConversationOption> Replies                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWBP_Dialogue_Reply_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConversationOption         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBorder*                     CallFunc_GetBorder_Reply_Border_Reply                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::DisplayReplies(TArray<struct FConversationOption>& Replies, class UWBP_Dialogue_Reply_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FConversationOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UBorder* CallFunc_GetBorder_Reply_Border_Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "DisplayReplies");

	Params::UWBP_DialogueBase_C_DisplayReplies_Params Parms{};

	Parms.Replies = Replies;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetReply_Box_Reply_Box = CallFunc_GetReply_Box_Reply_Box;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetBorder_Reply_Border_Reply = CallFunc_GetBorder_Reply_Border_Reply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnDecorativeResponseBorderMouseButtonUp
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_DialogueBase_C::OnDecorativeResponseBorderMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnDecorativeResponseBorderMouseButtonUp");

	Params::UWBP_DialogueBase_C_OnDecorativeResponseBorderMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.Mouse Select Reply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Dialogue_Reply_C*       WidgetThatWantsSelection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_Reply_C*       K2Node_DynamicCast_AsWBP_Dialogue_Reply                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::Mouse_Select_Reply(class UWBP_Dialogue_Reply_C* WidgetThatWantsSelection, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "Mouse Select Reply");

	Params::UWBP_DialogueBase_C_Mouse_Select_Reply_Params Parms{};

	Parms.WidgetThatWantsSelection = WidgetThatWantsSelection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetReply_Box_Reply_Box = CallFunc_GetReply_Box_Reply_Box;
	Parms.CallFunc_GetReply_Box_Reply_Box_1 = CallFunc_GetReply_Box_Reply_Box_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Dialogue_Reply = K2Node_DynamicCast_AsWBP_Dialogue_Reply;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.HighlightSelectedReply
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetReply_Box_Reply_Box_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_Reply_C*       K2Node_DynamicCast_AsWBP_Dialogue_Reply                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Dialogue_Reply_C*       K2Node_DynamicCast_AsWBP_Dialogue_Reply_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::HighlightSelectedReply(class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_1, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_2, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 Temp_int_Variable, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "HighlightSelectedReply");

	Params::UWBP_DialogueBase_C_HighlightSelectedReply_Params Parms{};

	Parms.CallFunc_GetReply_Box_Reply_Box = CallFunc_GetReply_Box_Reply_Box;
	Parms.CallFunc_GetReply_Box_Reply_Box_1 = CallFunc_GetReply_Box_Reply_Box_1;
	Parms.CallFunc_GetReply_Box_Reply_Box_2 = CallFunc_GetReply_Box_Reply_Box_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsWBP_Dialogue_Reply = K2Node_DynamicCast_AsWBP_Dialogue_Reply;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Dialogue_Reply_1 = K2Node_DynamicCast_AsWBP_Dialogue_Reply_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.AnimFadeInReplyArea
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetFade_EntireReplyArea_Fade_EntireReplyArea            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::AnimFadeInReplyArea(bool Reverse, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, class UWidgetAnimation* CallFunc_GetFade_EntireReplyArea_Fade_EntireReplyArea, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "AnimFadeInReplyArea");

	Params::UWBP_DialogueBase_C_AnimFadeInReplyArea_Params Parms{};

	Parms.Reverse = Reverse;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetFade_EntireReplyArea_Fade_EntireReplyArea = CallFunc_GetFade_EntireReplyArea_Fade_EntireReplyArea;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.AnimFadeInReplies
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_Button_Base_C*   CallFunc_GetBU_Next_BU_Next                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetFade_JustReplies_Fade_JustReplies                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetFade_JustReplies_Fade_JustReplies_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::AnimFadeInReplies(class UWBP_Common_Button_Base_C* CallFunc_GetBU_Next_BU_Next, bool CallFunc_Not_PreBool_ReturnValue, class UWidgetAnimation* CallFunc_GetFade_JustReplies_Fade_JustReplies, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidgetAnimation* CallFunc_GetFade_JustReplies_Fade_JustReplies_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "AnimFadeInReplies");

	Params::UWBP_DialogueBase_C_AnimFadeInReplies_Params Parms{};

	Parms.CallFunc_GetBU_Next_BU_Next = CallFunc_GetBU_Next_BU_Next;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFade_JustReplies_Fade_JustReplies = CallFunc_GetFade_JustReplies_Fade_JustReplies;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetFade_JustReplies_Fade_JustReplies_1 = CallFunc_GetFade_JustReplies_Fade_JustReplies_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.AnimFadeDialoguePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetFade_Dialogue_Fade_Dialogue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetFade_Dialogue_Fade_Dialogue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::AnimFadeDialoguePanel(bool Reverse, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UWidgetAnimation* CallFunc_GetFade_Dialogue_Fade_Dialogue, class UWidgetAnimation* CallFunc_GetFade_Dialogue_Fade_Dialogue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "AnimFadeDialoguePanel");

	Params::UWBP_DialogueBase_C_AnimFadeDialoguePanel_Params Parms{};

	Parms.Reverse = Reverse;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFade_Dialogue_Fade_Dialogue = CallFunc_GetFade_Dialogue_Fade_Dialogue;
	Parms.CallFunc_GetFade_Dialogue_Fade_Dialogue_1 = CallFunc_GetFade_Dialogue_Fade_Dialogue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.AddRootHubOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_NPCMenu_Content          New_Item                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::AddRootHubOption(struct FS_NPCMenu_Content& New_Item, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "AddRootHubOption");

	Params::UWBP_DialogueBase_C_AddRootHubOption_Params Parms{};

	Parms.New_Item = New_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnFadeJustRepliesAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::OnFadeJustRepliesAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnFadeJustRepliesAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnFadeDialogFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::OnFadeDialogFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnFadeDialogFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ExecuteUbergraph_WBP_DialogueBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioDialogueSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::ExecuteUbergraph_WBP_DialogueBase(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ExecuteUbergraph_WBP_DialogueBase");

	Params::UWBP_DialogueBase_C_ExecuteUbergraph_WBP_DialogueBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.CloseDialogueInstance__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::CloseDialogueInstance__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "CloseDialogueInstance__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OpenSubMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MenuName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_ui_NPCMenus           MenuType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OpenSubMenu__DelegateSignature(class FText MenuName, enum class E_ui_NPCMenus MenuType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OpenSubMenu__DelegateSignature");

	Params::UWBP_DialogueBase_C_OpenSubMenu__DelegateSignature_Params Parms{};

	Parms.MenuName = MenuName;
	Parms.MenuType = MenuType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.LeaveDialogue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::LeaveDialogue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "LeaveDialogue__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.ReturnFromSubMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueBase_C::ReturnFromSubMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "ReturnFromSubMenu__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnDismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBase_C*         Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnDismissed__DelegateSignature(class UWBP_DialogueBase_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnDismissed__DelegateSignature");

	Params::UWBP_DialogueBase_C_OnDismissed__DelegateSignature_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueBase.WBP_DialogueBase_C.OnShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBase_C*         Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueBase_C::OnShown__DelegateSignature(class UWBP_DialogueBase_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueBase_C", "OnShown__DelegateSignature");

	Params::UWBP_DialogueBase_C_OnShown__DelegateSignature_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}

}


