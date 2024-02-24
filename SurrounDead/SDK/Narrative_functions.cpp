#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Narrative.Dialogue
// (None)

class UClass* UDialogue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dialogue");

	return Clss;
}


// Dialogue Narrative.Default__Dialogue
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogue* UDialogue::GetDefaultObj()
{
	static class UDialogue* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogue*>(UDialogue::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.Dialogue.TickDialogue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::TickDialogue(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "TickDialogue");

	Params::UDialogue_TickDialogue_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.StopDialogueSequence
// (Native, Protected, BlueprintCallable)
// Parameters:

void UDialogue::StopDialogueSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "StopDialogueSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.StopDialogueAnimation
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDialogue::StopDialogueAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "StopDialogueAnimation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.SkipCurrentLine
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogue::SkipCurrentLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "SkipCurrentLine");

	Params::UDialogue_SkipCurrentLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.PlayPlayerDialogue
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode_Player*        PlayerReply                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDialogue::PlayPlayerDialogue(class UDialogueNode_Player* PlayerReply, struct FDialogueLine& Line)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayPlayerDialogue");

	Params::UDialogue_PlayPlayerDialogue_Params Parms{};

	Parms.PlayerReply = PlayerReply;
	Parms.Line = Line;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.PlayNPCDialogue
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode_NPC*           NPCReply                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSpeakerInfo                Speaker                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDialogue::PlayNPCDialogue(class UDialogueNode_NPC* NPCReply, struct FDialogueLine& Line, struct FSpeakerInfo& Speaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayNPCDialogue");

	Params::UDialogue_PlayNPCDialogue_Params Parms{};

	Parms.NPCReply = NPCReply;
	Parms.Line = Line;
	Parms.Speaker = Speaker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.PlayNextNPCReply
// (Native, Protected)
// Parameters:

void UDialogue::PlayNextNPCReply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayNextNPCReply");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.PlayDialogueSound
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      Speaker                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Listener                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::PlayDialogueSound(struct FDialogueLine& Line, class AActor* Speaker, class AActor* Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayDialogueSound");

	Params::UDialogue_PlayDialogueSound_Params Parms{};

	Parms.Line = Line;
	Parms.Speaker = Speaker;
	Parms.Listener = Listener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.PlayDialogueSequence
// (Native, Protected, BlueprintCallable)
// Parameters:
// class UNarrativeDialogueSequence*  Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Speaker                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Listener                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::PlayDialogueSequence(class UNarrativeDialogueSequence* Sequence, class AActor* Speaker, class AActor* Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayDialogueSequence");

	Params::UDialogue_PlayDialogueSequence_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.Speaker = Speaker;
	Parms.Listener = Listener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.PlayDialogueNode
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode*               Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSpeakerInfo                Speaker                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      SpeakerActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ListenerActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::PlayDialogueNode(class UDialogueNode* Node, struct FDialogueLine& Line, struct FSpeakerInfo& Speaker, class AActor* SpeakerActor, class AActor* ListenerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayDialogueNode");

	Params::UDialogue_PlayDialogueNode_Params Parms{};

	Parms.Node = Node;
	Parms.Line = Line;
	Parms.Speaker = Speaker;
	Parms.SpeakerActor = SpeakerActor;
	Parms.ListenerActor = ListenerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.PlayDialogueAnimation
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueNode*               Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      Speaker                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Listener                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::PlayDialogueAnimation(class UDialogueNode* Node, struct FDialogueLine& Line, class AActor* Speaker, class AActor* Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "PlayDialogueAnimation");

	Params::UDialogue_PlayDialogueAnimation_Params Parms{};

	Parms.Node = Node;
	Parms.Line = Line;
	Parms.Speaker = Speaker;
	Parms.Listener = Listener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.OnPlayerDialogueLineStarted
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode_Player*        Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               DialogueLine                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDialogue::OnPlayerDialogueLineStarted(class UDialogueNode_Player* Node, struct FDialogueLine& DialogueLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "OnPlayerDialogueLineStarted");

	Params::UDialogue_OnPlayerDialogueLineStarted_Params Parms{};

	Parms.Node = Node;
	Parms.DialogueLine = DialogueLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.OnPlayerDialogueLineFinished
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode_Player*        Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               DialogueLine                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDialogue::OnPlayerDialogueLineFinished(class UDialogueNode_Player* Node, struct FDialogueLine& DialogueLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "OnPlayerDialogueLineFinished");

	Params::UDialogue_OnPlayerDialogueLineFinished_Params Parms{};

	Parms.Node = Node;
	Parms.DialogueLine = DialogueLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.OnNPCDialogueLineStarted
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode_NPC*           Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               DialogueLine                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSpeakerInfo                Speaker                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDialogue::OnNPCDialogueLineStarted(class UDialogueNode_NPC* Node, struct FDialogueLine& DialogueLine, struct FSpeakerInfo& Speaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "OnNPCDialogueLineStarted");

	Params::UDialogue_OnNPCDialogueLineStarted_Params Parms{};

	Parms.Node = Node;
	Parms.DialogueLine = DialogueLine;
	Parms.Speaker = Speaker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.OnNPCDialogueLineFinished
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode_NPC*           Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               DialogueLine                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSpeakerInfo                Speaker                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDialogue::OnNPCDialogueLineFinished(class UDialogueNode_NPC* Node, struct FDialogueLine& DialogueLine, struct FSpeakerInfo& Speaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "OnNPCDialogueLineFinished");

	Params::UDialogue_OnNPCDialogueLineFinished_Params Parms{};

	Parms.Node = Node;
	Parms.DialogueLine = DialogueLine;
	Parms.Speaker = Speaker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.LinkSpeakerAvatar
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpeakerInfo                Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UDialogue::LinkSpeakerAvatar(struct FSpeakerInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "LinkSpeakerAvatar");

	Params::UDialogue_LinkSpeakerAvatar_Params Parms{};

	Parms.Info = Info;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.K2_OnEndDialogue
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDialogue::K2_OnEndDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "K2_OnEndDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Narrative.Dialogue.K2_OnBeginDialogue
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDialogue::K2_OnBeginDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "K2_OnBeginDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Narrative.Dialogue.IsPartyDialogue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogue::IsPartyDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "IsPartyDialogue");

	Params::UDialogue_IsPartyDialogue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetStringVariable
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode*               Node                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDialogue::GetStringVariable(class UDialogueNode* Node, struct FDialogueLine& Line, const class FString& VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetStringVariable");

	Params::UDialogue_GetStringVariable_Params Parms{};

	Parms.Node = Node;
	Parms.Line = Line;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetSpeakerHeadLocation
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDialogue::GetSpeakerHeadLocation(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetSpeakerHeadLocation");

	Params::UDialogue_GetSpeakerHeadLocation_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetPlayerAvatar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UDialogue::GetPlayerAvatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetPlayerAvatar");

	Params::UDialogue_GetPlayerAvatar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetNodes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UDialogueNode*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UDialogueNode*> UDialogue::GetNodes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetNodes");

	Params::UDialogue_GetNodes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetLineDuration
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode*               Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDialogue::GetLineDuration(class UDialogueNode* Node, struct FDialogueLine& Line)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetLineDuration");

	Params::UDialogue_GetLineDuration_Params Parms{};

	Parms.Node = Node;
	Parms.Line = Line;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetConversationCenterPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDialogue::GetConversationCenterPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetConversationCenterPoint");

	Params::UDialogue_GetConversationCenterPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.GetAvatar
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        SpeakerID                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UDialogue::GetAvatar(class FName& SpeakerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetAvatar");

	Params::UDialogue_GetAvatar_Params Parms{};

	Parms.SpeakerID = SpeakerID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.FinishPlayerDialogue
// (Native, Protected, BlueprintCallable)
// Parameters:

void UDialogue::FinishPlayerDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "FinishPlayerDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.FinishNPCDialogue
// (Native, Protected, BlueprintCallable)
// Parameters:

void UDialogue::FinishNPCDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "FinishNPCDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.FinishDialogueNode
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UDialogueNode*               Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSpeakerInfo                Speaker                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      SpeakerActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ListenerActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::FinishDialogueNode(class UDialogueNode* Node, struct FDialogueLine& Line, struct FSpeakerInfo& Speaker, class AActor* SpeakerActor, class AActor* ListenerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "FinishDialogueNode");

	Params::UDialogue_FinishDialogueNode_Params Parms{};

	Parms.Node = Node;
	Parms.Line = Line;
	Parms.Speaker = Speaker;
	Parms.SpeakerActor = SpeakerActor;
	Parms.ListenerActor = ListenerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.EndCurrentLine
// (Native, Public, BlueprintCallable)
// Parameters:

void UDialogue::EndCurrentLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "EndCurrentLine");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.DestroySpeakerAvatar
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpeakerInfo                Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      SpeakerAvatar                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::DestroySpeakerAvatar(struct FSpeakerInfo& Info, class AActor* SpeakerAvatar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "DestroySpeakerAvatar");

	Params::UDialogue_DestroySpeakerAvatar_Params Parms{};

	Parms.Info = Info;
	Parms.SpeakerAvatar = SpeakerAvatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Dialogue.CanSkipCurrentLine
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogue::CanSkipCurrentLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "CanSkipCurrentLine");

	Params::UDialogue_CanSkipCurrentLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Dialogue.BlendingOutFinished
// (Native, Protected)
// Parameters:

void UDialogue::BlendingOutFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "BlendingOutFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Narrative.DialogueAsset
// (None)

class UClass* UDialogueAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueAsset");

	return Clss;
}


// DialogueAsset Narrative.Default__DialogueAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueAsset* UDialogueAsset::GetDefaultObj()
{
	static class UDialogueAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueAsset*>(UDialogueAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.DialogueBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UDialogueBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueBlueprintGeneratedClass");

	return Clss;
}


// DialogueBlueprintGeneratedClass Narrative.Default__DialogueBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueBlueprintGeneratedClass* UDialogueBlueprintGeneratedClass::GetDefaultObj()
{
	static class UDialogueBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueBlueprintGeneratedClass*>(UDialogueBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeNodeBase
// (None)

class UClass* UNarrativeNodeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeNodeBase");

	return Clss;
}


// NarrativeNodeBase Narrative.Default__NarrativeNodeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeNodeBase* UNarrativeNodeBase::GetDefaultObj()
{
	static class UNarrativeNodeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeNodeBase*>(UNarrativeNodeBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeNodeBase.ProcessEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeComponent*         NarrativeComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEventRuntime           Runtime                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeNodeBase::ProcessEvents(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent, enum class EEventRuntime Runtime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeNodeBase", "ProcessEvents");

	Params::UNarrativeNodeBase_ProcessEvents_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;
	Parms.NarrativeComponent = NarrativeComponent;
	Parms.Runtime = Runtime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeNodeBase.AreConditionsMet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeComponent*         NarrativeComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeNodeBase::AreConditionsMet(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeNodeBase", "AreConditionsMet");

	Params::UNarrativeNodeBase_AreConditionsMet_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;
	Parms.NarrativeComponent = NarrativeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.DialogueNode
// (None)

class UClass* UDialogueNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNode");

	return Clss;
}


// DialogueNode Narrative.Default__DialogueNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNode* UDialogueNode::GetDefaultObj()
{
	static class UDialogueNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNode*>(UDialogueNode::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.DialogueNode_NPC
// (None)

class UClass* UDialogueNode_NPC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNode_NPC");

	return Clss;
}


// DialogueNode_NPC Narrative.Default__DialogueNode_NPC
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNode_NPC* UDialogueNode_NPC::GetDefaultObj()
{
	static class UDialogueNode_NPC* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNode_NPC*>(UDialogueNode_NPC::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.DialogueNode_Player
// (None)

class UClass* UDialogueNode_Player::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNode_Player");

	return Clss;
}


// DialogueNode_Player Narrative.Default__DialogueNode_Player
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNode_Player* UDialogueNode_Player::GetDefaultObj()
{
	static class UDialogueNode_Player* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNode_Player*>(UDialogueNode_Player::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.DialogueNode_Player.GetOptionText
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogue*                   InDialogue                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UDialogueNode_Player::GetOptionText(class UDialogue* InDialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueNode_Player", "GetOptionText");

	Params::UDialogueNode_Player_GetOptionText_Params Parms{};

	Parms.InDialogue = InDialogue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativeComponent
// (None)

class UClass* UNarrativeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeComponent");

	return Clss;
}


// NarrativeComponent Narrative.Default__NarrativeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeComponent* UNarrativeComponent::GetDefaultObj()
{
	static class UNarrativeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeComponent*>(UNarrativeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeComponent.TrySkipCurrentDialogueLine
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::TrySkipCurrentDialogueLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "TrySkipCurrentDialogueLine");

	Params::UNarrativeComponent_TrySkipCurrentDialogueLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.TrySelectDialogueOption
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDialogueNode_Player*        Option                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::TrySelectDialogueOption(class UDialogueNode_Player* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "TrySelectDialogueOption");

	Params::UNarrativeComponent_TrySelectDialogueOption_Params Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.TryExitDialogue
// (Native, Public, BlueprintCallable)
// Parameters:

void UNarrativeComponent::TryExitDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "TryExitDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ServerTrySkipCurrentDialogueLine
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UNarrativeComponent::ServerTrySkipCurrentDialogueLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ServerTrySkipCurrentDialogueLine");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ServerTryExitDialogue
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UNarrativeComponent::ServerTryExitDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ServerTryExitDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ServerSelectDialogueOption
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class FName                        OptionID                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::ServerSelectDialogueOption(class FName& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ServerSelectDialogueOption");

	Params::UNarrativeComponent_ServerSelectDialogueOption_Params Parms{};

	Parms.OptionID = OptionID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.SaveComplete
// (Native, Protected)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::SaveComplete(const class FString& SaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "SaveComplete");

	Params::UNarrativeComponent_SaveComplete_Params Parms{};

	Parms.SaveName = SaveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.Save
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Slot                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::Save(const class FString& SaveName, int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "Save");

	Params::UNarrativeComponent_Save_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.RestartQuest
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartFromID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::RestartQuest(TSubclassOf<class UQuest> QuestClass, class FName StartFromID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "RestartQuest");

	Params::UNarrativeComponent_RestartQuest_Params Parms{};

	Parms.QuestClass = QuestClass;
	Parms.StartFromID = StartFromID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.QuestTaskProgressMade
// (Native, Protected)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeTask*              Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Branch                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldProgress                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewProgress                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestTaskProgressMade(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Branch, int32 OldProgress, int32 NewProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestTaskProgressMade");

	Params::UNarrativeComponent_QuestTaskProgressMade_Params Parms{};

	Parms.Quest = Quest;
	Parms.Task = Task;
	Parms.Branch = Branch;
	Parms.OldProgress = OldProgress;
	Parms.NewProgress = NewProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestTaskCompleted
// (Native, Protected)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeTask*              Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Branch                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestTaskCompleted(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestTaskCompleted");

	Params::UNarrativeComponent_QuestTaskCompleted_Params Parms{};

	Parms.Quest = Quest;
	Parms.Task = Task;
	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestSucceeded
// (Native, Protected, HasOutParams)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        QuestSucceededMessage                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestSucceeded(class UQuest* Quest, class FText& QuestSucceededMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestSucceeded");

	Params::UNarrativeComponent_QuestSucceeded_Params Parms{};

	Parms.Quest = Quest;
	Parms.QuestSucceededMessage = QuestSucceededMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestStarted
// (Native, Protected)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestStarted(class UQuest* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestStarted");

	Params::UNarrativeComponent_QuestStarted_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestNewState
// (Native, Protected)
// Parameters:
// class UQuest*                      Quest                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestState*                 NewState                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestNewState(class UQuest* Quest, class UQuestState* NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestNewState");

	Params::UNarrativeComponent_QuestNewState_Params Parms{};

	Parms.Quest = Quest;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestForgotten
// (Native, Protected)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestForgotten(class UQuest* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestForgotten");

	Params::UNarrativeComponent_QuestForgotten_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestFailed
// (Native, Protected, HasOutParams)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        QuestFailedMessage                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestFailed(class UQuest* Quest, class FText& QuestFailedMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestFailed");

	Params::UNarrativeComponent_QuestFailed_Params Parms{};

	Parms.Quest = Quest;
	Parms.QuestFailedMessage = QuestFailedMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.QuestBranchCompleted
// (Native, Protected)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Branch                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::QuestBranchCompleted(class UQuest* Quest, class UQuestBranch* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "QuestBranchCompleted");

	Params::UNarrativeComponent_QuestBranchCompleted_Params Parms{};

	Parms.Quest = Quest;
	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.OnRep_PendingUpdateList
// (Final, Native, Protected)
// Parameters:

void UNarrativeComponent::OnRep_PendingUpdateList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "OnRep_PendingUpdateList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.OnRep_PartyComponent
// (Final, Native, Protected)
// Parameters:
// class UNarrativePartyComponent*    OldPartyComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::OnRep_PartyComponent(class UNarrativePartyComponent* OldPartyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "OnRep_PartyComponent");

	Params::UNarrativeComponent_OnRep_PartyComponent_Params Parms{};

	Parms.OldPartyComponent = OldPartyComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.NarrativeDataTaskCompleted
// (Native, Protected)
// Parameters:
// class UNarrativeDataTask*          NarrativeTask                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::NarrativeDataTaskCompleted(class UNarrativeDataTask* NarrativeTask, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "NarrativeDataTaskCompleted");

	Params::UNarrativeComponent_NarrativeDataTaskCompleted_Params Parms{};

	Parms.NarrativeTask = NarrativeTask;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.LoadComplete
// (Native, Protected)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::LoadComplete(const class FString& SaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "LoadComplete");

	Params::UNarrativeComponent_LoadComplete_Params Parms{};

	Parms.SaveName = SaveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.Load
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Slot                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::Load(const class FString& SaveName, int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "Load");

	Params::UNarrativeComponent_Load_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.IsQuestSucceeded
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::IsQuestSucceeded(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "IsQuestSucceeded");

	Params::UNarrativeComponent_IsQuestSucceeded_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.IsQuestStartedOrFinished
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::IsQuestStartedOrFinished(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "IsQuestStartedOrFinished");

	Params::UNarrativeComponent_IsQuestStartedOrFinished_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.IsQuestInProgress
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::IsQuestInProgress(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "IsQuestInProgress");

	Params::UNarrativeComponent_IsQuestInProgress_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.IsQuestFinished
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::IsQuestFinished(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "IsQuestFinished");

	Params::UNarrativeComponent_IsQuestFinished_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.IsQuestFailed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::IsQuestFailed(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "IsQuestFailed");

	Params::UNarrativeComponent_IsQuestFailed_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.IsInDialogue
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::IsInDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "IsInDialogue");

	Params::UNarrativeComponent_IsInDialogue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.HasDialogueAvailable
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UDialogue>       Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartFromID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::HasDialogueAvailable(TSubclassOf<class UDialogue> Dialogue, class FName StartFromID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "HasDialogueAvailable");

	Params::UNarrativeComponent_HasDialogueAvailable_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.StartFromID = StartFromID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.HasCompletedTaskInQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeDataTask*          Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::HasCompletedTaskInQuest(TSubclassOf<class UQuest> QuestClass, class UNarrativeDataTask* Task, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "HasCompletedTaskInQuest");

	Params::UNarrativeComponent_HasCompletedTaskInQuest_Params Parms{};

	Parms.QuestClass = QuestClass;
	Parms.Task = Task;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.HasCompletedTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNarrativeDataTask*          Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::HasCompletedTask(class UNarrativeDataTask* Task, const class FString& Name, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "HasCompletedTask");

	Params::UNarrativeComponent_HasCompletedTask_Params Parms{};

	Parms.Task = Task;
	Parms.Name = Name;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetSucceededQuests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UQuest*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UQuest*> UNarrativeComponent::GetSucceededQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetSucceededQuests");

	Params::UNarrativeComponent_GetSucceededQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetQuestInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuest*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQuest* UNarrativeComponent::GetQuestInstance(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetQuestInstance");

	Params::UNarrativeComponent_GetQuestInstance_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNarrativePartyComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNarrativePartyComponent* UNarrativeComponent::GetParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetParty");

	Params::UNarrativeComponent_GetParty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetOwningPawn
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UNarrativeComponent::GetOwningPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetOwningPawn");

	Params::UNarrativeComponent_GetOwningPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetOwningController
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UNarrativeComponent::GetOwningController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetOwningController");

	Params::UNarrativeComponent_GetOwningController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetNumberOfTimesTaskWasCompleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNarrativeDataTask*          Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNarrativeComponent::GetNumberOfTimesTaskWasCompleted(class UNarrativeDataTask* Task, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetNumberOfTimesTaskWasCompleted");

	Params::UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Params Parms{};

	Parms.Task = Task;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetInProgressQuests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UQuest*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UQuest*> UNarrativeComponent::GetInProgressQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetInProgressQuests");

	Params::UNarrativeComponent_GetInProgressQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetFailedQuests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UQuest*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UQuest*> UNarrativeComponent::GetFailedQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetFailedQuests");

	Params::UNarrativeComponent_GetFailedQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetCurrentDialogue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogue*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDialogue* UNarrativeComponent::GetCurrentDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetCurrentDialogue");

	Params::UNarrativeComponent_GetCurrentDialogue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.GetAllQuests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UQuest*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UQuest*> UNarrativeComponent::GetAllQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "GetAllQuests");

	Params::UNarrativeComponent_GetAllQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.ForgetQuest
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::ForgetQuest(TSubclassOf<class UQuest> QuestClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ForgetQuest");

	Params::UNarrativeComponent_ForgetQuest_Params Parms{};

	Parms.QuestClass = QuestClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.DialogueRepliesAvailable
// (Native, Protected, HasOutParams)
// Parameters:
// class UDialogue*                   Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UDialogueNode_Player*>PlayerReplies                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::DialogueRepliesAvailable(class UDialogue* Dialogue, TArray<class UDialogueNode_Player*>& PlayerReplies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "DialogueRepliesAvailable");

	Params::UNarrativeComponent_DialogueRepliesAvailable_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.PlayerReplies = PlayerReplies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.DialogueLineStarted
// (Native, Protected, HasOutParams)
// Parameters:
// class UDialogue*                   Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogueNode*               Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               DialogueLine                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UNarrativeComponent::DialogueLineStarted(class UDialogue* Dialogue, class UDialogueNode* Node, struct FDialogueLine& DialogueLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "DialogueLineStarted");

	Params::UNarrativeComponent_DialogueLineStarted_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.Node = Node;
	Parms.DialogueLine = DialogueLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.DialogueLineFinished
// (Native, Protected, HasOutParams)
// Parameters:
// class UDialogue*                   Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogueNode*               Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogueLine               DialogueLine                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UNarrativeComponent::DialogueLineFinished(class UDialogue* Dialogue, class UDialogueNode* Node, struct FDialogueLine& DialogueLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "DialogueLineFinished");

	Params::UNarrativeComponent_DialogueLineFinished_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.Node = Node;
	Parms.DialogueLine = DialogueLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.DialogueFinished
// (Native, Protected)
// Parameters:
// class UDialogue*                   Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::DialogueFinished(class UDialogue* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "DialogueFinished");

	Params::UNarrativeComponent_DialogueFinished_Params Parms{};

	Parms.Dialogue = Dialogue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.DialogueBegan
// (Native, Protected)
// Parameters:
// class UDialogue*                   Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::DialogueBegan(class UDialogue* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "DialogueBegan");

	Params::UNarrativeComponent_DialogueBegan_Params Parms{};

	Parms.Dialogue = Dialogue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.DeleteSave
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Slot                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::DeleteSave(const class FString& SaveName, int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "DeleteSave");

	Params::UNarrativeComponent_DeleteSave_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.ClientSelectDialogueOption
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class FName                        OptionID                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                Selector                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::ClientSelectDialogueOption(class FName& OptionID, class APlayerState* Selector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientSelectDialogueOption");

	Params::UNarrativeComponent_ClientSelectDialogueOption_Params Parms{};

	Parms.OptionID = OptionID;
	Parms.Selector = Selector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ClientRecieveDialogueChunk
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<class FName>                NPCReplyChainIDs                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FName>                AvailableResponseIDs                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::ClientRecieveDialogueChunk(TArray<class FName>& NPCReplyChainIDs, TArray<class FName>& AvailableResponseIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientRecieveDialogueChunk");

	Params::UNarrativeComponent_ClientRecieveDialogueChunk_Params Parms{};

	Parms.NPCReplyChainIDs = NPCReplyChainIDs;
	Parms.AvailableResponseIDs = AvailableResponseIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ClientReceiveSave
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FNarrativeSavedQuest>SavedQuests                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              Tasks                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Quantities                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::ClientReceiveSave(TArray<struct FNarrativeSavedQuest>& SavedQuests, TArray<class FString>& Tasks, TArray<int32>& Quantities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientReceiveSave");

	Params::UNarrativeComponent_ClientReceiveSave_Params Parms{};

	Parms.SavedQuests = SavedQuests;
	Parms.Tasks = Tasks;
	Parms.Quantities = Quantities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ClientExitPartyDialogue
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UNarrativeComponent::ClientExitPartyDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientExitPartyDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ClientExitDialogue
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UNarrativeComponent::ClientExitDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientExitDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ClientBeginPartyDialogue
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UDialogue>       Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NPCReplyChainIDs                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FName>                AvailableResponseIDs                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::ClientBeginPartyDialogue(TSubclassOf<class UDialogue> Dialogue, TArray<class FName>& NPCReplyChainIDs, TArray<class FName>& AvailableResponseIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientBeginPartyDialogue");

	Params::UNarrativeComponent_ClientBeginPartyDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.NPCReplyChainIDs = NPCReplyChainIDs;
	Parms.AvailableResponseIDs = AvailableResponseIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.ClientBeginDialogue
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UDialogue>       Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NPCReplyChainIDs                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FName>                AvailableResponseIDs                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNarrativeComponent::ClientBeginDialogue(TSubclassOf<class UDialogue> Dialogue, TArray<class FName>& NPCReplyChainIDs, TArray<class FName>& AvailableResponseIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "ClientBeginDialogue");

	Params::UNarrativeComponent_ClientBeginDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.NPCReplyChainIDs = NPCReplyChainIDs;
	Parms.AvailableResponseIDs = AvailableResponseIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.BeginSave
// (Native, Protected)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::BeginSave(const class FString& SaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "BeginSave");

	Params::UNarrativeComponent_BeginSave_Params Parms{};

	Parms.SaveName = SaveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.BeginQuest
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UQuest>          QuestClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartFromID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuest*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQuest* UNarrativeComponent::BeginQuest(TSubclassOf<class UQuest> QuestClass, class FName StartFromID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "BeginQuest");

	Params::UNarrativeComponent_BeginQuest_Params Parms{};

	Parms.QuestClass = QuestClass;
	Parms.StartFromID = StartFromID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeComponent.BeginLoad
// (Native, Protected)
// Parameters:
// class FString                      SaveName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeComponent::BeginLoad(const class FString& SaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "BeginLoad");

	Params::UNarrativeComponent_BeginLoad_Params Parms{};

	Parms.SaveName = SaveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeComponent.BeginDialogue
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UDialogue>       Dialogue                                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartFromID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeComponent::BeginDialogue(TSubclassOf<class UDialogue> Dialogue, class FName StartFromID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeComponent", "BeginDialogue");

	Params::UNarrativeComponent_BeginDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.StartFromID = StartFromID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativeCondition
// (None)

class UClass* UNarrativeCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeCondition");

	return Clss;
}


// NarrativeCondition Narrative.Default__NarrativeCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeCondition* UNarrativeCondition::GetDefaultObj()
{
	static class UNarrativeCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeCondition*>(UNarrativeCondition::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeCondition.GetGraphDisplayText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNarrativeCondition::GetGraphDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeCondition", "GetGraphDisplayText");

	Params::UNarrativeCondition_GetGraphDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeCondition.CheckCondition
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeComponent*         NarrativeComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeCondition::CheckCondition(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeCondition", "CheckCondition");

	Params::UNarrativeCondition_CheckCondition_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;
	Parms.NarrativeComponent = NarrativeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativeDataTask
// (None)

class UClass* UNarrativeDataTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeDataTask");

	return Clss;
}


// NarrativeDataTask Narrative.Default__NarrativeDataTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeDataTask* UNarrativeDataTask::GetDefaultObj()
{
	static class UNarrativeDataTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeDataTask*>(UNarrativeDataTask::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeDefaultCinecam
// (Actor)

class UClass* ANarrativeDefaultCinecam::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeDefaultCinecam");

	return Clss;
}


// NarrativeDefaultCinecam Narrative.Default__NarrativeDefaultCinecam
// (Public, ClassDefaultObject, ArchetypeObject)

class ANarrativeDefaultCinecam* ANarrativeDefaultCinecam::GetDefaultObj()
{
	static class ANarrativeDefaultCinecam* Default = nullptr;

	if (!Default)
		Default = static_cast<ANarrativeDefaultCinecam*>(ANarrativeDefaultCinecam::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeDialogueSequence
// (None)

class UClass* UNarrativeDialogueSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeDialogueSequence");

	return Clss;
}


// NarrativeDialogueSequence Narrative.Default__NarrativeDialogueSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeDialogueSequence* UNarrativeDialogueSequence::GetDefaultObj()
{
	static class UNarrativeDialogueSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeDialogueSequence*>(UNarrativeDialogueSequence::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeDialogueSequence.PlaySequence
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrativeDialogueSequence::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeDialogueSequence", "PlaySequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeDialogueSequence.GetShotAnchorTransform
// (Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UNarrativeDialogueSequence::GetShotAnchorTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeDialogueSequence", "GetShotAnchorTransform");

	Params::UNarrativeDialogueSequence_GetShotAnchorTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeDialogueSequence.GetGraphDisplayText
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UNarrativeDialogueSequence::GetGraphDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeDialogueSequence", "GetGraphDisplayText");

	Params::UNarrativeDialogueSequence_GetGraphDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativeDialogueSettings
// (None)

class UClass* UNarrativeDialogueSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeDialogueSettings");

	return Clss;
}


// NarrativeDialogueSettings Narrative.Default__NarrativeDialogueSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeDialogueSettings* UNarrativeDialogueSettings::GetDefaultObj()
{
	static class UNarrativeDialogueSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeDialogueSettings*>(UNarrativeDialogueSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeEvent
// (None)

class UClass* UNarrativeEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeEvent");

	return Clss;
}


// NarrativeEvent Narrative.Default__NarrativeEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeEvent* UNarrativeEvent::GetDefaultObj()
{
	static class UNarrativeEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeEvent*>(UNarrativeEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeEvent.GetGraphDisplayText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNarrativeEvent::GetGraphDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeEvent", "GetGraphDisplayText");

	Params::UNarrativeEvent_GetGraphDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeEvent.ExecuteEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeComponent*         NarrativeComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeEvent::ExecuteEvent(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeEvent", "ExecuteEvent");

	Params::UNarrativeEvent_ExecuteEvent_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;
	Parms.NarrativeComponent = NarrativeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativeFunctionLibrary
// (None)

class UClass* UNarrativeFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeFunctionLibrary");

	return Clss;
}


// NarrativeFunctionLibrary Narrative.Default__NarrativeFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeFunctionLibrary* UNarrativeFunctionLibrary::GetDefaultObj()
{
	static class UNarrativeFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeFunctionLibrary*>(UNarrativeFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeFunctionLibrary.MakeDisplayString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNarrativeFunctionLibrary::MakeDisplayString(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeFunctionLibrary", "MakeDisplayString");

	Params::UNarrativeFunctionLibrary_MakeDisplayString_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeFunctionLibrary.GetTaskByName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeDataTask*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNarrativeDataTask* UNarrativeFunctionLibrary::GetTaskByName(class UObject* WorldContextObject, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeFunctionLibrary", "GetTaskByName");

	Params::UNarrativeFunctionLibrary_GetTaskByName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeFunctionLibrary.GetNarrativeComponentFromTarget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNarrativeComponent* UNarrativeFunctionLibrary::GetNarrativeComponentFromTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeFunctionLibrary", "GetNarrativeComponentFromTarget");

	Params::UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeFunctionLibrary.GetNarrativeComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNarrativeComponent* UNarrativeFunctionLibrary::GetNarrativeComponent(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeFunctionLibrary", "GetNarrativeComponent");

	Params::UNarrativeFunctionLibrary_GetNarrativeComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeFunctionLibrary.CompleteNarrativeDataTask
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNarrativeComponent*         Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeDataTask*          Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Argument                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeFunctionLibrary::CompleteNarrativeDataTask(class UNarrativeComponent* Target, class UNarrativeDataTask* Task, const class FString& Argument, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeFunctionLibrary", "CompleteNarrativeDataTask");

	Params::UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Params Parms{};

	Parms.Target = Target;
	Parms.Task = Task;
	Parms.Argument = Argument;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeFunctionLibrary.CompleteLooseNarrativeDataTask
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNarrativeComponent*         Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Argument                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeFunctionLibrary::CompleteLooseNarrativeDataTask(class UNarrativeComponent* Target, const class FString& Argument, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeFunctionLibrary", "CompleteLooseNarrativeDataTask");

	Params::UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Params Parms{};

	Parms.Target = Target;
	Parms.Argument = Argument;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativePartyComponent
// (None)

class UClass* UNarrativePartyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativePartyComponent");

	return Clss;
}


// NarrativePartyComponent Narrative.Default__NarrativePartyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativePartyComponent* UNarrativePartyComponent::GetDefaultObj()
{
	static class UNarrativePartyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativePartyComponent*>(UNarrativePartyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativePartyComponent.RemovePartyMember
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UNarrativeComponent*         Member                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativePartyComponent::RemovePartyMember(class UNarrativeComponent* Member)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativePartyComponent", "RemovePartyMember");

	Params::UNarrativePartyComponent_RemovePartyMember_Params Parms{};

	Parms.Member = Member;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativePartyComponent.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*                Member                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativePartyComponent::IsPartyLeader(class APlayerState* Member)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativePartyComponent", "IsPartyLeader");

	Params::UNarrativePartyComponent_IsPartyLeader_Params Parms{};

	Parms.Member = Member;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativePartyComponent.GetPartyMemberStates
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class APlayerState*>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class APlayerState*> UNarrativePartyComponent::GetPartyMemberStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativePartyComponent", "GetPartyMemberStates");

	Params::UNarrativePartyComponent_GetPartyMemberStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativePartyComponent.GetPartyMembers
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UNarrativeComponent*> ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UNarrativeComponent*> UNarrativePartyComponent::GetPartyMembers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativePartyComponent", "GetPartyMembers");

	Params::UNarrativePartyComponent_GetPartyMembers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativePartyComponent.GetPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNarrativeComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNarrativeComponent* UNarrativePartyComponent::GetPartyLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativePartyComponent", "GetPartyLeader");

	Params::UNarrativePartyComponent_GetPartyLeader_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativePartyComponent.AddPartyMember
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UNarrativeComponent*         Member                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativePartyComponent::AddPartyMember(class UNarrativeComponent* Member)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativePartyComponent", "AddPartyMember");

	Params::UNarrativePartyComponent_AddPartyMember_Params Parms{};

	Parms.Member = Member;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Narrative.NarrativeQuestSettings
// (None)

class UClass* UNarrativeQuestSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeQuestSettings");

	return Clss;
}


// NarrativeQuestSettings Narrative.Default__NarrativeQuestSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeQuestSettings* UNarrativeQuestSettings::GetDefaultObj()
{
	static class UNarrativeQuestSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeQuestSettings*>(UNarrativeQuestSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeSaveGame
// (None)

class UClass* UNarrativeSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeSaveGame");

	return Clss;
}


// NarrativeSaveGame Narrative.Default__NarrativeSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeSaveGame* UNarrativeSaveGame::GetDefaultObj()
{
	static class UNarrativeSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeSaveGame*>(UNarrativeSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeTaskManager
// (None)

class UClass* UNarrativeTaskManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeTaskManager");

	return Clss;
}


// NarrativeTaskManager Narrative.Default__NarrativeTaskManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeTaskManager* UNarrativeTaskManager::GetDefaultObj()
{
	static class UNarrativeTaskManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeTaskManager*>(UNarrativeTaskManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.Quest
// (None)

class UClass* UQuest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Quest");

	return Clss;
}


// Quest Narrative.Default__Quest
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuest* UQuest::GetDefaultObj()
{
	static class UQuest* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuest*>(UQuest::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.Quest.TakeBranch
// (Native, Public, BlueprintCallable)
// Parameters:
// class UQuestBranch*                Branch                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::TakeBranch(class UQuestBranch* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "TakeBranch");

	Params::UQuest_TakeBranch_Params Parms{};

	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.SucceedQuest
// (Final, Native, Protected)
// Parameters:
// class FText                        QuestSucceededMessage                                            (Parm, NativeAccessSpecifierPublic)

void UQuest::SucceedQuest(class FText QuestSucceededMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "SucceedQuest");

	Params::UQuest_SucceedQuest_Params Parms{};

	Parms.QuestSucceededMessage = QuestSucceededMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.OnQuestTaskProgressChanged
// (Final, Native, Protected)
// Parameters:
// class UNarrativeTask*              Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Step                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentProgress                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequiredProgress                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::OnQuestTaskProgressChanged(class UNarrativeTask* Task, class UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "OnQuestTaskProgressChanged");

	Params::UQuest_OnQuestTaskProgressChanged_Params Parms{};

	Parms.Task = Task;
	Parms.Step = Step;
	Parms.CurrentProgress = CurrentProgress;
	Parms.RequiredProgress = RequiredProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.OnQuestTaskCompleted
// (Final, Native, Protected)
// Parameters:
// class UNarrativeTask*              Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Branch                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::OnQuestTaskCompleted(class UNarrativeTask* Task, class UQuestBranch* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "OnQuestTaskCompleted");

	Params::UQuest_OnQuestTaskCompleted_Params Parms{};

	Parms.Task = Task;
	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.OnQuestBranchCompleted
// (Final, Native, Protected)
// Parameters:
// class UQuestBranch*                Branch                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::OnQuestBranchCompleted(class UQuestBranch* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "OnQuestBranchCompleted");

	Params::UQuest_OnQuestBranchCompleted_Params Parms{};

	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestState*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQuestState* UQuest::GetState(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetState");

	Params::UQuest_GetState_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetQuestName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UQuest::GetQuestName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetQuestName");

	Params::UQuest_GetQuestName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetQuestDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UQuest::GetQuestDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetQuestDescription");

	Params::UQuest_GetQuestDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetQuestCompletion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EQuestCompletion        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EQuestCompletion UQuest::GetQuestCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetQuestCompletion");

	Params::UQuest_GetQuestCompletion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetPawnOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UQuest::GetPawnOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetPawnOwner");

	Params::UQuest_GetPawnOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetOwningNarrativeComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNarrativeComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNarrativeComponent* UQuest::GetOwningNarrativeComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetOwningNarrativeComponent");

	Params::UQuest_GetOwningNarrativeComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetNodes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UQuestNode*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UQuestNode*> UQuest::GetNodes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetNodes");

	Params::UQuest_GetNodes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetGroupMembers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class APlayerController*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class APlayerController*> UQuest::GetGroupMembers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetGroupMembers");

	Params::UQuest_GetGroupMembers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.GetBranch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQuestBranch* UQuest::GetBranch(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "GetBranch");

	Params::UQuest_GetBranch_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.Quest.FailQuest
// (Final, Native, Protected)
// Parameters:
// class FText                        QuestFailedMessage                                               (Parm, NativeAccessSpecifierPublic)

void UQuest::FailQuest(class FText QuestFailedMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "FailQuest");

	Params::UQuest_FailQuest_Params Parms{};

	Parms.QuestFailedMessage = QuestFailedMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.EnterState
// (Native, Public, BlueprintCallable)
// Parameters:
// class UQuestState*                 NewState                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::EnterState(class UQuestState* NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "EnterState");

	Params::UQuest_EnterState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.Quest.BPOnQuestTaskProgressChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeTask*              Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Step                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentProgress                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequiredProgress                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestTaskProgressChanged(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestTaskProgressChanged");

	Params::UQuest_BPOnQuestTaskProgressChanged_Params Parms{};

	Parms.Quest = Quest;
	Parms.Task = Task;
	Parms.Step = Step;
	Parms.CurrentProgress = CurrentProgress;
	Parms.RequiredProgress = RequiredProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Narrative.Quest.BPOnQuestTaskCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNarrativeTask*              Task                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Step                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestTaskCompleted(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Step)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestTaskCompleted");

	Params::UQuest_BPOnQuestTaskCompleted_Params Parms{};

	Parms.Quest = Quest;
	Parms.Task = Task;
	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Narrative.Quest.BPOnQuestSucceeded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        QuestSucceededMessage                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestSucceeded(class UQuest* Quest, class FText& QuestSucceededMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestSucceeded");

	Params::UQuest_BPOnQuestSucceeded_Params Parms{};

	Parms.Quest = Quest;
	Parms.QuestSucceededMessage = QuestSucceededMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Narrative.Quest.BPOnQuestStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestStarted(class UQuest* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestStarted");

	Params::UQuest_BPOnQuestStarted_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Narrative.Quest.BPOnQuestNewState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestState*                 NewState                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestNewState(class UQuest* Quest, class UQuestState* NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestNewState");

	Params::UQuest_BPOnQuestNewState_Params Parms{};

	Parms.Quest = Quest;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Narrative.Quest.BPOnQuestFailed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        QuestFailedMessage                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestFailed(class UQuest* Quest, class FText& QuestFailedMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestFailed");

	Params::UQuest_BPOnQuestFailed_Params Parms{};

	Parms.Quest = Quest;
	Parms.QuestFailedMessage = QuestFailedMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Narrative.Quest.BPOnQuestBranchCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQuest*                      Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestBranch*                Branch                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuest::BPOnQuestBranchCompleted(class UQuest* Quest, class UQuestBranch* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest", "BPOnQuestBranchCompleted");

	Params::UQuest_BPOnQuestBranchCompleted_Params Parms{};

	Parms.Quest = Quest;
	Parms.Branch = Branch;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Narrative.QuestBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UQuestBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestBlueprintGeneratedClass");

	return Clss;
}


// QuestBlueprintGeneratedClass Narrative.Default__QuestBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestBlueprintGeneratedClass* UQuestBlueprintGeneratedClass::GetDefaultObj()
{
	static class UQuestBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestBlueprintGeneratedClass*>(UQuestBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.QuestNode
// (None)

class UClass* UQuestNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestNode");

	return Clss;
}


// QuestNode Narrative.Default__QuestNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestNode* UQuestNode::GetDefaultObj()
{
	static class UQuestNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestNode*>(UQuestNode::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.QuestState
// (None)

class UClass* UQuestState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestState");

	return Clss;
}


// QuestState Narrative.Default__QuestState
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestState* UQuestState::GetDefaultObj()
{
	static class UQuestState* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestState*>(UQuestState::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.QuestBranch
// (None)

class UClass* UQuestBranch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestBranch");

	return Clss;
}


// QuestBranch Narrative.Default__QuestBranch
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestBranch* UQuestBranch::GetDefaultObj()
{
	static class UQuestBranch* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestBranch*>(UQuestBranch::StaticClass()->DefaultObject);

	return Default;
}


// Class Narrative.NarrativeTask
// (None)

class UClass* UNarrativeTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeTask");

	return Clss;
}


// NarrativeTask Narrative.Default__NarrativeTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UNarrativeTask* UNarrativeTask::GetDefaultObj()
{
	static class UNarrativeTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeTask*>(UNarrativeTask::StaticClass()->DefaultObject);

	return Default;
}


// Function Narrative.NarrativeTask.TickTask
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UNarrativeTask::TickTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "TickTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeTask.SetProgress
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewProgress                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeTask::SetProgress(int32 NewProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "SetProgress");

	Params::UNarrativeTask_SetProgress_Params Parms{};

	Parms.NewProgress = NewProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeTask.K2_OnTaskCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNarrativeTask::K2_OnTaskCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "K2_OnTaskCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Narrative.NarrativeTask.K2_EndTask
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNarrativeTask::K2_EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "K2_EndTask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Narrative.NarrativeTask.K2_BeginTask
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNarrativeTask::K2_BeginTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "K2_BeginTask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Narrative.NarrativeTask.IsComplete
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNarrativeTask::IsComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "IsComplete");

	Params::UNarrativeTask_IsComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeTask.GetTaskProgressText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UNarrativeTask::GetTaskProgressText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "GetTaskProgressText");

	Params::UNarrativeTask_GetTaskProgressText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeTask.GetTaskNodeDescription
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UNarrativeTask::GetTaskNodeDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "GetTaskNodeDescription");

	Params::UNarrativeTask_GetTaskNodeDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeTask.GetTaskDescription
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UNarrativeTask::GetTaskDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "GetTaskDescription");

	Params::UNarrativeTask_GetTaskDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeTask.GetOwningBranch
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UQuestBranch*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQuestBranch* UNarrativeTask::GetOwningBranch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "GetOwningBranch");

	Params::UNarrativeTask_GetOwningBranch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Narrative.NarrativeTask.CompleteTask
// (BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:

void UNarrativeTask::CompleteTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "CompleteTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Narrative.NarrativeTask.AddProgress
// (Native, Protected, BlueprintCallable)
// Parameters:
// int32                              ProgressToAdd                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNarrativeTask::AddProgress(int32 ProgressToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NarrativeTask", "AddProgress");

	Params::UNarrativeTask_AddProgress_Params Parms{};

	Parms.ProgressToAdd = ProgressToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


