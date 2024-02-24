#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CodexRuntime.CodexActor
// (Actor)

class UClass* ACodexActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexActor");

	return Clss;
}


// CodexActor CodexRuntime.Default__CodexActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACodexActor* ACodexActor::GetDefaultObj()
{
	static class ACodexActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACodexActor*>(ACodexActor::StaticClass()->DefaultObject);

	return Default;
}


// Function CodexRuntime.CodexActor.ShouldShowHopeEcho
// (Final, Native, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACodexActor::ShouldShowHopeEcho()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexActor", "ShouldShowHopeEcho");

	Params::ACodexActor_ShouldShowHopeEcho_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CodexRuntime.CodexAssetReferenceFunctionLibrary
// (None)

class UClass* UCodexAssetReferenceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexAssetReferenceFunctionLibrary");

	return Clss;
}


// CodexAssetReferenceFunctionLibrary CodexRuntime.Default__CodexAssetReferenceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexAssetReferenceFunctionLibrary* UCodexAssetReferenceFunctionLibrary::GetDefaultObj()
{
	static class UCodexAssetReferenceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexAssetReferenceFunctionLibrary*>(UCodexAssetReferenceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.IsValidCodexReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCodexAssetReference        CodexReference                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCodexAssetReferenceFunctionLibrary::IsValidCodexReference(struct FCodexAssetReference& CodexReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexAssetReferenceFunctionLibrary", "IsValidCodexReference");

	Params::UCodexAssetReferenceFunctionLibrary_IsValidCodexReference_Params Parms{};

	Parms.CodexReference = CodexReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.GetCodexReferenceCardImage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCodexAssetReference        CodexReference                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bFoundValidImage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   OutCardImage                                                     (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCodexAssetReferenceFunctionLibrary::GetCodexReferenceCardImage(struct FCodexAssetReference& CodexReference, bool* bFoundValidImage, TSoftObjectPtr<class UTexture2D>* OutCardImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexAssetReferenceFunctionLibrary", "GetCodexReferenceCardImage");

	Params::UCodexAssetReferenceFunctionLibrary_GetCodexReferenceCardImage_Params Parms{};

	Parms.CodexReference = CodexReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bFoundValidImage != nullptr)
		*bFoundValidImage = Parms.bFoundValidImage;

	if (OutCardImage != nullptr)
		*OutCardImage = Parms.OutCardImage;

}


// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.GetCodexAssetUniqueId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UCodexBaseDataAsset*         CodexAsset                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       OutUniqueID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCodexAssetReferenceFunctionLibrary::GetCodexAssetUniqueId(class UCodexBaseDataAsset* CodexAsset, struct FGuid* OutUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexAssetReferenceFunctionLibrary", "GetCodexAssetUniqueId");

	Params::UCodexAssetReferenceFunctionLibrary_GetCodexAssetUniqueId_Params Parms{};

	Parms.CodexAsset = CodexAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutUniqueID != nullptr)
		*OutUniqueID = std::move(Parms.OutUniqueID);

}


// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.AreCodexReferencesEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCodexAssetReference        A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCodexAssetReference        B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCodexAssetReferenceFunctionLibrary::AreCodexReferencesEqual(struct FCodexAssetReference& A, struct FCodexAssetReference& B, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexAssetReferenceFunctionLibrary", "AreCodexReferencesEqual");

	Params::UCodexAssetReferenceFunctionLibrary_AreCodexReferencesEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CodexRuntime.CodexComponent
// (None)

class UClass* UCodexComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexComponent");

	return Clss;
}


