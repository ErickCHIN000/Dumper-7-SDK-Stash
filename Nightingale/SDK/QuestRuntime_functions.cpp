#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class QuestRuntime.QuestAssetReferenceTable
// (None)

class UClass* UQuestAssetReferenceTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestAssetReferenceTable");

	return Clss;
}


// QuestAssetReferenceTable QuestRuntime.Default__QuestAssetReferenceTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestAssetReferenceTable* UQuestAssetReferenceTable::GetDefaultObj()
{
	static class UQuestAssetReferenceTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestAssetReferenceTable*>(UQuestAssetReferenceTable::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.AbstractQuestModuleComponent
// (None)

class UClass* UAbstractQuestModuleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbstractQuestModuleComponent");

	return Clss;
}


// AbstractQuestModuleComponent QuestRuntime.Default__AbstractQuestModuleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbstractQuestModuleComponent* UAbstractQuestModuleComponent::GetDefaultObj()
{
	static class UAbstractQuestModuleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbstractQuestModuleComponent*>(UAbstractQuestModuleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.AbstractQuestModuleComponent.Debug_CreateRowHandle
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         RowHandle                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbstractQuestModuleComponent::Debug_CreateRowHandle(class FName& RowName, struct FDataTableRowHandle* RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbstractQuestModuleComponent", "Debug_CreateRowHandle");

	Params::UAbstractQuestModuleComponent_Debug_CreateRowHandle_Params Parms{};

	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RowHandle != nullptr)
		*RowHandle = std::move(Parms.RowHandle);

	return Parms.ReturnValue;

}


// Class QuestRuntime.ConditionQuestAccepted
// (None)

class UClass* UConditionQuestAccepted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionQuestAccepted");

	return Clss;
}


// ConditionQuestAccepted QuestRuntime.Default__ConditionQuestAccepted
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionQuestAccepted* UConditionQuestAccepted::GetDefaultObj()
{
	static class UConditionQuestAccepted* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionQuestAccepted*>(UConditionQuestAccepted::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.ConditionQuestAccepted.OnQuestAccepted
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FQuestAssetReference        AcceptedQuest                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UConditionQuestAccepted::OnQuestAccepted(struct FQuestAssetReference& AcceptedQuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionQuestAccepted", "OnQuestAccepted");

	Params::UConditionQuestAccepted_OnQuestAccepted_Params Parms{};

	Parms.AcceptedQuest = AcceptedQuest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.ConditionQuestAccepted.OnQuestAbandoned
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FQuestAssetReference        AbandonedQuest                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UConditionQuestAccepted::OnQuestAbandoned(struct FQuestAssetReference& AbandonedQuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionQuestAccepted", "OnQuestAbandoned");

	Params::UConditionQuestAccepted_OnQuestAbandoned_Params Parms{};

	Parms.AbandonedQuest = AbandonedQuest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.ConditionQuestAccepted.OnPersistenceAppliedHandler
// (Final, Native, Private)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionQuestAccepted::OnPersistenceAppliedHandler(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionQuestAccepted", "OnPersistenceAppliedHandler");

	Params::UConditionQuestAccepted_OnPersistenceAppliedHandler_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class QuestRuntime.ConditionQuestAcceptedGlobal
// (None)

class UClass* UConditionQuestAcceptedGlobal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionQuestAcceptedGlobal");

	return Clss;
}


// ConditionQuestAcceptedGlobal QuestRuntime.Default__ConditionQuestAcceptedGlobal
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionQuestAcceptedGlobal* UConditionQuestAcceptedGlobal::GetDefaultObj()
{
	static class UConditionQuestAcceptedGlobal* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionQuestAcceptedGlobal*>(UConditionQuestAcceptedGlobal::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.ConditionQuestAcceptedGlobal.HandlePlayerRemoved
// (Final, Native, Private)
// Parameters:
// class AGameModeBase*               GameModeBase                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionQuestAcceptedGlobal::HandlePlayerRemoved(class AGameModeBase* GameModeBase, class AController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionQuestAcceptedGlobal", "HandlePlayerRemoved");

	Params::UConditionQuestAcceptedGlobal_HandlePlayerRemoved_Params Parms{};

	Parms.GameModeBase = GameModeBase;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.ConditionQuestAcceptedGlobal.HandlePlayerAdded
// (Final, Native, Private)
// Parameters:
// class AGameModeBase*               GameModeBase                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionQuestAcceptedGlobal::HandlePlayerAdded(class AGameModeBase* GameModeBase, class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionQuestAcceptedGlobal", "HandlePlayerAdded");

	Params::UConditionQuestAcceptedGlobal_HandlePlayerAdded_Params Parms{};

	Parms.GameModeBase = GameModeBase;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class QuestRuntime.QuestGiverSession
// (Actor)

class UClass* AQuestGiverSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestGiverSession");

	return Clss;
}


// QuestGiverSession QuestRuntime.Default__QuestGiverSession
// (Public, ClassDefaultObject, ArchetypeObject)

class AQuestGiverSession* AQuestGiverSession::GetDefaultObj()
{
	static class AQuestGiverSession* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestGiverSession*>(AQuestGiverSession::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestGiverSession.OnTaskReadyToComplete
// (Native, Public, HasOutParams)
// Parameters:
// struct FOngoingTaskProgress        QuestRowHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AQuestGiverSession::OnTaskReadyToComplete(struct FOngoingTaskProgress& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "OnTaskReadyToComplete");

	Params::AQuestGiverSession_OnTaskReadyToComplete_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestGiverSession.OnTaskCompleted
// (Native, Public, HasOutParams)
// Parameters:
// struct FOngoingTaskProgress        QuestRowHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AQuestGiverSession::OnTaskCompleted(struct FOngoingTaskProgress& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "OnTaskCompleted");

	Params::AQuestGiverSession_OnTaskCompleted_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestGiverSession.OnRep_TasksToComplete
// (Final, Native, Public)
// Parameters:

void AQuestGiverSession::OnRep_TasksToComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "OnRep_TasksToComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestGiverSession.OnRep_AvailableQuests
// (Final, Native, Public)
// Parameters:

void AQuestGiverSession::OnRep_AvailableQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "OnRep_AvailableQuests");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestGiverSession.OnQuestCompleted
// (Native, Public, HasOutParams)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AQuestGiverSession::OnQuestCompleted(struct FQuestAssetReference& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "OnQuestCompleted");

	Params::AQuestGiverSession_OnQuestCompleted_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestGiverSession.OnQuestAccepted
// (Native, Public, HasOutParams)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AQuestGiverSession::OnQuestAccepted(struct FQuestAssetReference& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "OnQuestAccepted");

	Params::AQuestGiverSession_OnQuestAccepted_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestGiverSession.GetTasksToComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FOngoingTaskProgress>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FOngoingTaskProgress> AQuestGiverSession::GetTasksToComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "GetTasksToComplete");

	Params::AQuestGiverSession_GetTasksToComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverSession.GetAvailableQuests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FQuestAssetReference>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FQuestAssetReference> AQuestGiverSession::GetAvailableQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverSession", "GetAvailableQuests");

	Params::AQuestGiverSession_GetAvailableQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.DynamicQuestGiverSession
// (Actor)

class UClass* ADynamicQuestGiverSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicQuestGiverSession");

	return Clss;
}


// DynamicQuestGiverSession QuestRuntime.Default__DynamicQuestGiverSession
// (Public, ClassDefaultObject, ArchetypeObject)

class ADynamicQuestGiverSession* ADynamicQuestGiverSession::GetDefaultObj()
{
	static class ADynamicQuestGiverSession* Default = nullptr;

	if (!Default)
		Default = static_cast<ADynamicQuestGiverSession*>(ADynamicQuestGiverSession::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestAssetReferenceFunctionLibrary
// (None)

class UClass* UQuestAssetReferenceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestAssetReferenceFunctionLibrary");

	return Clss;
}


// QuestAssetReferenceFunctionLibrary QuestRuntime.Default__QuestAssetReferenceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestAssetReferenceFunctionLibrary* UQuestAssetReferenceFunctionLibrary::GetDefaultObj()
{
	static class UQuestAssetReferenceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestAssetReferenceFunctionLibrary*>(UQuestAssetReferenceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.MakeStartingOngoingTaskProgressFromQuestReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestAssetReference        Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOngoingTaskProgress        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOngoingTaskProgress UQuestAssetReferenceFunctionLibrary::MakeStartingOngoingTaskProgressFromQuestReference(struct FQuestAssetReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "MakeStartingOngoingTaskProgressFromQuestReference");

	Params::UQuestAssetReferenceFunctionLibrary_MakeStartingOngoingTaskProgressFromQuestReference_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.MakeQuestAssetReferenceFromDataAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UQuestDataAsset>DataAsset                                                        (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuestAssetReference        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FQuestAssetReference UQuestAssetReferenceFunctionLibrary::MakeQuestAssetReferenceFromDataAsset(TSoftObjectPtr<class UQuestDataAsset> DataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "MakeQuestAssetReferenceFromDataAsset");

	Params::UQuestAssetReferenceFunctionLibrary_MakeQuestAssetReferenceFromDataAsset_Params Parms{};

	Parms.DataAsset = DataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetUniqueNameFromQuestAssetReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuestAssetReference        Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UQuestAssetReferenceFunctionLibrary::GetUniqueNameFromQuestAssetReference(struct FQuestAssetReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetUniqueNameFromQuestAssetReference");

	Params::UQuestAssetReferenceFunctionLibrary_GetUniqueNameFromQuestAssetReference_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetUniqueIDFromQuestAssetReference
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuestAssetReference        AssetReference                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UQuestAssetReferenceFunctionLibrary::GetUniqueIDFromQuestAssetReference(struct FQuestAssetReference& AssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetUniqueIDFromQuestAssetReference");

	Params::UQuestAssetReferenceFunctionLibrary_GetUniqueIDFromQuestAssetReference_Params Parms{};

	Parms.AssetReference = AssetReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetUniqueIDFromOngoingTask
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UQuestAssetReferenceFunctionLibrary::GetUniqueIDFromOngoingTask(struct FOngoingTaskProgress& TaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetUniqueIDFromOngoingTask");

	Params::UQuestAssetReferenceFunctionLibrary_GetUniqueIDFromOngoingTask_Params Parms{};

	Parms.TaskProgress = TaskProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetQuestReferenceFromPlayerTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestAssetReference        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FQuestAssetReference UQuestAssetReferenceFunctionLibrary::GetQuestReferenceFromPlayerTask(struct FPlayerTask& PlayerTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetQuestReferenceFromPlayerTask");

	Params::UQuestAssetReferenceFunctionLibrary_GetQuestReferenceFromPlayerTask_Params Parms{};

	Parms.PlayerTask = PlayerTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetQuestReferenceFromOngoingTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestAssetReference        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FQuestAssetReference UQuestAssetReferenceFunctionLibrary::GetQuestReferenceFromOngoingTask(struct FOngoingTaskProgress& TaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetQuestReferenceFromOngoingTask");

	Params::UQuestAssetReferenceFunctionLibrary_GetQuestReferenceFromOngoingTask_Params Parms{};

	Parms.TaskProgress = TaskProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetQuestDataFromQuestAssetReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestAssetReference        Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuest                      OutData                                                          (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestAssetReferenceFunctionLibrary::GetQuestDataFromQuestAssetReference(struct FQuestAssetReference& Reference, struct FQuest* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetQuestDataFromQuestAssetReference");

	Params::UQuestAssetReferenceFunctionLibrary_GetQuestDataFromQuestAssetReference_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetDebugStringFromQuestAssetReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuestAssetReference        Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UQuestAssetReferenceFunctionLibrary::GetDebugStringFromQuestAssetReference(struct FQuestAssetReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "GetDebugStringFromQuestAssetReference");

	Params::UQuestAssetReferenceFunctionLibrary_GetDebugStringFromQuestAssetReference_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.CheckQuestAssetReferencesAreEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuestAssetReference        A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestAssetReference        B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestAssetReferenceFunctionLibrary::CheckQuestAssetReferencesAreEqual(struct FQuestAssetReference& A, struct FQuestAssetReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestAssetReferenceFunctionLibrary", "CheckQuestAssetReferencesAreEqual");

	Params::UQuestAssetReferenceFunctionLibrary_CheckQuestAssetReferencesAreEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestDataAsset
// (None)

class UClass* UQuestDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestDataAsset");

	return Clss;
}


// QuestDataAsset QuestRuntime.Default__QuestDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestDataAsset* UQuestDataAsset::GetDefaultObj()
{
	static class UQuestDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestDataAsset*>(UQuestDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestDataMigrationFunctionLibrary
// (None)

class UClass* UQuestDataMigrationFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestDataMigrationFunctionLibrary");

	return Clss;
}


// QuestDataMigrationFunctionLibrary QuestRuntime.Default__QuestDataMigrationFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestDataMigrationFunctionLibrary* UQuestDataMigrationFunctionLibrary::GetDefaultObj()
{
	static class UQuestDataMigrationFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestDataMigrationFunctionLibrary*>(UQuestDataMigrationFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestTaskPresentationDataFromTaskProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestTaskPresentationData  OutQuestTaskPresentationData                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestDataMigrationFunctionLibrary::MakeQuestTaskPresentationDataFromTaskProgress(struct FOngoingTaskProgress& TaskProgress, struct FQuestTaskPresentationData* OutQuestTaskPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestDataMigrationFunctionLibrary", "MakeQuestTaskPresentationDataFromTaskProgress");

	Params::UQuestDataMigrationFunctionLibrary_MakeQuestTaskPresentationDataFromTaskProgress_Params Parms{};

	Parms.TaskProgress = TaskProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutQuestTaskPresentationData != nullptr)
		*OutQuestTaskPresentationData = std::move(Parms.OutQuestTaskPresentationData);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestTaskPresentationDataFromQuestTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestTask                  TaskData                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestTaskPresentationData  OutQuestTaskPresentationData                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestDataMigrationFunctionLibrary::MakeQuestTaskPresentationDataFromQuestTask(struct FQuestTask& TaskData, struct FOngoingTaskProgress& TaskProgress, struct FQuestTaskPresentationData* OutQuestTaskPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestDataMigrationFunctionLibrary", "MakeQuestTaskPresentationDataFromQuestTask");

	Params::UQuestDataMigrationFunctionLibrary_MakeQuestTaskPresentationDataFromQuestTask_Params Parms{};

	Parms.TaskData = TaskData;
	Parms.TaskProgress = TaskProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutQuestTaskPresentationData != nullptr)
		*OutQuestTaskPresentationData = std::move(Parms.OutQuestTaskPresentationData);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestRewardPresentationDataFromQuestReward
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestReward                RewardData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FQuestRewardPresentationDataOutQuestRewardPresentationData                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestDataMigrationFunctionLibrary::MakeQuestRewardPresentationDataFromQuestReward(struct FQuestReward& RewardData, struct FQuestRewardPresentationData* OutQuestRewardPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestDataMigrationFunctionLibrary", "MakeQuestRewardPresentationDataFromQuestReward");

	Params::UQuestDataMigrationFunctionLibrary_MakeQuestRewardPresentationDataFromQuestReward_Params Parms{};

	Parms.RewardData = RewardData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutQuestRewardPresentationData != nullptr)
		*OutQuestRewardPresentationData = std::move(Parms.OutQuestRewardPresentationData);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestPresentationDataFromTaskProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestPresentationData      OutQuestPresentationData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestDataMigrationFunctionLibrary::MakeQuestPresentationDataFromTaskProgress(struct FOngoingTaskProgress& TaskProgress, struct FQuestPresentationData* OutQuestPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestDataMigrationFunctionLibrary", "MakeQuestPresentationDataFromTaskProgress");

	Params::UQuestDataMigrationFunctionLibrary_MakeQuestPresentationDataFromTaskProgress_Params Parms{};

	Parms.TaskProgress = TaskProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutQuestPresentationData != nullptr)
		*OutQuestPresentationData = std::move(Parms.OutQuestPresentationData);

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestFunctionLibrary
// (None)

class UClass* UQuestFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestFunctionLibrary");

	return Clss;
}


// QuestFunctionLibrary QuestRuntime.Default__QuestFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestFunctionLibrary* UQuestFunctionLibrary::GetDefaultObj()
{
	static class UQuestFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestFunctionLibrary*>(UQuestFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestFunctionLibrary.IsQuestGiverFactionExchange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      QuestGiver                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestFunctionLibrary::IsQuestGiverFactionExchange(class AActor* QuestGiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestFunctionLibrary", "IsQuestGiverFactionExchange");

	Params::UQuestFunctionLibrary_IsQuestGiverFactionExchange_Params Parms{};

	Parms.QuestGiver = QuestGiver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestFunctionLibrary.IsQuestFactionExchange
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuest                      Quest                                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestFunctionLibrary::IsQuestFactionExchange(struct FQuest& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestFunctionLibrary", "IsQuestFactionExchange");

	Params::UQuestFunctionLibrary_IsQuestFactionExchange_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestFunctionLibrary.GetTaskItemConstraints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FItemConstraint>     OutItemConstraints                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UQuestFunctionLibrary::GetTaskItemConstraints(struct FPlayerTask& PlayerTask, TArray<struct FItemConstraint>* OutItemConstraints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestFunctionLibrary", "GetTaskItemConstraints");

	Params::UQuestFunctionLibrary_GetTaskItemConstraints_Params Parms{};

	Parms.PlayerTask = PlayerTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItemConstraints != nullptr)
		*OutItemConstraints = std::move(Parms.OutItemConstraints);

}


// Function QuestRuntime.QuestFunctionLibrary.GetQuestGiverKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      QuestGiver                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuestGiverKey              OutQuestGiverKey                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestFunctionLibrary::GetQuestGiverKey(class AActor* QuestGiver, struct FQuestGiverKey* OutQuestGiverKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestFunctionLibrary", "GetQuestGiverKey");

	Params::UQuestFunctionLibrary_GetQuestGiverKey_Params Parms{};

	Parms.QuestGiver = QuestGiver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutQuestGiverKey != nullptr)
		*OutQuestGiverKey = std::move(Parms.OutQuestGiverKey);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestFunctionLibrary.DoesTaskNeedItemsToTurnIn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestFunctionLibrary::DoesTaskNeedItemsToTurnIn(struct FPlayerTask& PlayerTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestFunctionLibrary", "DoesTaskNeedItemsToTurnIn");

	Params::UQuestFunctionLibrary_DoesTaskNeedItemsToTurnIn_Params Parms{};

	Parms.PlayerTask = PlayerTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestGenericReplicatedDataFunctionLibrary
// (None)

class UClass* UQuestGenericReplicatedDataFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestGenericReplicatedDataFunctionLibrary");

	return Clss;
}


// QuestGenericReplicatedDataFunctionLibrary QuestRuntime.Default__QuestGenericReplicatedDataFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestGenericReplicatedDataFunctionLibrary* UQuestGenericReplicatedDataFunctionLibrary::GetDefaultObj()
{
	static class UQuestGenericReplicatedDataFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestGenericReplicatedDataFunctionLibrary*>(UQuestGenericReplicatedDataFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestGenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsQuestAssetReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasQuestAssetReference                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuestAssetReference        QuestAssetReference                                              (Parm, OutParm, NativeAccessSpecifierPublic)

void UQuestGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsQuestAssetReference(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasQuestAssetReference, struct FQuestAssetReference* QuestAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsQuestAssetReference");

	Params::UQuestGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsQuestAssetReference_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasQuestAssetReference != nullptr)
		*bHasQuestAssetReference = Parms.bHasQuestAssetReference;

	if (QuestAssetReference != nullptr)
		*QuestAssetReference = std::move(Parms.QuestAssetReference);

}


// Function QuestRuntime.QuestGenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromQuestAssetReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuestAssetReference        QuestAssetReference                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UQuestGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromQuestAssetReference(struct FQuestAssetReference& QuestAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromQuestAssetReference");

	Params::UQuestGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromQuestAssetReference_Params Parms{};

	Parms.QuestAssetReference = QuestAssetReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestGiverComponent
// (None)

class UClass* UQuestGiverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestGiverComponent");

	return Clss;
}


// QuestGiverComponent QuestRuntime.Default__QuestGiverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestGiverComponent* UQuestGiverComponent::GetDefaultObj()
{
	static class UQuestGiverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestGiverComponent*>(UQuestGiverComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestGiverComponent.GetQuestModuleTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UQuestGiverComponent::GetQuestModuleTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverComponent", "GetQuestModuleTag");

	Params::UQuestGiverComponent_GetQuestModuleTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverComponent.GetQuestGiverTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UQuestGiverComponent::GetQuestGiverTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverComponent", "GetQuestGiverTag");

	Params::UQuestGiverComponent_GetQuestGiverTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverComponent.GetQuestGiverRowHandle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UQuestGiverComponent::GetQuestGiverRowHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverComponent", "GetQuestGiverRowHandle");

	Params::UQuestGiverComponent_GetQuestGiverRowHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverComponent.GetQuestGiverData
// (Native, Public, Const)
// Parameters:
// struct FQuestGiverData             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FQuestGiverData UQuestGiverComponent::GetQuestGiverData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverComponent", "GetQuestGiverData");

	Params::UQuestGiverComponent_GetQuestGiverData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestGiverInterface
// (None)

class UClass* IQuestGiverInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestGiverInterface");

	return Clss;
}


// QuestGiverInterface QuestRuntime.Default__QuestGiverInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IQuestGiverInterface* IQuestGiverInterface::GetDefaultObj()
{
	static class IQuestGiverInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IQuestGiverInterface*>(IQuestGiverInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestGiverInterface.GetQuestModuleTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag IQuestGiverInterface::GetQuestModuleTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverInterface", "GetQuestModuleTag");

	Params::IQuestGiverInterface_GetQuestModuleTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverInterface.GetQuestGiverTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag IQuestGiverInterface::GetQuestGiverTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverInterface", "GetQuestGiverTag");

	Params::IQuestGiverInterface_GetQuestGiverTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverInterface.GetQuestGiverRowHandle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDataTableRowHandle IQuestGiverInterface::GetQuestGiverRowHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverInterface", "GetQuestGiverRowHandle");

	Params::IQuestGiverInterface_GetQuestGiverRowHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestGiverInterface.GetQuestGiverData
// (Native, Public, Const)
// Parameters:
// struct FQuestGiverData             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FQuestGiverData IQuestGiverInterface::GetQuestGiverData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestGiverInterface", "GetQuestGiverData");

	Params::IQuestGiverInterface_GetQuestGiverData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestModuleInterface
// (None)

class UClass* IQuestModuleInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestModuleInterface");

	return Clss;
}


// QuestModuleInterface QuestRuntime.Default__QuestModuleInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IQuestModuleInterface* IQuestModuleInterface::GetDefaultObj()
{
	static class IQuestModuleInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IQuestModuleInterface*>(IQuestModuleInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestModuleInterface.Debug_CreateRowHandle
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        RowName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         RowHandle                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestModuleInterface::Debug_CreateRowHandle(class FName& RowName, struct FDataTableRowHandle* RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestModuleInterface", "Debug_CreateRowHandle");

	Params::IQuestModuleInterface_Debug_CreateRowHandle_Params Parms{};

	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RowHandle != nullptr)
		*RowHandle = std::move(Parms.RowHandle);

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestPresentationSettings
// (None)

class UClass* UQuestPresentationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestPresentationSettings");

	return Clss;
}


// QuestPresentationSettings QuestRuntime.Default__QuestPresentationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestPresentationSettings* UQuestPresentationSettings::GetDefaultObj()
{
	static class UQuestPresentationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestPresentationSettings*>(UQuestPresentationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestOngoingRequirement
// (None)

class UClass* UQuestOngoingRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestOngoingRequirement");

	return Clss;
}


// QuestOngoingRequirement QuestRuntime.Default__QuestOngoingRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestOngoingRequirement* UQuestOngoingRequirement::GetDefaultObj()
{
	static class UQuestOngoingRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestOngoingRequirement*>(UQuestOngoingRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestTaskReadyToCompleteRequirement
// (None)

class UClass* UQuestTaskReadyToCompleteRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTaskReadyToCompleteRequirement");

	return Clss;
}


// QuestTaskReadyToCompleteRequirement QuestRuntime.Default__QuestTaskReadyToCompleteRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestTaskReadyToCompleteRequirement* UQuestTaskReadyToCompleteRequirement::GetDefaultObj()
{
	static class UQuestTaskReadyToCompleteRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTaskReadyToCompleteRequirement*>(UQuestTaskReadyToCompleteRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestTaskOngoingRequirement
// (None)

class UClass* UQuestTaskOngoingRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTaskOngoingRequirement");

	return Clss;
}


// QuestTaskOngoingRequirement QuestRuntime.Default__QuestTaskOngoingRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestTaskOngoingRequirement* UQuestTaskOngoingRequirement::GetDefaultObj()
{
	static class UQuestTaskOngoingRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTaskOngoingRequirement*>(UQuestTaskOngoingRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestIsAbleToAcceptRequirement
// (None)

class UClass* UQuestIsAbleToAcceptRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestIsAbleToAcceptRequirement");

	return Clss;
}


// QuestIsAbleToAcceptRequirement QuestRuntime.Default__QuestIsAbleToAcceptRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestIsAbleToAcceptRequirement* UQuestIsAbleToAcceptRequirement::GetDefaultObj()
{
	static class UQuestIsAbleToAcceptRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestIsAbleToAcceptRequirement*>(UQuestIsAbleToAcceptRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestRewardPresentationDataBuilder
// (None)

class UClass* UQuestRewardPresentationDataBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestRewardPresentationDataBuilder");

	return Clss;
}


// QuestRewardPresentationDataBuilder QuestRuntime.Default__QuestRewardPresentationDataBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestRewardPresentationDataBuilder* UQuestRewardPresentationDataBuilder::GetDefaultObj()
{
	static class UQuestRewardPresentationDataBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestRewardPresentationDataBuilder*>(UQuestRewardPresentationDataBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestRewardPresentationDataBuilder.MakeQuestRewardPresentationData
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URewardBehaviour*            RewardBehaviour                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuestRewardPresentationDataOutPresentationData                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestRewardPresentationDataBuilder::MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRewardPresentationDataBuilder", "MakeQuestRewardPresentationData");

	Params::UQuestRewardPresentationDataBuilder_MakeQuestRewardPresentationData_Params Parms{};

	Parms.RewardBehaviour = RewardBehaviour;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}


// Class QuestRuntime.NullQuestRewardPresentationDataBuilder
// (None)

class UClass* UNullQuestRewardPresentationDataBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NullQuestRewardPresentationDataBuilder");

	return Clss;
}


// NullQuestRewardPresentationDataBuilder QuestRuntime.Default__NullQuestRewardPresentationDataBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UNullQuestRewardPresentationDataBuilder* UNullQuestRewardPresentationDataBuilder::GetDefaultObj()
{
	static class UNullQuestRewardPresentationDataBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UNullQuestRewardPresentationDataBuilder*>(UNullQuestRewardPresentationDataBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestServerWorldSubsystem
// (None)

class UClass* UQuestServerWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestServerWorldSubsystem");

	return Clss;
}


// QuestServerWorldSubsystem QuestRuntime.Default__QuestServerWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestServerWorldSubsystem* UQuestServerWorldSubsystem::GetDefaultObj()
{
	static class UQuestServerWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestServerWorldSubsystem*>(UQuestServerWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class QuestRuntime.QuestTaskPresentationDataBuilder
// (None)

class UClass* UQuestTaskPresentationDataBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTaskPresentationDataBuilder");

	return Clss;
}


// QuestTaskPresentationDataBuilder QuestRuntime.Default__QuestTaskPresentationDataBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestTaskPresentationDataBuilder* UQuestTaskPresentationDataBuilder::GetDefaultObj()
{
	static class UQuestTaskPresentationDataBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTaskPresentationDataBuilder*>(UQuestTaskPresentationDataBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestTaskPresentationDataBuilder.MakeTaskPresentationData
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTask                       Task                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConditionProgressDataList  TaskProgressList                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FQuestTaskPresentationData  OutPresentationData                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UQuestTaskPresentationDataBuilder::MakeTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTaskPresentationDataBuilder", "MakeTaskPresentationData");

	Params::UQuestTaskPresentationDataBuilder_MakeTaskPresentationData_Params Parms{};

	Parms.Task = Task;
	Parms.TaskProgressList = TaskProgressList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTaskPresentationDataBuilder.FormatTaskName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        InsertText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UQuestTaskPresentationDataBuilder::FormatTaskName(class FText& InsertText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTaskPresentationDataBuilder", "FormatTaskName");

	Params::UQuestTaskPresentationDataBuilder_FormatTaskName_Params Parms{};

	Parms.InsertText = InsertText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.QuestTrackerDebugInterface
// (None)

class UClass* IQuestTrackerDebugInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTrackerDebugInterface");

	return Clss;
}


// QuestTrackerDebugInterface QuestRuntime.Default__QuestTrackerDebugInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IQuestTrackerDebugInterface* IQuestTrackerDebugInterface::GetDefaultObj()
{
	static class IQuestTrackerDebugInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IQuestTrackerDebugInterface*>(IQuestTrackerDebugInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestTrackerDebugInterface.CheatSetQuestRequirementPolicy
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EQuestRequirementsPolicyPolicy                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerDebugInterface::CheatSetQuestRequirementPolicy(enum class EQuestRequirementsPolicy Policy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerDebugInterface", "CheatSetQuestRequirementPolicy");

	Params::IQuestTrackerDebugInterface_CheatSetQuestRequirementPolicy_Params Parms{};

	Parms.Policy = Policy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class QuestRuntime.QuestTrackerInterface
// (None)

class UClass* IQuestTrackerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTrackerInterface");

	return Clss;
}


// QuestTrackerInterface QuestRuntime.Default__QuestTrackerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IQuestTrackerInterface* IQuestTrackerInterface::GetDefaultObj()
{
	static class IQuestTrackerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IQuestTrackerInterface*>(IQuestTrackerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventTo_OnCurrentQuestCountChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventTo_OnCurrentQuestCountChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventTo_OnCurrentQuestCountChanged");

	Params::IQuestTrackerInterface_UnbindEventTo_OnCurrentQuestCountChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskReadyToComplete
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnTaskReadyToComplete(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnTaskReadyToComplete");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnTaskReadyToComplete_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskProgressChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnTaskProgressChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnTaskProgressChanged");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnTaskProgressChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnTaskCompleted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnTaskCompleted");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnTaskCompleted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskAccepted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnTaskAccepted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnTaskAccepted");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnTaskAccepted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnRequestItemTurnIn
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnRequestItemTurnIn(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnRequestItemTurnIn");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnRequestItemTurnIn_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestGiverStatusChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnQuestGiverStatusChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnQuestGiverStatusChanged");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnQuestGiverStatusChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestGiverSessionChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnQuestGiverSessionChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnQuestGiverSessionChanged");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnQuestGiverSessionChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnQuestCompleted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnQuestCompleted");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnQuestCompleted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestAccepted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnQuestAccepted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnQuestAccepted");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnQuestAccepted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestAbandoned
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnQuestAbandoned(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnQuestAbandoned");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnQuestAbandoned_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnOngoingTasksProgressChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnOngoingTasksProgressChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnOngoingTasksProgressChanged");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnOngoingTasksProgressChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnItemTurnInClosed
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::UnbindEventFrom_OnItemTurnInClosed(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "UnbindEventFrom_OnItemTurnInClosed");

	Params::IQuestTrackerInterface_UnbindEventFrom_OnItemTurnInClosed_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.OpenQuestItemTurnIn
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOngoingTaskProgress        OngoingTask                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::OpenQuestItemTurnIn(struct FOngoingTaskProgress& OngoingTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "OpenQuestItemTurnIn");

	Params::IQuestTrackerInterface_OpenQuestItemTurnIn_Params Parms{};

	Parms.OngoingTask = OngoingTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.NotifyQuestItemTurnInClosed
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOngoingTaskProgress        OngoingTask                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::NotifyQuestItemTurnInClosed(struct FOngoingTaskProgress& OngoingTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "NotifyQuestItemTurnInClosed");

	Params::IQuestTrackerInterface_NotifyQuestItemTurnInClosed_Params Parms{};

	Parms.OngoingTask = OngoingTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.NotifyPreconditionMayHaveChanged
// (Native, Public, BlueprintCallable)
// Parameters:

void IQuestTrackerInterface::NotifyPreconditionMayHaveChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "NotifyPreconditionMayHaveChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.IsReadyToAcceptQuests
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestTrackerInterface::IsReadyToAcceptQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "IsReadyToAcceptQuests");

	Params::IQuestTrackerInterface_IsReadyToAcceptQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.IsQuestOngoing
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuestAssetReference        Quest                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestTrackerInterface::IsQuestOngoing(struct FQuestAssetReference& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "IsQuestOngoing");

	Params::IQuestTrackerInterface_IsQuestOngoing_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.IsQuestCompleted
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuestAssetReference        Quest                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestTrackerInterface::IsQuestCompleted(struct FQuestAssetReference& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "IsQuestCompleted");

	Params::IQuestTrackerInterface_IsQuestCompleted_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.HandInTaskWithItems
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FInventoryEntryIdAndQuantity>ItemInstanceIdsAndQuantities                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::HandInTaskWithItems(struct FPlayerTask& PlayerTask, TArray<struct FInventoryEntryIdAndQuantity>& ItemInstanceIdsAndQuantities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "HandInTaskWithItems");

	Params::IQuestTrackerInterface_HandInTaskWithItems_Params Parms{};

	Parms.PlayerTask = PlayerTask;
	Parms.ItemInstanceIdsAndQuantities = ItemInstanceIdsAndQuantities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.HandInTask
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::HandInTask(struct FPlayerTask& PlayerTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "HandInTask");

	Params::IQuestTrackerInterface_HandInTask_Params Parms{};

	Parms.PlayerTask = PlayerTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.GetTaskTurnInItemsFromPlayerInventory
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FInventoryEntry>     OutInventoryItems                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestTrackerInterface::GetTaskTurnInItemsFromPlayerInventory(struct FPlayerTask& PlayerTask, TArray<struct FInventoryEntry>* OutInventoryItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetTaskTurnInItemsFromPlayerInventory");

	Params::IQuestTrackerInterface_GetTaskTurnInItemsFromPlayerInventory_Params Parms{};

	Parms.PlayerTask = PlayerTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutInventoryItems != nullptr)
		*OutInventoryItems = std::move(Parms.OutInventoryItems);

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.GetTasksReadyToCompleteForGiver
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuestGiverKey              GiverData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOngoingTaskProgress>OutTasksToComplete                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetTasksReadyToCompleteForGiver(struct FQuestGiverKey& GiverData, TArray<struct FOngoingTaskProgress>* OutTasksToComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetTasksReadyToCompleteForGiver");

	Params::IQuestTrackerInterface_GetTasksReadyToCompleteForGiver_Params Parms{};

	Parms.GiverData = GiverData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTasksToComplete != nullptr)
		*OutTasksToComplete = std::move(Parms.OutTasksToComplete);

}


// Function QuestRuntime.QuestTrackerInterface.GetTasksReadyToComplete
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FOngoingTaskProgress>OutTasksReadyToComplete                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetTasksReadyToComplete(TArray<struct FOngoingTaskProgress>* OutTasksReadyToComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetTasksReadyToComplete");

	Params::IQuestTrackerInterface_GetTasksReadyToComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTasksReadyToComplete != nullptr)
		*OutTasksReadyToComplete = std::move(Parms.OutTasksReadyToComplete);

}


// Function QuestRuntime.QuestTrackerInterface.GetRerouteQuestModule
// (Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IQuestTrackerInterface::GetRerouteQuestModule()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetRerouteQuestModule");

	Params::IQuestTrackerInterface_GetRerouteQuestModule_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.GetQuestGiverStatus
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuestGiverKey              QuestGiverKey                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAvailableQuests                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTasksToComplete                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundQuestGiver                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetQuestGiverStatus(struct FQuestGiverKey& QuestGiverKey, bool* bAvailableQuests, bool* bTasksToComplete, bool* bFoundQuestGiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetQuestGiverStatus");

	Params::IQuestTrackerInterface_GetQuestGiverStatus_Params Parms{};

	Parms.QuestGiverKey = QuestGiverKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAvailableQuests != nullptr)
		*bAvailableQuests = Parms.bAvailableQuests;

	if (bTasksToComplete != nullptr)
		*bTasksToComplete = Parms.bTasksToComplete;

	if (bFoundQuestGiver != nullptr)
		*bFoundQuestGiver = Parms.bFoundQuestGiver;

}


// Function QuestRuntime.QuestTrackerInterface.GetQuestGiverSession
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AQuestGiverSession*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AQuestGiverSession* IQuestTrackerInterface::GetQuestGiverSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetQuestGiverSession");

	Params::IQuestTrackerInterface_GetQuestGiverSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.GetPlayerQuestProfile
// (Native, Public)
// Parameters:
// struct FPlayerQuestProfile         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPlayerQuestProfile IQuestTrackerInterface::GetPlayerQuestProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetPlayerQuestProfile");

	Params::IQuestTrackerInterface_GetPlayerQuestProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.GetOngoingTasksProgress
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FOngoingTaskProgress>OutOngoingTasksProgress                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetOngoingTasksProgress(TArray<struct FOngoingTaskProgress>* OutOngoingTasksProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetOngoingTasksProgress");

	Params::IQuestTrackerInterface_GetOngoingTasksProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOngoingTasksProgress != nullptr)
		*OutOngoingTasksProgress = std::move(Parms.OutOngoingTasksProgress);

}


// Function QuestRuntime.QuestTrackerInterface.GetOngoingQuests
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FQuestAssetReference>OutOngoingQuests                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetOngoingQuests(TArray<struct FQuestAssetReference>* OutOngoingQuests)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetOngoingQuests");

	Params::IQuestTrackerInterface_GetOngoingQuests_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOngoingQuests != nullptr)
		*OutOngoingQuests = std::move(Parms.OutOngoingQuests);

}


// Function QuestRuntime.QuestTrackerInterface.GetCurrentQuestCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IQuestTrackerInterface::GetCurrentQuestCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetCurrentQuestCount");

	Params::IQuestTrackerInterface_GetCurrentQuestCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.GetConditionHandleForQuestTask
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuestAssetReference        OwningQuest                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGuid                       OutHandle                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetConditionHandleForQuestTask(struct FQuestAssetReference& OwningQuest, struct FGuid* OutHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetConditionHandleForQuestTask");

	Params::IQuestTrackerInterface_GetConditionHandleForQuestTask_Params Parms{};

	Parms.OwningQuest = OwningQuest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHandle != nullptr)
		*OutHandle = std::move(Parms.OutHandle);

}


// Function QuestRuntime.QuestTrackerInterface.GetAvailableQuestsForGiver
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestGiverKey              GiverData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuestAssetReference>OutAvailableQuests                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetAvailableQuestsForGiver(struct FQuestGiverKey& GiverData, TArray<struct FQuestAssetReference>* OutAvailableQuests)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetAvailableQuestsForGiver");

	Params::IQuestTrackerInterface_GetAvailableQuestsForGiver_Params Parms{};

	Parms.GiverData = GiverData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAvailableQuests != nullptr)
		*OutAvailableQuests = std::move(Parms.OutAvailableQuests);

}


// Function QuestRuntime.QuestTrackerInterface.GetAllTaskProgress
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FOngoingTaskProgress>OngoingTasks                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FOngoingTaskProgress>ReadyToCompleteTasks                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::GetAllTaskProgress(TArray<struct FOngoingTaskProgress>* OngoingTasks, TArray<struct FOngoingTaskProgress>* ReadyToCompleteTasks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "GetAllTaskProgress");

	Params::IQuestTrackerInterface_GetAllTaskProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OngoingTasks != nullptr)
		*OngoingTasks = std::move(Parms.OngoingTasks);

	if (ReadyToCompleteTasks != nullptr)
		*ReadyToCompleteTasks = std::move(Parms.ReadyToCompleteTasks);

}


// Function QuestRuntime.QuestTrackerInterface.ExitQuestGiverInteraction
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      QuestGiver                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::ExitQuestGiverInteraction(class AActor* QuestGiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "ExitQuestGiverInteraction");

	Params::IQuestTrackerInterface_ExitQuestGiverInteraction_Params Parms{};

	Parms.QuestGiver = QuestGiver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.EnterQuestGiverInteraction
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      QuestGiver                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::EnterQuestGiverInteraction(class AActor* QuestGiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "EnterQuestGiverInteraction");

	Params::IQuestTrackerInterface_EnterQuestGiverInteraction_Params Parms{};

	Parms.QuestGiver = QuestGiver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.DoExchange
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestAssetReference        ExchangeReference                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FInventoryEntryIdAndQuantity>ItemInstanceIdsAndQuantities                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::DoExchange(struct FQuestAssetReference& ExchangeReference, TArray<struct FInventoryEntryIdAndQuantity>& ItemInstanceIdsAndQuantities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "DoExchange");

	Params::IQuestTrackerInterface_DoExchange_Params Parms{};

	Parms.ExchangeReference = ExchangeReference;
	Parms.ItemInstanceIdsAndQuantities = ItemInstanceIdsAndQuantities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.CanTaskBeHandedIn
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestTrackerInterface::CanTaskBeHandedIn(struct FPlayerTask& PlayerTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "CanTaskBeHandedIn");

	Params::IQuestTrackerInterface_CanTaskBeHandedIn_Params Parms{};

	Parms.PlayerTask = PlayerTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.CanQuestBeStarted
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuestAssetReference        Quest                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IQuestTrackerInterface::CanQuestBeStarted(struct FQuestAssetReference& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "CanQuestBeStarted");

	Params::IQuestTrackerInterface_CanQuestBeStarted_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskReadyToComplete
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnTaskReadyToComplete(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnTaskReadyToComplete");

	Params::IQuestTrackerInterface_BindEventTo_OnTaskReadyToComplete_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskProgressChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnTaskProgressChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnTaskProgressChanged");

	Params::IQuestTrackerInterface_BindEventTo_OnTaskProgressChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnTaskCompleted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnTaskCompleted");

	Params::IQuestTrackerInterface_BindEventTo_OnTaskCompleted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskAccepted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnTaskAccepted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnTaskAccepted");

	Params::IQuestTrackerInterface_BindEventTo_OnTaskAccepted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnRequestItemTurnIn
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnRequestItemTurnIn(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnRequestItemTurnIn");

	Params::IQuestTrackerInterface_BindEventTo_OnRequestItemTurnIn_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestGiverStatusChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnQuestGiverStatusChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnQuestGiverStatusChanged");

	Params::IQuestTrackerInterface_BindEventTo_OnQuestGiverStatusChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestGiverSessionChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnQuestGiverSessionChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnQuestGiverSessionChanged");

	Params::IQuestTrackerInterface_BindEventTo_OnQuestGiverSessionChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnQuestCompleted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnQuestCompleted");

	Params::IQuestTrackerInterface_BindEventTo_OnQuestCompleted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestAccepted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnQuestAccepted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnQuestAccepted");

	Params::IQuestTrackerInterface_BindEventTo_OnQuestAccepted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestAbandoned
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnQuestAbandoned(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnQuestAbandoned");

	Params::IQuestTrackerInterface_BindEventTo_OnQuestAbandoned_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnOngoingTasksProgressChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnOngoingTasksProgressChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnOngoingTasksProgressChanged");

	Params::IQuestTrackerInterface_BindEventTo_OnOngoingTasksProgressChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnItemTurnInClosed
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnItemTurnInClosed(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnItemTurnInClosed");

	Params::IQuestTrackerInterface_BindEventTo_OnItemTurnInClosed_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnCurrentQuestCountChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::BindEventTo_OnCurrentQuestCountChanged(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "BindEventTo_OnCurrentQuestCountChanged");

	Params::IQuestTrackerInterface_BindEventTo_OnCurrentQuestCountChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.AcceptQuest
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::AcceptQuest(struct FQuestAssetReference& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "AcceptQuest");

	Params::IQuestTrackerInterface_AcceptQuest_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function QuestRuntime.QuestTrackerInterface.AbandonQuest
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IQuestTrackerInterface::AbandonQuest(struct FQuestAssetReference& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerInterface", "AbandonQuest");

	Params::IQuestTrackerInterface_AbandonQuest_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class QuestRuntime.QuestTrackerProviderInterface
// (None)

class UClass* IQuestTrackerProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTrackerProviderInterface");

	return Clss;
}


// QuestTrackerProviderInterface QuestRuntime.Default__QuestTrackerProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IQuestTrackerProviderInterface* IQuestTrackerProviderInterface::GetDefaultObj()
{
	static class IQuestTrackerProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IQuestTrackerProviderInterface*>(IQuestTrackerProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.QuestTrackerProviderInterface.GetQuestTracker
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IQuestTrackerInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IQuestTrackerInterface> IQuestTrackerProviderInterface::GetQuestTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerProviderInterface", "GetQuestTracker");

	Params::IQuestTrackerProviderInterface_GetQuestTracker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class QuestRuntime.RandomQuestModuleComponent
// (None)

class UClass* URandomQuestModuleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandomQuestModuleComponent");

	return Clss;
}


// RandomQuestModuleComponent QuestRuntime.Default__RandomQuestModuleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URandomQuestModuleComponent* URandomQuestModuleComponent::GetDefaultObj()
{
	static class URandomQuestModuleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URandomQuestModuleComponent*>(URandomQuestModuleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRuntime.RandomQuestModuleComponent.SeedRandomGenerator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Seed                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URandomQuestModuleComponent::SeedRandomGenerator(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomQuestModuleComponent", "SeedRandomGenerator");

	Params::URandomQuestModuleComponent_SeedRandomGenerator_Params Parms{};

	Parms.Seed = Seed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class QuestRuntime.ScriptedQuestModuleComponent
// (None)

class UClass* UScriptedQuestModuleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedQuestModuleComponent");

	return Clss;
}


// ScriptedQuestModuleComponent QuestRuntime.Default__ScriptedQuestModuleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UScriptedQuestModuleComponent* UScriptedQuestModuleComponent::GetDefaultObj()
{
	static class UScriptedQuestModuleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UScriptedQuestModuleComponent*>(UScriptedQuestModuleComponent::StaticClass()->DefaultObject);

	return Default;
}

}


