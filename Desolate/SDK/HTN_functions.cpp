#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HTN.AITask_HTNMoveTo
// (None)

class UClass* UAITask_HTNMoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_HTNMoveTo");

	return Clss;
}


// AITask_HTNMoveTo HTN.Default__AITask_HTNMoveTo
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_HTNMoveTo* UAITask_HTNMoveTo::GetDefaultObj()
{
	static class UAITask_HTNMoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_HTNMoveTo*>(UAITask_HTNMoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.AITask_MakeHTNPlan
// (None)

class UClass* UAITask_MakeHTNPlan::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_MakeHTNPlan");

	return Clss;
}


// AITask_MakeHTNPlan HTN.Default__AITask_MakeHTNPlan
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_MakeHTNPlan* UAITask_MakeHTNPlan::GetDefaultObj()
{
	static class UAITask_MakeHTNPlan* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_MakeHTNPlan*>(UAITask_MakeHTNPlan::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.EnvQueryContext_HTNBlueprintBase
// (None)

class UClass* UEnvQueryContext_HTNBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_HTNBlueprintBase");

	return Clss;
}


// EnvQueryContext_HTNBlueprintBase HTN.Default__EnvQueryContext_HTNBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_HTNBlueprintBase* UEnvQueryContext_HTNBlueprintBase::GetDefaultObj()
{
	static class UEnvQueryContext_HTNBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_HTNBlueprintBase*>(UEnvQueryContext_HTNBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultingLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_HTNBlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideSingleLocation");

	Params::UEnvQueryContext_HTNBlueprintBase_ProvideSingleLocation_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = std::move(Parms.ResultingLocation);

}


// Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_HTNBlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideSingleActor");

	Params::UEnvQueryContext_HTNBlueprintBase_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}


// Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ResultingLocationSet                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_HTNBlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideLocationsSet");

	Params::UEnvQueryContext_HTNBlueprintBase_ProvideLocationsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = std::move(Parms.ResultingLocationSet);

}


// Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_HTNBlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideActorsSet");

	Params::UEnvQueryContext_HTNBlueprintBase_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}


// Function HTN.EnvQueryContext_HTNBlueprintBase.GetWorldState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorldStateProxy*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorldStateProxy* UEnvQueryContext_HTNBlueprintBase::GetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_HTNBlueprintBase", "GetWorldState");

	Params::UEnvQueryContext_HTNBlueprintBase_GetWorldState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.EnvQueryContext_HTNBlueprintBase.GetQuerierLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEnvQueryContext_HTNBlueprintBase::GetQuerierLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_HTNBlueprintBase", "GetQuerierLocation");

	Params::UEnvQueryContext_HTNBlueprintBase_GetQuerierLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HTN.EnvQueryContext_HTNQuerierLocation
// (None)

class UClass* UEnvQueryContext_HTNQuerierLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_HTNQuerierLocation");

	return Clss;
}


