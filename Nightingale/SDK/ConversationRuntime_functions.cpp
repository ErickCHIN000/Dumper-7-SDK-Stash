#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConversationRuntime.ConversationHostComponent
// (None)

class UClass* UConversationHostComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationHostComponent");

	return Clss;
}


// ConversationHostComponent ConversationRuntime.Default__ConversationHostComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationHostComponent* UConversationHostComponent::GetDefaultObj()
{
	static class UConversationHostComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationHostComponent*>(UConversationHostComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ConversationRuntime.ConversationHostComponent.StartConversation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDialogue*                   Dialog                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NpcActor                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationHostComponent::StartConversation(class UDialogue* Dialog, class AActor* NpcActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "StartConversation");

	Params::UConversationHostComponent_StartConversation_Params Parms{};

	Parms.Dialog = Dialog;
	Parms.NpcActor = NpcActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Server_StartConversation
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UDialogue*                   Dialog                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NpcActor                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationHostComponent::Server_StartConversation(class UDialogue* Dialog, class AActor* NpcActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Server_StartConversation");

	Params::UConversationHostComponent_Server_StartConversation_Params Parms{};

	Parms.Dialog = Dialog;
	Parms.NpcActor = NpcActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Server_LeaveConversation
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UConversationHostComponent::Server_LeaveConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Server_LeaveConversation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Server_EndConversation
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UConversationHostComponent::Server_EndConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Server_EndConversation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Server_CheckNodeIdMatch
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// int32                              ClientNodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationHostComponent::Server_CheckNodeIdMatch(int32 ClientNodeId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Server_CheckNodeIdMatch");

	Params::UConversationHostComponent_Server_CheckNodeIdMatch_Params Parms{};

	Parms.ClientNodeId = ClientNodeId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Server_AdvanceConversation
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FConversationAdvanceRequest Request                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UConversationHostComponent::Server_AdvanceConversation(struct FConversationAdvanceRequest& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Server_AdvanceConversation");

	Params::UConversationHostComponent_Server_AdvanceConversation_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.GoToNextNode
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bDoRefresh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConversationView           OutConversationView                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationHostComponent::GoToNextNode(bool bDoRefresh, struct FConversationView& OutConversationView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "GoToNextNode");

	Params::UConversationHostComponent_GoToNextNode_Params Parms{};

	Parms.bDoRefresh = bDoRefresh;
	Parms.OutConversationView = OutConversationView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConversationRuntime.ConversationHostComponent.ForceServerAdvanceRequest
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestBranchIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationHostComponent::ForceServerAdvanceRequest(int32 RequestBranchIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "ForceServerAdvanceRequest");

	Params::UConversationHostComponent_ForceServerAdvanceRequest_Params Parms{};

	Parms.RequestBranchIndex = RequestBranchIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.EndConversation
// (Native, Public, BlueprintCallable)
// Parameters:

void UConversationHostComponent::EndConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "EndConversation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Client_UpdateConversation
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FConversationPosition       Transition                                                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsCorrection                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      UpdatedValidityMask                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationHostComponent::Client_UpdateConversation(struct FConversationPosition& Transition, bool bIsCorrection, TArray<uint8>& UpdatedValidityMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Client_UpdateConversation");

	Params::UConversationHostComponent_Client_UpdateConversation_Params Parms{};

	Parms.Transition = Transition;
	Parms.bIsCorrection = bIsCorrection;
	Parms.UpdatedValidityMask = UpdatedValidityMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Client_LeaveConversation
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UConversationHostComponent::Client_LeaveConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Client_LeaveConversation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Client_JoinConversation
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FConversationState          Conversation                                                     (Parm, NativeAccessSpecifierPublic)

void UConversationHostComponent::Client_JoinConversation(const struct FConversationState& Conversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Client_JoinConversation");

	Params::UConversationHostComponent_Client_JoinConversation_Params Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Client_EventWaitFinished
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<uint8>                      UpdatedValidityMask                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationHostComponent::Client_EventWaitFinished(TArray<uint8>& UpdatedValidityMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Client_EventWaitFinished");

	Params::UConversationHostComponent_Client_EventWaitFinished_Params Parms{};

	Parms.UpdatedValidityMask = UpdatedValidityMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.Client_CheckNodeIdMatch
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                               bDoNodeIdsMatch                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationHostComponent::Client_CheckNodeIdMatch(bool bDoNodeIdsMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "Client_CheckNodeIdMatch");

	Params::UConversationHostComponent_Client_CheckNodeIdMatch_Params Parms{};

	Parms.bDoNodeIdsMatch = bDoNodeIdsMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.CheckClientServerNodeIdMatch
// (Native, Public, BlueprintCallable)
// Parameters:

void UConversationHostComponent::CheckClientServerNodeIdMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "CheckClientServerNodeIdMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostComponent.AdvanceConversation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              RequestBranchIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsWaiting                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationHostComponent::AdvanceConversation(int32 RequestBranchIndex, bool* bIsWaiting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostComponent", "AdvanceConversation");

	Params::UConversationHostComponent_AdvanceConversation_Params Parms{};

	Parms.RequestBranchIndex = RequestBranchIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsWaiting != nullptr)
		*bIsWaiting = Parms.bIsWaiting;

	return Parms.ReturnValue;

}


// Class ConversationRuntime.ConversationHostInterface
// (None)

class UClass* IConversationHostInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationHostInterface");

	return Clss;
}


// ConversationHostInterface ConversationRuntime.Default__ConversationHostInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IConversationHostInterface* IConversationHostInterface::GetDefaultObj()
{
	static class IConversationHostInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IConversationHostInterface*>(IConversationHostInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ConversationRuntime.ConversationHostInterface.StartConversation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDialogue*                   Dialog                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NpcActor                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IConversationHostInterface::StartConversation(class UDialogue* Dialog, class AActor* NpcActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostInterface", "StartConversation");

	Params::IConversationHostInterface_StartConversation_Params Parms{};

	Parms.Dialog = Dialog;
	Parms.NpcActor = NpcActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostInterface.EndConversation
// (Native, Public, BlueprintCallable)
// Parameters:

void IConversationHostInterface::EndConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostInterface", "EndConversation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConversationRuntime.ConversationHostInterface.AdvanceConversation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              RequestBranchIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsWaiting                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IConversationHostInterface::AdvanceConversation(int32 RequestBranchIndex, bool* bIsWaiting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationHostInterface", "AdvanceConversation");

	Params::IConversationHostInterface_AdvanceConversation_Params Parms{};

	Parms.RequestBranchIndex = RequestBranchIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsWaiting != nullptr)
		*bIsWaiting = Parms.bIsWaiting;

	return Parms.ReturnValue;

}


// Class ConversationRuntime.ConversationParticipantComponent
// (None)

class UClass* UConversationParticipantComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationParticipantComponent");

	return Clss;
}


// ConversationParticipantComponent ConversationRuntime.Default__ConversationParticipantComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationParticipantComponent* UConversationParticipantComponent::GetDefaultObj()
{
	static class UConversationParticipantComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationParticipantComponent*>(UConversationParticipantComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ConversationRuntime.ConversationParticipantInterface
// (None)

class UClass* IConversationParticipantInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationParticipantInterface");

	return Clss;
}


// ConversationParticipantInterface ConversationRuntime.Default__ConversationParticipantInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IConversationParticipantInterface* IConversationParticipantInterface::GetDefaultObj()
{
	static class IConversationParticipantInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IConversationParticipantInterface*>(IConversationParticipantInterface::StaticClass()->DefaultObject);

	return Default;
}

}


