#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChallengesRuntime.ChallengeConditionPresentationMapping
// (None)

class UClass* UChallengeConditionPresentationMapping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeConditionPresentationMapping");

	return Clss;
}


// ChallengeConditionPresentationMapping ChallengesRuntime.Default__ChallengeConditionPresentationMapping
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeConditionPresentationMapping* UChallengeConditionPresentationMapping::GetDefaultObj()
{
	static class UChallengeConditionPresentationMapping* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeConditionPresentationMapping*>(UChallengeConditionPresentationMapping::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeConditionPresentationSettings
// (None)

class UClass* UChallengeConditionPresentationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeConditionPresentationSettings");

	return Clss;
}


// ChallengeConditionPresentationSettings ChallengesRuntime.Default__ChallengeConditionPresentationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeConditionPresentationSettings* UChallengeConditionPresentationSettings::GetDefaultObj()
{
	static class UChallengeConditionPresentationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeConditionPresentationSettings*>(UChallengeConditionPresentationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeDataAsset
// (None)

class UClass* UChallengeDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeDataAsset");

	return Clss;
}


// ChallengeDataAsset ChallengesRuntime.Default__ChallengeDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeDataAsset* UChallengeDataAsset::GetDefaultObj()
{
	static class UChallengeDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeDataAsset*>(UChallengeDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeDefinition
// (None)

class UClass* IChallengeDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeDefinition");

	return Clss;
}


// ChallengeDefinition ChallengesRuntime.Default__ChallengeDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class IChallengeDefinition* IChallengeDefinition::GetDefaultObj()
{
	static class IChallengeDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<IChallengeDefinition*>(IChallengeDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeDefinition.IsVisible
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IChallengeDefinition::IsVisible(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "IsVisible");

	Params::IChallengeDefinition_IsVisible_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetTitle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IChallengeDefinition::GetTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetTitle");

	Params::IChallengeDefinition_GetTitle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetStartTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime IChallengeDefinition::GetStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetStartTime");

	Params::IChallengeDefinition_GetStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetRewards
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URewardBehaviour*>    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class URewardBehaviour*> IChallengeDefinition::GetRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetRewards");

	Params::IChallengeDefinition_GetRewards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetPlatformAchievements
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<enum class EChallengePlatform>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TSet<enum class EChallengePlatform> IChallengeDefinition::GetPlatformAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetPlatformAchievements");

	Params::IChallengeDefinition_GetPlatformAchievements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FExperienceStateID          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FExperienceStateID IChallengeDefinition::GetID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetID");

	Params::IChallengeDefinition_GetID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetIcon
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> IChallengeDefinition::GetIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetIcon");

	Params::IChallengeDefinition_GetIcon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetEndTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime IChallengeDefinition::GetEndTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetEndTime");

	Params::IChallengeDefinition_GetEndTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetDescription
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IChallengeDefinition::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetDescription");

	Params::IChallengeDefinition_GetDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetCompletionCondition
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UConditionBehaviour>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UConditionBehaviour> IChallengeDefinition::GetCompletionCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetCompletionCondition");

	Params::IChallengeDefinition_GetCompletionCondition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeDefinition.GetCategoryTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag IChallengeDefinition::GetCategoryTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeDefinition", "GetCategoryTag");

	Params::IChallengeDefinition_GetCategoryTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChallengesRuntime.ChallengeExperienceStateIDEnumerator
// (None)

class UClass* UChallengeExperienceStateIDEnumerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeExperienceStateIDEnumerator");

	return Clss;
}


// ChallengeExperienceStateIDEnumerator ChallengesRuntime.Default__ChallengeExperienceStateIDEnumerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeExperienceStateIDEnumerator* UChallengeExperienceStateIDEnumerator::GetDefaultObj()
{
	static class UChallengeExperienceStateIDEnumerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeExperienceStateIDEnumerator*>(UChallengeExperienceStateIDEnumerator::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeProgress
// (None)

class UClass* IChallengeProgress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeProgress");

	return Clss;
}


// ChallengeProgress ChallengesRuntime.Default__ChallengeProgress
// (Public, ClassDefaultObject, ArchetypeObject)

class IChallengeProgress* IChallengeProgress::GetDefaultObj()
{
	static class IChallengeProgress* Default = nullptr;

	if (!Default)
		Default = static_cast<IChallengeProgress*>(IChallengeProgress::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeProgress.GetProgressData
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FConditionProgressDataList  OutProgressData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)

void IChallengeProgress::GetProgressData(struct FConditionProgressDataList* OutProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeProgress", "GetProgressData");

	Params::IChallengeProgress_GetProgressData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProgressData != nullptr)
		*OutProgressData = std::move(Parms.OutProgressData);

}


// Function ChallengesRuntime.ChallengeProgress.GetMaxCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IChallengeProgress::GetMaxCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeProgress", "GetMaxCount");

	Params::IChallengeProgress_GetMaxCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeProgress.GetID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FExperienceStateID          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FExperienceStateID IChallengeProgress::GetID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeProgress", "GetID");

	Params::IChallengeProgress_GetID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeProgress.GetCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IChallengeProgress::GetCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeProgress", "GetCount");

	Params::IChallengeProgress_GetCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChallengesRuntime.ChallengeRewardPresentation
// (None)

class UClass* IChallengeRewardPresentation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeRewardPresentation");

	return Clss;
}


// ChallengeRewardPresentation ChallengesRuntime.Default__ChallengeRewardPresentation
// (Public, ClassDefaultObject, ArchetypeObject)

class IChallengeRewardPresentation* IChallengeRewardPresentation::GetDefaultObj()
{
	static class IChallengeRewardPresentation* Default = nullptr;

	if (!Default)
		Default = static_cast<IChallengeRewardPresentation*>(IChallengeRewardPresentation::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeRewardPresentation.Initialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardBehaviour*            Reward                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IChallengeRewardPresentation::Initialize(class URewardBehaviour* Reward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardPresentation", "Initialize");

	Params::IChallengeRewardPresentation_Initialize_Params Parms{};

	Parms.Reward = Reward;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeRewardPresentation.GetQuantity
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IChallengeRewardPresentation::GetQuantity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardPresentation", "GetQuantity");

	Params::IChallengeRewardPresentation_GetQuantity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeRewardPresentation.GetName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IChallengeRewardPresentation::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardPresentation", "GetName");

	Params::IChallengeRewardPresentation_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeRewardPresentation.GetIcon
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> IChallengeRewardPresentation::GetIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardPresentation", "GetIcon");

	Params::IChallengeRewardPresentation_GetIcon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeRewardPresentation.GetDescription
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IChallengeRewardPresentation::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardPresentation", "GetDescription");

	Params::IChallengeRewardPresentation_GetDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChallengesRuntime.ChallengeRewardPresentationFunctionLibrary
// (None)

class UClass* UChallengeRewardPresentationFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeRewardPresentationFunctionLibrary");

	return Clss;
}


// ChallengeRewardPresentationFunctionLibrary ChallengesRuntime.Default__ChallengeRewardPresentationFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeRewardPresentationFunctionLibrary* UChallengeRewardPresentationFunctionLibrary::GetDefaultObj()
{
	static class UChallengeRewardPresentationFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeRewardPresentationFunctionLibrary*>(UChallengeRewardPresentationFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeRewardPresentationFunctionLibrary.GetChallengeRewardPresentationForReward
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URewardBehaviour*            Reward                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IChallengeRewardPresentation>Presentation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChallengeRewardPresentationFunctionLibrary::GetChallengeRewardPresentationForReward(class UObject* WorldContextObject, class URewardBehaviour* Reward, TScriptInterface<class IChallengeRewardPresentation>* Presentation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardPresentationFunctionLibrary", "GetChallengeRewardPresentationForReward");

	Params::UChallengeRewardPresentationFunctionLibrary_GetChallengeRewardPresentationForReward_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Reward = Reward;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Presentation != nullptr)
		*Presentation = Parms.Presentation;

	return Parms.ReturnValue;

}


// Class ChallengesRuntime.ChallengeRewardPresentationMapping
// (None)

class UClass* UChallengeRewardPresentationMapping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeRewardPresentationMapping");

	return Clss;
}


// ChallengeRewardPresentationMapping ChallengesRuntime.Default__ChallengeRewardPresentationMapping
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeRewardPresentationMapping* UChallengeRewardPresentationMapping::GetDefaultObj()
{
	static class UChallengeRewardPresentationMapping* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeRewardPresentationMapping*>(UChallengeRewardPresentationMapping::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeRewardPresentationSettings
// (None)

class UClass* UChallengeRewardPresentationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeRewardPresentationSettings");

	return Clss;
}


// ChallengeRewardPresentationSettings ChallengesRuntime.Default__ChallengeRewardPresentationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeRewardPresentationSettings* UChallengeRewardPresentationSettings::GetDefaultObj()
{
	static class UChallengeRewardPresentationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeRewardPresentationSettings*>(UChallengeRewardPresentationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeCompletedRequirement
// (None)

class UClass* UChallengeCompletedRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeCompletedRequirement");

	return Clss;
}


// ChallengeCompletedRequirement ChallengesRuntime.Default__ChallengeCompletedRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeCompletedRequirement* UChallengeCompletedRequirement::GetDefaultObj()
{
	static class UChallengeCompletedRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeCompletedRequirement*>(UChallengeCompletedRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeProgressObject
// (None)

class UClass* UChallengeProgressObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeProgressObject");

	return Clss;
}


// ChallengeProgressObject ChallengesRuntime.Default__ChallengeProgressObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeProgressObject* UChallengeProgressObject::GetDefaultObj()
{
	static class UChallengeProgressObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeProgressObject*>(UChallengeProgressObject::StaticClass()->DefaultObject);

	return Default;
}


// Class ChallengesRuntime.ChallengeSystem
// (None)

class UClass* UChallengeSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeSystem");

	return Clss;
}


// ChallengeSystem ChallengesRuntime.Default__ChallengeSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UChallengeSystem* UChallengeSystem::GetDefaultObj()
{
	static class UChallengeSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeSystem*>(UChallengeSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeSystem.StartOrEndChallengesAndScheduleTimer
// (Final, Native, Private)
// Parameters:

void UChallengeSystem::StartOrEndChallengesAndScheduleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "StartOrEndChallengesAndScheduleTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.Server_RequestChallengesProgressPage
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// int32                              PageNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::Server_RequestChallengesProgressPage(int32 PageNumber, int32 PageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "Server_RequestChallengesProgressPage");

	Params::UChallengeSystem_Server_RequestChallengesProgressPage_Params Parms{};

	Parms.PageNumber = PageNumber;
	Parms.PageSize = PageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.Server_RemoveWatchedChallenge
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::Server_RemoveWatchedChallenge(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "Server_RemoveWatchedChallenge");

	Params::UChallengeSystem_Server_RemoveWatchedChallenge_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.Server_ClaimRewards
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::Server_ClaimRewards(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "Server_ClaimRewards");

	Params::UChallengeSystem_Server_ClaimRewards_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.Server_AddWatchedChallenge
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::Server_AddWatchedChallenge(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "Server_AddWatchedChallenge");

	Params::UChallengeSystem_Server_AddWatchedChallenge_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.OnRep_WatchedChallenges
// (Final, Native, Private, Const)
// Parameters:

void UChallengeSystem::OnRep_WatchedChallenges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "OnRep_WatchedChallenges");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.OnRep_ChallengesToDisplayInPage
// (Final, Native, Private, Const)
// Parameters:

void UChallengeSystem::OnRep_ChallengesToDisplayInPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "OnRep_ChallengesToDisplayInPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.OnExperienceStatesReady
// (Final, Native, Private)
// Parameters:

void UChallengeSystem::OnExperienceStatesReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "OnExperienceStatesReady");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystem.HandleExperienceStateChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::HandleExperienceStateChanged(struct FExperienceStateID& ID, int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "HandleExperienceStateChanged");

	Params::UChallengeSystem_HandleExperienceStateChanged_Params Parms{};

	Parms.ID = ID;
	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction ChallengesRuntime.ChallengeSystem.ChallengeSystemMulticastDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UChallengeSystem::ChallengeSystemMulticastDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "ChallengeSystemMulticastDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction ChallengesRuntime.ChallengeSystem.ChallengeRewardsGrantedMulticastDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::ChallengeRewardsGrantedMulticastDelegate__DelegateSignature(struct FExperienceStateID& ChallengeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "ChallengeRewardsGrantedMulticastDelegate__DelegateSignature");

	Params::UChallengeSystem_ChallengeRewardsGrantedMulticastDelegate__DelegateSignature_Params Parms{};

	Parms.ChallengeID = ChallengeID;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ChallengesRuntime.ChallengeSystem.ChallengeCompletedMulticastDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChallengeSystem::ChallengeCompletedMulticastDelegate__DelegateSignature(struct FExperienceStateID& ChallengeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystem", "ChallengeCompletedMulticastDelegate__DelegateSignature");

	Params::UChallengeSystem_ChallengeCompletedMulticastDelegate__DelegateSignature_Params Parms{};

	Parms.ChallengeID = ChallengeID;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ChallengesRuntime.ChallengeSystemMutable
// (None)

class UClass* IChallengeSystemMutable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeSystemMutable");

	return Clss;
}


// ChallengeSystemMutable ChallengesRuntime.Default__ChallengeSystemMutable
// (Public, ClassDefaultObject, ArchetypeObject)

class IChallengeSystemMutable* IChallengeSystemMutable::GetDefaultObj()
{
	static class IChallengeSystemMutable* Default = nullptr;

	if (!Default)
		Default = static_cast<IChallengeSystemMutable*>(IChallengeSystemMutable::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeSystemMutable.Server_RequestChallengesProgressPage
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// int32                              PageNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemMutable::Server_RequestChallengesProgressPage(int32 PageNumber, int32 PageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemMutable", "Server_RequestChallengesProgressPage");

	Params::IChallengeSystemMutable_Server_RequestChallengesProgressPage_Params Parms{};

	Parms.PageNumber = PageNumber;
	Parms.PageSize = PageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemMutable.Server_RemoveWatchedChallenge
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemMutable::Server_RemoveWatchedChallenge(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemMutable", "Server_RemoveWatchedChallenge");

	Params::IChallengeSystemMutable_Server_RemoveWatchedChallenge_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemMutable.Server_ClaimRewards
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemMutable::Server_ClaimRewards(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemMutable", "Server_ClaimRewards");

	Params::IChallengeSystemMutable_Server_ClaimRewards_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemMutable.Server_AddWatchedChallenge
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemMutable::Server_AddWatchedChallenge(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemMutable", "Server_AddWatchedChallenge");

	Params::IChallengeSystemMutable_Server_AddWatchedChallenge_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ChallengesRuntime.ChallengeSystemObservable
// (None)

class UClass* IChallengeSystemObservable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeSystemObservable");

	return Clss;
}


// ChallengeSystemObservable ChallengesRuntime.Default__ChallengeSystemObservable
// (Public, ClassDefaultObject, ArchetypeObject)

class IChallengeSystemObservable* IChallengeSystemObservable::GetDefaultObj()
{
	static class IChallengeSystemObservable* Default = nullptr;

	if (!Default)
		Default = static_cast<IChallengeSystemObservable*>(IChallengeSystemObservable::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnWatchedChallengesChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::UnbindDelegate_OnWatchedChallengesChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "UnbindDelegate_OnWatchedChallengesChanged");

	Params::IChallengeSystemObservable_UnbindDelegate_OnWatchedChallengesChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnChallengesToDisplayInPageChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::UnbindDelegate_OnChallengesToDisplayInPageChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "UnbindDelegate_OnChallengesToDisplayInPageChanged");

	Params::IChallengeSystemObservable_UnbindDelegate_OnChallengesToDisplayInPageChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnChallengeRewardsGranted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::UnbindDelegate_OnChallengeRewardsGranted(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "UnbindDelegate_OnChallengeRewardsGranted");

	Params::IChallengeSystemObservable_UnbindDelegate_OnChallengeRewardsGranted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnChallengeCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::UnbindDelegate_OnChallengeCompleted(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "UnbindDelegate_OnChallengeCompleted");

	Params::IChallengeSystemObservable_UnbindDelegate_OnChallengeCompleted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.IsChallengeComplete
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IChallengeSystemObservable::IsChallengeComplete(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "IsChallengeComplete");

	Params::IChallengeSystemObservable_IsChallengeComplete_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeSystemObservable.GetWatchedChallenges
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TScriptInterface<class IChallengeProgress>>OutChallenges                                                    (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::GetWatchedChallenges(TArray<TScriptInterface<class IChallengeProgress>>* OutChallenges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "GetWatchedChallenges");

	Params::IChallengeSystemObservable_GetWatchedChallenges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutChallenges != nullptr)
		*OutChallenges = std::move(Parms.OutChallenges);

}


// Function ChallengesRuntime.ChallengeSystemObservable.GetTotalNumberOfChallenges
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IChallengeSystemObservable::GetTotalNumberOfChallenges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "GetTotalNumberOfChallenges");

	Params::IChallengeSystemObservable_GetTotalNumberOfChallenges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeSystemObservable.GetChallengesForRequestedProgressPage
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TScriptInterface<class IChallengeProgress>>OutChallenges                                                    (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::GetChallengesForRequestedProgressPage(TArray<TScriptInterface<class IChallengeProgress>>* OutChallenges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "GetChallengesForRequestedProgressPage");

	Params::IChallengeSystemObservable_GetChallengesForRequestedProgressPage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutChallenges != nullptr)
		*OutChallenges = std::move(Parms.OutChallenges);

}


// Function ChallengesRuntime.ChallengeSystemObservable.GetChallengeDefinition
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IChallengeDefinition>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IChallengeDefinition> IChallengeSystemObservable::GetChallengeDefinition(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "GetChallengeDefinition");

	Params::IChallengeSystemObservable_GetChallengeDefinition_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnWatchedChallengesChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::BindDelegate_OnWatchedChallengesChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "BindDelegate_OnWatchedChallengesChanged");

	Params::IChallengeSystemObservable_BindDelegate_OnWatchedChallengesChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnChallengesToDisplayInPageChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::BindDelegate_OnChallengesToDisplayInPageChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "BindDelegate_OnChallengesToDisplayInPageChanged");

	Params::IChallengeSystemObservable_BindDelegate_OnChallengesToDisplayInPageChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnChallengeRewardsGranted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::BindDelegate_OnChallengeRewardsGranted(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "BindDelegate_OnChallengeRewardsGranted");

	Params::IChallengeSystemObservable_BindDelegate_OnChallengeRewardsGranted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnChallengeCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IChallengeSystemObservable::BindDelegate_OnChallengeCompleted(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "BindDelegate_OnChallengeCompleted");

	Params::IChallengeSystemObservable_BindDelegate_OnChallengeCompleted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChallengesRuntime.ChallengeSystemObservable.AreRewardsGranted
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IChallengeSystemObservable::AreRewardsGranted(struct FExperienceStateID& ChallengeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSystemObservable", "AreRewardsGranted");

	Params::IChallengeSystemObservable_AreRewardsGranted_Params Parms{};

	Parms.ChallengeID = ChallengeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


