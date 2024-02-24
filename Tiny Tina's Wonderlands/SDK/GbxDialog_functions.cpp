#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxDialog.AnimNotify_DialogEvent
// (None)

class UClass* UAnimNotify_DialogEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_DialogEvent");

	return Clss;
}


// AnimNotify_DialogEvent GbxDialog.Default__AnimNotify_DialogEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_DialogEvent* UAnimNotify_DialogEvent::GetDefaultObj()
{
	static class UAnimNotify_DialogEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_DialogEvent*>(UAnimNotify_DialogEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.CharacterEchoDataBase
// (None)

class UClass* UCharacterEchoDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterEchoDataBase");

	return Clss;
}


// CharacterEchoDataBase GbxDialog.Default__CharacterEchoDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacterEchoDataBase* UCharacterEchoDataBase::GetDefaultObj()
{
	static class UCharacterEchoDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterEchoDataBase*>(UCharacterEchoDataBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogActionBlueprintImplementation
// (None)

class UClass* UDialogActionBlueprintImplementation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogActionBlueprintImplementation");

	return Clss;
}


// DialogActionBlueprintImplementation GbxDialog.Default__DialogActionBlueprintImplementation
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogActionBlueprintImplementation* UDialogActionBlueprintImplementation::GetDefaultObj()
{
	static class UDialogActionBlueprintImplementation* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogActionBlueprintImplementation*>(UDialogActionBlueprintImplementation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.DialogActionBlueprintImplementation.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDialogContext              Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDialogActionBlueprintImplementation::Execute(struct FDialogContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogActionBlueprintImplementation", "Execute");

	Params::UDialogActionBlueprintImplementation_Execute_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxDialog.GbxDialogDataAsset
// (None)

class UClass* UGbxDialogDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogDataAsset");

	return Clss;
}


// GbxDialogDataAsset GbxDialog.Default__GbxDialogDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogDataAsset* UGbxDialogDataAsset::GetDefaultObj()
{
	static class UGbxDialogDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogDataAsset*>(UGbxDialogDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogActionFunction
// (None)

class UClass* UDialogActionFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogActionFunction");

	return Clss;
}


// DialogActionFunction GbxDialog.Default__DialogActionFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogActionFunction* UDialogActionFunction::GetDefaultObj()
{
	static class UDialogActionFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogActionFunction*>(UDialogActionFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogAudioComponentProvider
// (None)

class UClass* UDialogAudioComponentProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogAudioComponentProvider");

	return Clss;
}


// DialogAudioComponentProvider GbxDialog.Default__DialogAudioComponentProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogAudioComponentProvider* UDialogAudioComponentProvider::GetDefaultObj()
{
	static class UDialogAudioComponentProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogAudioComponentProvider*>(UDialogAudioComponentProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogAudioComponentProvider_OcclusionResistant
// (None)

class UClass* UDialogAudioComponentProvider_OcclusionResistant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogAudioComponentProvider_OcclusionResistant");

	return Clss;
}


// DialogAudioComponentProvider_OcclusionResistant GbxDialog.Default__DialogAudioComponentProvider_OcclusionResistant
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogAudioComponentProvider_OcclusionResistant* UDialogAudioComponentProvider_OcclusionResistant::GetDefaultObj()
{
	static class UDialogAudioComponentProvider_OcclusionResistant* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogAudioComponentProvider_OcclusionResistant*>(UDialogAudioComponentProvider_OcclusionResistant::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogBehaviorPreset
// (None)

class UClass* UDialogBehaviorPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogBehaviorPreset");

	return Clss;
}


// DialogBehaviorPreset GbxDialog.Default__DialogBehaviorPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogBehaviorPreset* UDialogBehaviorPreset::GetDefaultObj()
{
	static class UDialogBehaviorPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogBehaviorPreset*>(UDialogBehaviorPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogBlackboard
// (None)

class UClass* UDialogBlackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogBlackboard");

	return Clss;
}


// DialogBlackboard GbxDialog.Default__DialogBlackboard
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogBlackboard* UDialogBlackboard::GetDefaultObj()
{
	static class UDialogBlackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogBlackboard*>(UDialogBlackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.QuietTimePredicate
// (None)

class UClass* UQuietTimePredicate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuietTimePredicate");

	return Clss;
}


// QuietTimePredicate GbxDialog.Default__QuietTimePredicate
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuietTimePredicate* UQuietTimePredicate::GetDefaultObj()
{
	static class UQuietTimePredicate* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuietTimePredicate*>(UQuietTimePredicate::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.QuietTimePredicate_BlockStuff
// (None)

class UClass* UQuietTimePredicate_BlockStuff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuietTimePredicate_BlockStuff");

	return Clss;
}


// QuietTimePredicate_BlockStuff GbxDialog.Default__QuietTimePredicate_BlockStuff
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuietTimePredicate_BlockStuff* UQuietTimePredicate_BlockStuff::GetDefaultObj()
{
	static class UQuietTimePredicate_BlockStuff* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuietTimePredicate_BlockStuff*>(UQuietTimePredicate_BlockStuff::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogControlSystem
// (None)

class UClass* UDialogControlSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogControlSystem");

	return Clss;
}


// DialogControlSystem GbxDialog.Default__DialogControlSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogControlSystem* UDialogControlSystem::GetDefaultObj()
{
	static class UDialogControlSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogControlSystem*>(UDialogControlSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogEnumType
// (None)

class UClass* UDialogEnumType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogEnumType");

	return Clss;
}


// DialogEnumType GbxDialog.Default__DialogEnumType
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogEnumType* UDialogEnumType::GetDefaultObj()
{
	static class UDialogEnumType* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogEnumType*>(UDialogEnumType::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogEnumValue
// (None)

class UClass* UDialogEnumValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogEnumValue");

	return Clss;
}


// DialogEnumValue GbxDialog.Default__DialogEnumValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogEnumValue* UDialogEnumValue::GetDefaultObj()
{
	static class UDialogEnumValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogEnumValue*>(UDialogEnumValue::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogEnumValueInterface
// (None)

class UClass* IDialogEnumValueInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogEnumValueInterface");

	return Clss;
}


// DialogEnumValueInterface GbxDialog.Default__DialogEnumValueInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IDialogEnumValueInterface* IDialogEnumValueInterface::GetDefaultObj()
{
	static class IDialogEnumValueInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IDialogEnumValueInterface*>(IDialogEnumValueInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.DialogEnumValueInterface.GetEnumValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDialogEnumType*             EnumType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogEnumValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDialogEnumValue* IDialogEnumValueInterface::GetEnumValue(class UDialogEnumType* EnumType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogEnumValueInterface", "GetEnumValue");

	Params::IDialogEnumValueInterface_GetEnumValue_Params Parms{};

	Parms.EnumType = EnumType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxDialog.DialogEvent
// (None)

class UClass* UDialogEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogEvent");

	return Clss;
}


// DialogEvent GbxDialog.Default__DialogEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogEvent* UDialogEvent::GetDefaultObj()
{
	static class UDialogEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogEvent*>(UDialogEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogEventList
// (None)

class UClass* UDialogEventList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogEventList");

	return Clss;
}


// DialogEventList GbxDialog.Default__DialogEventList
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogEventList* UDialogEventList::GetDefaultObj()
{
	static class UDialogEventList* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogEventList*>(UDialogEventList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogLineData
// (None)

class UClass* UDialogLineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogLineData");

	return Clss;
}


// DialogLineData GbxDialog.Default__DialogLineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogLineData* UDialogLineData::GetDefaultObj()
{
	static class UDialogLineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogLineData*>(UDialogLineData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogLookupSystem
// (None)

class UClass* UDialogLookupSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogLookupSystem");

	return Clss;
}


// DialogLookupSystem GbxDialog.Default__DialogLookupSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogLookupSystem* UDialogLookupSystem::GetDefaultObj()
{
	static class UDialogLookupSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogLookupSystem*>(UDialogLookupSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogNameTagMoodData
// (None)

class UClass* UDialogNameTagMoodData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogNameTagMoodData");

	return Clss;
}


// DialogNameTagMoodData GbxDialog.Default__DialogNameTagMoodData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogNameTagMoodData* UDialogNameTagMoodData::GetDefaultObj()
{
	static class UDialogNameTagMoodData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogNameTagMoodData*>(UDialogNameTagMoodData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogNameTag
// (None)

class UClass* UDialogNameTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogNameTag");

	return Clss;
}


// DialogNameTag GbxDialog.Default__DialogNameTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogNameTag* UDialogNameTag::GetDefaultObj()
{
	static class UDialogNameTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogNameTag*>(UDialogNameTag::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogParameter
// (None)

class UClass* UDialogParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogParameter");

	return Clss;
}


// DialogParameter GbxDialog.Default__DialogParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogParameter* UDialogParameter::GetDefaultObj()
{
	static class UDialogParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogParameter*>(UDialogParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogPerformanceData
// (None)

class UClass* UDialogPerformanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogPerformanceData");

	return Clss;
}


// DialogPerformanceData GbxDialog.Default__DialogPerformanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogPerformanceData* UDialogPerformanceData::GetDefaultObj()
{
	static class UDialogPerformanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogPerformanceData*>(UDialogPerformanceData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.DialogPerformanceData.PlayWwiseEventPreview
// (Final, Native, Public)
// Parameters:

void UDialogPerformanceData::PlayWwiseEventPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogPerformanceData", "PlayWwiseEventPreview");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxDialog.DialogScriptData
// (None)

class UClass* UDialogScriptData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogScriptData");

	return Clss;
}


// DialogScriptData GbxDialog.Default__DialogScriptData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogScriptData* UDialogScriptData::GetDefaultObj()
{
	static class UDialogScriptData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogScriptData*>(UDialogScriptData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSelectorFunction
// (None)

class UClass* UDialogSelectorFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSelectorFunction");

	return Clss;
}


// DialogSelectorFunction GbxDialog.Default__DialogSelectorFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogSelectorFunction* UDialogSelectorFunction::GetDefaultObj()
{
	static class UDialogSelectorFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogSelectorFunction*>(UDialogSelectorFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSelectorImplementation
// (None)

class UClass* UDialogSelectorImplementation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSelectorImplementation");

	return Clss;
}


// DialogSelectorImplementation GbxDialog.Default__DialogSelectorImplementation
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogSelectorImplementation* UDialogSelectorImplementation::GetDefaultObj()
{
	static class UDialogSelectorImplementation* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogSelectorImplementation*>(UDialogSelectorImplementation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.DialogSelectorImplementation.PerformTest
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDialogContext              Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EDialogDecisionTestResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDialogSelectorImplementation::PerformTest(struct FDialogContext& Context, enum class EDialogDecisionTestResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogSelectorImplementation", "PerformTest");

	Params::UDialogSelectorImplementation_PerformTest_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Class GbxDialog.DialogSelectorImplementation_CheckDistance
// (None)

class UClass* UDialogSelectorImplementation_CheckDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSelectorImplementation_CheckDistance");

	return Clss;
}


// DialogSelectorImplementation_CheckDistance GbxDialog.Default__DialogSelectorImplementation_CheckDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogSelectorImplementation_CheckDistance* UDialogSelectorImplementation_CheckDistance::GetDefaultObj()
{
	static class UDialogSelectorImplementation_CheckDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogSelectorImplementation_CheckDistance*>(UDialogSelectorImplementation_CheckDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSelectorImplementation_CheckNameTag
// (None)

class UClass* UDialogSelectorImplementation_CheckNameTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSelectorImplementation_CheckNameTag");

	return Clss;
}


// DialogSelectorImplementation_CheckNameTag GbxDialog.Default__DialogSelectorImplementation_CheckNameTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogSelectorImplementation_CheckNameTag* UDialogSelectorImplementation_CheckNameTag::GetDefaultObj()
{
	static class UDialogSelectorImplementation_CheckNameTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogSelectorImplementation_CheckNameTag*>(UDialogSelectorImplementation_CheckNameTag::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSelectorImplementation_Equality
// (None)

class UClass* UDialogSelectorImplementation_Equality::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSelectorImplementation_Equality");

	return Clss;
}


// DialogSelectorImplementation_Equality GbxDialog.Default__DialogSelectorImplementation_Equality
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogSelectorImplementation_Equality* UDialogSelectorImplementation_Equality::GetDefaultObj()
{
	static class UDialogSelectorImplementation_Equality* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogSelectorImplementation_Equality*>(UDialogSelectorImplementation_Equality::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSelectorImplementation_IsPreferredPlayer
// (None)

class UClass* UDialogSelectorImplementation_IsPreferredPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSelectorImplementation_IsPreferredPlayer");

	return Clss;
}


// DialogSelectorImplementation_IsPreferredPlayer GbxDialog.Default__DialogSelectorImplementation_IsPreferredPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogSelectorImplementation_IsPreferredPlayer* UDialogSelectorImplementation_IsPreferredPlayer::GetDefaultObj()
{
	static class UDialogSelectorImplementation_IsPreferredPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogSelectorImplementation_IsPreferredPlayer*>(UDialogSelectorImplementation_IsPreferredPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSpeakerInterface
// (None)

class UClass* IDialogSpeakerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSpeakerInterface");

	return Clss;
}


// DialogSpeakerInterface GbxDialog.Default__DialogSpeakerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IDialogSpeakerInterface* IDialogSpeakerInterface::GetDefaultObj()
{
	static class IDialogSpeakerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IDialogSpeakerInterface*>(IDialogSpeakerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDialogPerformanceData*      Performance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IDialogSpeakerInterface::CanPerformThisDialog(class UDialogPerformanceData* Performance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogSpeakerInterface", "CanPerformThisDialog");

	Params::IDialogSpeakerInterface_CanPerformThisDialog_Params Parms{};

	Parms.Performance = Performance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxDialog.DialogStyle
// (None)

class UClass* UDialogStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogStyle");

	return Clss;
}


// DialogStyle GbxDialog.Default__DialogStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogStyle* UDialogStyle::GetDefaultObj()
{
	static class UDialogStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogStyle*>(UDialogStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogSystemEchoManagerInterface
// (None)

class UClass* IDialogSystemEchoManagerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogSystemEchoManagerInterface");

	return Clss;
}


// DialogSystemEchoManagerInterface GbxDialog.Default__DialogSystemEchoManagerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IDialogSystemEchoManagerInterface* IDialogSystemEchoManagerInterface::GetDefaultObj()
{
	static class IDialogSystemEchoManagerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IDialogSystemEchoManagerInterface*>(IDialogSystemEchoManagerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.DialogTimeSlotData
// (None)

class UClass* UDialogTimeSlotData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogTimeSlotData");

	return Clss;
}


// DialogTimeSlotData GbxDialog.Default__DialogTimeSlotData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDialogTimeSlotData* UDialogTimeSlotData::GetDefaultObj()
{
	static class UDialogTimeSlotData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogTimeSlotData*>(UDialogTimeSlotData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.DialogTimeSlotData.PreviewAudio
// (Final, Native, Public)
// Parameters:

void UDialogTimeSlotData::PreviewAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogTimeSlotData", "PreviewAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxDialog.GameDialogSystemCustomizationInterface
// (None)

class UClass* IGameDialogSystemCustomizationInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameDialogSystemCustomizationInterface");

	return Clss;
}


// GameDialogSystemCustomizationInterface GbxDialog.Default__GameDialogSystemCustomizationInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameDialogSystemCustomizationInterface* IGameDialogSystemCustomizationInterface::GetDefaultObj()
{
	static class IGameDialogSystemCustomizationInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameDialogSystemCustomizationInterface*>(IGameDialogSystemCustomizationInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.GbxDialogBlueprintLibrary
// (None)

class UClass* UGbxDialogBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogBlueprintLibrary");

	return Clss;
}


// GbxDialogBlueprintLibrary GbxDialog.Default__GbxDialogBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogBlueprintLibrary* UGbxDialogBlueprintLibrary::GetDefaultObj()
{
	static class UGbxDialogBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogBlueprintLibrary*>(UGbxDialogBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogConversation         Conversation                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::WaitForDialog(const struct FDialogConversation& Conversation, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "WaitForDialog");

	Params::UGbxDialogBlueprintLibrary_WaitForDialog_Params Parms{};

	Parms.Conversation = Conversation;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogSelectorFunction*     Selector                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogContext              InputParameters                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::TestDialogSelector(class UObject* WorldContextObject, class UDialogSelectorFunction* Selector, struct FDialogContext& InputParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "TestDialogSelector");

	Params::UGbxDialogBlueprintLibrary_TestDialogSelector_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Selector = Selector;
	Parms.InputParameters = InputParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDeathDialog                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::StopActiveDialog(class UObject* Target, bool bIncludeDeathDialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "StopActiveDialog");

	Params::UGbxDialogBlueprintLibrary_StopActiveDialog_Params Parms{};

	Parms.Target = Target;
	Parms.bIncludeDeathDialog = bIncludeDeathDialog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogNameTag*              NameTag                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::SetNextDialogPlayerHints(class UObject* WorldContextObject, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "SetNextDialogPlayerHints");

	Params::UGbxDialogBlueprintLibrary_SetNextDialogPlayerHints_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;
	Parms.NameTag = NameTag;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SequenceID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Cookie                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::SetDialogGameCustomizationMetadata(class UObject* WorldContextObject, int32 SequenceID, class UObject* Object, int32 Cookie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "SetDialogGameCustomizationMetadata");

	Params::UGbxDialogBlueprintLibrary_SetDialogGameCustomizationMetadata_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SequenceID = SequenceID;
	Parms.Object = Object;
	Parms.Cookie = Cookie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogEnumValue*            DialogEnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::SetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue, bool Value, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "SetDialogFlag");

	Params::UGbxDialogBlueprintLibrary_SetDialogFlag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DialogEnumValue = DialogEnumValue;
	Parms.Value = Value;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDialogContext              Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDialogParameter*            Parameter                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ObjectValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBoolValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::SetDialogContextParameter(struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject* ObjectValue, float FloatValue, bool bBoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "SetDialogContextParameter");

	Params::UGbxDialogBlueprintLibrary_SetDialogContextParameter_Params Parms{};

	Parms.Context = Context;
	Parms.Parameter = Parameter;
	Parms.ObjectValue = ObjectValue;
	Parms.FloatValue = FloatValue;
	Parms.bBoolValue = bBoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDialogConversation         Conversation                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogNameTag*              NameTag                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::SetConversationPlayerHints(const struct FDialogConversation& Conversation, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "SetConversationPlayerHints");

	Params::UGbxDialogBlueprintLibrary_SetConversationPlayerHints_Params Parms{};

	Parms.Conversation = Conversation;
	Parms.Actor = Actor;
	Parms.NameTag = NameTag;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDialogTimeSlotReference    Reference                                                        (Parm, NativeAccessSpecifierPublic)
// class UDialogTimeSlotData*         TimeSlot                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogScriptData*           Script                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::ResolveDialogTimeSlotReference(const struct FDialogTimeSlotReference& Reference, class UDialogTimeSlotData** TimeSlot, class UDialogScriptData** Script)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "ResolveDialogTimeSlotReference");

	Params::UGbxDialogBlueprintLibrary_ResolveDialogTimeSlotReference_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimeSlot != nullptr)
		*TimeSlot = Parms.TimeSlot;

	if (Script != nullptr)
		*Script = Parms.Script;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        HoldName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuietTimePredicate*         Rules                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::PlaceRegionalDialogHold(class UObject* WorldContextObject, class FName HoldName, const struct FVector& Location, float Radius, class UQuietTimePredicate* Rules, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "PlaceRegionalDialogHold");

	Params::UGbxDialogBlueprintLibrary_PlaceRegionalDialogHold_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HoldName = HoldName;
	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.Rules = Rules;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        HoldName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuietTimePredicate*         Rules                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::PlaceGlobalDialogHold(class UObject* WorldContextObject, class FName HoldName, class UQuietTimePredicate* Rules, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "PlaceGlobalDialogHold");

	Params::UGbxDialogBlueprintLibrary_PlaceGlobalDialogHold_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HoldName = HoldName;
	Parms.Rules = Rules;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceDialogHoldOnSpeaker
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        HoldName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Speaker                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuietTimePredicate*         Rules                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::PlaceDialogHoldOnSpeaker(class UObject* WorldContextObject, class FName HoldName, class UObject* Speaker, class UQuietTimePredicate* Rules, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "PlaceDialogHoldOnSpeaker");

	Params::UGbxDialogBlueprintLibrary_PlaceDialogHoldOnSpeaker_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HoldName = HoldName;
	Parms.Speaker = Speaker;
	Parms.Rules = Rules;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      KeyActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogNameTag*              KeySpeakerName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     KeyLocation                                                      (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDialogConversation UGbxDialogBlueprintLibrary::NewDialogConversation(class UObject* WorldContextObject, class AActor* KeyActor, class UDialogNameTag* KeySpeakerName, const struct FVector& KeyLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "NewDialogConversation");

	Params::UGbxDialogBlueprintLibrary_NewDialogConversation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.KeyActor = KeyActor;
	Parms.KeySpeakerName = KeySpeakerName;
	Parms.KeyLocation = KeyLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogContext              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDialogContext UGbxDialogBlueprintLibrary::NewDialogContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "NewDialogContext");

	Params::UGbxDialogBlueprintLibrary_NewDialogContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::InterruptDialogInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "InterruptDialogInRadius");

	Params::UGbxDialogBlueprintLibrary_InterruptDialogInRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = Origin;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogConversation         Conversation                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::InterruptConversation(const struct FDialogConversation& Conversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "InterruptConversation");

	Params::UGbxDialogBlueprintLibrary_InterruptConversation_Params Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogEnumValue*            DialogEnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::GetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "GetDialogFlag");

	Params::UGbxDialogBlueprintLibrary_GetDialogFlag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DialogEnumValue = DialogEnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDialogContext              Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UGbxDialogBlueprintLibrary::GetDialogContextParameterSummary(struct FDialogContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "GetDialogContextParameterSummary");

	Params::UGbxDialogBlueprintLibrary_GetDialogContextParameterSummary_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDialogContext              Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDialogParameter*            Parameter                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ObjectValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBoolValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::GetDialogContextParameter(struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject** ObjectValue, float* FloatValue, bool* bBoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "GetDialogContextParameter");

	Params::UGbxDialogBlueprintLibrary_GetDialogContextParameter_Params Parms{};

	Parms.Context = Context;
	Parms.Parameter = Parameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectValue != nullptr)
		*ObjectValue = Parms.ObjectValue;

	if (FloatValue != nullptr)
		*FloatValue = Parms.FloatValue;

	if (bBoolValue != nullptr)
		*bBoolValue = Parms.bBoolValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogConversation         Conversation                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxDialogConversationStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxDialogConversationStatus UGbxDialogBlueprintLibrary::GetConversationStatus(const struct FDialogConversation& Conversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "GetConversationStatus");

	Params::UGbxDialogBlueprintLibrary_GetConversationStatus_Params Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogEvent*                Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogContext              Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDialogConversation         ContinueConversation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         Conversation                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartDelay                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SequenceID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::FinishTriggerDialog(class UObject* WorldContextObject, class UDialogEvent* Event, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32* SequenceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "FinishTriggerDialog");

	Params::UGbxDialogBlueprintLibrary_FinishTriggerDialog_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Event = Event;
	Parms.Context = Context;
	Parms.ContinueConversation = ContinueConversation;
	Parms.StartDelay = StartDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Conversation != nullptr)
		*Conversation = std::move(Parms.Conversation);

	if (SequenceID != nullptr)
		*SequenceID = Parms.SequenceID;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeakSequenceEx
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogTimeSlotSequence     Sequence                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FDialogContext              Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDialogConversation         ContinueConversation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         Conversation                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Out_SequenceIDs                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              OverrideMaxWait                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::FinishSpeakSequenceEx(class UObject* WorldContextObject, const struct FDialogTimeSlotSequence& Sequence, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, TArray<int32>* Out_SequenceIDs, float OverrideMaxWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "FinishSpeakSequenceEx");

	Params::UGbxDialogBlueprintLibrary_FinishSpeakSequenceEx_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sequence = Sequence;
	Parms.Context = Context;
	Parms.ContinueConversation = ContinueConversation;
	Parms.OverrideMaxWait = OverrideMaxWait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Conversation != nullptr)
		*Conversation = std::move(Parms.Conversation);

	if (Out_SequenceIDs != nullptr)
		*Out_SequenceIDs = std::move(Parms.Out_SequenceIDs);

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeakSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogTimeSlotSequence     Sequence                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FDialogContext              Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDialogConversation         ContinueConversation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         Conversation                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Out_LastSequenceID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideMaxWait                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::FinishSpeakSequence(class UObject* WorldContextObject, const struct FDialogTimeSlotSequence& Sequence, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int32* Out_LastSequenceID, float OverrideMaxWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "FinishSpeakSequence");

	Params::UGbxDialogBlueprintLibrary_FinishSpeakSequence_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sequence = Sequence;
	Parms.Context = Context;
	Parms.ContinueConversation = ContinueConversation;
	Parms.OverrideMaxWait = OverrideMaxWait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Conversation != nullptr)
		*Conversation = std::move(Parms.Conversation);

	if (Out_LastSequenceID != nullptr)
		*Out_LastSequenceID = Parms.Out_LastSequenceID;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogTimeSlotReference    TimeSlotRef                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// class UGbxDialogComponent*         OptionalSpeaker                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogContext              Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDialogConversation         ContinueConversation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         Conversation                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartDelay                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SequenceID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideMaxWait                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::FinishSpeak(class UObject* WorldContextObject, const struct FDialogTimeSlotReference& TimeSlotRef, class UGbxDialogComponent* OptionalSpeaker, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32* SequenceID, float OverrideMaxWait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "FinishSpeak");

	Params::UGbxDialogBlueprintLibrary_FinishSpeak_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TimeSlotRef = TimeSlotRef;
	Parms.OptionalSpeaker = OptionalSpeaker;
	Parms.Context = Context;
	Parms.ContinueConversation = ContinueConversation;
	Parms.StartDelay = StartDelay;
	Parms.OverrideMaxWait = OverrideMaxWait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Conversation != nullptr)
		*Conversation = std::move(Parms.Conversation);

	if (SequenceID != nullptr)
		*SequenceID = Parms.SequenceID;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDialogNameTag*              NameTag                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludePureEchoSpeakers                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateIfNotFound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDialogComponent*         Speaker                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::FindOrCreateNamedSpeaker(class UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, class UGbxDialogComponent** Speaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "FindOrCreateNamedSpeaker");

	Params::UGbxDialogBlueprintLibrary_FindOrCreateNamedSpeaker_Params Parms{};

	Parms.NameTag = NameTag;
	Parms.bIncludePureEchoSpeakers = bIncludePureEchoSpeakers;
	Parms.bCreateIfNotFound = bCreateIfNotFound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Speaker != nullptr)
		*Speaker = Parms.Speaker;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDialogComponent*         Speaker                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogPerformanceData*      Performance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartDelay                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         ContinueConversation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         Conversation                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DialogPlaybackSequence                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogBlueprintLibrary::EnqueueDialogPerformance(class UObject* WorldContextObject, class UGbxDialogComponent* Speaker, class UDialogPerformanceData* Performance, float StartDelay, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int32* DialogPlaybackSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "EnqueueDialogPerformance");

	Params::UGbxDialogBlueprintLibrary_EnqueueDialogPerformance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Speaker = Speaker;
	Parms.Performance = Performance;
	Parms.StartDelay = StartDelay;
	Parms.ContinueConversation = ContinueConversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Conversation != nullptr)
		*Conversation = std::move(Parms.Conversation);

	if (DialogPlaybackSequence != nullptr)
		*DialogPlaybackSequence = Parms.DialogPlaybackSequence;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UDialogScriptData>SoftScript                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogScriptData*           Script                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::DeactivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "DeactivateDialogScript");

	Params::UGbxDialogBlueprintLibrary_DeactivateDialogScript_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoftScript = SoftScript;
	Parms.Script = Script;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDialogDecisionTestResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDialogDecisionTestResult UGbxDialogBlueprintLibrary::ConvertBoolToDialogTestResult(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "ConvertBoolToDialogTestResult");

	Params::UGbxDialogBlueprintLibrary_ConvertBoolToDialogTestResult_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        HoldName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalScopeSpeaker                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::CancelDialogBlockingHold(class UObject* WorldContextObject, class FName HoldName, class UObject* OptionalScopeSpeaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "CancelDialogBlockingHold");

	Params::UGbxDialogBlueprintLibrary_CancelDialogBlockingHold_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HoldName = HoldName;
	Parms.OptionalScopeSpeaker = OptionalScopeSpeaker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingSequenceID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::BindToDialogSequenceFinished2(class UObject* WorldContextObject, int32 PlayingSequenceID, UDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "BindToDialogSequenceFinished2");

	Params::UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished2_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayingSequenceID = PlayingSequenceID;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingSequenceID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::BindToDialogSequenceFinished(class UObject* WorldContextObject, int32 PlayingSequenceID, UDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "BindToDialogSequenceFinished");

	Params::UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayingSequenceID = PlayingSequenceID;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingSequenceID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::BindToDialogNotify(class UObject* WorldContextObject, int32 PlayingSequenceID, class FName NotifyName, UDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "BindToDialogNotify");

	Params::UGbxDialogBlueprintLibrary_BindToDialogNotify_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayingSequenceID = PlayingSequenceID;
	Parms.NotifyName = NotifyName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UDialogScriptData>SoftScript                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogScriptData*           Script                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBlueprintLibrary::ActivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBlueprintLibrary", "ActivateDialogScript");

	Params::UGbxDialogBlueprintLibrary_ActivateDialogScript_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoftScript = SoftScript;
	Parms.Script = Script;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxDialog.GbxDialogComponent
// (None)

class UClass* UGbxDialogComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogComponent");

	return Clss;
}


// GbxDialogComponent GbxDialog.Default__GbxDialogComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogComponent* UGbxDialogComponent::GetDefaultObj()
{
	static class UGbxDialogComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogComponent*>(UGbxDialogComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.GbxDialogComponent.StopPerformance
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int32                              DialogThreadID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDeathDialog                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogComponent::StopPerformance(int32 DialogThreadID, bool bIncludeDeathDialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogComponent", "StopPerformance");

	Params::UGbxDialogComponent_StopPerformance_Params Parms{};

	Parms.DialogThreadID = DialogThreadID;
	Parms.bIncludeDeathDialog = bIncludeDeathDialog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogComponent.StartPerformance
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int32                              DialogThreadID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DialogSequenceID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogPerformanceData*      Performance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogComponent::StartPerformance(int32 DialogThreadID, int32 DialogSequenceID, class UDialogPerformanceData* Performance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogComponent", "StartPerformance");

	Params::UGbxDialogComponent_StartPerformance_Params Parms{};

	Parms.DialogThreadID = DialogThreadID;
	Parms.DialogSequenceID = DialogSequenceID;
	Parms.Performance = Performance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogComponent.OnRep_InitialDialogInProgress
// (Final, Native, Private)
// Parameters:

void UGbxDialogComponent::OnRep_InitialDialogInProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogComponent", "OnRep_InitialDialogInProgress");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogStyle*                ProposedStyle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProposingEcho                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDialogConversation         ProposedConversation                                             (Parm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogComponent::IsSpeakerClearToPlayDialog(class UDialogStyle* ProposedStyle, bool bProposingEcho, const struct FDialogConversation& ProposedConversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogComponent", "IsSpeakerClearToPlayDialog");

	Params::UGbxDialogComponent_IsSpeakerClearToPlayDialog_Params Parms{};

	Parms.ProposedStyle = ProposedStyle;
	Parms.bProposingEcho = bProposingEcho;
	Parms.ProposedConversation = ProposedConversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDialog.GbxDialogComponent.IsSpeakerActive
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludePendingVO                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxDialogComponent::IsSpeakerActive(bool bIncludePendingVO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogComponent", "IsSpeakerActive");

	Params::UGbxDialogComponent_IsSpeakerActive_Params Parms{};

	Parms.bIncludePendingVO = bIncludePendingVO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxDialog.GbxDialogSettings
// (None)

class UClass* UGbxDialogSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogSettings");

	return Clss;
}


// GbxDialogSettings GbxDialog.Default__GbxDialogSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogSettings* UGbxDialogSettings::GetDefaultObj()
{
	static class UGbxDialogSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogSettings*>(UGbxDialogSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.GlobalDialogParametersProviderInterface
// (None)

class UClass* IGlobalDialogParametersProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalDialogParametersProviderInterface");

	return Clss;
}


// GlobalDialogParametersProviderInterface GbxDialog.Default__GlobalDialogParametersProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGlobalDialogParametersProviderInterface* IGlobalDialogParametersProviderInterface::GetDefaultObj()
{
	static class IGlobalDialogParametersProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGlobalDialogParametersProviderInterface*>(IGlobalDialogParametersProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FDialogContext              Parameters                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IGlobalDialogParametersProviderInterface::InitDialogContext(struct FDialogContext& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalDialogParametersProviderInterface", "InitDialogContext");

	Params::IGlobalDialogParametersProviderInterface_InitDialogContext_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxDialog.MovieSceneDialogTrack
// (None)

class UClass* UMovieSceneDialogTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneDialogTrack");

	return Clss;
}


// MovieSceneDialogTrack GbxDialog.Default__MovieSceneDialogTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneDialogTrack* UMovieSceneDialogTrack::GetDefaultObj()
{
	static class UMovieSceneDialogTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneDialogTrack*>(UMovieSceneDialogTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.MovieSceneDialogSection
// (None)

class UClass* UMovieSceneDialogSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneDialogSection");

	return Clss;
}


// MovieSceneDialogSection GbxDialog.Default__MovieSceneDialogSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneDialogSection* UMovieSceneDialogSection::GetDefaultObj()
{
	static class UMovieSceneDialogSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneDialogSection*>(UMovieSceneDialogSection::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.PerformanceEchoDataBase
// (None)

class UClass* UPerformanceEchoDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerformanceEchoDataBase");

	return Clss;
}


// PerformanceEchoDataBase GbxDialog.Default__PerformanceEchoDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerformanceEchoDataBase* UPerformanceEchoDataBase::GetDefaultObj()
{
	static class UPerformanceEchoDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerformanceEchoDataBase*>(UPerformanceEchoDataBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDialog.PureEchoSpeakerHost
// (Actor)

class UClass* APureEchoSpeakerHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PureEchoSpeakerHost");

	return Clss;
}


// PureEchoSpeakerHost GbxDialog.Default__PureEchoSpeakerHost
// (Public, ClassDefaultObject, ArchetypeObject)

class APureEchoSpeakerHost* APureEchoSpeakerHost::GetDefaultObj()
{
	static class APureEchoSpeakerHost* Default = nullptr;

	if (!Default)
		Default = static_cast<APureEchoSpeakerHost*>(APureEchoSpeakerHost::StaticClass()->DefaultObject);

	return Default;
}

}


