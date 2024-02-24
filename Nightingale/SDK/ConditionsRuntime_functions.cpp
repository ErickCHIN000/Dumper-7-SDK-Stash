#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConditionsRuntime.ConditionBehaviour
// (None)

class UClass* UConditionBehaviour::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionBehaviour");

	return Clss;
}


// ConditionBehaviour ConditionsRuntime.Default__ConditionBehaviour
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionBehaviour* UConditionBehaviour::GetDefaultObj()
{
	static class UConditionBehaviour* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionBehaviour*>(UConditionBehaviour::StaticClass()->DefaultObject);

	return Default;
}


// Function ConditionsRuntime.ConditionBehaviour.UpdateUncompletion
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UConditionBehaviour::UpdateUncompletion(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "UpdateUncompletion");

	Params::UConditionBehaviour_UpdateUncompletion_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.UpdateProgress
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UConditionBehaviour::UpdateProgress(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "UpdateProgress");

	Params::UConditionBehaviour_UpdateProgress_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.UpdateCompletion
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    UpdatedCompletionData                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UConditionBehaviour::UpdateCompletion(struct FConditionPersistentData& UpdatedProgressData, struct FConditionPersistentData& UpdatedCompletionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "UpdateCompletion");

	Params::UConditionBehaviour_UpdateCompletion_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;
	Parms.UpdatedCompletionData = UpdatedCompletionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.UpdateCancellation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      UpdatedCancellationMessage                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionBehaviour::UpdateCancellation(const class FString& UpdatedCancellationMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "UpdateCancellation");

	Params::UConditionBehaviour_UpdateCancellation_Params Parms{};

	Parms.UpdatedCancellationMessage = UpdatedCancellationMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.SetupCondition
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UConditionBehaviour::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "SetupCondition");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.SetContextObject
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionBehaviour::SetContextObject(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "SetContextObject");

	Params::UConditionBehaviour_SetContextObject_Params Parms{};

	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.SendConditionUpdate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              CurrentCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CountThreshold                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowUncompletion                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionBehaviour::SendConditionUpdate(int32 CurrentCount, int32 CountThreshold, bool bAllowUncompletion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "SendConditionUpdate");

	Params::UConditionBehaviour_SendConditionUpdate_Params Parms{};

	Parms.CurrentCount = CurrentCount;
	Parms.CountThreshold = CountThreshold;
	Parms.bAllowUncompletion = bAllowUncompletion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.OnConditionRemoved
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UConditionBehaviour::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "OnConditionRemoved");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.IsComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConditionBehaviour::IsComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "IsComplete");

	Params::UConditionBehaviour_IsComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionBehaviour.InitializeFromPersistence
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UConditionBehaviour::InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "InitializeFromPersistence");

	Params::UConditionBehaviour_InitializeFromPersistence_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.GetDebugDescription
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      OutDescription                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionBehaviour::GetDebugDescription(class FString& OutDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "GetDebugDescription");

	Params::UConditionBehaviour_GetDebugDescription_Params Parms{};

	Parms.OutDescription = OutDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionBehaviour.CompleteIfSatisfiedOnSetup
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UConditionBehaviour::CompleteIfSatisfiedOnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionBehaviour", "CompleteIfSatisfiedOnSetup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ConditionsRuntime.CompoundCondition
// (None)

class UClass* UCompoundCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompoundCondition");

	return Clss;
}


// CompoundCondition ConditionsRuntime.Default__CompoundCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompoundCondition* UCompoundCondition::GetDefaultObj()
{
	static class UCompoundCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompoundCondition*>(UCompoundCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class ConditionsRuntime.CompoundConditionAnd
// (None)

class UClass* UCompoundConditionAnd::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompoundConditionAnd");

	return Clss;
}


// CompoundConditionAnd ConditionsRuntime.Default__CompoundConditionAnd
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompoundConditionAnd* UCompoundConditionAnd::GetDefaultObj()
{
	static class UCompoundConditionAnd* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompoundConditionAnd*>(UCompoundConditionAnd::StaticClass()->DefaultObject);

	return Default;
}


// Class ConditionsRuntime.CompoundConditionOr
// (None)

class UClass* UCompoundConditionOr::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompoundConditionOr");

	return Clss;
}


// CompoundConditionOr ConditionsRuntime.Default__CompoundConditionOr
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompoundConditionOr* UCompoundConditionOr::GetDefaultObj()
{
	static class UCompoundConditionOr* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompoundConditionOr*>(UCompoundConditionOr::StaticClass()->DefaultObject);

	return Default;
}


