#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DialoguePlugin.DialogueEvents
// (None)

class UClass* UDialogueEvents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueEvents");

	return Clss;
}


// DialogueEvents DialoguePlugin.Default__DialogueEvents
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueEvents* UDialogueEvents::GetDefaultObj()
{
	static class UDialogueEvents* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueEvents*>(UDialogueEvents::StaticClass()->DefaultObject);

	return Default;
}


// Function DialoguePlugin.DialogueEvents.RecieveEventTriggered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ConsideringPlayer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NpcActor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SenderContextObject                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogueEvents::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NpcActor, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueEvents", "RecieveEventTriggered");

	Params::UDialogueEvents_RecieveEventTriggered_Params Parms{};

	Parms.ConsideringPlayer = ConsideringPlayer;
	Parms.NpcActor = NpcActor;
	Parms.SenderContextObject = SenderContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DialoguePlugin.DialogueConditions
// (None)

class UClass* UDialogueConditions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueConditions");

	return Clss;
}


// DialogueConditions DialoguePlugin.Default__DialogueConditions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueConditions* UDialogueConditions::GetDefaultObj()
{
	static class UDialogueConditions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueConditions*>(UDialogueConditions::StaticClass()->DefaultObject);

	return Default;
}


// Function DialoguePlugin.DialogueConditions.IsConditionMet_Internal
// (Native, Public)
// Parameters:
// class APlayerController*           ConsideringPlayer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NpcActor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogueConditions::IsConditionMet_Internal(class APlayerController* ConsideringPlayer, class AActor* NpcActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueConditions", "IsConditionMet_Internal");

	Params::UDialogueConditions_IsConditionMet_Internal_Params Parms{};

	Parms.ConsideringPlayer = ConsideringPlayer;
	Parms.NpcActor = NpcActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.DialogueConditions.IsConditionMet
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ConsideringPlayer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NpcActor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogueConditions::IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NpcActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueConditions", "IsConditionMet");

	Params::UDialogueConditions_IsConditionMet_Params Parms{};

	Parms.ConsideringPlayer = ConsideringPlayer;
	Parms.NpcActor = NpcActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DialoguePlugin.OrCondition
// (None)

class UClass* UOrCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrCondition");

	return Clss;
}


