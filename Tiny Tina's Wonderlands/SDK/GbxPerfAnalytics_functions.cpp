#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxPerfAnalytics.GbxTelemetryBlueprintLibrary
// (None)

class UClass* UGbxTelemetryBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTelemetryBlueprintLibrary");

	return Clss;
}


// GbxTelemetryBlueprintLibrary GbxPerfAnalytics.Default__GbxTelemetryBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTelemetryBlueprintLibrary* UGbxTelemetryBlueprintLibrary::GetDefaultObj()
{
	static class UGbxTelemetryBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTelemetryBlueprintLibrary*>(UGbxTelemetryBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryVector(struct FK2TelemetryValues& StatArray, const class FString& Key, struct FVector& Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryVector");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryVector_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryString(struct FK2TelemetryValues& StatArray, const class FString& Key, const class FString& Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryString");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryString_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryRotator(struct FK2TelemetryValues& StatArray, const class FString& Key, struct FRotator& Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryRotator");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryRotator_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryInt(struct FK2TelemetryValues& StatArray, const class FString& Key, int32 Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryInt");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryInt_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryFloat(struct FK2TelemetryValues& StatArray, const class FString& Key, float Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryFloat");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryFloat_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryByte(struct FK2TelemetryValues& StatArray, const class FString& Key, uint8 Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryByte");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryByte_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FK2TelemetryValues          StatArray                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetTelemetryValue      Opt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryBool(struct FK2TelemetryValues& StatArray, const class FString& Key, bool Value, enum class ESetTelemetryValue Opt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "SetNamedTelemetryBool");

	Params::UGbxTelemetryBlueprintLibrary_SetNamedTelemetryBool_Params Parms{};

	Parms.StatArray = StatArray;
	Parms.Key = Key;
	Parms.Value = Value;
	Parms.Opt = Opt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2EventRef                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2EventRef UGbxTelemetryBlueprintLibrary::MakeTelemetryEventRef(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "MakeTelemetryEventRef");

	Params::UGbxTelemetryBlueprintLibrary_MakeTelemetryEventRef_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FK2EventRef                 EventRef                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxTelemetryBlueprintLibrary::IsValid(struct FK2EventRef& EventRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "IsValid");

	Params::UGbxTelemetryBlueprintLibrary_IsValid_Params Parms{};

	Parms.EventRef = EventRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      EventContext                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2TelemetryValues          Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRunOnClient                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxTelemetryBlueprintLibrary::EmitTelemetryValues(const class FString& EventContext, struct FK2TelemetryValues& Values, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "EmitTelemetryValues");

	Params::UGbxTelemetryBlueprintLibrary_EmitTelemetryValues_Params Parms{};

	Parms.EventContext = EventContext;
	Parms.Values = Values;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Guid = Guid;
	Parms.bRunOnClient = bRunOnClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FK2EventRef                 Event                                                            (Parm, NativeAccessSpecifierPublic)
// class FString                      EventContext                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     EventContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     EventInstigatorObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRunOnClient                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxTelemetryBlueprintLibrary::EmitTelemetryEvent(const struct FK2EventRef& Event, const class FString& EventContext, class UObject* EventContextObject, class UObject* EventInstigatorObject, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "EmitTelemetryEvent");

	Params::UGbxTelemetryBlueprintLibrary_EmitTelemetryEvent_Params Parms{};

	Parms.Event = Event;
	Parms.EventContext = EventContext;
	Parms.EventContextObject = EventContextObject;
	Parms.EventInstigatorObject = EventInstigatorObject;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Guid = Guid;
	Parms.bRunOnClient = bRunOnClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TableDesc                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FK2EventRef                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FK2EventRef UGbxTelemetryBlueprintLibrary::DefineTelemetryEventRef(const class FString& EventName, const class FString& TableDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTelemetryBlueprintLibrary", "DefineTelemetryEventRef");

	Params::UGbxTelemetryBlueprintLibrary_DefineTelemetryEventRef_Params Parms{};

	Parms.EventName = EventName;
	Parms.TableDesc = TableDesc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


