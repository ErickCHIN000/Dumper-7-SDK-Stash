#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AppearanceRuntime.AppearanceComponent
// (None)

class UClass* UAppearanceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AppearanceComponent");

	return Clss;
}


// AppearanceComponent AppearanceRuntime.Default__AppearanceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAppearanceComponent* UAppearanceComponent::GetDefaultObj()
{
	static class UAppearanceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAppearanceComponent*>(UAppearanceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AppearanceRuntime.AppearanceComponent.SendAllPropertyEvents
// (Event, Public, BlueprintEvent)
// Parameters:

void UAppearanceComponent::SendAllPropertyEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppearanceComponent", "SendAllPropertyEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AppearanceRuntime.AppearanceComponent.PopulateAppearanceFromMetadata
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAppearanceComponent::PopulateAppearanceFromMetadata(TMap<class FString, class FString>& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppearanceComponent", "PopulateAppearanceFromMetadata");

	Params::UAppearanceComponent_PopulateAppearanceFromMetadata_Params Parms{};

	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AppearanceRuntime.AppearanceComponent.GetAppearanceMetadata
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> OutMetadata                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UAppearanceComponent::GetAppearanceMetadata(TMap<class FString, class FString>* OutMetadata)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppearanceComponent", "GetAppearanceMetadata");

	Params::UAppearanceComponent_GetAppearanceMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMetadata != nullptr)
		*OutMetadata = Parms.OutMetadata;

}


// Class AppearanceRuntime.CharacterFaceMorphInterface
// (None)

class UClass* ICharacterFaceMorphInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterFaceMorphInterface");

	return Clss;
}