// OrCondition DialoguePlugin.Default__OrCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UOrCondition* UOrCondition::GetDefaultObj()
{
	static class UOrCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrCondition*>(UOrCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class DialoguePlugin.AndCondition
// (None)

class UClass* UAndCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AndCondition");

	return Clss;
}


// AndCondition DialoguePlugin.Default__AndCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UAndCondition* UAndCondition::GetDefaultObj()
{
	static class UAndCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UAndCondition*>(UAndCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class DialoguePlugin.Dialogue
// (None)

class UClass* UDialogue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dialogue");

	return Clss;
}


// Dialogue DialoguePlugin.Default__Dialogue
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogue* UDialogue::GetDefaultObj()
{
	static class UDialogue* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogue*>(UDialogue::StaticClass()->DefaultObject);

	return Default;
}


// Function DialoguePlugin.Dialogue.GetTextForId
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// int32                              NodeId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutText                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogue::GetTextForId(int32 NodeId, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetTextForId");

	Params::UDialogue_GetTextForId_Params Parms{};

	Parms.NodeId = NodeId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.Dialogue.GetSpeakerNameForId
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// int32                              NodeId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutText                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogue::GetSpeakerNameForId(int32 NodeId, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetSpeakerNameForId");

	Params::UDialogue_GetSpeakerNameForId_Params Parms{};

	Parms.NodeId = NodeId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.Dialogue.GetNextNodes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogueNodeBase*           Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UDialogueNodeBase*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UDialogueNodeBase*> UDialogue::GetNextNodes(class UDialogueNodeBase* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetNextNodes");

	Params::UDialogue_GetNextNodes_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.Dialogue.GetFirstNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogueNodeBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDialogueNodeBase* UDialogue::GetFirstNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetFirstNode");

	Params::UDialogue_GetFirstNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.Dialogue.GetFirstAccessibleSpeakerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NPC                                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UDialogue::GetFirstAccessibleSpeakerName(class APlayerController* PlayerController, class AActor* NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "GetFirstAccessibleSpeakerName");

	Params::UDialogue_GetFirstAccessibleSpeakerName_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NPC = NPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.Dialogue.CleanOuter
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDialogue::CleanOuter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "CleanOuter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DialoguePlugin.Dialogue.CallFunctionByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FunctionName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::CallFunctionByName(class UObject* Object, const class FString& FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "CallFunctionByName");

	Params::UDialogue_CallFunctionByName_Params Parms{};

	Parms.Object = Object;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DialoguePlugin.Dialogue.AssignPersistentOuter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*               InGameInstance                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogue::AssignPersistentOuter(class UGameInstance* InGameInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue", "AssignPersistentOuter");

	Params::UDialogue_AssignPersistentOuter_Params Parms{};

	Parms.InGameInstance = InGameInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DialoguePlugin.DialogueNodeBase
// (None)

class UClass* UDialogueNodeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNodeBase");

	return Clss;
}


// DialogueNodeBase DialoguePlugin.Default__DialogueNodeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNodeBase* UDialogueNodeBase::GetDefaultObj()
{
	static class UDialogueNodeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNodeBase*>(UDialogueNodeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DialoguePlugin.DialogueNodeSpeaker
// (None)

class UClass* UDialogueNodeSpeaker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNodeSpeaker");

	return Clss;
}


// DialogueNodeSpeaker DialoguePlugin.Default__DialogueNodeSpeaker
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNodeSpeaker* UDialogueNodeSpeaker::GetDefaultObj()
{
	static class UDialogueNodeSpeaker* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNodeSpeaker*>(UDialogueNodeSpeaker::StaticClass()->DefaultObject);

	return Default;
}


// Class DialoguePlugin.DialogueNodePlayer
// (None)

class UClass* UDialogueNodePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNodePlayer");

	return Clss;
}


// DialogueNodePlayer DialoguePlugin.Default__DialogueNodePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNodePlayer* UDialogueNodePlayer::GetDefaultObj()
{
	static class UDialogueNodePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNodePlayer*>(UDialogueNodePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class DialoguePlugin.DialogueNodeHub
// (None)

class UClass* UDialogueNodeHub::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueNodeHub");

	return Clss;
}


// DialogueNodeHub DialoguePlugin.Default__DialogueNodeHub
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueNodeHub* UDialogueNodeHub::GetDefaultObj()
{
	static class UDialogueNodeHub* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueNodeHub*>(UDialogueNodeHub::StaticClass()->DefaultObject);

	return Default;
}


// Class DialoguePlugin.DialogueUserWidget
// (None)

class UClass* UDialogueUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueUserWidget");

	return Clss;
}


// DialogueUserWidget DialoguePlugin.Default__DialogueUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogueUserWidget* UDialogueUserWidget::GetDefaultObj()
{
	static class UDialogueUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueUserWidget*>(UDialogueUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function DialoguePlugin.DialogueUserWidget.RunStringReplacer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OriginalString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ResultString                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogueUserWidget::RunStringReplacer(const class FString& OriginalString, class FString* ResultString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueUserWidget", "RunStringReplacer");

	Params::UDialogueUserWidget_RunStringReplacer_Params Parms{};

	Parms.OriginalString = OriginalString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultString != nullptr)
		*ResultString = std::move(Parms.ResultString);

	return Parms.ReturnValue;

}


// Function DialoguePlugin.DialogueUserWidget.RunEventsForNode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueNodeBase*           Node                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogueUserWidget::RunEventsForNode(class UDialogueNodeBase* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueUserWidget", "RunEventsForNode");

	Params::UDialogueUserWidget_RunEventsForNode_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DialoguePlugin.DialogueUserWidget.ReplaceVarStrings
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UDialogueUserWidget::ReplaceVarStrings(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueUserWidget", "ReplaceVarStrings");

	Params::UDialogueUserWidget_ReplaceVarStrings_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DialoguePlugin.DialogueUserWidget.IsConditionsMetForNode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueNodeBase*           Node                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDialogueUserWidget::IsConditionsMetForNode(class UDialogueNodeBase* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueUserWidget", "IsConditionsMetForNode");

	Params::UDialogueUserWidget_IsConditionsMetForNode_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DialoguePlugin.DialogueUserWidget.FindVarStrings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDialogueUserWidget::FindVarStrings(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueUserWidget", "FindVarStrings");

	Params::UDialogueUserWidget_FindVarStrings_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