// Class ConditionsRuntime.ConditionFunctionLibrary
// (None)

class UClass* UConditionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionFunctionLibrary");

	return Clss;
}


// ConditionFunctionLibrary ConditionsRuntime.Default__ConditionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionFunctionLibrary* UConditionFunctionLibrary::GetDefaultObj()
{
	static class UConditionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionFunctionLibrary*>(UConditionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ConditionsRuntime.ConditionFunctionLibrary.RemoveCondition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionFunctionLibrary::RemoveCondition(class UObject* WorldContextObject, struct FGuid& ConditionHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "RemoveCondition");

	Params::UConditionFunctionLibrary_RemoveCondition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ConditionHandle = ConditionHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.MakeConditionPersistentDataFromBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               InBool                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FConditionPersistentData UConditionFunctionLibrary::MakeConditionPersistentDataFromBool(bool InBool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "MakeConditionPersistentDataFromBool");

	Params::UConditionFunctionLibrary_MakeConditionPersistentDataFromBool_Params Parms{};

	Parms.InBool = InBool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.MakeBoolFromConditionPersistentData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionPersistentData    InConditionPersistentData                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConditionFunctionLibrary::MakeBoolFromConditionPersistentData(struct FConditionPersistentData& InConditionPersistentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "MakeBoolFromConditionPersistentData");

	Params::UConditionFunctionLibrary_MakeBoolFromConditionPersistentData_Params Parms{};

	Parms.InConditionPersistentData = InConditionPersistentData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetProgressData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FConditionPersistentData UConditionFunctionLibrary::GetProgressData(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetProgressData");

	Params::UConditionFunctionLibrary_GetProgressData_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetListener
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TScriptInterface<class IConditionListenerInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IConditionListenerInterface> UConditionFunctionLibrary::GetListener(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetListener");

	Params::UConditionFunctionLibrary_GetListener_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionStatesCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UConditionFunctionLibrary::GetConditionStatesCount(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetConditionStatesCount");

	Params::UConditionFunctionLibrary_GetConditionStatesCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EConditionState         ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConditionState UConditionFunctionLibrary::GetConditionState(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetConditionState");

	Params::UConditionFunctionLibrary_GetConditionState_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionHandle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UConditionFunctionLibrary::GetConditionHandle(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetConditionHandle");

	Params::UConditionFunctionLibrary_GetConditionHandle_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionDataFromConditionStates
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditionStateData         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConditionStateData UConditionFunctionLibrary::GetConditionDataFromConditionStates(class UObject* WorldContextObject, struct FGuid& ConditionHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetConditionDataFromConditionStates");

	Params::UConditionFunctionLibrary_GetConditionDataFromConditionStates_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ConditionHandle = ConditionHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionBehaviours
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FGuid, class UConditionBehaviour*>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<struct FGuid, class UConditionBehaviour*> UConditionFunctionLibrary::GetConditionBehaviours(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetConditionBehaviours");

	Params::UConditionFunctionLibrary_GetConditionBehaviours_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetCompletionData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FConditionPersistentData UConditionFunctionLibrary::GetCompletionData(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetCompletionData");

	Params::UConditionFunctionLibrary_GetCompletionData_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetCancellationMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UConditionFunctionLibrary::GetCancellationMessage(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetCancellationMessage");

	Params::UConditionFunctionLibrary_GetCancellationMessage_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.GetBehaviourClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConditionStateData         ConditionStateData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UConditionBehaviour>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UConditionBehaviour> UConditionFunctionLibrary::GetBehaviourClass(struct FConditionStateData& ConditionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "GetBehaviourClass");

	Params::UConditionFunctionLibrary_GetBehaviourClass_Params Parms{};

	Parms.ConditionStateData = ConditionStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.CreateConditionFromTemplate
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ConditionHandle                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Listener                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConditionBehaviour*         TemplateBehaviour                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    PersistenceData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UConditionFunctionLibrary::CreateConditionFromTemplate(struct FGuid& ConditionHandle, class UObject* Listener, class UConditionBehaviour* TemplateBehaviour, class UObject* ContextObject, struct FConditionPersistentData& PersistenceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "CreateConditionFromTemplate");

	Params::UConditionFunctionLibrary_CreateConditionFromTemplate_Params Parms{};

	Parms.ConditionHandle = ConditionHandle;
	Parms.Listener = Listener;
	Parms.TemplateBehaviour = TemplateBehaviour;
	Parms.ContextObject = ContextObject;
	Parms.PersistenceData = PersistenceData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.ConditionStatesContainsCondition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConditionFunctionLibrary::ConditionStatesContainsCondition(class UObject* WorldContextObject, struct FGuid& ConditionHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "ConditionStatesContainsCondition");

	Params::UConditionFunctionLibrary_ConditionStatesContainsCondition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ConditionHandle = ConditionHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConditionsRuntime.ConditionFunctionLibrary.ClearAllConditions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConditionFunctionLibrary::ClearAllConditions(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionFunctionLibrary", "ClearAllConditions");

	Params::UConditionFunctionLibrary_ClearAllConditions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ConditionsRuntime.ConditionListenerActorComponent
// (None)

class UClass* UConditionListenerActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionListenerActorComponent");

	return Clss;
}


// ConditionListenerActorComponent ConditionsRuntime.Default__ConditionListenerActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionListenerActorComponent* UConditionListenerActorComponent::GetDefaultObj()
{
	static class UConditionListenerActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionListenerActorComponent*>(UConditionListenerActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ConditionsRuntime.ConditionListenerSceneComponent
// (SceneComponent)

class UClass* UConditionListenerSceneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionListenerSceneComponent");

	return Clss;
}


// ConditionListenerSceneComponent ConditionsRuntime.Default__ConditionListenerSceneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionListenerSceneComponent* UConditionListenerSceneComponent::GetDefaultObj()
{
	static class UConditionListenerSceneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionListenerSceneComponent*>(UConditionListenerSceneComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ConditionsRuntime.ConditionListenerInterface
// (None)

class UClass* IConditionListenerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionListenerInterface");

	return Clss;
}


// ConditionListenerInterface ConditionsRuntime.Default__ConditionListenerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IConditionListenerInterface* IConditionListenerInterface::GetDefaultObj()
{
	static class IConditionListenerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IConditionListenerInterface*>(IConditionListenerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ConditionsRuntime.ConditionListenerInterface.OnConditionUpdated
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    ProgressData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IConditionListenerInterface::OnConditionUpdated(struct FGuid& ConditionHandle, struct FConditionPersistentData& ProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionListenerInterface", "OnConditionUpdated");

	Params::IConditionListenerInterface_OnConditionUpdated_Params Parms{};

	Parms.ConditionHandle = ConditionHandle;
	Parms.ProgressData = ProgressData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionListenerInterface.OnConditionUncompleted
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    ProgressData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IConditionListenerInterface::OnConditionUncompleted(struct FGuid& ConditionHandle, struct FConditionPersistentData& ProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionListenerInterface", "OnConditionUncompleted");

	Params::IConditionListenerInterface_OnConditionUncompleted_Params Parms{};

	Parms.ConditionHandle = ConditionHandle;
	Parms.ProgressData = ProgressData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionListenerInterface.OnConditionCompleted
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    ProgressData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FConditionPersistentData    CompletionData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IConditionListenerInterface::OnConditionCompleted(struct FGuid& ConditionHandle, struct FConditionPersistentData& ProgressData, struct FConditionPersistentData& CompletionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionListenerInterface", "OnConditionCompleted");

	Params::IConditionListenerInterface_OnConditionCompleted_Params Parms{};

	Parms.ConditionHandle = ConditionHandle;
	Parms.ProgressData = ProgressData;
	Parms.CompletionData = CompletionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConditionsRuntime.ConditionListenerInterface.OnConditionCancelled
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                       ConditionHandle                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CancellationMessage                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IConditionListenerInterface::OnConditionCancelled(struct FGuid& ConditionHandle, const class FString& CancellationMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConditionListenerInterface", "OnConditionCancelled");

	Params::IConditionListenerInterface_OnConditionCancelled_Params Parms{};

	Parms.ConditionHandle = ConditionHandle;
	Parms.CancellationMessage = CancellationMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ConditionsRuntime.ConditionManager
// (Actor)

class UClass* AConditionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionManager");

	return Clss;
}


// ConditionManager ConditionsRuntime.Default__ConditionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AConditionManager* AConditionManager::GetDefaultObj()
{
	static class AConditionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AConditionManager*>(AConditionManager::StaticClass()->DefaultObject);

	return Default;
}


// Class ConditionsRuntime.ConditionTestActor
// (Actor)

class UClass* AConditionTestActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionTestActor");

	return Clss;
}


// ConditionTestActor ConditionsRuntime.Default__ConditionTestActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AConditionTestActor* AConditionTestActor::GetDefaultObj()
{
	static class AConditionTestActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AConditionTestActor*>(AConditionTestActor::StaticClass()->DefaultObject);

	return Default;
}

}