// CharacterFaceMorphInterface AppearanceRuntime.Default__CharacterFaceMorphInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICharacterFaceMorphInterface* ICharacterFaceMorphInterface::GetDefaultObj()
{
	static class ICharacterFaceMorphInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICharacterFaceMorphInterface*>(ICharacterFaceMorphInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AppearanceRuntime.CharacterFaceMorphInterface.SetCharacterEyeScale
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICharacterFaceMorphInterface::SetCharacterEyeScale(float& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterFaceMorphInterface", "SetCharacterEyeScale");

	Params::ICharacterFaceMorphInterface_SetCharacterEyeScale_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AppearanceRuntime.CharacterFaceMorphInterface.SetCharacterEyeOffset
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Offset                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICharacterFaceMorphInterface::SetCharacterEyeOffset(struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterFaceMorphInterface", "SetCharacterEyeOffset");

	Params::ICharacterFaceMorphInterface_SetCharacterEyeOffset_Params Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AppearanceRuntime.CharacterFaceMorphInterface.SetCharacterBodyType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBodyType               Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICharacterFaceMorphInterface::SetCharacterBodyType(enum class EBodyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterFaceMorphInterface", "SetCharacterBodyType");

	Params::ICharacterFaceMorphInterface_SetCharacterBodyType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AppearanceRuntime.HairDataAsset
// (None)

class UClass* UHairDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HairDataAsset");

	return Clss;
}


// HairDataAsset AppearanceRuntime.Default__HairDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UHairDataAsset* UHairDataAsset::GetDefaultObj()
{
	static class UHairDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UHairDataAsset*>(UHairDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AppearanceRuntime.HairDataReferenceFunctionLibrary
// (None)

class UClass* UHairDataReferenceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HairDataReferenceFunctionLibrary");

	return Clss;
}


// HairDataReferenceFunctionLibrary AppearanceRuntime.Default__HairDataReferenceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHairDataReferenceFunctionLibrary* UHairDataReferenceFunctionLibrary::GetDefaultObj()
{
	static class UHairDataReferenceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHairDataReferenceFunctionLibrary*>(UHairDataReferenceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.TryGetHairData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHairDataReference          Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHairData                   OutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGetResult              OutBranches                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHairDataReferenceFunctionLibrary::TryGetHairData(struct FHairDataReference& Reference, struct FHairData* OutData, enum class EGetResult* OutBranches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "TryGetHairData");

	Params::UHairDataReferenceFunctionLibrary_TryGetHairData_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

	if (OutBranches != nullptr)
		*OutBranches = Parms.OutBranches;

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.NotEqual_FHairDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHairDataReference          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHairDataReference          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHairDataReferenceFunctionLibrary::NotEqual_FHairDataReference(struct FHairDataReference& A, struct FHairDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "NotEqual_FHairDataReference");

	Params::UHairDataReferenceFunctionLibrary_NotEqual_FHairDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.MakeFromDataAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UHairDataAsset>Asset                                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHairAssetType          Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHairDataReference          ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FHairDataReference UHairDataReferenceFunctionLibrary::MakeFromDataAsset(TSoftObjectPtr<class UHairDataAsset>& Asset, enum class EHairAssetType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "MakeFromDataAsset");

	Params::UHairDataReferenceFunctionLibrary_MakeFromDataAsset_Params Parms{};

	Parms.Asset = Asset;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHairDataReference          Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHairDataReferenceFunctionLibrary::IsValid(struct FHairDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "IsValid");

	Params::UHairDataReferenceFunctionLibrary_IsValid_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.GetSoftObjectFromReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHairDataReference          HairDataReference                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UHairDataAsset>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UHairDataAsset> UHairDataReferenceFunctionLibrary::GetSoftObjectFromReference(struct FHairDataReference& HairDataReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "GetSoftObjectFromReference");

	Params::UHairDataReferenceFunctionLibrary_GetSoftObjectFromReference_Params Parms{};

	Parms.HairDataReference = HairDataReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.GetHairDataId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHairDataReference          Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UHairDataReferenceFunctionLibrary::GetHairDataId(struct FHairDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "GetHairDataId");

	Params::UHairDataReferenceFunctionLibrary_GetHairDataId_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.GetAllHairReferences
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EHairAssetType          Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FHairDataReference>  OutReferences                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UHairDataReferenceFunctionLibrary::GetAllHairReferences(enum class EHairAssetType Type, TArray<struct FHairDataReference>* OutReferences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "GetAllHairReferences");

	Params::UHairDataReferenceFunctionLibrary_GetAllHairReferences_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutReferences != nullptr)
		*OutReferences = std::move(Parms.OutReferences);

}


// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.EqualEqual_FHairDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHairDataReference          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHairDataReference          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHairDataReferenceFunctionLibrary::EqualEqual_FHairDataReference(struct FHairDataReference& A, struct FHairDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairDataReferenceFunctionLibrary", "EqualEqual_FHairDataReference");

	Params::UHairDataReferenceFunctionLibrary_EqualEqual_FHairDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AppearanceRuntime.VoiceSetDataAsset
// (None)

class UClass* UVoiceSetDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceSetDataAsset");

	return Clss;
}


// VoiceSetDataAsset AppearanceRuntime.Default__VoiceSetDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoiceSetDataAsset* UVoiceSetDataAsset::GetDefaultObj()
{
	static class UVoiceSetDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceSetDataAsset*>(UVoiceSetDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary
// (None)

class UClass* UVoiceSetDataReferenceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceSetDataReferenceFunctionLibrary");

	return Clss;
}


// VoiceSetDataReferenceFunctionLibrary AppearanceRuntime.Default__VoiceSetDataReferenceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoiceSetDataReferenceFunctionLibrary* UVoiceSetDataReferenceFunctionLibrary::GetDefaultObj()
{
	static class UVoiceSetDataReferenceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceSetDataReferenceFunctionLibrary*>(UVoiceSetDataReferenceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.TryGetVoiceSetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVoiceSetDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVoiceSetData               OutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGetResult              OutBranches                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoiceSetDataReferenceFunctionLibrary::TryGetVoiceSetData(struct FVoiceSetDataReference& Reference, struct FVoiceSetData* OutData, enum class EGetResult* OutBranches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "TryGetVoiceSetData");

	Params::UVoiceSetDataReferenceFunctionLibrary_TryGetVoiceSetData_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

	if (OutBranches != nullptr)
		*OutBranches = Parms.OutBranches;

}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.NotEqual_FVoiceSetDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceSetDataReference      A                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVoiceSetDataReference      B                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceSetDataReferenceFunctionLibrary::NotEqual_FVoiceSetDataReference(struct FVoiceSetDataReference& A, struct FVoiceSetDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "NotEqual_FVoiceSetDataReference");

	Params::UVoiceSetDataReferenceFunctionLibrary_NotEqual_FVoiceSetDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.MakeFromDataAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UVoiceSetDataAsset>Asset                                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVoiceSetDataReference      ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVoiceSetDataReference UVoiceSetDataReferenceFunctionLibrary::MakeFromDataAsset(TSoftObjectPtr<class UVoiceSetDataAsset>& Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "MakeFromDataAsset");

	Params::UVoiceSetDataReferenceFunctionLibrary_MakeFromDataAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceSetDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceSetDataReferenceFunctionLibrary::IsValid(struct FVoiceSetDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "IsValid");

	Params::UVoiceSetDataReferenceFunctionLibrary_IsValid_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.GetUID
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceSetDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UVoiceSetDataReferenceFunctionLibrary::GetUID(struct FVoiceSetDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "GetUID");

	Params::UVoiceSetDataReferenceFunctionLibrary_GetUID_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.GetAllVoiceSetDataReferences
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVoiceSetDataReference>OutReferences                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVoiceSetDataReferenceFunctionLibrary::GetAllVoiceSetDataReferences(TArray<struct FVoiceSetDataReference>* OutReferences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "GetAllVoiceSetDataReferences");

	Params::UVoiceSetDataReferenceFunctionLibrary_GetAllVoiceSetDataReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutReferences != nullptr)
		*OutReferences = std::move(Parms.OutReferences);

}


// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.EqualEqual_FVoiceSetDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVoiceSetDataReference      A                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVoiceSetDataReference      B                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoiceSetDataReferenceFunctionLibrary::EqualEqual_FVoiceSetDataReference(struct FVoiceSetDataReference& A, struct FVoiceSetDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetDataReferenceFunctionLibrary", "EqualEqual_FVoiceSetDataReference");

	Params::UVoiceSetDataReferenceFunctionLibrary_EqualEqual_FVoiceSetDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


