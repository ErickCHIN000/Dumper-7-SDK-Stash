#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EasyMultiSave.EMSActorSaveInterface
// (None)

class UClass* IEMSActorSaveInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSActorSaveInterface");

	return Clss;
}


// EMSActorSaveInterface EasyMultiSave.Default__EMSActorSaveInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEMSActorSaveInterface* IEMSActorSaveInterface::GetDefaultObj()
{
	static class IEMSActorSaveInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEMSActorSaveInterface*>(IEMSActorSaveInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyMultiSave.EMSActorSaveInterface.ComponentsToSave
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void IEMSActorSaveInterface::ComponentsToSave(TArray<class UActorComponent*>* Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSActorSaveInterface", "ComponentsToSave");

	Params::IEMSActorSaveInterface_ComponentsToSave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Components != nullptr)
		*Components = std::move(Parms.Components);

}


// Function EasyMultiSave.EMSActorSaveInterface.ActorSaved
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEMSActorSaveInterface::ActorSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSActorSaveInterface", "ActorSaved");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSActorSaveInterface.ActorPreSave
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEMSActorSaveInterface::ActorPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSActorSaveInterface", "ActorPreSave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSActorSaveInterface.ActorLoaded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEMSActorSaveInterface::ActorLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSActorSaveInterface", "ActorLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class EasyMultiSave.EMSAsyncLoadGame
// (None)

class UClass* UEMSAsyncLoadGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSAsyncLoadGame");

	return Clss;
}