// CodexComponent CodexRuntime.Default__CodexComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexComponent* UCodexComponent::GetDefaultObj()
{
	static class UCodexComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexComponent*>(UCodexComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CodexRuntime.CodexComponent.OnRep_CodexInstanceIDReplicated
// (Final, Native, Private)
// Parameters:

void UCodexComponent::OnRep_CodexInstanceIDReplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexComponent", "OnRep_CodexInstanceIDReplicated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CodexRuntime.CodexComponentInterface
// (None)

class UClass* ICodexComponentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexComponentInterface");

	return Clss;
}


// CodexComponentInterface CodexRuntime.Default__CodexComponentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICodexComponentInterface* ICodexComponentInterface::GetDefaultObj()
{
	static class ICodexComponentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICodexComponentInterface*>(ICodexComponentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function CodexRuntime.CodexComponentInterface.UnbindEventFrom_OnCodexInstanceIDReplicated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexComponentInterface::UnbindEventFrom_OnCodexInstanceIDReplicated(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexComponentInterface", "UnbindEventFrom_OnCodexInstanceIDReplicated");

	Params::ICodexComponentInterface_UnbindEventFrom_OnCodexInstanceIDReplicated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CodexRuntime.CodexComponentInterface.SetCodexAssetReference
// (Native, Public, HasOutParams)
// Parameters:
// struct FCodexAssetReference        InCodexAssetReference                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ICodexComponentInterface::SetCodexAssetReference(struct FCodexAssetReference& InCodexAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexComponentInterface", "SetCodexAssetReference");

	Params::ICodexComponentInterface_SetCodexAssetReference_Params Parms{};

	Parms.InCodexAssetReference = InCodexAssetReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CodexRuntime.CodexComponentInterface.GetCodexComponentID
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       OutID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexComponentInterface::GetCodexComponentID(struct FGuid* OutID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexComponentInterface", "GetCodexComponentID");

	Params::ICodexComponentInterface_GetCodexComponentID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutID != nullptr)
		*OutID = std::move(Parms.OutID);

}


// Function CodexRuntime.CodexComponentInterface.GetCodexAssetReference
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCodexAssetReference        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FCodexAssetReference ICodexComponentInterface::GetCodexAssetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexComponentInterface", "GetCodexAssetReference");

	Params::ICodexComponentInterface_GetCodexAssetReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CodexRuntime.CodexComponentInterface.BindEventTo_OnCodexInstanceIDReplicated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexComponentInterface::BindEventTo_OnCodexInstanceIDReplicated(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexComponentInterface", "BindEventTo_OnCodexInstanceIDReplicated");

	Params::ICodexComponentInterface_BindEventTo_OnCodexInstanceIDReplicated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CodexRuntime.CodexBaseDataAsset
// (None)

class UClass* UCodexBaseDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexBaseDataAsset");

	return Clss;
}


// CodexBaseDataAsset CodexRuntime.Default__CodexBaseDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexBaseDataAsset* UCodexBaseDataAsset::GetDefaultObj()
{
	static class UCodexBaseDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexBaseDataAsset*>(UCodexBaseDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class CodexRuntime.CodexExperienceStateIDEnumerator
// (None)

class UClass* UCodexExperienceStateIDEnumerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexExperienceStateIDEnumerator");

	return Clss;
}


// CodexExperienceStateIDEnumerator CodexRuntime.Default__CodexExperienceStateIDEnumerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexExperienceStateIDEnumerator* UCodexExperienceStateIDEnumerator::GetDefaultObj()
{
	static class UCodexExperienceStateIDEnumerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexExperienceStateIDEnumerator*>(UCodexExperienceStateIDEnumerator::StaticClass()->DefaultObject);

	return Default;
}


// Class CodexRuntime.CodexProxy
// (Actor)

class UClass* ACodexProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexProxy");

	return Clss;
}


// CodexProxy CodexRuntime.Default__CodexProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ACodexProxy* ACodexProxy::GetDefaultObj()
{
	static class ACodexProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ACodexProxy*>(ACodexProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class CodexRuntime.CodexServerWorldSubsystem
// (None)

class UClass* UCodexServerWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexServerWorldSubsystem");

	return Clss;
}


// CodexServerWorldSubsystem CodexRuntime.Default__CodexServerWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexServerWorldSubsystem* UCodexServerWorldSubsystem::GetDefaultObj()
{
	static class UCodexServerWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexServerWorldSubsystem*>(UCodexServerWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class CodexRuntime.CodexTelemetryFunctionLibrary
// (None)

class UClass* UCodexTelemetryFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexTelemetryFunctionLibrary");

	return Clss;
}


// CodexTelemetryFunctionLibrary CodexRuntime.Default__CodexTelemetryFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexTelemetryFunctionLibrary* UCodexTelemetryFunctionLibrary::GetDefaultObj()
{
	static class UCodexTelemetryFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexTelemetryFunctionLibrary*>(UCodexTelemetryFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class CodexRuntime.CodexTrackerComponent
// (None)

class UClass* UCodexTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexTrackerComponent");

	return Clss;
}


// CodexTrackerComponent CodexRuntime.Default__CodexTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCodexTrackerComponent* UCodexTrackerComponent::GetDefaultObj()
{
	static class UCodexTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCodexTrackerComponent*>(UCodexTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CodexRuntime.CodexTrackerComponent.Server_GrantCodexEntry
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FGuid                       CodexInstanceID                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCodexAssetReference        CodexAssetReference                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCodexTrackerComponent::Server_GrantCodexEntry(struct FGuid& CodexInstanceID, struct FCodexAssetReference& CodexAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerComponent", "Server_GrantCodexEntry");

	Params::UCodexTrackerComponent_Server_GrantCodexEntry_Params Parms{};

	Parms.CodexInstanceID = CodexInstanceID;
	Parms.CodexAssetReference = CodexAssetReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CodexRuntime.CodexTrackerInterface
// (None)

class UClass* ICodexTrackerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CodexTrackerInterface");

	return Clss;
}


// CodexTrackerInterface CodexRuntime.Default__CodexTrackerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICodexTrackerInterface* ICodexTrackerInterface::GetDefaultObj()
{
	static class ICodexTrackerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICodexTrackerInterface*>(ICodexTrackerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function CodexRuntime.CodexTrackerInterface.UnbindEventFrom_OnCodexUpdated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::UnbindEventFrom_OnCodexUpdated(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "UnbindEventFrom_OnCodexUpdated");

	Params::ICodexTrackerInterface_UnbindEventFrom_OnCodexUpdated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CodexRuntime.CodexTrackerInterface.UnbindEventFrom_OnCodexGranted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::UnbindEventFrom_OnCodexGranted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "UnbindEventFrom_OnCodexGranted");

	Params::ICodexTrackerInterface_UnbindEventFrom_OnCodexGranted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CodexRuntime.CodexTrackerInterface.HasUnlockedAnySubentry
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCodexBaseDataAsset*         CodexDataAsset                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutUnlocked                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::HasUnlockedAnySubentry(class UCodexBaseDataAsset* CodexDataAsset, bool* OutUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "HasUnlockedAnySubentry");

	Params::ICodexTrackerInterface_HasUnlockedAnySubentry_Params Parms{};

	Parms.CodexDataAsset = CodexDataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutUnlocked != nullptr)
		*OutUnlocked = Parms.OutUnlocked;

}


// Function CodexRuntime.CodexTrackerInterface.GrantCodexEntry
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       CodexInstanceID                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCodexAssetReference        CodexAssetReference                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::GrantCodexEntry(struct FGuid& CodexInstanceID, struct FCodexAssetReference& CodexAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "GrantCodexEntry");

	Params::ICodexTrackerInterface_GrantCodexEntry_Params Parms{};

	Parms.CodexInstanceID = CodexInstanceID;
	Parms.CodexAssetReference = CodexAssetReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CodexRuntime.CodexTrackerInterface.GetUnlockedSubentryTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCodexBaseDataAsset*         CodexDataAsset                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       OutUnlockedSubentryTags                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::GetUnlockedSubentryTags(class UCodexBaseDataAsset* CodexDataAsset, struct FGameplayTagContainer* OutUnlockedSubentryTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "GetUnlockedSubentryTags");

	Params::ICodexTrackerInterface_GetUnlockedSubentryTags_Params Parms{};

	Parms.CodexDataAsset = CodexDataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutUnlockedSubentryTags != nullptr)
		*OutUnlockedSubentryTags = std::move(Parms.OutUnlockedSubentryTags);

}


// Function CodexRuntime.CodexTrackerInterface.GetCodexEntry
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class UCodexBaseDataAsset*         CodexDataAsset                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCodexEntry                 OutCodexEntry                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ICodexTrackerInterface::GetCodexEntry(class UCodexBaseDataAsset* CodexDataAsset, struct FCodexEntry* OutCodexEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "GetCodexEntry");

	Params::ICodexTrackerInterface_GetCodexEntry_Params Parms{};

	Parms.CodexDataAsset = CodexDataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCodexEntry != nullptr)
		*OutCodexEntry = std::move(Parms.OutCodexEntry);

	return Parms.ReturnValue;

}


// Function CodexRuntime.CodexTrackerInterface.CanGrantCodex
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       CodexInstanceID                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCodexAssetReference        CodexAssetReference                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ICodexTrackerInterface::CanGrantCodex(struct FGuid& CodexInstanceID, struct FCodexAssetReference& CodexAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "CanGrantCodex");

	Params::ICodexTrackerInterface_CanGrantCodex_Params Parms{};

	Parms.CodexInstanceID = CodexInstanceID;
	Parms.CodexAssetReference = CodexAssetReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CodexRuntime.CodexTrackerInterface.BindEventTo_OnCodexUpdated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::BindEventTo_OnCodexUpdated(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "BindEventTo_OnCodexUpdated");

	Params::ICodexTrackerInterface_BindEventTo_OnCodexUpdated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CodexRuntime.CodexTrackerInterface.BindEventTo_OnCodexGranted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICodexTrackerInterface::BindEventTo_OnCodexGranted(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CodexTrackerInterface", "BindEventTo_OnCodexGranted");

	Params::ICodexTrackerInterface_BindEventTo_OnCodexGranted_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