// EnvQueryContext_HTNQuerierLocation HTN.Default__EnvQueryContext_HTNQuerierLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_HTNQuerierLocation* UEnvQueryContext_HTNQuerierLocation::GetDefaultObj()
{
	static class UEnvQueryContext_HTNQuerierLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_HTNQuerierLocation*>(UEnvQueryContext_HTNQuerierLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTN
// (None)

class UClass* UHTN::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTN");

	return Clss;
}


// HTN HTN.Default__HTN
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTN* UHTN::GetDefaultObj()
{
	static class UHTN* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTN*>(UHTN::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNBlueprintLibrary
// (None)

class UClass* UHTNBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNBlueprintLibrary");

	return Clss;
}


// HTNBlueprintLibrary HTN.Default__HTNBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNBlueprintLibrary* UHTNBlueprintLibrary::GetDefaultObj()
{
	static class UHTNBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNBlueprintLibrary*>(UHTNBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNBlueprintLibrary.RunHTN
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               AIController                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHTN*                        HTNAsset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNBlueprintLibrary::RunHTN(class AAIController* AIController, class UHTN* HTNAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNBlueprintLibrary", "RunHTN");

	Params::UHTNBlueprintLibrary_RunHTN_Params Parms{};

	Parms.AIController = AIController;
	Parms.HTNAsset = HTNAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HTN.HTNNodeLibrary
// (None)

class UClass* UHTNNodeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNodeLibrary");

	return Clss;
}


// HTNNodeLibrary HTN.Default__HTNNodeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNodeLibrary* UHTNNodeLibrary::GetDefaultObj()
{
	static class UHTNNodeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNodeLibrary*>(UHTNNodeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsVector(class UHTNNode* Node, struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsVector");

	Params::UHTNNodeLibrary_SetWorldStateValueAsVector_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsString(class UHTNNode* Node, struct FBlackboardKeySelector& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsString");

	Params::UHTNNodeLibrary_SetWorldStateValueAsString_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsRotator(class UHTNNode* Node, struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsRotator");

	Params::UHTNNodeLibrary_SetWorldStateValueAsRotator_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsObject(class UHTNNode* Node, struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsObject");

	Params::UHTNNodeLibrary_SetWorldStateValueAsObject_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsName(class UHTNNode* Node, struct FBlackboardKeySelector& Key, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsName");

	Params::UHTNNodeLibrary_SetWorldStateValueAsName_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsInt(class UHTNNode* Node, struct FBlackboardKeySelector& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsInt");

	Params::UHTNNodeLibrary_SetWorldStateValueAsInt_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsFloat(class UHTNNode* Node, struct FBlackboardKeySelector& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsFloat");

	Params::UHTNNodeLibrary_SetWorldStateValueAsFloat_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsEnum(class UHTNNode* Node, struct FBlackboardKeySelector& Key, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsEnum");

	Params::UHTNNodeLibrary_SetWorldStateValueAsEnum_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsClass(class UHTNNode* Node, struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsClass");

	Params::UHTNNodeLibrary_SetWorldStateValueAsClass_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.SetWorldStateValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::SetWorldStateValueAsBool(class UHTNNode* Node, struct FBlackboardKeySelector& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsBool");

	Params::UHTNNodeLibrary_SetWorldStateValueAsBool_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UHTNNodeLibrary::GetWorldStateValueAsVector(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsVector");

	Params::UHTNNodeLibrary_GetWorldStateValueAsVector_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UHTNNodeLibrary::GetWorldStateValueAsString(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsString");

	Params::UHTNNodeLibrary_GetWorldStateValueAsString_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UHTNNodeLibrary::GetWorldStateValueAsRotator(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsRotator");

	Params::UHTNNodeLibrary_GetWorldStateValueAsRotator_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UHTNNodeLibrary::GetWorldStateValueAsObject(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsObject");

	Params::UHTNNodeLibrary_GetWorldStateValueAsObject_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UHTNNodeLibrary::GetWorldStateValueAsName(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsName");

	Params::UHTNNodeLibrary_GetWorldStateValueAsName_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHTNNodeLibrary::GetWorldStateValueAsInt(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsInt");

	Params::UHTNNodeLibrary_GetWorldStateValueAsInt_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTNNodeLibrary::GetWorldStateValueAsFloat(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsFloat");

	Params::UHTNNodeLibrary_GetWorldStateValueAsFloat_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UHTNNodeLibrary::GetWorldStateValueAsEnum(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsEnum");

	Params::UHTNNodeLibrary_GetWorldStateValueAsEnum_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UHTNNodeLibrary::GetWorldStateValueAsClass(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsClass");

	Params::UHTNNodeLibrary_GetWorldStateValueAsClass_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNNodeLibrary::GetWorldStateValueAsBool(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsBool");

	Params::UHTNNodeLibrary_GetWorldStateValueAsBool_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetWorldStateValueAsActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UHTNNodeLibrary::GetWorldStateValueAsActor(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsActor");

	Params::UHTNNodeLibrary_GetWorldStateValueAsActor_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetSelfLocationFromWorldState
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UHTNNodeLibrary::GetSelfLocationFromWorldState(class UHTNNode* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetSelfLocationFromWorldState");

	Params::UHTNNodeLibrary_GetSelfLocationFromWorldState_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetOwnersWorldState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHTNNode*                    Node                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorldStateProxy*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorldStateProxy* UHTNNodeLibrary::GetOwnersWorldState(class UHTNNode* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetOwnersWorldState");

	Params::UHTNNodeLibrary_GetOwnersWorldState_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.GetLocationFromWorldState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      KeySelector                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OutActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNNodeLibrary::GetLocationFromWorldState(class UHTNNode* Node, struct FBlackboardKeySelector& KeySelector, struct FVector* OutLocation, class AActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "GetLocationFromWorldState");

	Params::UHTNNodeLibrary_GetLocationFromWorldState_Params Parms{};

	Parms.Node = Node;
	Parms.KeySelector = KeySelector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Function HTN.HTNNodeLibrary.ForceReplan
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceAbortPlan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRestartActivePlanning                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::ForceReplan(class UHTNNode* Node, bool bForceAbortPlan, bool bForceRestartActivePlanning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "ForceReplan");

	Params::UHTNNodeLibrary_ForceReplan_Params Parms{};

	Parms.Node = Node;
	Parms.bForceAbortPlan = bForceAbortPlan;
	Parms.bForceRestartActivePlanning = bForceRestartActivePlanning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNNodeLibrary.ClearWorldStateValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UHTNNode*                    Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UHTNNodeLibrary::ClearWorldStateValue(class UHTNNode* Node, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNodeLibrary", "ClearWorldStateValue");

	Params::UHTNNodeLibrary_ClearWorldStateValue_Params Parms{};

	Parms.Node = Node;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HTN.HTNComponent
// (None)

class UClass* UHTNComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNComponent");

	return Clss;
}


// HTNComponent HTN.Default__HTNComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNComponent* UHTNComponent::GetDefaultObj()
{
	static class UHTNComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNComponent*>(UHTNComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNComponent.StopHTN
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisregardLatentAbort                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNComponent::StopHTN(bool bDisregardLatentAbort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "StopHTN");

	Params::UHTNComponent_StopHTN_Params Parms{};

	Parms.bDisregardLatentAbort = bDisregardLatentAbort;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNComponent.StartHTN
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHTN*                        Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNComponent::StartHTN(class UHTN* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "StartHTN");

	Params::UHTNComponent_StartHTN_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNComponent.SetDynamicHTN
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InjectTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHTN*                        HTN                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceAbortCurrentPlanIfChanged                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNComponent::SetDynamicHTN(const struct FGameplayTag& InjectTag, class UHTN* HTN, bool bForceAbortCurrentPlanIfChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "SetDynamicHTN");

	Params::UHTNComponent_SetDynamicHTN_Params Parms{};

	Parms.InjectTag = InjectTag;
	Parms.HTN = HTN;
	Parms.bForceAbortCurrentPlanIfChanged = bForceAbortCurrentPlanIfChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.NotifyEventBasedDecoratorCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHTNDecorator*               Decorator                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRawConditionValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanAbortPlanInstantly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNComponent::NotifyEventBasedDecoratorCondition(class UHTNDecorator* Decorator, bool bRawConditionValue, bool bCanAbortPlanInstantly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "NotifyEventBasedDecoratorCondition");

	Params::UHTNComponent_NotifyEventBasedDecoratorCondition_Params Parms{};

	Parms.Decorator = Decorator;
	Parms.bRawConditionValue = bRawConditionValue;
	Parms.bCanAbortPlanInstantly = bCanAbortPlanInstantly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.IsWaitingForAbortingTasks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNComponent::IsWaitingForAbortingTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "IsWaitingForAbortingTasks");

	Params::UHTNComponent_IsWaitingForAbortingTasks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.IsPlanning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNComponent::IsPlanning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "IsPlanning");

	Params::UHTNComponent_IsPlanning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.HasActivePlan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNComponent::HasActivePlan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "HasActivePlan");

	Params::UHTNComponent_HasActivePlan_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.GetWorldStateProxy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bForPlanning                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorldStateProxy*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorldStateProxy* UHTNComponent::GetWorldStateProxy(bool bForPlanning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "GetWorldStateProxy");

	Params::UHTNComponent_GetWorldStateProxy_Params Parms{};

	Parms.bForPlanning = bForPlanning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.GetPlanningWorldStateProxy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorldStateProxy*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorldStateProxy* UHTNComponent::GetPlanningWorldStateProxy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "GetPlanningWorldStateProxy");

	Params::UHTNComponent_GetPlanningWorldStateProxy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.GetDynamicHTN
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                InjectTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHTN*                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHTN* UHTNComponent::GetDynamicHTN(const struct FGameplayTag& InjectTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "GetDynamicHTN");

	Params::UHTNComponent_GetDynamicHTN_Params Parms{};

	Parms.InjectTag = InjectTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.GetCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     CooldownOwner                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTNComponent::GetCooldownEndTime(class UObject* CooldownOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "GetCooldownEndTime");

	Params::UHTNComponent_GetCooldownEndTime_Params Parms{};

	Parms.CooldownOwner = CooldownOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.GetBlackboardProxy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorldStateProxy*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorldStateProxy* UHTNComponent::GetBlackboardProxy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "GetBlackboardProxy");

	Params::UHTNComponent_GetBlackboardProxy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNComponent.ForceReplan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForceAbortPlan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRestartActivePlanning                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceDeferToNextFrame                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNComponent::ForceReplan(bool bForceAbortPlan, bool bForceRestartActivePlanning, bool bForceDeferToNextFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "ForceReplan");

	Params::UHTNComponent_ForceReplan_Params Parms{};

	Parms.bForceAbortPlan = bForceAbortPlan;
	Parms.bForceRestartActivePlanning = bForceRestartActivePlanning;
	Parms.bForceDeferToNextFrame = bForceDeferToNextFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNComponent.CancelActivePlanning
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHTNComponent::CancelActivePlanning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "CancelActivePlanning");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNComponent.AddCooldownDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     CooldownOwner                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CooldownDuration                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToExistingDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNComponent::AddCooldownDuration(class UObject* CooldownOwner, float CooldownDuration, bool bAddToExistingDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNComponent", "AddCooldownDuration");

	Params::UHTNComponent_AddCooldownDuration_Params Parms{};

	Parms.CooldownOwner = CooldownOwner;
	Parms.CooldownDuration = CooldownDuration;
	Parms.bAddToExistingDuration = bAddToExistingDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HTN.HTNNode
// (None)

class UClass* UHTNNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode");

	return Clss;
}


// HTNNode HTN.Default__HTNNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode* UHTNNode::GetDefaultObj()
{
	static class UHTNNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode*>(UHTNNode::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNNode.GetOwnerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHTNComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHTNComponent* UHTNNode::GetOwnerComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNode", "GetOwnerComponent");

	Params::UHTNNode_GetOwnerComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNNode.GetNodeName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UHTNNode::GetNodeName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNNode", "GetNodeName");

	Params::UHTNNode_GetNodeName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HTN.HTNDecorator
// (None)

class UClass* UHTNDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator");

	return Clss;
}


// HTNDecorator HTN.Default__HTNDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator* UHTNDecorator::GetDefaultObj()
{
	static class UHTNDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator*>(UHTNDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNDecorator.IsInversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNDecorator::IsInversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator", "IsInversed");

	Params::UHTNDecorator_IsInversed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HTN.HTNDecorator_BlackboardBase
// (None)

class UClass* UHTNDecorator_BlackboardBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_BlackboardBase");

	return Clss;
}


// HTNDecorator_BlackboardBase HTN.Default__HTNDecorator_BlackboardBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_BlackboardBase* UHTNDecorator_BlackboardBase::GetDefaultObj()
{
	static class UHTNDecorator_BlackboardBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_BlackboardBase*>(UHTNDecorator_BlackboardBase::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNDecorator_Blackboard
// (None)

class UClass* UHTNDecorator_Blackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_Blackboard");

	return Clss;
}


// HTNDecorator_Blackboard HTN.Default__HTNDecorator_Blackboard
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_Blackboard* UHTNDecorator_Blackboard::GetDefaultObj()
{
	static class UHTNDecorator_Blackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_Blackboard*>(UHTNDecorator_Blackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNDecorator_BlueprintBase
// (None)

class UClass* UHTNDecorator_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_BlueprintBase");

	return Clss;
}


// HTNDecorator_BlueprintBase HTN.Default__HTNDecorator_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_BlueprintBase* UHTNDecorator_BlueprintBase::GetDefaultObj()
{
	static class UHTNDecorator_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_BlueprintBase*>(UHTNDecorator_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNDecorator_BlueprintBase::ReceiveTick(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "ReceiveTick");

	Params::UHTNDecorator_BlueprintBase_ReceiveTick_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNDecorator_BlueprintBase.ReceiveOnPlanExit
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNDecorator_BlueprintBase::ReceiveOnPlanExit(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "ReceiveOnPlanExit");

	Params::UHTNDecorator_BlueprintBase_ReceiveOnPlanExit_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNDecorator_BlueprintBase.ReceiveOnPlanEnter
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNDecorator_BlueprintBase::ReceiveOnPlanEnter(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "ReceiveOnPlanEnter");

	Params::UHTNDecorator_BlueprintBase_ReceiveOnPlanEnter_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNDecorator_BlueprintBase.ReceiveModifyStepCost
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// int32                              OriginalCost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHTNDecorator_BlueprintBase::ReceiveModifyStepCost(int32 OriginalCost, class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "ReceiveModifyStepCost");

	Params::UHTNDecorator_BlueprintBase_ReceiveModifyStepCost_Params Parms{};

	Parms.OriginalCost = OriginalCost;
	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HTN.HTNDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "ReceiveExecutionStart");

	Params::UHTNDecorator_BlueprintBase_ReceiveExecutionStart_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHTNNodeResult          NodeResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, enum class EHTNNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "ReceiveExecutionFinish");

	Params::UHTNDecorator_BlueprintBase_ReceiveExecutionFinish_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHTNDecoratorConditionCheckTypeCheckType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNDecorator_BlueprintBase::PerformConditionCheck(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, enum class EHTNDecoratorConditionCheckType CheckType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNDecorator_BlueprintBase", "PerformConditionCheck");

	Params::UHTNDecorator_BlueprintBase_PerformConditionCheck_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CheckType = CheckType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class HTN.HTNDecorator_Cooldown
// (None)

class UClass* UHTNDecorator_Cooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_Cooldown");

	return Clss;
}


// HTNDecorator_Cooldown HTN.Default__HTNDecorator_Cooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_Cooldown* UHTNDecorator_Cooldown::GetDefaultObj()
{
	static class UHTNDecorator_Cooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_Cooldown*>(UHTNDecorator_Cooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNDecorator_DistanceCheck
// (None)

class UClass* UHTNDecorator_DistanceCheck::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_DistanceCheck");

	return Clss;
}


// HTNDecorator_DistanceCheck HTN.Default__HTNDecorator_DistanceCheck
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_DistanceCheck* UHTNDecorator_DistanceCheck::GetDefaultObj()
{
	static class UHTNDecorator_DistanceCheck* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_DistanceCheck*>(UHTNDecorator_DistanceCheck::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNDecorator_FocusScope
// (None)

class UClass* UHTNDecorator_FocusScope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_FocusScope");

	return Clss;
}


// HTNDecorator_FocusScope HTN.Default__HTNDecorator_FocusScope
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_FocusScope* UHTNDecorator_FocusScope::GetDefaultObj()
{
	static class UHTNDecorator_FocusScope* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_FocusScope*>(UHTNDecorator_FocusScope::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNDecorator_ModifyCost
// (None)

class UClass* UHTNDecorator_ModifyCost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_ModifyCost");

	return Clss;
}


// HTNDecorator_ModifyCost HTN.Default__HTNDecorator_ModifyCost
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_ModifyCost* UHTNDecorator_ModifyCost::GetDefaultObj()
{
	static class UHTNDecorator_ModifyCost* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_ModifyCost*>(UHTNDecorator_ModifyCost::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNDecorator_TraceTest
// (None)

class UClass* UHTNDecorator_TraceTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNDecorator_TraceTest");

	return Clss;
}


// HTNDecorator_TraceTest HTN.Default__HTNDecorator_TraceTest
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNDecorator_TraceTest* UHTNDecorator_TraceTest::GetDefaultObj()
{
	static class UHTNDecorator_TraceTest* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNDecorator_TraceTest*>(UHTNDecorator_TraceTest::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNStandaloneNode
// (None)

class UClass* UHTNStandaloneNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNStandaloneNode");

	return Clss;
}


// HTNStandaloneNode HTN.Default__HTNStandaloneNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNStandaloneNode* UHTNStandaloneNode::GetDefaultObj()
{
	static class UHTNStandaloneNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNStandaloneNode*>(UHTNStandaloneNode::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_TwoBranches
// (None)

class UClass* UHTNNode_TwoBranches::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_TwoBranches");

	return Clss;
}


// HTNNode_TwoBranches HTN.Default__HTNNode_TwoBranches
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_TwoBranches* UHTNNode_TwoBranches::GetDefaultObj()
{
	static class UHTNNode_TwoBranches* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_TwoBranches*>(UHTNNode_TwoBranches::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_AnyOrder
// (None)

class UClass* UHTNNode_AnyOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_AnyOrder");

	return Clss;
}


// HTNNode_AnyOrder HTN.Default__HTNNode_AnyOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_AnyOrder* UHTNNode_AnyOrder::GetDefaultObj()
{
	static class UHTNNode_AnyOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_AnyOrder*>(UHTNNode_AnyOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_If
// (None)

class UClass* UHTNNode_If::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_If");

	return Clss;
}


// HTNNode_If HTN.Default__HTNNode_If
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_If* UHTNNode_If::GetDefaultObj()
{
	static class UHTNNode_If* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_If*>(UHTNNode_If::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_Parallel
// (None)

class UClass* UHTNNode_Parallel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_Parallel");

	return Clss;
}


// HTNNode_Parallel HTN.Default__HTNNode_Parallel
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_Parallel* UHTNNode_Parallel::GetDefaultObj()
{
	static class UHTNNode_Parallel* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_Parallel*>(UHTNNode_Parallel::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_Scope
// (None)

class UClass* UHTNNode_Scope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_Scope");

	return Clss;
}


// HTNNode_Scope HTN.Default__HTNNode_Scope
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_Scope* UHTNNode_Scope::GetDefaultObj()
{
	static class UHTNNode_Scope* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_Scope*>(UHTNNode_Scope::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_Sequence
// (None)

class UClass* UHTNNode_Sequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_Sequence");

	return Clss;
}


// HTNNode_Sequence HTN.Default__HTNNode_Sequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_Sequence* UHTNNode_Sequence::GetDefaultObj()
{
	static class UHTNNode_Sequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_Sequence*>(UHTNNode_Sequence::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_SubNetwork
// (None)

class UClass* UHTNNode_SubNetwork::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_SubNetwork");

	return Clss;
}


// HTNNode_SubNetwork HTN.Default__HTNNode_SubNetwork
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_SubNetwork* UHTNNode_SubNetwork::GetDefaultObj()
{
	static class UHTNNode_SubNetwork* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_SubNetwork*>(UHTNNode_SubNetwork::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNNode_SubNetworkDynamic
// (None)

class UClass* UHTNNode_SubNetworkDynamic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNNode_SubNetworkDynamic");

	return Clss;
}


// HTNNode_SubNetworkDynamic HTN.Default__HTNNode_SubNetworkDynamic
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNNode_SubNetworkDynamic* UHTNNode_SubNetworkDynamic::GetDefaultObj()
{
	static class UHTNNode_SubNetworkDynamic* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNNode_SubNetworkDynamic*>(UHTNNode_SubNetworkDynamic::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNService
// (None)

class UClass* UHTNService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNService");

	return Clss;
}


// HTNService HTN.Default__HTNService
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNService* UHTNService::GetDefaultObj()
{
	static class UHTNService* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNService*>(UHTNService::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNService_BlueprintBase
// (None)

class UClass* UHTNService_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNService_BlueprintBase");

	return Clss;
}


// HTNService_BlueprintBase HTN.Default__HTNService_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNService_BlueprintBase* UHTNService_BlueprintBase::GetDefaultObj()
{
	static class UHTNService_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNService_BlueprintBase*>(UHTNService_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNService_BlueprintBase::ReceiveTick(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNService_BlueprintBase", "ReceiveTick");

	Params::UHTNService_BlueprintBase_ReceiveTick_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNService_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNService_BlueprintBase::ReceiveExecutionStart(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNService_BlueprintBase", "ReceiveExecutionStart");

	Params::UHTNService_BlueprintBase_ReceiveExecutionStart_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNService_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerAsController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHTNNodeResult          NodeResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNService_BlueprintBase::ReceiveExecutionFinish(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, enum class EHTNNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNService_BlueprintBase", "ReceiveExecutionFinish");

	Params::UHTNService_BlueprintBase_ReceiveExecutionFinish_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerAsController = OwnerAsController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Class HTN.HTNService_ReplanIfLocationChanges
// (None)

class UClass* UHTNService_ReplanIfLocationChanges::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNService_ReplanIfLocationChanges");

	return Clss;
}


// HTNService_ReplanIfLocationChanges HTN.Default__HTNService_ReplanIfLocationChanges
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNService_ReplanIfLocationChanges* UHTNService_ReplanIfLocationChanges::GetDefaultObj()
{
	static class UHTNService_ReplanIfLocationChanges* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNService_ReplanIfLocationChanges*>(UHTNService_ReplanIfLocationChanges::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNTask
// (None)

class UClass* UHTNTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask");

	return Clss;
}


// HTNTask HTN.Default__HTNTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask* UHTNTask::GetDefaultObj()
{
	static class UHTNTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask*>(UHTNTask::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNTask_BlackboardBase
// (None)

class UClass* UHTNTask_BlackboardBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask_BlackboardBase");

	return Clss;
}


// HTNTask_BlackboardBase HTN.Default__HTNTask_BlackboardBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask_BlackboardBase* UHTNTask_BlackboardBase::GetDefaultObj()
{
	static class UHTNTask_BlackboardBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask_BlackboardBase*>(UHTNTask_BlackboardBase::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNTask_BlueprintBase
// (None)

class UClass* UHTNTask_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask_BlueprintBase");

	return Clss;
}


// HTNTask_BlueprintBase HTN.Default__HTNTask_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask_BlueprintBase* UHTNTask_BlueprintBase::GetDefaultObj()
{
	static class UHTNTask_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask_BlueprintBase*>(UHTNTask_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.HTNTask_BlueprintBase.SubmitPlanStep
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// int32                              Cost                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::SubmitPlanStep(int32 Cost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "SubmitPlanStep");

	Params::UHTNTask_BlueprintBase_SubmitPlanStep_Params Parms{};

	Parms.Cost = Cost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::ReceiveTick(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveTick");

	Params::UHTNTask_BlueprintBase_ReceiveTick_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNTask_BlueprintBase.ReceiveRecheckPlan
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNTask_BlueprintBase::ReceiveRecheckPlan(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveRecheckPlan");

	Params::UHTNTask_BlueprintBase_ReceiveRecheckPlan_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HTN.HTNTask_BlueprintBase.ReceiveOnFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHTNNodeResult          Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::ReceiveOnFinished(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn, enum class EHTNNodeResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveOnFinished");

	Params::UHTNTask_BlueprintBase_ReceiveOnFinished_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::ReceiveExecute(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveExecute");

	Params::UHTNTask_BlueprintBase_ReceiveExecute_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNTask_BlueprintBase.ReceiveDescribePlanStepToVisualLog
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VisLogCategoryName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::ReceiveDescribePlanStepToVisualLog(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn, class FName VisLogCategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveDescribePlanStepToVisualLog");

	Params::UHTNTask_BlueprintBase_ReceiveDescribePlanStepToVisualLog_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.VisLogCategoryName = VisLogCategoryName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNTask_BlueprintBase.ReceiveCreatePlanSteps
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::ReceiveCreatePlanSteps(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveCreatePlanSteps");

	Params::UHTNTask_BlueprintBase_ReceiveCreatePlanSteps_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::ReceiveAbort(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "ReceiveAbort");

	Params::UHTNTask_BlueprintBase_ReceiveAbort_Params Parms{};

	Parms.Owner = Owner;
	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HTN.HTNTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNTask_BlueprintBase::IsTaskExecuting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "IsTaskExecuting");

	Params::UHTNTask_BlueprintBase_IsTaskExecuting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNTask_BlueprintBase.IsTaskAborting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHTNTask_BlueprintBase::IsTaskAborting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "IsTaskAborting");

	Params::UHTNTask_BlueprintBase_IsTaskAborting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.HTNTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTNTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "FinishExecute");

	Params::UHTNTask_BlueprintBase_FinishExecute_Params Parms{};

	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.HTNTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UHTNTask_BlueprintBase::FinishAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTNTask_BlueprintBase", "FinishAbort");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class HTN.HTNTask_EQSQuery
// (None)

class UClass* UHTNTask_EQSQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask_EQSQuery");

	return Clss;
}


// HTNTask_EQSQuery HTN.Default__HTNTask_EQSQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask_EQSQuery* UHTNTask_EQSQuery::GetDefaultObj()
{
	static class UHTNTask_EQSQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask_EQSQuery*>(UHTNTask_EQSQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNTask_MoveTo
// (None)

class UClass* UHTNTask_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask_MoveTo");

	return Clss;
}


// HTNTask_MoveTo HTN.Default__HTNTask_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask_MoveTo* UHTNTask_MoveTo::GetDefaultObj()
{
	static class UHTNTask_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask_MoveTo*>(UHTNTask_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNTask_Success
// (None)

class UClass* UHTNTask_Success::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask_Success");

	return Clss;
}


// HTNTask_Success HTN.Default__HTNTask_Success
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask_Success* UHTNTask_Success::GetDefaultObj()
{
	static class UHTNTask_Success* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask_Success*>(UHTNTask_Success::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.HTNTask_Wait
// (None)

class UClass* UHTNTask_Wait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTNTask_Wait");

	return Clss;
}


// HTNTask_Wait HTN.Default__HTNTask_Wait
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTNTask_Wait* UHTNTask_Wait::GetDefaultObj()
{
	static class UHTNTask_Wait* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTNTask_Wait*>(UHTNTask_Wait::StaticClass()->DefaultObject);

	return Default;
}


// Class HTN.WorldStateProxy
// (None)

class UClass* UWorldStateProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldStateProxy");

	return Clss;
}


// WorldStateProxy HTN.Default__WorldStateProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldStateProxy* UWorldStateProxy::GetDefaultObj()
{
	static class UWorldStateProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldStateProxy*>(UWorldStateProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function HTN.WorldStateProxy.SetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsVector(class FName& KeyName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsVector");

	Params::UWorldStateProxy_SetValueAsVector_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsString(class FName& KeyName, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsString");

	Params::UWorldStateProxy_SetValueAsString_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsRotator(class FName& KeyName, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsRotator");

	Params::UWorldStateProxy_SetValueAsRotator_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsObject(class FName& KeyName, class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsObject");

	Params::UWorldStateProxy_SetValueAsObject_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsName(class FName& KeyName, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsName");

	Params::UWorldStateProxy_SetValueAsName_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsInt(class FName& KeyName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsInt");

	Params::UWorldStateProxy_SetValueAsInt_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsFloat(class FName& KeyName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsFloat");

	Params::UWorldStateProxy_SetValueAsFloat_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsEnum(class FName& KeyName, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsEnum");

	Params::UWorldStateProxy_SetValueAsEnum_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsClass(class FName& KeyName, class UClass* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsClass");

	Params::UWorldStateProxy_SetValueAsClass_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.SetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::SetValueAsBool(class FName& KeyName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "SetValueAsBool");

	Params::UWorldStateProxy_SetValueAsBool_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HTN.WorldStateProxy.IsVectorValueSet
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldStateProxy::IsVectorValueSet(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "IsVectorValueSet");

	Params::UWorldStateProxy_IsVectorValueSet_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UWorldStateProxy::GetValueAsVector(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsVector");

	Params::UWorldStateProxy_GetValueAsVector_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWorldStateProxy::GetValueAsString(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsString");

	Params::UWorldStateProxy_GetValueAsString_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UWorldStateProxy::GetValueAsRotator(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsRotator");

	Params::UWorldStateProxy_GetValueAsRotator_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UWorldStateProxy::GetValueAsObject(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsObject");

	Params::UWorldStateProxy_GetValueAsObject_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UWorldStateProxy::GetValueAsName(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsName");

	Params::UWorldStateProxy_GetValueAsName_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWorldStateProxy::GetValueAsInt(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsInt");

	Params::UWorldStateProxy_GetValueAsInt_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWorldStateProxy::GetValueAsFloat(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsFloat");

	Params::UWorldStateProxy_GetValueAsFloat_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UWorldStateProxy::GetValueAsEnum(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsEnum");

	Params::UWorldStateProxy_GetValueAsEnum_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UWorldStateProxy::GetValueAsClass(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsClass");

	Params::UWorldStateProxy_GetValueAsClass_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldStateProxy::GetValueAsBool(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsBool");

	Params::UWorldStateProxy_GetValueAsBool_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetValueAsActor
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UWorldStateProxy::GetValueAsActor(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetValueAsActor");

	Params::UWorldStateProxy_GetValueAsActor_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetSelfLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UWorldStateProxy::GetSelfLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetSelfLocation");

	Params::UWorldStateProxy_GetSelfLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetRotationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ResultRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldStateProxy::GetRotationFromEntry(class FName& KeyName, struct FRotator* ResultRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetRotationFromEntry");

	Params::UWorldStateProxy_GetRotationFromEntry_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultRotation != nullptr)
		*ResultRotation = std::move(Parms.ResultRotation);

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetLocationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldStateProxy::GetLocationFromEntry(class FName& KeyName, struct FVector* ResultLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetLocationFromEntry");

	Params::UWorldStateProxy_GetLocationFromEntry_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultLocation != nullptr)
		*ResultLocation = std::move(Parms.ResultLocation);

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.GetLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBlackboardKeySelector      KeySelector                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OutActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldStateProxy::GetLocation(struct FBlackboardKeySelector& KeySelector, struct FVector* OutLocation, class AActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "GetLocation");

	Params::UWorldStateProxy_GetLocation_Params Parms{};

	Parms.KeySelector = KeySelector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Function HTN.WorldStateProxy.ClearValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldStateProxy::ClearValue(class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldStateProxy", "ClearValue");

	Params::UWorldStateProxy_ClearValue_Params Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