// EMSAsyncLoadGame EasyMultiSave.Default__EMSAsyncLoadGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSAsyncLoadGame* UEMSAsyncLoadGame::GetDefaultObj()
{
	static class UEMSAsyncLoadGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSAsyncLoadGame*>(UEMSAsyncLoadGame::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyMultiSave.EMSAsyncLoadGame.NativeSpawnLoadTask
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class UEMSObject*                  EMSObject                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFullReload                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSAsyncLoadGame::NativeSpawnLoadTask(class UEMSObject* EMSObject, int32& Data, bool& bFullReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncLoadGame", "NativeSpawnLoadTask");

	Params::UEMSAsyncLoadGame_NativeSpawnLoadTask_Params Parms{};

	Parms.EMSObject = EMSObject;
	Parms.Data = Data;
	Parms.bFullReload = bFullReload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSAsyncLoadGame.NativeLoadLevelActors
// (Final, Native, Static, Public)
// Parameters:
// class UEMSObject*                  EMSObject                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSAsyncLoadGame::NativeLoadLevelActors(class UEMSObject* EMSObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncLoadGame", "NativeLoadLevelActors");

	Params::UEMSAsyncLoadGame_NativeLoadLevelActors_Params Parms{};

	Parms.EMSObject = EMSObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSAsyncLoadGame.AsyncLoadActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFullReload                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSAsyncLoadGame*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEMSAsyncLoadGame* UEMSAsyncLoadGame::AsyncLoadActors(class UObject* WorldContextObject, int32 Data, bool bFullReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncLoadGame", "AsyncLoadActors");

	Params::UEMSAsyncLoadGame_AsyncLoadActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Data = Data;
	Parms.bFullReload = bFullReload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EasyMultiSave.EMSAsyncSaveGame
// (None)

class UClass* UEMSAsyncSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSAsyncSaveGame");

	return Clss;
}


// EMSAsyncSaveGame EasyMultiSave.Default__EMSAsyncSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSAsyncSaveGame* UEMSAsyncSaveGame::GetDefaultObj()
{
	static class UEMSAsyncSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSAsyncSaveGame*>(UEMSAsyncSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyMultiSave.EMSAsyncSaveGame.NativeSpawnSaveTask
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class UEMSObject*                  EMSObject                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSAsyncSaveGame::NativeSpawnSaveTask(class UEMSObject* EMSObject, int32& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncSaveGame", "NativeSpawnSaveTask");

	Params::UEMSAsyncSaveGame_NativeSpawnSaveTask_Params Parms{};

	Parms.EMSObject = EMSObject;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSAsyncSaveGame.NativeSaveLevelActors
// (Final, Native, Static, Public)
// Parameters:
// class UEMSObject*                  EMSObject                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSAsyncSaveGame::NativeSaveLevelActors(class UEMSObject* EMSObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncSaveGame", "NativeSaveLevelActors");

	Params::UEMSAsyncSaveGame_NativeSaveLevelActors_Params Parms{};

	Parms.EMSObject = EMSObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSAsyncSaveGame.AsyncSaveActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSAsyncSaveGame*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEMSAsyncSaveGame* UEMSAsyncSaveGame::AsyncSaveActors(class UObject* WorldContextObject, int32 Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncSaveGame", "AsyncSaveActors");

	Params::UEMSAsyncSaveGame_AsyncSaveActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EasyMultiSave.EMSAsyncWait
// (None)

class UClass* UEMSAsyncWait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSAsyncWait");

	return Clss;
}


// EMSAsyncWait EasyMultiSave.Default__EMSAsyncWait
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSAsyncWait* UEMSAsyncWait::GetDefaultObj()
{
	static class UEMSAsyncWait* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSAsyncWait*>(UEMSAsyncWait::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyMultiSave.EMSAsyncWait.AsyncWaitForOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAsyncCheckType         CheckType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSAsyncWait*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEMSAsyncWait* UEMSAsyncWait::AsyncWaitForOperation(class UObject* WorldContextObject, enum class EAsyncCheckType CheckType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSAsyncWait", "AsyncWaitForOperation");

	Params::UEMSAsyncWait_AsyncWaitForOperation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CheckType = CheckType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EasyMultiSave.EMSCompSaveInterface
// (None)

class UClass* IEMSCompSaveInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSCompSaveInterface");

	return Clss;
}


// EMSCompSaveInterface EasyMultiSave.Default__EMSCompSaveInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEMSCompSaveInterface* IEMSCompSaveInterface::GetDefaultObj()
{
	static class IEMSCompSaveInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEMSCompSaveInterface*>(IEMSCompSaveInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyMultiSave.EMSCompSaveInterface.ComponentPreSave
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEMSCompSaveInterface::ComponentPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSCompSaveInterface", "ComponentPreSave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSCompSaveInterface.ComponentLoaded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEMSCompSaveInterface::ComponentLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSCompSaveInterface", "ComponentLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class EasyMultiSave.EMSCustomSaveGame
// (None)

class UClass* UEMSCustomSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSCustomSaveGame");

	return Clss;
}


// EMSCustomSaveGame EasyMultiSave.Default__EMSCustomSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSCustomSaveGame* UEMSCustomSaveGame::GetDefaultObj()
{
	static class UEMSCustomSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSCustomSaveGame*>(UEMSCustomSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class EasyMultiSave.EMSFunctionLibrary
// (None)

class UClass* UEMSFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSFunctionLibrary");

	return Clss;
}


// EMSFunctionLibrary EasyMultiSave.Default__EMSFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSFunctionLibrary* UEMSFunctionLibrary::GetDefaultObj()
{
	static class UEMSFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSFunctionLibrary*>(UEMSFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveUserName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::SetCurrentSaveUserName(class UObject* WorldContextObject, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "SetCurrentSaveUserName");

	Params::UEMSFunctionLibrary_SetCurrentSaveUserName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveGameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::SetCurrentSaveGameName(class UObject* WorldContextObject, const class FString& SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "SetCurrentSaveGameName");

	Params::UEMSFunctionLibrary_SetCurrentSaveGameName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGameName = SaveGameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.SetActorSaveProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSkipSave                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSkipTransform                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::SetActorSaveProperties(class UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "SetActorSaveProperties");

	Params::UEMSFunctionLibrary_SetActorSaveProperties_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bSkipSave = bSkipSave;
	Parms.bPersistent = bPersistent;
	Parms.bSkipTransform = bSkipTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.SaveCustom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSCustomSaveGame*          SaveGame                                                         (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSFunctionLibrary::SaveCustom(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "SaveCustom");

	Params::UEMSFunctionLibrary_SaveCustom_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGame = SaveGame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.IsWorldPartition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSFunctionLibrary::IsWorldPartition(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "IsWorldPartition");

	Params::UEMSFunctionLibrary_IsWorldPartition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.IsSavingOrLoading
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSFunctionLibrary::IsSavingOrLoading(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "IsSavingOrLoading");

	Params::UEMSFunctionLibrary_IsSavingOrLoading_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.ImportSaveThumbnail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UEMSFunctionLibrary::ImportSaveThumbnail(class UObject* WorldContextObject, const class FString& SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "ImportSaveThumbnail");

	Params::UEMSFunctionLibrary_ImportSaveThumbnail_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGameName = SaveGameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.GetSortedSaveSlots
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UEMSFunctionLibrary::GetSortedSaveSlots(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "GetSortedSaveSlots");

	Params::UEMSFunctionLibrary_GetSortedSaveSlots_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.GetSlotInfoSaveGame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSInfoSaveGame*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEMSInfoSaveGame* UEMSFunctionLibrary::GetSlotInfoSaveGame(class UObject* WorldContextObject, class FString* SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "GetSlotInfoSaveGame");

	Params::UEMSFunctionLibrary_GetSlotInfoSaveGame_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SaveGameName != nullptr)
		*SaveGameName = std::move(Parms.SaveGameName);

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.GetNamedSlotInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSInfoSaveGame*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEMSInfoSaveGame* UEMSFunctionLibrary::GetNamedSlotInfo(class UObject* WorldContextObject, const class FString& SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "GetNamedSlotInfo");

	Params::UEMSFunctionLibrary_GetNamedSlotInfo_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGameName = SaveGameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.GetCustomSave
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UEMSCustomSaveGame>SaveGameClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSCustomSaveGame*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEMSCustomSaveGame* UEMSFunctionLibrary::GetCustomSave(class UObject* WorldContextObject, TSubclassOf<class UEMSCustomSaveGame> SaveGameClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "GetCustomSave");

	Params::UEMSFunctionLibrary_GetCustomSave_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGameClass = SaveGameClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.GetAllSaveUsers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UEMSFunctionLibrary::GetAllSaveUsers(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "GetAllSaveUsers");

	Params::UEMSFunctionLibrary_GetAllSaveUsers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.ExportSaveThumbnail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      TextureRenderTarget                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::ExportSaveThumbnail(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const class FString& SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "ExportSaveThumbnail");

	Params::UEMSFunctionLibrary_ExportSaveThumbnail_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TextureRenderTarget = TextureRenderTarget;
	Parms.SaveGameName = SaveGameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.DoesSaveSlotExist
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEMSFunctionLibrary::DoesSaveSlotExist(class UObject* WorldContextObject, const class FString& SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "DoesSaveSlotExist");

	Params::UEMSFunctionLibrary_DoesSaveSlotExist_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGameName = SaveGameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyMultiSave.EMSFunctionLibrary.DeleteSaveUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::DeleteSaveUser(class UObject* WorldContextObject, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "DeleteSaveUser");

	Params::UEMSFunctionLibrary_DeleteSaveUser_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.DeleteCustomSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEMSCustomSaveGame*          SaveGame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::DeleteCustomSave(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "DeleteCustomSave");

	Params::UEMSFunctionLibrary_DeleteCustomSave_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGame = SaveGame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.DeleteAllSaveDataForSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveGameName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(class UObject* WorldContextObject, const class FString& SaveGameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "DeleteAllSaveDataForSlot");

	Params::UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveGameName = SaveGameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyMultiSave.EMSFunctionLibrary.ClearMultiLevelSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEMSFunctionLibrary::ClearMultiLevelSave(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EMSFunctionLibrary", "ClearMultiLevelSave");

	Params::UEMSFunctionLibrary_ClearMultiLevelSave_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EasyMultiSave.EMSInfoSaveGame
// (None)

class UClass* UEMSInfoSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSInfoSaveGame");

	return Clss;
}


// EMSInfoSaveGame EasyMultiSave.Default__EMSInfoSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSInfoSaveGame* UEMSInfoSaveGame::GetDefaultObj()
{
	static class UEMSInfoSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSInfoSaveGame*>(UEMSInfoSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class EasyMultiSave.EMSObject
// (None)

class UClass* UEMSObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSObject");

	return Clss;
}


// EMSObject EasyMultiSave.Default__EMSObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSObject* UEMSObject::GetDefaultObj()
{
	static class UEMSObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSObject*>(UEMSObject::StaticClass()->DefaultObject);

	return Default;
}


// Class EasyMultiSave.EMSPluginSettings
// (None)

class UClass* UEMSPluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EMSPluginSettings");

	return Clss;
}


// EMSPluginSettings EasyMultiSave.Default__EMSPluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEMSPluginSettings* UEMSPluginSettings::GetDefaultObj()
{
	static class UEMSPluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEMSPluginSettings*>(UEMSPluginSettings::StaticClass()->DefaultObject);

	return Default;
}

}


