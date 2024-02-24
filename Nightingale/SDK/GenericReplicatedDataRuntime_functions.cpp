#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary
// (None)

class UClass* UGenericReplicatedDataFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericReplicatedDataFunctionLibrary");

	return Clss;
}


// GenericReplicatedDataFunctionLibrary GenericReplicatedDataRuntime.Default__GenericReplicatedDataFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenericReplicatedDataFunctionLibrary* UGenericReplicatedDataFunctionLibrary::GetDefaultObj()
{
	static class UGenericReplicatedDataFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericReplicatedDataFunctionLibrary*>(UGenericReplicatedDataFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasVector                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsVector(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasVector, struct FVector* Vector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsVector");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsVector_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasVector != nullptr)
		*HasVector = Parms.HasVector;

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasTransform                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsTransform(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsTransform");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsTransform_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasTransform != nullptr)
		*HasTransform = Parms.HasTransform;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasText                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsText(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasText, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsText");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsText_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasText != nullptr)
		*HasText = Parms.HasText;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasTagContainer                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TagContainer                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsTagContainer(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasTagContainer, struct FGameplayTagContainer* TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsTagContainer");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsTagContainer_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasTagContainer != nullptr)
		*HasTagContainer = Parms.HasTagContainer;

	if (TagContainer != nullptr)
		*TagContainer = std::move(Parms.TagContainer);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasString                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsString(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasString, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsString");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsString_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasString != nullptr)
		*HasString = Parms.HasString;

	if (String != nullptr)
		*String = std::move(Parms.String);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasRotator                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotator                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsRotator(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasRotator, struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsRotator");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsRotator_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasRotator != nullptr)
		*HasRotator = Parms.HasRotator;

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasObjects                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             Objects                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsObjects(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasObjects, TArray<class UObject*>* Objects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsObjects");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsObjects_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasObjects != nullptr)
		*HasObjects = Parms.HasObjects;

	if (Objects != nullptr)
		*Objects = std::move(Parms.Objects);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsNameArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasNameArray                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NameArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsNameArray(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasNameArray, TArray<class FName>* NameArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsNameArray");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsNameArray_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasNameArray != nullptr)
		*HasNameArray = Parms.HasNameArray;

	if (NameArray != nullptr)
		*NameArray = std::move(Parms.NameArray);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsName(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasName, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsName");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsName_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasName != nullptr)
		*HasName = Parms.HasName;

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsInt64
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasInt64                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Int64                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsInt64(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasInt64, int64* Int64)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsInt64");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsInt64_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasInt64 != nullptr)
		*HasInt64 = Parms.HasInt64;

	if (Int64 != nullptr)
		*Int64 = Parms.Int64;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasInt                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsInt(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasInt, int32* Int)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsInt");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsInt_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasInt != nullptr)
		*HasInt = Parms.HasInt;

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasHitResult                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsHitResult(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasHitResult, struct FHitResult* HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsHitResult");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsHitResult_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasHitResult != nullptr)
		*HasHitResult = Parms.HasHitResult;

	if (HitResult != nullptr)
		*HitResult = std::move(Parms.HitResult);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasGameplayTag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsGameplayTag(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasGameplayTag, struct FGameplayTag* GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsGameplayTag");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsGameplayTag_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasGameplayTag != nullptr)
		*bHasGameplayTag = Parms.bHasGameplayTag;

	if (GameplayTag != nullptr)
		*GameplayTag = std::move(Parms.GameplayTag);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasFloat                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Float                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsFloat(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasFloat, float* Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsFloat");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsFloat_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasFloat != nullptr)
		*HasFloat = Parms.HasFloat;

	if (Float != nullptr)
		*Float = Parms.Float;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsDataTableRowHandleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasDataTableRowHandleArray                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FDataTableRowHandle> DataTableRowHandleArray                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsDataTableRowHandleArray(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasDataTableRowHandleArray, TArray<struct FDataTableRowHandle>* DataTableRowHandleArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsDataTableRowHandleArray");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsDataTableRowHandleArray_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasDataTableRowHandleArray != nullptr)
		*HasDataTableRowHandleArray = Parms.HasDataTableRowHandleArray;

	if (DataTableRowHandleArray != nullptr)
		*DataTableRowHandleArray = std::move(Parms.DataTableRowHandleArray);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsDataTableRowHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasDataTableRowHandle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         DataTableRowHandle                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsDataTableRowHandle(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasDataTableRowHandle, struct FDataTableRowHandle* DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsDataTableRowHandle");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsDataTableRowHandle_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasDataTableRowHandle != nullptr)
		*bHasDataTableRowHandle = Parms.bHasDataTableRowHandle;

	if (DataTableRowHandle != nullptr)
		*DataTableRowHandle = std::move(Parms.DataTableRowHandle);

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasClass                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         Class                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsClass(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasClass, TSubclassOf<class UObject>* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsClass");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsClass_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasClass != nullptr)
		*HasClass = Parms.HasClass;

	if (Class != nullptr)
		*Class = Parms.Class;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasByte                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Byte                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsByte(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasByte, uint8* Byte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsByte");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsByte_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasByte != nullptr)
		*HasByte = Parms.HasByte;

	if (Byte != nullptr)
		*Byte = Parms.Byte;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasBool                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bool                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsBool(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasBool, bool* Bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsBool");

	Params::UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsBool_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasBool != nullptr)
		*HasBool = Parms.HasBool;

	if (Bool != nullptr)
		*Bool = Parms.Bool;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetDebugString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGenericReplicatedDataFunctionLibrary::GetDebugString(struct FGenericReplicatedDataHandle& GenericReplicatedData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetDebugString");

	Params::UGenericReplicatedDataFunctionLibrary_GetDebugString_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetDataCount
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGenericReplicatedDataFunctionLibrary::GetDataCount(struct FGenericReplicatedDataHandle& GenericReplicatedData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GetDataCount");

	Params::UGenericReplicatedDataFunctionLibrary_GetDataCount_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Vector                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromVector(struct FVector& Vector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromVector");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromVector_Params Parms{};

	Parms.Vector = Vector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromTransform");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromText");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromTagContainer(struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromTagContainer");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromTagContainer_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromString(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromString");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromString_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    Rotator                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromRotator(struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromRotator");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromRotator_Params Parms{};

	Parms.Rotator = Rotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UObject*>             Objects                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromObjects(TArray<class UObject*>& Objects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromObjects");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromObjects_Params Parms{};

	Parms.Objects = Objects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromNameArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FName>                NameArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromNameArray(TArray<class FName>& NameArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromNameArray");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromNameArray_Params Parms{};

	Parms.NameArray = NameArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromName(class FName& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromName");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromInt64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Int64                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromInt64(int64 Int64)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromInt64");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromInt64_Params Parms{};

	Parms.Int64 = Int64;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Int                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromInt(int32 Int)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromInt");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromInt_Params Parms{};

	Parms.Int = Int;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromHitResult(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromHitResult");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromHitResult_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromGameplayTag(struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromGameplayTag");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Float                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromFloat(float Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromFloat");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromFloat_Params Parms{};

	Parms.Float = Float;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromDataTableRowHandleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FDataTableRowHandle> DataTableRowHandleArray                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromDataTableRowHandleArray(TArray<struct FDataTableRowHandle>& DataTableRowHandleArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromDataTableRowHandleArray");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromDataTableRowHandleArray_Params Parms{};

	Parms.DataTableRowHandleArray = DataTableRowHandleArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromDataTableRowHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromDataTableRowHandle(struct FDataTableRowHandle& DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromDataTableRowHandle");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromDataTableRowHandle_Params Parms{};

	Parms.DataTableRowHandle = DataTableRowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UObject>         Class                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromClass(TSubclassOf<class UObject>& Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromClass");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromClass_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Byte                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromByte(uint8 Byte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromByte");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromByte_Params Parms{};

	Parms.Byte = Byte;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Bool                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromBool(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromBool");

	Params::UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromBool_Params Parms{};

	Parms.Bool = Bool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.CreateGenericReplicatedDataHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGenericDataInitializationField>InputData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleOutHandle                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGenericReplicatedDataFunctionLibrary::CreateGenericReplicatedDataHandle(TArray<struct FGenericDataInitializationField>& InputData, struct FGenericReplicatedDataHandle* OutHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "CreateGenericReplicatedDataHandle");

	Params::UGenericReplicatedDataFunctionLibrary_CreateGenericReplicatedDataHandle_Params Parms{};

	Parms.InputData = InputData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHandle != nullptr)
		*OutHandle = std::move(Parms.OutHandle);

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.CompareHandles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGenericReplicatedDataFunctionLibrary::CompareHandles(struct FGenericReplicatedDataHandle& A, struct FGenericReplicatedDataHandle& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "CompareHandles");

	Params::UGenericReplicatedDataFunctionLibrary_CompareHandles_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.AppendGenericReplicatedData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGenericReplicatedDataHandle>GenericReplicatedData                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UGenericReplicatedDataFunctionLibrary::AppendGenericReplicatedData(TArray<struct FGenericReplicatedDataHandle>& GenericReplicatedData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericReplicatedDataFunctionLibrary", "AppendGenericReplicatedData");

	Params::UGenericReplicatedDataFunctionLibrary_AppendGenericReplicatedData_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


